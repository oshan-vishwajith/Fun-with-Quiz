#include <stdio.h>
int main() {
   char answer;
   int score = 0;
   printf("🧠 Welcome to the C Language Quiz!\n");
   printf("=================================\n\n");
   // Question 1
   printf("Q1. What is the keyword to print text in C?\n");
   printf("A) echo\nB) print\nC) printf\nD) cout\n");
   printf("Your answer: ");
   scanf(" %c", &answer);
   if (answer == 'C' || answer == 'c') {
       printf("✅ Correct!\n\n");
       score++;
   } else {
       printf("❌ Wrong! Correct answer: C) printf\n\n");
   }
   // Question 2
   printf("Q2. Which symbol is used to end a statement in C?\n");
   printf("A) .\nB) ;\nC) ,\nD) :\n");
   printf("Your answer: ");
   scanf(" %c", &answer);
   if (answer == 'B' || answer == 'b') {
       printf("✅ Correct!\n\n");
       score++;
   } else {
       printf("❌ Wrong! Correct answer: B) ;\n\n");
   }
   // Question 3
   printf("Q3. Which header file is needed for printf()?\n");
   printf("A) stdlib.h\nB) string.h\nC) stdio.h\nD) conio.h\n");
   printf("Your answer: ");
   scanf(" %c", &answer);
   if (answer == 'C' || answer == 'c') {
       printf("✅ Correct!\n\n");
       score++;
   } else {
       printf("❌ Wrong! Correct answer: C) stdio.h\n\n");
   }
   // Question 4
   printf("Q4. What data type is used to store a single character?\n");
   printf("A) char\nB) int\nC) float\nD) string\n");
   printf("Your answer: ");
   scanf(" %c", &answer);
   if (answer == 'A' || answer == 'a') {
       printf("✅ Correct!\n\n");
       score++;
   } else {
       printf("❌ Wrong! Correct answer: A) char\n\n");
   }
  
