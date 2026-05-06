#ifndef KETOHELPERS_H
#define KETOHELPERS_H

typedef enum {
    FOOD_KETO_AVOCADO,
    FOOD_KETO_BACON,
    FOOD_KETO_CHEESE,
    FOOD_KETO_EGGS,
    FOOD_KETO_SALMON,
    FOOD_KETO_SPINACH,
    FOOD_KETO_ALMONDS,
    FOOD_KETO_CHICKEN,
    FOOD_KETO_BROCCOLI,
    FOOD_KETO_OLIVES,

    FOOD_RUIN_PIZZA,
    FOOD_RUIN_CAKE,
    FOOD_RUIN_BREAD,
    FOOD_RUIN_PASTA,
    FOOD_RUIN_DONUT,
    FOOD_RUIN_FRIES,
    FOOD_RUIN_SODA,
    FOOD_RUIN_CANDY,
    FOOD_RUIN_CHOCOLATE_BAR,
    FOOD_RUIN_MUFFIN,

    FOOD_COUNT
} FoodType;

typedef struct {
    FoodType type;
    const char *name;
    int disciplineChange;
    int happinessChange;
} FoodInfo;

extern const FoodInfo FOOD_EVENTS[FOOD_COUNT];
const FoodInfo *getFoodInfo(FoodType type);

#endif // KETOHELPERS_H
