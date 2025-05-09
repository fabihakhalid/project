#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define USER_FILE "users.txt"
#define SCORE_FILE "scores.txt"

// Function declarations
void registerUser();
int loginUser(char* username);
void startQuiz(const char* username);
void saveScore(const char* username, int score);

int main() {
    int choice;
    char username[20];

    printf("=== QUIZ GAME ===\n");
    printf("1. Register\n2. Login\nChoose: ");
    scanf("%d", &choice);

    if (choice == 1) {
        registerUser();
        printf("Now login to play the quiz.\n");
    }

    if (loginUser(username)) {
        startQuiz(username);
    } else {
        printf("Login failed. Exiting...\n");
        exit(1);
    }

    return 0;
}

void registerUser() {
    char uname[20], pass[20];
    FILE *f = fopen(USER_FILE, "a");

    if (f == NULL) {
        printf("Error opening user file for writing.\n");
        exit(1);
    }

    printf("Enter new username: ");
    scanf("%s", uname);
    printf("Enter new password: ");
    scanf("%s", pass);

    fprintf(f, "%s %s\n", uname, pass);
    fclose(f);
    printf("Registration successful!\n");
}

int loginUser(char* username) {
    char uname[20], pass[20], file_uname[20], file_pass[20];
    FILE *f = fopen(USER_FILE, "r");

    if (f == NULL) {
        printf("User file not found!\n");
        return 0;
    }

    printf("=== LOGIN ===\n");
    printf("Username: ");
    scanf("%s", uname);
    printf("Password: ");
    scanf("%s", pass);

    while (fscanf(f, "%s %s", file_uname, file_pass) != EOF) {
        if (strcmp(uname, file_uname) == 0 && strcmp(pass, file_pass) == 0) {
            strcpy(username, uname);
            fclose(f);
            return 1;
        }
    }

    fclose(f);
    return 0;
}

void startQuiz(const char* username) {
    int score = 0, answer;

    printf("\n=== QUIZ START ===\n\n");

    printf("Q1. What is the capital of France?\n");
    printf("1. Berlin\n2. Madrid\n3. Paris\n4. Rome\n");
    scanf("%d", &answer);
    if (answer == 3) score++;

    printf("\nQ2. What is 5 + 7?\n");
    printf("1. 12\n2. 10\n3. 13\n4. 11\n");
    scanf("%d", &answer);
    if (answer == 1) score++;

    printf("\nQ3. Which language is used to create this quiz?\n");
    printf("1. Python\n2. C\n3. Java\n4. HTML\n");
    scanf("%d", &answer);
    if (answer == 2) score++;

    printf("\nQ4. Which planet is known as the Red Planet?\n");
    printf("1. Venus\n2. Earth\n3. Mars\n4. Jupiter\n");
    scanf("%d", &answer);
    if (answer == 3) score++;

    printf("\nQ5. Who wrote 'Hamlet'?\n");
    printf("1. J.K. Rowling\n2. Shakespeare\n3. Charles Dickens\n4. Tolkien\n");
    scanf("%d", &answer);
    if (answer == 2) score++;

    printf("\nQ6. What is the boiling point of water (°C)?\n");
    printf("1. 100\n2. 90\n3. 80\n4. 120\n");
    scanf("%d", &answer);
    if (answer == 1) score++;

    printf("\nQ7. What is the largest mammal?\n");
    printf("1. Elephant\n2. Blue Whale\n3. Giraffe\n4. Shark\n");
    scanf("%d", &answer);
    if (answer == 2) score++;

    printf("\nQ8. What does CPU stand for?\n");
    printf("1. Central Performance Unit\n2. Central Processing Unit\n3. Control Processing Unit\n4. Central Power Unit\n");
    scanf("%d", &answer);
    if (answer == 2) score++;

    printf("\nQ9. How many continents are there?\n");
    printf("1. 5\n2. 6\n3. 7\n4. 8\n");
    scanf("%d", &answer);
    if (answer == 3) score++;

    printf("\nQ10. Which gas do plants absorb?\n");
    printf("1. Oxygen\n2. Hydrogen\n3. Nitrogen\n4. Carbon Dioxide\n");
    scanf("%d", &answer);
    if (answer == 4) score++;

    printf("\n=== QUIZ COMPLETE ===\n");
    printf("Your score: %d out of 10\n", score);

    saveScore(username, score);
}

void saveScore(const char* username, int score) {
    FILE *f = fopen(SCORE_FILE, "a");
    if (f == NULL) {
        printf("Error saving score.\n");
        return;
    }

    fprintf(f, "%s scored %d/10\n", username, score);
    fclose(f);
    printf("Score saved to '%s'.\n", SCORE_FILE);
}
