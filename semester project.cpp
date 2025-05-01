#include <stdio.h>

int main() {
    int score = 0;
    int answer;

    printf("Welcome to the Quiz Game!\n");
    printf("--------------------------\n");

    // Question 1
    printf("\n1. What is the capital of France?\n");
    printf("1. Berlin\n2. Madrid\n3. Paris\n4. Rome\n");
    printf("Enter your answer (1-4): ");
    scanf("%d", &answer);
    if (answer == 3) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong! The correct answer is 3. Paris\n");
    }

    // Question 2
    printf("\n2. Who wrote 'Romeo and Juliet'?\n");
    printf("1. William Wordsworth\n2. William Shakespeare\n3. John Keats\n4. Charles Dickens\n");
    printf("Enter your answer (1-4): ");
    scanf("%d", &answer);
    if (answer == 2) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong! The correct answer is 2. William Shakespeare\n");
    }

    // Question 3
    printf("\n3. What is 9 * 8?\n");
    printf("1. 72\n2. 81\n3. 63\n4. 90\n");
    printf("Enter your answer (1-4): ");
    scanf("%d", &answer);
    if (answer == 1) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong! The correct answer is 1. 72\n");
    }

    // Question 4
    printf("\n4. Which planet is known as the Red Planet?\n");
    printf("1. Venus\n2. Jupiter\n3. Saturn\n4. Mars\n");
    printf("Enter your answer (1-4): ");
    scanf("%d", &answer);
    if (answer == 4) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong! The correct answer is 4. Mars\n");
    }

    // Question 5
    printf("\n5. Who developed the theory of relativity?\n");
    printf("1. Isaac Newton\n2. Nikola Tesla\n3. Albert Einstein\n4. Galileo Galilei\n");
    printf("Enter your answer (1-4): ");
    scanf("%d", &answer);
    if (answer == 3) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong! The correct answer is 3. Albert Einstein\n");
    }

    // Final Score
    printf("\nQuiz Over! You scored %d out of 5.\n", score);

    return 0;
}
