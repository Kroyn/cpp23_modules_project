#!/bin/bash

SEARCH_DIR="/usr/include/c++"
TARGET_FILE="std.cc"

if [ ! -d "$SEARCH_DIR" ]; then
    echo "Error: '$SEARCH_DIR' does not exist."
    exit 1
fi

FOUND_PATH=$(find -L "$SEARCH_DIR" -type f -name "$TARGET_FILE" -print -quit)

if [ -z "$FOUND_PATH" ]; then
    echo "Error: A file '$TARGET_FILE' not found in the directory '$SEARCH_DIR'."
    exit 1
else
    echo "$FOUND_PATH"
    exit 0
fi
