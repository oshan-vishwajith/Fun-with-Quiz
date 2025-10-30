#ifndef SCORE_MANAGER_H
#define SCORE_MANAGER_H

#include "quiz_structures.h"

// Function prototypes for score management
void saveHighScore(char name[], int score, int total, char difficulty[], char category[]);
void showHighScores();
void showStatistics();
void clearHighScores();
int compareByScore(const void *a, const void *b);

#endif // SCORE_MANAGER_H
