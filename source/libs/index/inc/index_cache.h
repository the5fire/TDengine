/*
 * Copyright (c) 2019 TAOS Data, Inc. <jhtao@taosdata.com>
 *
 * This program is free software: you can use, redistribute, and/or modify
 * it under the terms of the GNU Affero General Public License, version 3
 * or later ("AGPL"), as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef __INDEX_CACHE_H__
#define __INDEX_CACHE_H__

#include "index.h"
#include "indexInt.h"
#include "tlockfree.h"
#include "tskiplist.h"
// ----------------- key structure in skiplist ---------------------

/* A data row, the format is like below:
 * content: |<--totalLen-->|<-- value len--->|<-- value -->|<--uid -->|<--version--->|<-- itermType -->|
 *  len :   |<--int32_t -->|<--- int32_t --->|<--valuelen->|<--uint64_t->|<-- int32_t-->|<-- int8_t --->|
 */

#ifdef __cplusplus
extern "C" {
#endif

typedef struct IndexCache {
  T_REF_DECLARE()
  SSkipList *mem, *imm;
  SIndex*    index;
  char*      colName;
  int32_t    version;
  int32_t    nTerm;
  int8_t     type;

} IndexCache;

#define CACHE_VERSION(cache) atomic_load_32(&cache->version)
typedef struct CacheTerm {
  // key
  int32_t nColVal;
  char*   colVal;
  int32_t version;
  // value
  uint64_t           uid;
  int8_t             colType;
  SIndexOperOnColumn operaType;
} CacheTerm;
//

IndexCache* indexCacheCreate(SIndex* idx, const char* colName, int8_t type);

void indexCacheDestroy(void* cache);

Iterate* indexCacheIteratorCreate(IndexCache* cache);
void     indexCacheIteratorDestroy(Iterate* iiter);

int indexCachePut(void* cache, SIndexTerm* term, uint64_t uid);

// int indexCacheGet(void *cache, uint64_t *rst);
int indexCacheSearch(void* cache, SIndexTermQuery* query, SArray* result, STermValueType* s);

void indexCacheRef(IndexCache* cache);
void indexCacheUnRef(IndexCache* cache);

void indexCacheDebug(IndexCache* cache);

void indexCacheDestroySkiplist(SSkipList* slt);
#ifdef __cplusplus
}
#endif

#endif
