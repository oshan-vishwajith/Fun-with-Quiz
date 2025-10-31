#include <stdio.h>

// Structure to hold a quiz question
typedef struct {
    char *question;
    char *options[4];
    char correctAnswer;
} QuizQuestion;

int main() {
    char answer;          
    int score = 0;        

    // Quiz questions
    QuizQuestion questions[] = {
        {"Q1. What is the keyword to print text in C?", {"echo", "print", "printf", "cout"}, 'C'},
        {"Q2. Which symbol is used to end a statement in C?", {".", ";", ",", ":"}, 'B'},
        {"Q3. Which header file is needed for printf()?", {"stdlib.h", "string.h", "stdio.h", "conio.h"}, 'C'},
        {"Q4. What data type is used to store a single character?", {"char", "int", "float", "string"}, 'A'},
        {"Q5. Which function is used to take input from the user?", {"scanf", "input", "get", "cin"}, 'A'},
        {"Q6. Which of the following is a looping statement?", {"if", "switch", "for", "goto"}, 'C'},
        {"Q7. Which operator is used for comparison in C?", {"=", "==", "!=", "<>"}, 'B'},
        {"Q8. What is the size of int in most 32-bit systems?", {"2 bytes", "4 bytes", "6 bytes", "8 bytes"}, 'B'},
        {"Q9. Which function clears the output screen in C (Turbo C)?", {"clrscr()", "clear()", "clean()", "cls()"}, 'A'},
        {"Q10. Which loop always executes at least once?", {"for loop", "while loop", "do-while loop", "none"}, 'C'},
        {"Q11. Which data type is used to store decimal numbers in C?", {"int", "float", "char", "double"}, 'B'},
        {"Q12. Which function is used to print output in C?", {"print()", "echo()", "printf()", "cout"}, 'C'},
        {"Q13. What is the correct way to declare an array of 10 integers in C?", {"int array[10];", "int array(10);", "int array = {10};", "array int[10];"}, 'A'}
    };

    int totalQuestions = sizeof(questions) / sizeof(questions[0]);

    printf("🧠 Welcome to the C Language Quiz!\n");
    printf("=================================\n\n");

    for(int i = 0; i < totalQuestions; i++) {
        printf("%s\n", questions[i].question);
        printf("A) %s\nB) %s\nC) %s\nD) %s\n", 
               questions[i].options[0], questions[i].options[1], 
               questions[i].options[2], questions[i].options[3]);
        printf("Your answer: ");
        scanf(" %c", &answer);

        if(answer == questions[i].correctAnswer || answer == questions[i].correctAnswer + 32) { // handle lowercase
            printf("✅ Correct!\n\n");
            score++;
        } else {
            printf("❌ Wrong! Correct answer: %c) %s\n\n", 
                   questions[i].correctAnswer, 
                   questions[i].options[questions[i].correctAnswer - 'A']);
        }
    }

    printf("=================================\n");
    printf("🎯 Your Final Score: %d / %d\n", score, totalQuestions);

    if(score == totalQuestions)
        printf("🏆 Excellent! You are a C master!\n");
    else if(score >= 9)
        printf("👏 Great job! You know your basics.\n");
    else if(score >= 5)
        printf("🙂 Not bad, keep practicing.\n");
    else
        printf("💪 Don’t give up! Study and try again.\n");

    return 0;
}
