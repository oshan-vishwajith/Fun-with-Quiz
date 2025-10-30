#ifndef QUIZ_STRUCTURES_H
#define QUIZ_STRUCTURES_H

#include <time.h>

#define MAX_QUESTIONS 100
#define MAX_OPTIONS 4
#define MAX_TEXT_LENGTH 300
#define HIGHSCORE_FILE "highscores.txt"
#define QUESTIONS_FILE "questions.txt"

// Structure to represent a quiz question
typedef struct {
    char question[MAX_TEXT_LENGTH];
    char options[MAX_OPTIONS][100];
    char correct_answer;
    char category[50];
    int difficulty; // 1=Easy, 2=Medium, 3=Hard
    int points; // Points awarded for correct answer
} Question;

// Structure for high scores
typedef struct {
    char player_name[50];
    int score;
    int total_questions;
    char difficulty[20];
    char category[50];
    time_t timestamp;
} HighScore;

// Structure for quiz statistics
typedef struct {
    int total_games_played;
    int total_questions_answered;
    int correct_answers;
    int wrong_answers;
    double average_score;
} Statistics;

#endif // QUIZ_STRUCTURES_H
