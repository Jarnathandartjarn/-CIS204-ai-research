# -CIS204-ai-research

# Keto Hero: Cut the Carbs.c - (This was suggested by Chat)

## NOTE: Any Ai usage I use, I will document in a seperate file on this repository called Ai Usage. Any other Ai reporting methods required will be submitted by default. I will want to use my ChatGPT subscription in addition to Copilot here on Github for some help on certain concepts I am not fully familiar with.

##   1. Program Purpose
   
###   The purpose of our program will be to allow the user to create a character (coming from a struct). They will then traverse the text based world with their character fighting enemies or encountering allies (anti-keto treats and positive foods) and building up their own stats or losing them. It will be somewhat DnD-esque but with a twist that cooresponds to a Keto diet. Due to the beginner nature of my code, I will go with a version that is strict keto (hard mode) instead of being a difficulty select (though such a feature would be pretty cool). Ultimately, it is built on a system of discipline and happiness and if either one of these bars gets to 0, the game is over. As the character progresses through the world, a high score counter will display how many events the user survived.

##   2. Input/Outputs 
###      The inputs that our user will need to enter will be everything inside of the character creation struct. It will be the player name and the character name.

### The character struct will look like
###    typedef struct {
###        char user[32];
###        char charname[32];
###        int discipline; // = 50
###        int happiness; // = 50
###    } struct Character // Struct uses 72 Bytes approx.

###      Another input will be for certain events where the character will have to decide whether to consume a Keto or un-Keto food. Yes inputs on Keto foods will raise discipline but lower happiness while no will have the opposite effect. On the flip side of the matter, yes inputs on un-Keto foods will raise happiness but lower discipline and no inputs will have the opposite effect.

###      Output wise, each turn (or round) will have a quick summary of what happened and what stats changed for the user.

###      The variables I will be using will be:

###      int event_counter // used to log how many events the user has gone through and then will corelate to a high score later on. WILL USE 4 BYTES

###      int choice; // 1 for yes, 2 for no. WILL USE 4 BYTES

##   3. In terms of having the functions of the program:
###      a. A function for randomizing the foods that the player will encounter.
###      b. A function for the user each turn to see what changed with their character that round.
###      c. A function that updates the high score.
###      40 BYTES SEEMS FAIR

##   4. Data structures that we will use:
###      a. Our character's struct. (Memory for this was already listed above)
###      b. enumeration for foods. (I will just list all of the good and bad foods onto a single data structure and than find a way to build it so that each of the items in here are given points for discipline and happiness) It will look like:
###     typedef enum {
###     FOOD_KETO_AVOCADO,
###     FOOD_KETO_BACON,
###     FOOD_KETO_CHEESE,
###     FOOD_KETO_EGGS,
###     FOOD_KETO_SALMON,
###     FOOD_KETO_SPINACH,
###     FOOD_KETO_ALMONDS,
###     FOOD_KETO_CHICKEN,
###     FOOD_KETO_BROCCOLI,
###     FOOD_KETO_OLIVES,
### 
###     FOOD_RUIN_PIZZA,
###     FOOD_RUIN_CAKE,
###     FOOD_RUIN_BREAD,
###     FOOD_RUIN_PASTA,
###     FOOD_RUIN_DONUT,
###     FOOD_RUIN_FRIES,
###     FOOD_RUIN_SODA,
###     FOOD_RUIN_CANDY,
###     FOOD_RUIN_CHOCOLATE_BAR,
###     FOOD_RUIN_MUFFIN,
### 
###     FOOD_COUNT
### } FoodType;
###     This will land us at about 680 Bytes (giving us some breathing room)
###      c. Likely another method of calling the values that each enum data type has.

##   5. The files we are using:
###      a. KetoMain.c: KetoMain.c is our main operating file that the other two files are going to based off of in compilation. It is also the file where all of our other files will come back to and base all of their code off of. Ultiamtely, KetoMain.c will be our file that keeps the story moving as opposed to our Ketohelpers files which hold parts of our code for keeping main going.
###      b. Ketohelpers.h: This is our file for storing our prototypes for the data types and functions from Ketohelpers.h.
###      c. Ketohelpers.c: This is our file for our functions and data types written out so that they can function with our KetoMain.c file.

## MEMORY USAGE WILL LAND US AT 0.8 KB. 1 KB would likley give us some breathing room if we go over.

##   6. 
   
###      I was fully prepared to write this myself and have Ai help me on the side but now that I realize that Ai is writing it and I am verifying it, it will actually make this 250 word research plan a bit more difficult. 
   
###      Nevertheless, my plan for writing this with Ai is to give it a structured approach as I do it. Rather than giving it an idea (me pasting this whole readme into the chatbot), I want to actually give it pieces of my vision and build it up going forward. I would start with getting my structs setup in the Ketohelpers.c, put the prototypes into my Ketohelpers.h header file, and start building my code in the main file. For thinking in a computational manner as I do, I would then go back to my Ketohelpers.c file and start structuring my functions as I need to corespond to my main. I think I will end up using this in a way where I formulate the logic and give it direction, maybe write small bits of code, but then have the Ai build the larger parts and actually correct the syntax.

###      Another way of saying that would be me putting down something like my own pseudocode and then having Copilot or ChatGPT change it into C. I would then go over it afterwards and make sure it does actually match my vision and direction.

###      Examples of prompts I would use would be...

###      "Help me structure x function in a beginner friendly but efficient way."

###      "Please verify or give me guidelines on how to give my code proper syntax or logic."

###      "Please give me examples of doing x so that I can modify it and add it to my code."

###      "Please verify and run my code and make sure it would run as flawlessly as possible."