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