#ifndef QUESTION_MANAGER_H
#define QUESTION_MANAGER_H

#include "quiz_structures.h"

// Function prototypes for question management
void initializeQuestions(Question allQuestions[], int *totalCount);
int loadQuestions(Question questions[], int difficulty, char category[]);
void shuffleQuestions(Question questions[], int count);
void addCustomQuestion(Question *q);
int loadQuestionsFromFile(Question questions[]);
void saveQuestionsToFile(Question questions[], int count);

#endif // QUESTION_MANAGER_H
