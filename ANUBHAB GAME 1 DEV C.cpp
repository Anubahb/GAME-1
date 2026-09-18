#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice;
    int score = 0;
    int mistakes = 0;
    int i;

    char *letters[] = {"B", "S", "P", "C", "M", "F", "B", "C", "C", "C"};

    char *words[10][3] = {
        {"Ball", "Cat", "Dog"},
        {"Moon", "Sun", "Fish"},
        {"Sun", "Moon", "Pen"},
        {"Cat", "Dog", "Fan"},
        {"Dog", "Map", "Fish"},
        {"Fish", "Cat", "Pen"},
        {"Pen", "Dog", "Ball"},
        {"Top", "Cat", "Moon"},
        {"Goat", "Sun", "Pen"},
        {"Lion", "Dog", "Cat"}
    };

    int correctAnswer[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};

    printf("\n============================================\n");
    printf("        DYSLEXIA LEARNING GAME\n");
    printf("        LETTER & SOUND MATCHING\n");
    printf("============================================\n");

    printf("\nInstructions:\n");
    printf("Choose the word that starts with the given letter.\n");
    printf("Enter 1, 2 or 3 to select your answer.\n\n");

    for (i = 0; i < 10; i++)
    {
        printf("--------------------------------------------\n");
        printf("Question %d\n", i + 1);
        printf("Letter: %s\n\n", letters[i]);

        printf("1. %s\n", words[i][0]);
        printf("2. %s\n", words[i][1]);
        printf("3. %s\n", words[i][2]);

        printf("\nYour answer: ");
        scanf("%d", &choice);

        if (choice == correctAnswer[i])
        {
            printf("Correct!\n");
            score++;
        }
        else
        {
            printf("Wrong answer!\n");
            mistakes++;
        }
    }

    printf("\n============================================\n");
    printf("                 RESULT\n");
    printf("============================================\n");

    printf("Total Questions : 10\n");
    printf("Correct Answers : %d\n", score);
    printf("Mistakes        : %d\n", mistakes);
    printf("Accuracy        : %d%%\n", score * 10);

    if (score >= 8)
    {
        printf("\nExcellent! Keep practicing!\n");
    }
    else if (score >= 5)
    {
        printf("\nGood effort! Keep practicing!\n");
    }
    else
    {
        printf("\nKeep practicing letter recognition!\n");
    }

    printf("\n============================================\n");
    printf("          Thank you for playing!\n");
    printf("============================================\n");

    return 0;
}
