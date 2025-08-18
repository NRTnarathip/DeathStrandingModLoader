:: Assert
cd "ModLoaderInternal"

if not exist "new_core_files" (
    echo Folder does not exist!
    exit /b 1
)

:: Execute the command with the input
decima-cli.exe repack "--project=.." "new_core_files.bin" "new_core_files"

:: Extract prefetch core file
DecimaExplorer.exe -extract new_core_files.bin prefetch/fullgame.prefetch.core new_core_files_prefetch.core

del "new_core_files.bin"