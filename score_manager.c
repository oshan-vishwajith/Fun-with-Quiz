#include "score_manager.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Compare function for sorting high scores
int compareByScore(const void *a, const void *b) {
    HighScore *scoreA = (HighScore *)a;
    HighScore *scoreB = (HighScore *)b;
    return scoreB->score - scoreA->score;
}

// Save high score to file
void saveHighScore(char name[], int score, int total, char difficulty[], char category[]) {
    FILE *file = fopen(HIGHSCORE_FILE, "a");
    if (file != NULL) {
        time_t now = time(NULL);
        fprintf(file, "%s|%d|%d|%s|%s|%ld\n", name, score, total, difficulty, category, now);
        fclose(file);
    } else {
        printf("⚠️  Warning: Could not save high score.\n");
    }
}

// Show high scores leaderboard
void showHighScores() {
    printf("\n");
    printf("╔══════════════════════════════════════════════════════════════╗\n");
    printf("║              🏆 HIGH SCORES LEADERBOARD 🏆                   ║\n");
    printf("╚══════════════════════════════════════════════════════════════╝\n\n");
    
    FILE *file = fopen(HIGHSCORE_FILE, "r");
    if (file == NULL) {
        printf("📊 No high scores yet. Be the first to play!\n\n");
        return;
    }
    
    HighScore scores[100];
    int count = 0;
    char line[300];
    
    while (fgets(line, sizeof(line), file) && count < 100) {
        sscanf(line, "%[^|]|%d|%d|%[^|]|%[^|]|%ld", 
               scores[count].player_name, 
               &scores[count].score, 
               &scores[count].total_questions,
               scores[count].difficulty,
               scores[count].category,
               &scores[count].timestamp);
        count++;
    }
    fclose(file);
    
    if (count == 0) {
        printf("📊 No high scores yet. Be the first to play!\n\n");
        return;
    }
    
    // Sort by score (descending)
    qsort(scores, count, sizeof(HighScore), compareByScore);
    
    // Display top 10
    printf("┌────┬─────────────────┬─────────┬────────────┬─────────────────┐\n");
    printf("│ #  │ Player          │ Score   │ Difficulty │ Category        │\n");
    printf("├────┼─────────────────┼─────────┼────────────┼─────────────────┤\n");
    
    int display_count = count < 10 ? count : 10;
    for (int i = 0; i < display_count; i++) {
        printf("│ %-2d │ %-15s │ %3d/%-3d │ %-10s │ %-15s │\n", 
               i + 1, 
               scores[i].player_name, 
               scores[i].score, 
               scores[i].total_questions,
               scores[i].difficulty,
               scores[i].category);
    }
    printf("└────┴─────────────────┴─────────┴────────────┴─────────────────┘\n\n");
    
    printf("💡 Total games recorded: %d\n\n", count);
}

// Show player statistics
void showStatistics() {
    printf("\n");
    printf("╔══════════════════════════════════════════════════════════════╗\n");
    printf("║                  📊 QUIZ STATISTICS 📊                       ║\n");
    printf("╚══════════════════════════════════════════════════════════════╝\n\n");
    
    FILE *file = fopen(HIGHSCORE_FILE, "r");
    if (file == NULL) {
        printf("📊 No statistics available yet.\n\n");
        return;
    }
    
    int total_games = 0;
    int total_correct = 0;
    int total_questions = 0;
    int easy_games = 0, medium_games = 0, hard_games = 0;
    char line[300];
    char name[50], difficulty[20], category[50];
    int score, questions;
    time_t timestamp;
    
    while (fgets(line, sizeof(line), file)) {
        sscanf(line, "%[^|]|%d|%d|%[^|]|%[^|]|%ld", 
               name, &score, &questions, difficulty, category, &timestamp);
        
        total_games++;
        total_correct += score;
        total_questions += questions;
        
        if (strcmp(difficulty, "Easy") == 0) easy_games++;
        else if (strcmp(difficulty, "Medium") == 0) medium_games++;
        else if (strcmp(difficulty, "Hard") == 0) hard_games++;
    }
    fclose(file);
    
    if (total_games == 0) {
        printf("📊 No statistics available yet.\n\n");
        return;
    }
    
    double accuracy = (total_questions > 0) ? (total_correct * 100.0 / total_questions) : 0;
    
    printf("📈 Total Games Played: %d\n", total_games);
    printf("📝 Total Questions Answered: %d\n", total_questions);
    printf("✅ Correct Answers: %d\n", total_correct);
    printf("❌ Wrong Answers: %d\n", total_questions - total_correct);
    printf("🎯 Overall Accuracy: %.2f%%\n\n", accuracy);
    
    printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
    printf("Difficulty Breakdown:\n");
    printf("  🟢 Easy:   %d games\n", easy_games);
    printf("  🟡 Medium: %d games\n", medium_games);
    printf("  🔴 Hard:   %d games\n", hard_games);
    printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n\n");
}

// Clear all high scores
void clearHighScores() {
    char confirm;
    printf("\n⚠️  Are you sure you want to clear all high scores? (Y/N): ");
    scanf(" %c", &confirm);
    
    if (confirm == 'Y' || confirm == 'y') {
        FILE *file = fopen(HIGHSCORE_FILE, "w");
        if (file != NULL) {
            fclose(file);
            printf("✅ All high scores have been cleared!\n\n");
        } else {
            printf("❌ Error: Could not clear high scores.\n\n");
        }
    } else {
        printf("❌ Operation cancelled.\n\n");
    }
}
