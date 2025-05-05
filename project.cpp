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