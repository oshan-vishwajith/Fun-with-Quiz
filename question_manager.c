#include "question_manager.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Initialize default questions
void initializeQuestions(Question allQuestions[], int *totalCount) {
    int idx = 0;
    
    // ========== Easy C Programming Questions ==========
    strcpy(allQuestions[idx].question, "What is the keyword to print text in C?");
    strcpy(allQuestions[idx].options[0], "echo");
    strcpy(allQuestions[idx].options[1], "print");
    strcpy(allQuestions[idx].options[2], "printf");
    strcpy(allQuestions[idx].options[3], "cout");
    allQuestions[idx].correct_answer = 'C';
    strcpy(allQuestions[idx].category, "C Programming");
    allQuestions[idx].difficulty = 1;
    allQuestions[idx].points = 10;
    idx++;

    strcpy(allQuestions[idx].question, "Which symbol is used to end a statement in C?");
    strcpy(allQuestions[idx].options[0], ".");
    strcpy(allQuestions[idx].options[1], ";");
    strcpy(allQuestions[idx].options[2], ",");
    strcpy(allQuestions[idx].options[3], ":");
    allQuestions[idx].correct_answer = 'B';
    strcpy(allQuestions[idx].category, "C Programming");
    allQuestions[idx].difficulty = 1;
    allQuestions[idx].points = 10;
    idx++;

    strcpy(allQuestions[idx].question, "Which header file is needed for printf()?");
    strcpy(allQuestions[idx].options[0], "stdlib.h");
    strcpy(allQuestions[idx].options[1], "string.h");
    strcpy(allQuestions[idx].options[2], "stdio.h");
    strcpy(allQuestions[idx].options[3], "conio.h");
    allQuestions[idx].correct_answer = 'C';
    strcpy(allQuestions[idx].category, "C Programming");
    allQuestions[idx].difficulty = 1;
    allQuestions[idx].points = 10;
    idx++;

    strcpy(allQuestions[idx].question, "What data type is used to store a single character?");
    strcpy(allQuestions[idx].options[0], "char");
    strcpy(allQuestions[idx].options[1], "int");
    strcpy(allQuestions[idx].options[2], "float");
    strcpy(allQuestions[idx].options[3], "string");
    allQuestions[idx].correct_answer = 'A';
    strcpy(allQuestions[idx].category, "C Programming");
    allQuestions[idx].difficulty = 1;
    allQuestions[idx].points = 10;
    idx++;

    // ========== Medium C Programming Questions ==========
    strcpy(allQuestions[idx].question, "What is the size of a pointer in a 64-bit system?");
    strcpy(allQuestions[idx].options[0], "4 bytes");
    strcpy(allQuestions[idx].options[1], "8 bytes");
    strcpy(allQuestions[idx].options[2], "16 bytes");
    strcpy(allQuestions[idx].options[3], "Depends on data type");
    allQuestions[idx].correct_answer = 'B';
    strcpy(allQuestions[idx].category, "C Programming");
    allQuestions[idx].difficulty = 2;
    allQuestions[idx].points = 20;
    idx++;

    strcpy(allQuestions[idx].question, "Which operator has the highest precedence in C?");
    strcpy(allQuestions[idx].options[0], "[] (array subscript)");
    strcpy(allQuestions[idx].options[1], "* (multiplication)");
    strcpy(allQuestions[idx].options[2], "+ (addition)");
    strcpy(allQuestions[idx].options[3], "== (equality)");
    allQuestions[idx].correct_answer = 'A';
    strcpy(allQuestions[idx].category, "C Programming");
    allQuestions[idx].difficulty = 2;
    allQuestions[idx].points = 20;
    idx++;

    strcpy(allQuestions[idx].question, "Which function is used to allocate memory dynamically?");
    strcpy(allQuestions[idx].options[0], "alloc()");
    strcpy(allQuestions[idx].options[1], "malloc()");
    strcpy(allQuestions[idx].options[2], "calloc()");
    strcpy(allQuestions[idx].options[3], "Both B and C");
    allQuestions[idx].correct_answer = 'D';
    strcpy(allQuestions[idx].category, "C Programming");
    allQuestions[idx].difficulty = 2;
    allQuestions[idx].points = 20;
    idx++;

    // ========== Hard C Programming Questions ==========
    strcpy(allQuestions[idx].question, "What is the output of sizeof('A') in C?");
    strcpy(allQuestions[idx].options[0], "1 byte");
    strcpy(allQuestions[idx].options[1], "2 bytes");
    strcpy(allQuestions[idx].options[2], "4 bytes (integer promotion)");
    strcpy(allQuestions[idx].options[3], "8 bytes");
    allQuestions[idx].correct_answer = 'C';
    strcpy(allQuestions[idx].category, "C Programming");
    allQuestions[idx].difficulty = 3;
    allQuestions[idx].points = 30;
    idx++;

    strcpy(allQuestions[idx].question, "Which storage class has the largest scope?");
    strcpy(allQuestions[idx].options[0], "auto");
    strcpy(allQuestions[idx].options[1], "static");
    strcpy(allQuestions[idx].options[2], "extern");
    strcpy(allQuestions[idx].options[3], "register");
    allQuestions[idx].correct_answer = 'C';
    strcpy(allQuestions[idx].category, "C Programming");
    allQuestions[idx].difficulty = 3;
    allQuestions[idx].points = 30;
    idx++;

    strcpy(allQuestions[idx].question, "What does the volatile keyword indicate in C?");
    strcpy(allQuestions[idx].options[0], "Variable can be modified by hardware");
    strcpy(allQuestions[idx].options[1], "Variable is constant");
    strcpy(allQuestions[idx].options[2], "Variable is temporary");
    strcpy(allQuestions[idx].options[3], "Variable is global");
    allQuestions[idx].correct_answer = 'A';
    strcpy(allQuestions[idx].category, "C Programming");
    allQuestions[idx].difficulty = 3;
    allQuestions[idx].points = 30;
    idx++;

    // ========== Easy Data Structures Questions ==========
    strcpy(allQuestions[idx].question, "Which data structure uses LIFO (Last In First Out)?");
    strcpy(allQuestions[idx].options[0], "Queue");
    strcpy(allQuestions[idx].options[1], "Stack");
    strcpy(allQuestions[idx].options[2], "Array");
    strcpy(allQuestions[idx].options[3], "Linked List");
    allQuestions[idx].correct_answer = 'B';
    strcpy(allQuestions[idx].category, "Data Structures");
    allQuestions[idx].difficulty = 1;
    allQuestions[idx].points = 10;
    idx++;

    strcpy(allQuestions[idx].question, "What is the time complexity of accessing an array element?");
    strcpy(allQuestions[idx].options[0], "O(1)");
    strcpy(allQuestions[idx].options[1], "O(n)");
    strcpy(allQuestions[idx].options[2], "O(log n)");
    strcpy(allQuestions[idx].options[3], "O(n^2)");
    allQuestions[idx].correct_answer = 'A';
    strcpy(allQuestions[idx].category, "Data Structures");
    allQuestions[idx].difficulty = 1;
    allQuestions[idx].points = 10;
    idx++;

    // ========== Medium Data Structures Questions ==========
    strcpy(allQuestions[idx].question, "Which traversal of binary tree visits root node first?");
    strcpy(allQuestions[idx].options[0], "Inorder");
    strcpy(allQuestions[idx].options[1], "Preorder");
    strcpy(allQuestions[idx].options[2], "Postorder");
    strcpy(allQuestions[idx].options[3], "Level order");
    allQuestions[idx].correct_answer = 'B';
    strcpy(allQuestions[idx].category, "Data Structures");
    allQuestions[idx].difficulty = 2;
    allQuestions[idx].points = 20;
    idx++;

    strcpy(allQuestions[idx].question, "What is the worst-case time complexity of Quick Sort?");
    strcpy(allQuestions[idx].options[0], "O(n log n)");
    strcpy(allQuestions[idx].options[1], "O(n)");
    strcpy(allQuestions[idx].options[2], "O(n^2)");
    strcpy(allQuestions[idx].options[3], "O(log n)");
    allQuestions[idx].correct_answer = 'C';
    strcpy(allQuestions[idx].category, "Data Structures");
    allQuestions[idx].difficulty = 2;
    allQuestions[idx].points = 20;
    idx++;

    // ========== Easy General Knowledge Questions ==========
    strcpy(allQuestions[idx].question, "What is the capital of France?");
    strcpy(allQuestions[idx].options[0], "Berlin");
    strcpy(allQuestions[idx].options[1], "Madrid");
    strcpy(allQuestions[idx].options[2], "Paris");
    strcpy(allQuestions[idx].options[3], "Rome");
    allQuestions[idx].correct_answer = 'C';
    strcpy(allQuestions[idx].category, "General Knowledge");
    allQuestions[idx].difficulty = 1;
    allQuestions[idx].points = 10;
    idx++;

    strcpy(allQuestions[idx].question, "How many continents are there?");
    strcpy(allQuestions[idx].options[0], "5");
    strcpy(allQuestions[idx].options[1], "6");
    strcpy(allQuestions[idx].options[2], "7");
    strcpy(allQuestions[idx].options[3], "8");
    allQuestions[idx].correct_answer = 'C';
    strcpy(allQuestions[idx].category, "General Knowledge");
    allQuestions[idx].difficulty = 1;
    allQuestions[idx].points = 10;
    idx++;

    *totalCount = idx;
}

// Shuffle questions array using Fisher-Yates algorithm
void shuffleQuestions(Question questions[], int count) {
    srand(time(NULL));
    for (int i = count - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        Question temp = questions[i];
        questions[i] = questions[j];
        questions[j] = temp;
    }
}

// Load questions based on difficulty and category
int loadQuestions(Question questions[], int difficulty, char category[]) {
    Question allQuestions[MAX_QUESTIONS];
    int totalCount = 0;
    initializeQuestions(allQuestions, &totalCount);
    
    int count = 0;
    for (int i = 0; i < totalCount; i++) {
        int matchesCategory = (strcmp(category, "All") == 0 || 
                               strcmp(allQuestions[i].category, category) == 0);
        int matchesDifficulty = (difficulty == 0 || allQuestions[i].difficulty == difficulty);
        
        if (matchesCategory && matchesDifficulty) {
            questions[count++] = allQuestions[i];
        }
    }
    
    return count;
}

// Add a custom question
void addCustomQuestion(Question *q) {
    printf("\n=== Add Custom Question ===\n");
    printf("Enter question: ");
    fgets(q->question, MAX_TEXT_LENGTH, stdin);
    q->question[strcspn(q->question, "\n")] = 0;
    
    for (int i = 0; i < MAX_OPTIONS; i++) {
        printf("Option %c: ", 'A' + i);
        fgets(q->options[i], 100, stdin);
        q->options[i][strcspn(q->options[i], "\n")] = 0;
    }
    
    printf("Correct answer (A/B/C/D): ");
    scanf(" %c", &q->correct_answer);
    getchar();
    
    printf("Category: ");
    fgets(q->category, 50, stdin);
    q->category[strcspn(q->category, "\n")] = 0;
    
    printf("Difficulty (1-Easy, 2-Medium, 3-Hard): ");
    scanf("%d", &q->difficulty);
    getchar();
    
    q->points = q->difficulty * 10;
}

// Load questions from file
int loadQuestionsFromFile(Question questions[]) {
    FILE *file = fopen(QUESTIONS_FILE, "r");
    if (file == NULL) {
        return 0;
    }
    
    int count = 0;
    char line[500];
    
    while (fgets(line, sizeof(line), file) && count < MAX_QUESTIONS) {
        // Parse question format: question|optA|optB|optC|optD|answer|category|difficulty
        char *token = strtok(line, "|");
        if (token) strcpy(questions[count].question, token);
        
        for (int i = 0; i < MAX_OPTIONS; i++) {
            token = strtok(NULL, "|");
            if (token) strcpy(questions[count].options[i], token);
        }
        
        token = strtok(NULL, "|");
        if (token) questions[count].correct_answer = token[0];
        
        token = strtok(NULL, "|");
        if (token) strcpy(questions[count].category, token);
        
        token = strtok(NULL, "|");
        if (token) questions[count].difficulty = atoi(token);
        
        questions[count].points = questions[count].difficulty * 10;
        count++;
    }
    
    fclose(file);
    return count;
}

// Save questions to file
void saveQuestionsToFile(Question questions[], int count) {
    FILE *file = fopen(QUESTIONS_FILE, "w");
    if (file == NULL) {
        printf("Error: Cannot save questions to file.\n");
        return;
    }
    
    for (int i = 0; i < count; i++) {
        fprintf(file, "%s|%s|%s|%s|%s|%c|%s|%d\n",
                questions[i].question,
                questions[i].options[0],
                questions[i].options[1],
                questions[i].options[2],
                questions[i].options[3],
                questions[i].correct_answer,
                questions[i].category,
                questions[i].difficulty);
    }
    
    fclose(file);
    printf("✅ Questions saved successfully!\n");
}
