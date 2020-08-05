#!/bin/sh
for SRCFILE in $(ls src/*.c); do
    INCFILE=include/cipherhouse/$(basename "${SRCFILE}" .c).h
    BUFFER=$(grep -E "^\#" $INCFILE)
    FUNCS=$(grep -E "^\w+ .+\)" $SRCFILE)

    truncate -s 0 "$INCFILE"
    while IFS= read -r line
    do
        echo "$line" >> "$INCFILE"
    done <<< $BUFFER
    echo "" >> "$INCFILE"

    while IFS= read -r line
    do
        echo "$line;" >> "$INCFILE"
    done <<< $FUNCS
done