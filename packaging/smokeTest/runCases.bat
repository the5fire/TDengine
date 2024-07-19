rm -rf %WIN_TDENGINE_ROOT_DIR%\debug
mkdir %WIN_TDENGINE_ROOT_DIR%\debug
mkdir %WIN_TDENGINE_ROOT_DIR%\debug\build
mkdir %WIN_TDENGINE_ROOT_DIR%\debug\build\bin
xcopy C:\TDengine\taos*.exe %WIN_TDENGINE_ROOT_DIR%\debug\build\bin

case_out_file=`pwd`\case.out
cd %WIN_TDENGINE_ROOT_DIR%\tests\army
python3 test.py -f query\query_basic.py -N 3 >> %case_out_file%

cd ${WIN_TDENGINE_ROOT_DIR}\tests\system-test
python3 test.py -f 1-insert\insert_column_value.py >> %case_out_file%
python3 test.py -f 2-query\primary_ts_base_5.py >> %case_out_file%
python3 test.py -f 2-query\case_when.py >> %case_out_file%
python3 test.py -f 2-query\partition_limit_interval.py >> %case_out_file%
python3 test.py -f 2-query\join.py >> %case_out_file%
python3 test.py -f 2-query\fill.py >> %case_out_file%