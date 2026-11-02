
#include <stdio.h>

int main() {
    int choice, minutes, targetChoice;
    float weight, rate, target;
    float breakfast, lunch, dinner, postWorkout;
    float total, remaining;

    printf("\n====================================\n");
    printf("   GYM WORKOUT & PROTEIN TRACKER\n");
    printf("====================================\n");

    printf("\nEnter body weight (kg): ");
    scanf("%f", &weight);

    if (weight <= 0) {
        printf("Invalid body weight!\n");
        return 1;
    }

    printf("\nChoose your workout routine:\n");
    printf("1. Chest and Triceps\n");
    printf("2. Back and Biceps\n");
    printf("3. Legs and Abs\n");
    printf("4. Shoulders and Core\n");
    printf("5. Full Body Workout\n");

    printf("Enter choice (1-5): ");
    scanf("%d", &choice);

    if (choice < 1 || choice > 5) {
        printf("Invalid workout choice!\n");
        return 1;
    }

    printf("\nEnter workout duration (minutes): ");
    scanf("%d", &minutes);

    if (minutes <= 0) {
        printf("Invalid duration!\n");
        return 1;
    }

    printf("\nChoose protein target:\n");
    printf("1. 1.2 grams per kg\n");
    printf("2. 1.6 grams per kg\n");
    printf("3. 2.0 grams per kg\n");

    printf("Enter choice (1-3): ");
    scanf("%d", &targetChoice);

    if (targetChoice == 1)
        rate = 1.2;
    else if (targetChoice == 2)
        rate = 1.6;
    else if (targetChoice == 3)
        rate = 2.0;
    else {
        printf("Invalid target choice!\n");
        return 1;
    }

    printf("\nEnter protein consumed (grams):\n");

    printf("Breakfast: ");
    scanf("%f", &breakfast);

    printf("Lunch: ");
    scanf("%f", &lunch);

    printf("Dinner: ");
    scanf("%f", &dinner);

    printf("Post-workout: ");
    scanf("%f", &postWorkout);

    if (breakfast < 0 || lunch < 0 ||
        dinner < 0 || postWorkout < 0) {
        printf("Invalid protein amount!\n");
        return 1;
    }

    target = weight * rate;
    total = breakfast + lunch + dinner + postWorkout;
    remaining = target - total;

    printf("\n========== DAILY SUMMARY ==========\n");

    printf("Workout: ");

    switch (choice) {
        case 1: printf("Chest and Triceps\n"); break;
        case 2: printf("Back and Biceps\n"); break;
        case 3: printf("Legs and Abs\n"); break;
        case 4: printf("Shoulders and Core\n"); break;
        case 5: printf("Full Body Workout\n"); break;
    }

    printf("Duration: %d minutes\n", minutes);
    printf("Body Weight: %.1f kg\n", weight);
    printf("Protein Target: %.1f grams\n", target);
    printf("Total Protein: %.1f grams\n", total);

    if (remaining > 0)
        printf("Protein Remaining: %.1f grams\n", remaining);
    else
        printf("Selected protein target reached!\n");

    printf("\nThank you for using the tracker!\n");

    return 0;
}
