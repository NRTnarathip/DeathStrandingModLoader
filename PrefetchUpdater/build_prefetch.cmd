:: Execute the command with the input
decima-cli.exe repack "--project=.." "new_core_files.bin" "new_core_files"

:: Extract prefetch core file
DecimaExplorer.exe -extract new_core_files.bin prefetch/fullgame.prefetch.core fullgame.prefetch.core

:: Cleanup
del new_core_files.bin