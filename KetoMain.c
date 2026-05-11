// I ended up going out of order of the instructions so I ended up
// just restarting.

#include "Ketohelpers.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// ============================================================================
// Main Game Function
// ============================================================================
int main() {
    // Declare variables here
    Character player;
    int event_counter = 0;
    int choice;
    FoodType current_food;
    int disc_change, happy_change;

    // Seed random number generator
    srand(time(NULL));

    // Character creation prompts
    printf("Welcome to Keto Hero: Cut the Carbs!\n");
    printf("Enter your name: ");
    fgets(player.user, sizeof(player.user), stdin);
    printf("Enter your character name: ");
    fgets(player.charname, sizeof(player.charname), stdin);

    // Initialize character
    initializeCharacter(&player);

    // Display initial stats
    displayCharacterStats(&player, event_counter);

    // Game loop
    while (!isGameOver(&player)) {
        // Display current stats before encounter
        displayCharacterStats(&player, event_counter);

        // Get random food
        current_food = getRandomFood();

        // Display encounter
        displayFoodEncounter(current_food);

        // Get player choice
        printf("Enter 1 for Yes, 2 for No: ");
        scanf("%d", &choice);

        // Validate choice (1 or 2)
        while (choice != 1 && choice != 2) {
            printf("Invalid choice. Enter 1 for Yes, 2 for No: ");
            scanf("%d", &choice);
        }

        // Apply effects based on choice
        if (choice == 1) {
            getYesEffects(current_food, &disc_change, &happy_change);
        } else {
            getNoEffects(current_food, &disc_change, &happy_change);
        }

        // Update player stats
        player.discipline += disc_change;
        player.happiness += happy_change;

        // Cap stats at 50 maximum
        if (player.discipline > 50) player.discipline = 50;
        if (player.happiness > 50) player.happiness = 50;

        // Display updated stats
        displayCharacterStats(&player, event_counter);

        // Increment event counter
        incrementEventCounter(&event_counter);
    }

    // Game over message
    printf("\nGame Over!\n");
    printf("You survived %d events!\n", event_counter);
    printf("Final Stats:\n");
    printf("Discipline: %d\n", player.discipline);
    printf("Happiness: %d\n", player.happiness);

    return 0;
}