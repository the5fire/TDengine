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

#ifndef _TD_COMMON_TOKEN_H_
#define _TD_COMMON_TOKEN_H_

#define TK_OR                               1
#define TK_AND                              2
#define TK_UNION                            3
#define TK_ALL                              4
#define TK_MINUS                            5
#define TK_EXCEPT                           6
#define TK_INTERSECT                        7
#define TK_NK_BITAND                        8
#define TK_NK_BITOR                         9
#define TK_NK_LSHIFT                       10
#define TK_NK_RSHIFT                       11
#define TK_NK_PLUS                         12
#define TK_NK_MINUS                        13
#define TK_NK_STAR                         14
#define TK_NK_SLASH                        15
#define TK_NK_REM                          16
#define TK_NK_CONCAT                       17
#define TK_CREATE                          18
#define TK_USER                            19
#define TK_PASS                            20
#define TK_NK_STRING                       21
#define TK_ALTER                           22
#define TK_PRIVILEGE                       23
#define TK_DROP                            24
#define TK_DNODE                           25
#define TK_PORT                            26
#define TK_NK_INTEGER                      27
#define TK_NK_ID                           28
#define TK_NK_IPTOKEN                      29
#define TK_DATABASE                        30
#define TK_USE                             31
#define TK_IF                              32
#define TK_NOT                             33
#define TK_EXISTS                          34
#define TK_BLOCKS                          35
#define TK_CACHE                           36
#define TK_CACHELAST                       37
#define TK_COMP                            38
#define TK_DAYS                            39
#define TK_FSYNC                           40
#define TK_MAXROWS                         41
#define TK_MINROWS                         42
#define TK_KEEP                            43
#define TK_PRECISION                       44
#define TK_QUORUM                          45
#define TK_REPLICA                         46
#define TK_TTL                             47
#define TK_WAL                             48
#define TK_VGROUPS                         49
#define TK_SINGLE_STABLE                   50
#define TK_STREAM_MODE                     51
#define TK_TABLE                           52
#define TK_NK_LP                           53
#define TK_NK_RP                           54
#define TK_STABLE                          55
#define TK_USING                           56
#define TK_TAGS                            57
#define TK_NK_DOT                          58
#define TK_NK_COMMA                        59
#define TK_COMMENT                         60
#define TK_BOOL                            61
#define TK_TINYINT                         62
#define TK_SMALLINT                        63
#define TK_INT                             64
#define TK_INTEGER                         65
#define TK_BIGINT                          66
#define TK_FLOAT                           67
#define TK_DOUBLE                          68
#define TK_BINARY                          69
#define TK_TIMESTAMP                       70
#define TK_NCHAR                           71
#define TK_UNSIGNED                        72
#define TK_JSON                            73
#define TK_VARCHAR                         74
#define TK_MEDIUMBLOB                      75
#define TK_BLOB                            76
#define TK_VARBINARY                       77
#define TK_DECIMAL                         78
#define TK_SMA                             79
#define TK_SHOW                            80
#define TK_DNODES                          81
#define TK_USERS                           82
#define TK_DATABASES                       83
#define TK_TABLES                          84
#define TK_STABLES                         85
#define TK_MNODES                          86
#define TK_MODULES                         87
#define TK_QNODES                          88
#define TK_FUNCTIONS                       89
#define TK_INDEXES                         90
#define TK_FROM                            91
#define TK_STREAMS                         92
#define TK_LIKE                            93
#define TK_NK_FLOAT                        94
#define TK_NK_BOOL                         95
#define TK_NK_VARIABLE                     96
#define TK_BETWEEN                         97
#define TK_IS                              98
#define TK_NULL                            99
#define TK_NK_LT                          100
#define TK_NK_GT                          101
#define TK_NK_LE                          102
#define TK_NK_GE                          103
#define TK_NK_NE                          104
#define TK_NK_EQ                          105
#define TK_MATCH                          106
#define TK_NMATCH                         107
#define TK_IN                             108
#define TK_AS                             109
#define TK_JOIN                           110
#define TK_ON                             111
#define TK_INNER                          112
#define TK_SELECT                         113
#define TK_DISTINCT                       114
#define TK_WHERE                          115
#define TK_PARTITION                      116
#define TK_BY                             117
#define TK_SESSION                        118
#define TK_STATE_WINDOW                   119
#define TK_INTERVAL                       120
#define TK_SLIDING                        121
#define TK_FILL                           122
#define TK_VALUE                          123
#define TK_NONE                           124
#define TK_PREV                           125
#define TK_LINEAR                         126
#define TK_NEXT                           127
#define TK_GROUP                          128
#define TK_HAVING                         129
#define TK_ORDER                          130
#define TK_SLIMIT                         131
#define TK_SOFFSET                        132
#define TK_LIMIT                          133
#define TK_OFFSET                         134
#define TK_ASC                            135
#define TK_DESC                           136
#define TK_NULLS                          137
#define TK_FIRST                          138
#define TK_LAST                           139

#define TK_NK_SPACE                       300
#define TK_NK_COMMENT                     301
#define TK_NK_ILLEGAL                     302
#define TK_NK_HEX                         303   // hex number  0x123
#define TK_NK_OCT                         304   // oct number
#define TK_NK_BIN                         305   // bin format data 0b111
#define TK_NK_FILE                        306
#define TK_NK_QUESTION                    307   // denoting the placeholder of "?",when invoking statement bind query

#define TK_NK_COLON                       500
#define TK_NK_BITNOT                      501
#define TK_INSERT                         502
#define TK_INTO                           503
#define TK_NOW                            504
#define TK_VALUES                         507
#define TK_IMPORT                         507
#define TK_NK_SEMI                        508

#define TK_NK_NIL                         65535

#endif /*_TD_COMMON_TOKEN_H_*/
