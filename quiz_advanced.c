#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_QUESTIONS 30
#define MAX_OPTIONS 4
#define MAX_TEXT_LENGTH 200
#define HIGHSCORE_FILE "highscores.txt"

// Structure to represent a quiz question
typedef struct {
    char question[MAX_TEXT_LENGTH];
    char options[MAX_OPTIONS][100];
    char correct_answer;
    char category[50];
    int difficulty; // 1=Easy, 2=Medium, 3=Hard
} Question;

// Structure for high scores
typedef struct {
    char player_name[50];
    int score;
    int total_questions;
    char difficulty[20];
    time_t timestamp;
} HighScore;

// Function prototypes
void displayMenu();
void playQuiz(int difficulty, char category[]);
void showHighScores();
void saveHighScore(char name[], int score, int total, char difficulty[]);
void shuffleQuestions(Question questions[], int count);
void displayQuestion(Question q, int questionNum);
int loadQuestions(Question questions[], int difficulty, char category[]);
void clearInputBuffer();

// Initialize questions database
void initializeQuestions(Question allQuestions[], int *totalCount) {
    int idx = 0;
    
    // Easy C Programming Questions
    strcpy(allQuestions[idx].question, "What is the keyword to print text in C?");
    strcpy(allQuestions[idx].options[0], "echo");
    strcpy(allQuestions[idx].options[1], "print");
    strcpy(allQuestions[idx].options[2], "printf");
    strcpy(allQuestions[idx].options[3], "cout");
    allQuestions[idx].correct_answer = 'C';
    strcpy(allQuestions[idx].category, "C Programming");
    allQuestions[idx].difficulty = 1;
    idx++;

    strcpy(allQuestions[idx].question, "Which symbol is used to end a statement in C?");
    strcpy(allQuestions[idx].options[0], ".");
    strcpy(allQuestions[idx].options[1], ";");
    strcpy(allQuestions[idx].options[2], ",");
    strcpy(allQuestions[idx].options[3], ":");
    allQuestions[idx].correct_answer = 'B';
    strcpy(allQuestions[idx].category, "C Programming");
    allQuestions[idx].difficulty = 1;
    idx++;

    strcpy(allQuestions[idx].question, "Which header file is needed for printf()?");
    strcpy(allQuestions[idx].options[0], "stdlib.h");
    strcpy(allQuestions[idx].options[1], "string.h");
    strcpy(allQuestions[idx].options[2], "stdio.h");
    strcpy(allQuestions[idx].options[3], "conio.h");
    allQuestions[idx].correct_answer = 'C';
    strcpy(allQuestions[idx].category, "C Programming");
    allQuestions[idx].difficulty = 1;
    idx++;

    // Medium C Programming Questions
    strcpy(allQuestions[idx].question, "What is the size of a pointer in a 64-bit system?");
    strcpy(allQuestions[idx].options[0], "4 bytes");
    strcpy(allQuestions[idx].options[1], "8 bytes");
    strcpy(allQuestions[idx].options[2], "16 bytes");
    strcpy(allQuestions[idx].options[3], "Depends on data type");
    allQuestions[idx].correct_answer = 'B';
    strcpy(allQuestions[idx].category, "C Programming");
    allQuestions[idx].difficulty = 2;
    idx++;

    strcpy(allQuestions[idx].question, "Which operator has the highest precedence in C?");
    strcpy(allQuestions[idx].options[0], "[]");
    strcpy(allQuestions[idx].options[1], "*");
    strcpy(allQuestions[idx].options[2], "+");
    strcpy(allQuestions[idx].options[3], "==");
    allQuestions[idx].correct_answer = 'A';
    strcpy(allQuestions[idx].category, "C Programming");
    allQuestions[idx].difficulty = 2;
    idx++;

    // Hard C Programming Questions
    strcpy(allQuestions[idx].question, "What is the output of sizeof('A') in C?");
    strcpy(allQuestions[idx].options[0], "1 byte");
    strcpy(allQuestions[idx].options[1], "2 bytes");
    strcpy(allQuestions[idx].options[2], "4 bytes");
    strcpy(allQuestions[idx].options[3], "8 bytes");
    allQuestions[idx].correct_answer = 'C';
    strcpy(allQuestions[idx].category, "C Programming");
    allQuestions[idx].difficulty = 3;
    idx++;

    strcpy(allQuestions[idx].question, "Which storage class has the largest scope?");
    strcpy(allQuestions[idx].options[0], "auto");
    strcpy(allQuestions[idx].options[1], "static");
    strcpy(allQuestions[idx].options[2], "extern");
    strcpy(allQuestions[idx].options[3], "register");
    allQuestions[idx].correct_answer = 'C';
    strcpy(allQuestions[idx].category, "C Programming");
    allQuestions[idx].difficulty = 3;
    idx++;

    // Easy General Knowledge Questions
    strcpy(allQuestions[idx].question, "What is the capital of France?");
    strcpy(allQuestions[idx].options[0], "Berlin");
    strcpy(allQuestions[idx].options[1], "Madrid");
    strcpy(allQuestions[idx].options[2], "Paris");
    strcpy(allQuestions[idx].options[3], "Rome");
    allQuestions[idx].correct_answer = 'C';
    strcpy(allQuestions[idx].category, "General Knowledge");
    allQuestions[idx].difficulty = 1;
    idx++;

    strcpy(allQuestions[idx].question, "How many continents are there?");
    strcpy(allQuestions[idx].options[0], "5");
    strcpy(allQuestions[idx].options[1], "6");
    strcpy(allQuestions[idx].options[2], "7");
    strcpy(allQuestions[idx].options[3], "8");
    allQuestions[idx].correct_answer = 'C';
    strcpy(allQuestions[idx].category, "General Knowledge");
    allQuestions[idx].difficulty = 1;
    idx++;

    // Medium General Knowledge Questions
    strcpy(allQuestions[idx].question, "Who wrote 'Romeo and Juliet'?");
    strcpy(allQuestions[idx].options[0], "Charles Dickens");
    strcpy(allQuestions[idx].options[1], "William Shakespeare");
    strcpy(allQuestions[idx].options[2], "Mark Twain");
    strcpy(allQuestions[idx].options[3], "Jane Austen");
    allQuestions[idx].correct_answer = 'B';
    strcpy(allQuestions[idx].category, "General Knowledge");
    allQuestions[idx].difficulty = 2;
    idx++;

    strcpy(allQuestions[idx].question, "What is the largest planet in our solar system?");
    strcpy(allQuestions[idx].options[0], "Earth");
    strcpy(allQuestions[idx].options[1], "Mars");
    strcpy(allQuestions[idx].options[2], "Jupiter");
    strcpy(allQuestions[idx].options[3], "Saturn");
    allQuestions[idx].correct_answer = 'C';
    strcpy(allQuestions[idx].category, "General Knowledge");
    allQuestions[idx].difficulty = 2;
    idx++;

    // Hard General Knowledge Questions
    strcpy(allQuestions[idx].question, "In which year did World War I begin?");
    strcpy(allQuestions[idx].options[0], "1912");
    strcpy(allQuestions[idx].options[1], "1914");
    strcpy(allQuestions[idx].options[2], "1916");
    strcpy(allQuestions[idx].options[3], "1918");
    allQuestions[idx].correct_answer = 'B';
    strcpy(allQuestions[idx].category, "General Knowledge");
    allQuestions[idx].difficulty = 3;
    idx++;

    *totalCount = idx;
}

// Clear input buffer
void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

// Shuffle questions array
void shuffleQuestions(Question questions[], int count) {
    srand(time(NULL));
    for (int i = count - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        Question temp = questions[i];
        questions[i] = questions[j];
        questions[j] = temp;
    }
}

// Display a question
void displayQuestion(Question q, int questionNum) {
    printf("\n");
    printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
    printf("Question %d: %s\n", questionNum, q.question);
    printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
    printf("A) %s\n", q.options[0]);
    printf("B) %s\n", q.options[1]);
    printf("C) %s\n", q.options[2]);
    printf("D) %s\n", q.options[3]);
    printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
}

// Load questions based on difficulty and category
int loadQuestions(Question questions[], int difficulty, char category[]) {
    Question allQuestions[MAX_QUESTIONS];
    int totalCount = 0;
    initializeQuestions(allQuestions, &totalCount);
    
    int count = 0;
    for (int i = 0; i < totalCount; i++) {
        if (strcmp(category, "All") == 0 || strcmp(allQuestions[i].category, category) == 0) {
            if (difficulty == 0 || allQuestions[i].difficulty == difficulty) {
                questions[count++] = allQuestions[i];
            }
        }
    }
    
    return count;
}

// Save high score to file
void saveHighScore(char name[], int score, int total, char difficulty[]) {
    FILE *file = fopen(HIGHSCORE_FILE, "a");
    if (file != NULL) {
        time_t now = time(NULL);
        fprintf(file, "%s|%d|%d|%s|%ld\n", name, score, total, difficulty, now);
        fclose(file);
    }
}

// Show high scores
void showHighScores() {
    printf("\n");
    printf("╔══════════════════════════════════════════════════╗\n");
    printf("║            🏆 HIGH SCORES LEADERBOARD 🏆         ║\n");
    printf("╚══════════════════════════════════════════════════╝\n\n");
    
    FILE *file = fopen(HIGHSCORE_FILE, "r");
    if (file == NULL) {
        printf("No high scores yet. Be the first to play!\n\n");
        return;
    }
    
    HighScore scores[100];
    int count = 0;
    char line[300];
    
    while (fgets(line, sizeof(line), file) && count < 100) {
        sscanf(line, "%[^|]|%d|%d|%[^|]|%ld", 
               scores[count].player_name, 
               &scores[count].score, 
               &scores[count].total_questions,
               scores[count].difficulty,
               &scores[count].timestamp);
        count++;
    }
    fclose(file);
    
    // Sort by score (descending)
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (scores[j].score < scores[j + 1].score) {
                HighScore temp = scores[j];
                scores[j] = scores[j + 1];
                scores[j + 1] = temp;
            }
        }
    }
    
    // Display top 10
    printf("┌────┬───────────────────┬───────┬────────────┐\n");
    printf("│ #  │ Player            │ Score │ Difficulty │\n");
    printf("├────┼───────────────────┼───────┼────────────┤\n");
    
    int display_count = count < 10 ? count : 10;
    for (int i = 0; i < display_count; i++) {
        printf("│ %-2d │ %-17s │ %d/%-3d │ %-10s │\n", 
               i + 1, 
               scores[i].player_name, 
               scores[i].score, 
               scores[i].total_questions,
               scores[i].difficulty);
    }
    printf("└────┴───────────────────┴───────┴────────────┘\n\n");
}

// Play quiz
void playQuiz(int difficulty, char category[]) {
    Question questions[MAX_QUESTIONS];
    int questionCount = loadQuestions(questions, difficulty, category);
    
    if (questionCount == 0) {
        printf("❌ No questions available for this selection.\n");
        return;
    }
    
    // Shuffle questions for randomization
    shuffleQuestions(questions, questionCount);
    
    char answer;
    int score = 0;
    char playerName[50];
    
    printf("\n📝 Enter your name: ");
    fgets(playerName, sizeof(playerName), stdin);
    playerName[strcspn(playerName, "\n")] = 0; // Remove newline
    
    printf("\n🎮 Starting quiz with %d questions...\n", questionCount);
    
    // Ask questions
    for (int i = 0; i < questionCount; i++) {
        displayQuestion(questions[i], i + 1);
        
        printf("Your answer: ");
        scanf(" %c", &answer);
        clearInputBuffer();
        
        if (answer == questions[i].correct_answer || 
            answer == questions[i].correct_answer + 32 || 
            answer == questions[i].correct_answer - 32) {
            printf("✅ Correct!\n");
            score++;
        } else {
            printf("❌ Wrong! Correct answer: %c) %s\n", 
                   questions[i].correct_answer, 
                   questions[i].options[questions[i].correct_answer - 'A']);
        }
        
        printf("\n⭐ Current Score: %d/%d\n", score, i + 1);
    }
    
    // Show final results
    printf("\n");
    printf("╔══════════════════════════════════════════════════╗\n");
    printf("║              📊 FINAL RESULTS 📊                 ║\n");
    printf("╚══════════════════════════════════════════════════╝\n\n");
    printf("Player: %s\n", playerName);
    printf("Score: %d / %d (%.1f%%)\n", score, questionCount, 
           (score * 100.0) / questionCount);
    
    // Performance message
    double percentage = (score * 100.0) / questionCount;
    if (percentage == 100)
        printf("🏆 Perfect Score! You're a master!\n");
    else if (percentage >= 80)
        printf("🌟 Excellent! Outstanding performance!\n");
    else if (percentage >= 60)
        printf("👏 Great job! You know your stuff!\n");
    else if (percentage >= 40)
        printf("🙂 Good effort! Keep practicing!\n");
    else
        printf("💪 Don't give up! Study and try again!\n");
    
    // Save high score
    char difficultyStr[20];
    if (difficulty == 1) strcpy(difficultyStr, "Easy");
    else if (difficulty == 2) strcpy(difficultyStr, "Medium");
    else if (difficulty == 3) strcpy(difficultyStr, "Hard");
    else strcpy(difficultyStr, "Mixed");
    
    saveHighScore(playerName, score, questionCount, difficultyStr);
    printf("\n✅ Your score has been saved!\n\n");
}

// Display main menu
void displayMenu() {
    printf("\n");
    printf("╔══════════════════════════════════════════════════╗\n");
    printf("║          🎯 FUN WITH QUIZ - ADVANCED 🎯          ║\n");
    printf("╚══════════════════════════════════════════════════╝\n\n");
    printf("1️⃣  Play Quiz - Easy Mode\n");
    printf("2️⃣  Play Quiz - Medium Mode\n");
    printf("3️⃣  Play Quiz - Hard Mode\n");
    printf("4️⃣  Play Quiz - Mixed Difficulty\n");
    printf("5️⃣  View High Scores\n");
    printf("6️⃣  Exit\n\n");
    printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
    printf("Enter your choice: ");
}

int main() {
    int choice;
    char category[] = "All"; // Can be extended to choose categories
    
    while (1) {
        displayMenu();
        scanf("%d", &choice);
        clearInputBuffer();
        
        switch (choice) {
            case 1:
                playQuiz(1, category); // Easy
                break;
            case 2:
                playQuiz(2, category); // Medium
                break;
            case 3:
                playQuiz(3, category); // Hard
                break;
            case 4:
                playQuiz(0, category); // Mixed
                break;
            case 5:
                showHighScores();
                break;
            case 6:
                printf("\n👋 Thanks for playing! Goodbye!\n\n");
                return 0;
            default:
                printf("\n❌ Invalid choice! Please try again.\n");
        }
    }
    
    return 0;
}
