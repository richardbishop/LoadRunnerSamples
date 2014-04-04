cls
echo
echo
echo	This batch file will delete the following files from every 
echo	folder and subdirectory from the folder in which it is run: -
echo
echo	*.idx
echo	mdrv*.log
echo	mdrv.txt
echo	options.txt
echo	*.ci
echo	combined_*.c
echo	output.txt
echo	debug.inf
echo	*.bak
echo    \result1
echo

REM The next lines delete any existing files from previous runs of this batch file.
IF EXIST %temp%\blankfile.txt  del %temp%\blankfile.txt /q
IF EXIST %temp%\FilesDeleted.txt  del %temp%\FilesDeleted.txt /q
IF EXIST %temp%\FoldersDeleted.txt  del %temp%\FoldersDeleted.txt /q
IF EXIST %temp%\BadParms.txt  del %temp%\BadParms.txt /q

REM These lines create blank files for later file comparisons.
type nul > %temp%\blankfile.txt
type nul > %temp%\FilesDeleted.txt
type nul > %temp%\FoldersDeleted.txt
type nul > %temp%\BadParms.txt

REM These del functions delete the unwanted LoadRunner files and pipe any output into the %temp%\FilesDeleted.txt file.
	del *.idx /s >> %temp%\FilesDeleted.txt
	del mdrv*.log /s >> %temp%\FilesDeleted.txt
	del mdrv.txt /s >> %temp%\FilesDeleted.txt
	del options.txt /s >> %temp%\FilesDeleted.txt
	del *.ci /s >> %temp%\FilesDeleted.txt
	del combined_*.c /s >> %temp%\FilesDeleted.txt
	del output.txt /s >> %temp%\FilesDeleted.txt
	del debug.inf /s >> %temp%\FilesDeleted.txt
	del *.bak /s >> %temp%\FilesDeleted.txt

REM This deletes any sub-folders called result1 and pipes any output into the %temp%\FoldersDeleted.txt file.
for %%d in (h) do (
	for /f "delims=" %%a in ('dir/s/b/ad %CD%\result1') do (
		echo "deleted %%a" >> %temp%\FoldersDeleted.txt
   		rd /s /q %%a 
   )
)
REM This deletes the local result1 directory if it exists
rd result1 /s /q

REM This function looks for explicit file paths rather than relative file paths and writes them to the %temp%\BadParameters.txt file.
findstr /S ":\\" *.prm > %temp%\BadParms.txt

REM If FilesDeleted.txt, FoldersDeleted.txt or BadParms.txt exist, open them up in Notepad so we can see them.
fc %temp%\FilesDeleted.txt %temp%\blankfile.txt > nul
if errorlevel 1 "Notepad.exe" "%temp%\FilesDeleted.txt"

fc %temp%\FoldersDeleted.txt %temp%\blankfile.txt > nul
if errorlevel 1 "Notepad.exe" "%temp%\FoldersDeleted.txt"

fc %temp%\BadParameters.txt %temp%\blankfile.txt > nul
if errorlevel 1 "Notepad.exe" "%temp%\BadParms.txt"

REM Finally delete the superfluous temporary files.
IF EXIST %temp%\blankfile.txt  del %temp%\blankfile.txt /q
IF EXIST %temp%\FilesDeleted.txt  del %temp%\FilesDeleted.txt /q
IF EXIST %temp%\BadParms.txt  del %temp%\BadParms.txt /q
