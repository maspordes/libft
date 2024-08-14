#!/bin/bash

# Define the header you want to add
HEADER='#include "libft.h"'

# Find all .c files and add the header if it's not already present
for file in $(find . -type f -name '*.c'); do
  # Check if the header is already included
  if ! grep -q "$HEADER" "$file"; then
    # Prepend the header to the file
    sed -i "1s/^/$HEADER\n/" "$file"
    echo "Added header to $file"
  fi
done

