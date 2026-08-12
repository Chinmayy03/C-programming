#include <stdio.h>

int main() {
    char selection = 'B'; // The user choice

    printf("Menu Choice: %c\n", selection);

    switch (selection) {
        case 'A':
            printf("Starting a new game...\n");
            break;
        case 'B':
            printf("Loading saved game...\n");
            break;
        case 'C':
            printf("Opening settings menu...\n");
            break;
        case 'q': // Grouped cases: both 'Q' and 'q' trigger this block
            printf("Exiting program. Goodbye!\n");
            break;
        default:
            printf("Error: Invalid menu choice.\n");
    }

    return 0;
}
