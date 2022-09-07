// Menu-driven Calculator
#include <stdio.h>

void main()
{
        double no1, no2;
        int choice;
        double ans = 0.0;
        char nextRound = 'Y';

        do
        {
                // Input two numbers
                printf("Enter two numbers: ");
                scanf("%lf%lf", &no1, &no2);

                // Print the menu to the User.
                printf("Press....\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n\n");
                printf("Enter your choice: ");
                // Input User's choice.
                scanf("%d", &choice);

                switch (choice)
                {
                case 1:
                        ans = no1 + no2;
                        printf("Sum = ");
                        break;
                case 2:
                        ans = no1 - no2;
                        printf("Difference = ");
                        break;
                case 3:
                        ans = no1 * no2;
                        printf("Multiplication = ");
                        break;
                case 4:
                        ans = no1 / no2;
                        printf("Division = ");
                        break;
                /*case 5: ans = no1 % no2;
                        printf("Remainder = ");
                        break;*/
                default:
                        printf("\nWrong Choice!!!\n");
                        printf("Answer = ");
                        // return;
                }

                printf("%.2f.\n", ans);

                printf("Do you want to repeat? (y/n) : ");
                scanf("%*c%c", &nextRound);
        } while (nextRound == 'Y' || nextRound == 'y');
}
