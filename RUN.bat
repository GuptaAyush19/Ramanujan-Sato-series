@echo off
title Ramanujan-Sato series
echo The approximate values of pi are as follows . . . & echo.
CPP\series_cpp.exe & echo.
python PYTHON3\series_python.py & echo.
echo.
pause