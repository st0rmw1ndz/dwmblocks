#ifndef CONFIG_H
#define CONFIG_H

// String used to delimit block outputs in the status.
#define DELIMITER " | "

// Maximum number of Unicode characters that a block can output.
#define MAX_BLOCK_OUTPUT_LENGTH 40

// Control whether blocks are clickable.
#define CLICKABLE_BLOCKS 0

// Control whether a leading delimiter should be prepended to the status.
#define LEADING_DELIMITER 0

// Control whether a trailing delimiter should be appended to the status.
#define TRAILING_DELIMITER 0

// Define blocks for the status feed as X(icon, cmd, interval, signal).
#define BLOCKS(X) \
    X("", "sb-memory", 5,  12) \
    X("", "sb-disk",   5,  11) \
    X("", "sb-volume", 30, 1) \
    X("", "sb-date",   60, 10)

#endif  // CONFIG_H
