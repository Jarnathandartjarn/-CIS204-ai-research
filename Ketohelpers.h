#ifndef KETOHELPERS_H
#define KETOHELPERS_H

// ============================================================================
// Character Structure
// ============================================================================
typedef struct {
    char user[32];           // Player's real name
    char charname[32];       // Character's name in game
    int discipline;          // Starts at 50 (0 = game over)
    int happiness;           // Starts at 50 (0 = game over)
} Character;

// ============================================================================
// Food Type Enumeration
// ============================================================================
typedef enum {
    // Keto-friendly foods (discipline up, happiness down)
    STEAK,
    CHEESE,
    EGGS,
    SALMON,
    AVOCADO,
    
    // Non-keto foods (happiness up, discipline down)
    PIZZA,
    DONUTS,
    CAKE,
    SODA,
    PASTA
} FoodType;

// ============================================================================
// Function Prototypes
// ============================================================================

// Initialize character with default stats
void initializeCharacter(Character *player);

// Display character's current stats and summary
void displayCharacterStats(Character *player, int event_counter);

// Get a random food for this turn
FoodType getRandomFood(void);

// Get the effects of choosing YES for a specific food
void getYesEffects(FoodType food, int *discipline_change, int *happiness_change);

// Get the effects of choosing NO for a specific food
void getNoEffects(FoodType food, int *discipline_change, int *happiness_change);

// Display what food was encountered
void displayFoodEncounter(FoodType food);

// Update high score (event counter)
void incrementEventCounter(int *event_counter);

// Check if game is over (either stat at 0 or below)
int isGameOver(Character *player);

#endif
