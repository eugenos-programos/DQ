@echo off
cd C:\tests\
touch test_push_back.txt
touch test_push_front.txt
touch test_pop_front.txt
touch test_pop_back.txt
@echo "Testing push front function is doing..."
TIMEOUT /T 2 /NOBREAK
C:\Users\ASUS\source\repos\DQ\Debug\DQ.exe testing_for_push_front > C:\tests\test_push_front.txt
fc test_push_front.txt test_push_front_RES.txt
if not ERRORLEVEL 1 echo PUSH FRONT FUNCTION TEST PASSED SUCCESSFULLY
@echo.
@echo "Testing push back function is doing..."
TIMEOUT /T 2 /NOBREAK
C:\Users\ASUS\source\repos\DQ\Debug\DQ.exe testing_for_push_back > C:\tests\test_push_back.txt
fc test_push_back.txt test_push_back_RES.txt
if not ERRORLEVEL 1 echo PUSH BACK FUNCTION TEST PASSED SUCCESSFULLY
@echo.
@echo "Testing pop front function is doing..."
TIMEOUT /T 2 /NOBREAK
C:\Users\ASUS\source\repos\DQ\Debug\DQ.exe testing_for_pop_front > C:\tests\test_pop_front.txt
fc test_pop_front.txt test_pop_front_RES.txt
if not ERRORLEVEL 1 echo POP FRONT FUNCTION TEST PASSED SUCCESSFULLY
@echo.
@echo "Testing pop back function is doing..."
TIMEOUT /T 2 /NOBREAK
C:\Users\ASUS\source\repos\DQ\Debug\DQ.exe testing_for_pop_back > C:\tests\test_pop_back.txt
fc test_push_back.txt test_push_back_RES.txt
if not ERRORLEVEL 1 echo POP BACK FUNCTION TEST PASSED SUCCESSFULLY
@echo.
C:\Users\ASUS\source\repos\DQ\Debug\DQ.exe menu





