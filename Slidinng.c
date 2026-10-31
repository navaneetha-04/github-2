
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

int main()
{
    int a[6] = {1, 2, 3, 4, 5, 6};
    int i, j, sum;

    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

    for(i = 0; i <= 3; i++)
    {
        system("cls");

        printf("\n\n       SLIDING WINDOW\n\n");

        for(j = 0; j < 6; j++)
        {
            if(j >= i && j < i + 3)
                SetConsoleTextAttribute(h, 14);
            else
                SetConsoleTextAttribute(h, 11);

            printf("      [ %d ]", a[j]);
        }

        sum = 0;

        for(j = i; j < i + 3; j++)
            sum = sum + a[j];

        SetConsoleTextAttribute(h, 10);

        printf("\n\n       Window Sum = %d\n", sum);

        Sleep(1000);
    }

    SetConsoleTextAttribute(h, 7);

    printf("\n       Sliding Completed!\n");

    return 0;
}
