#include "Ketohelpers.h"

const FoodInfo FOOD_EVENTS[FOOD_COUNT] = {
    { FOOD_KETO_AVOCADO, "Avocado", +8, -1 },
    { FOOD_KETO_BACON, "Bacon", +7, -2 },
    { FOOD_KETO_CHEESE, "Cheese", +6, -1 },
    { FOOD_KETO_EGGS, "Eggs", +5, -1 },
    { FOOD_KETO_SALMON, "Salmon", +7, -1 },
    { FOOD_KETO_SPINACH, "Spinach", +4, -1 },
    { FOOD_KETO_ALMONDS, "Almonds", +5, -1 },
    { FOOD_KETO_CHICKEN, "Chicken", +6, -1 },
    { FOOD_KETO_BROCCOLI, "Broccoli", +4, -2 },
    { FOOD_KETO_OLIVES, "Olives", +3, -1 },

    { FOOD_RUIN_PIZZA, "Pizza", -12, +10 },
    { FOOD_RUIN_CAKE, "Cake", -15, +12 },
    { FOOD_RUIN_BREAD, "Bread", -10, +8 },
    { FOOD_RUIN_PASTA, "Pasta", -11, +9 },
    { FOOD_RUIN_DONUT, "Donut", -13, +10 },
    { FOOD_RUIN_FRIES, "Fries", -10, +8 },
    { FOOD_RUIN_SODA, "Soda", -8, +7 },
    { FOOD_RUIN_CANDY, "Candy", -9, +8 },
    { FOOD_RUIN_CHOCOLATE_BAR, "Chocolate Bar", -9, +9 },
    { FOOD_RUIN_MUFFIN, "Muffin", -11, +8 }
};

const FoodInfo *getFoodInfo(FoodType type) {
    if (type < 0 || type >= FOOD_COUNT) {
        return NULL;
    }
    return &FOOD_EVENTS[type];
}
