#include <stdio.h>

int main() {
    // Array of cat names
    char *catNames[] = {
        "Romad",
        "Mimi",
        "The Detective",
        "Nacho",
        "Smoke",
        "Fire",
        "Jonathon",
        "Firepit Cat",
    };

    // Calculate the number of cat names
    int numCatNames = sizeof(catNames) / sizeof(catNames[0]);

    // Print out the cat names
    printf("List of cats I know:\n");
    for (int i = 0; i < numCatNames; ++i) {
        printf("%d. %s\n", i + 1, catNames[i]);
    }

    return 0;
}