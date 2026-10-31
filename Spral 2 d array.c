
#include <stdio.h>
#include <windows.h>

int main()
{
    int a[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int path[] = {0, 1, 2, 5, 8, 7, 6, 3, 4};

    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

    int i, j, k, pos;

    for(k = 0; k < 9; k++)
    {
        system("cls");

        pos = path[k];

        printf("\n       2D ARRAY SPIRAL TRAVERSAL\n\n");

        for(i = 0; i < 3; i++)
        {
            for(j = 0; j < 3; j++)
            {
                if(i * 3 + j == pos)
                    SetConsoleTextAttribute(h, 14);
                else
                    SetConsoleTextAttribute(h, 11);

                printf("   [ %d ]   ", a[i][j]);
            }
            printf("\n\n");
        }

        SetConsoleTextAttribute(h, 7);

        printf("\n   Spiral Order: ");

        for(i = 0; i <= k; i++)
            printf("%d ", a[path[i] / 3][path[i] % 3]);

        Sleep(700);
    }

    SetConsoleTextAttribute(h, 7);
    printf("\n\n   Spiral Completed!\n");

    return 0;
}

