#/urs/bin/env bash

EXEC="c_fs"

# Compile all C files in the current directory
gcc -Wall -Wextra -g -o $EXEC *.c

# Check if compilation succeeded
if [ $? -eq 0 ]; then
    echo "Compilation successful. Running $EXEC..."
    ./$EXEC
else
    echo "Compilation failed."
fi