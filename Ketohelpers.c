#include "Ketohelpers.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// ============================================================================
// Initialize character with default stats
// ============================================================================
void initializeCharacter(Character *player) {
    player->discipline = 50;
    player->happiness = 50;
}

// ============================================================================
// Display character's current stats and summary
// ============================================================================
void displayCharacterStats(Character *player, int event_counter) {
    printf("\n=== Character Status ===\n");
    printf("Player: %s\n", player->user);
    printf("Character: %s\n", player->charname);
    printf("Discipline: %d/50\n", player->discipline);
    printf("Happiness: %d/50\n", player->happiness);
    printf("Events Survived: %d\n", event_counter);
    printf("========================\n");
}

// ============================================================================
// Get a random food for this turn
// ============================================================================
FoodType getRandomFood(void) {
    int random_num = rand() % 10;  // 0-9 for 10 foods
    return (FoodType)random_num;
}

// ============================================================================
// Get the effects of choosing YES for a specific food
// ============================================================================
void getYesEffects(FoodType food, int *discipline_change, int *happiness_change) {
    switch (food) {
        // Keto foods: +discipline, -happiness
        case STEAK:
        case CHEESE:
        case EGGS:
        case SALMON:
        case AVOCADO:
            *discipline_change = 10;
            *happiness_change = -5;
            break;
        
        // Non-keto foods: -discipline, +happiness
        case PIZZA:
        case DONUTS:
        case CAKE:
        case SODA:
        case PASTA:
            *discipline_change = -10;
            *happiness_change = 5;
            break;
    }
}

// ============================================================================
// Get the effects of choosing NO for a specific food
// ============================================================================
void getNoEffects(FoodType food, int *discipline_change, int *happiness_change) {
    switch (food) {
        // Keto foods: -discipline, +happiness (opposite of YES)
        case STEAK:
        case CHEESE:
        case EGGS:
        case SALMON:
        case AVOCADO:
            *discipline_change = -5;
            *happiness_change = 10;
            break;
        
        // Non-keto foods: +discipline, -happiness (opposite of YES)
        case PIZZA:
        case DONUTS:
        case CAKE:
        case SODA:
        case PASTA:
            *discipline_change = 5;
            *happiness_change = -10;
            break;
    }
}

// ============================================================================
// Display what food was encountered
// ============================================================================
void displayFoodEncounter(FoodType food) {
    switch (food) {
        case STEAK:
            printf("\nYou encounter a juicy STEAK!\n");
            printf("A keto-friendly choice that builds discipline.\n");
            break;
        case CHEESE:
            printf("\nYou encounter some delicious CHEESE!\n");
            printf("A keto-friendly choice that builds discipline.\n");
            break;
        case EGGS:
            printf("\nYou encounter fresh EGGS!\n");
            printf("A keto-friendly choice that builds discipline.\n");
            break;
        case SALMON:
            printf("\nYou encounter grilled SALMON!\n");
            printf("A keto-friendly choice that builds discipline.\n");
            break;
        case AVOCADO:
            printf("\nYou encounter a ripe AVOCADO!\n");
            printf("A keto-friendly choice that builds discipline.\n");
            break;
        case PIZZA:
            printf("\nYou encounter a slice of PIZZA!\n");
            printf("A tempting non-keto treat that boosts happiness.\n");
            break;
        case DONUTS:
            printf("\nYou encounter a box of DONUTS!\n");
            printf("A tempting non-keto treat that boosts happiness.\n");
            break;
        case CAKE:
            printf("\nYou encounter a slice of CAKE!\n");
            printf("A tempting non-keto treat that boosts happiness.\n");
            break;
        case SODA:
            printf("\nYou encounter a cold SODA!\n");
            printf("A tempting non-keto treat that boosts happiness.\n");
            break;
        case PASTA:
            printf("\nYou encounter a plate of PASTA!\n");
            printf("A tempting non-keto treat that boosts happiness.\n");
            break;
    }
}

// ============================================================================
// Update high score (event counter)
// ============================================================================
void incrementEventCounter(int *event_counter) {
    (*event_counter)++;
}

// ============================================================================
// Check if game is over (either stat at 0 or below)
// ============================================================================
int isGameOver(Character *player) {
    if (player->discipline <= 0 || player->happiness <= 0) {
        return 1;  // Game over - true
    }
    return 0;  // Game continues - false
}
