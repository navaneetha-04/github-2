#include <stdio.h>
#include <math.h>
#include <windows.h>
#include <stdlib.h>

#define MAX 1000

int main()
{
    int low, high;
    int base[MAX] = {0};
    int segment[MAX] = {0};

    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

    printf("===== SEGMENTED SIEVE =====\n");

    printf("Enter lower limit: ");
    scanf("%d", &low);

    printf("Enter upper limit: ");
    scanf("%d", &high);

    if (low < 0 || high < low || high > MAX)
    {
        printf("Invalid range! Use 0 to 1000.\n");
        return 0;
    }

    int limit = (int)sqrt(high);

    // Find prime numbers up to sqrt(high)
    for (int i = 2; i <= limit; i++)
        base[i] = 1;

    for (int i = 2; i * i <= limit; i++)
    {
        if (base[i])
        {
            for (int j = i * i; j <= limit; j += i)
                base[j] = 0;
        }
    }

    // Mark all numbers in the requested range
    for (int i = 0; i < high - low + 1; i++)
        segment[i] = 1;

    if (low == 0)
        segment[0] = 0;

    if (low <= 1 && high >= 1)
        segment[1 - low] = 0;

    // Eliminate multiples of base primes
    for (int p = 2; p <= limit; p++)
    {
        if (base[p])
        {
            int start = ((low + p - 1) / p) * p;

            if (start < p * p)
                start = p * p;

            for (int j = start; j <= high; j += p)
            {
                segment[j - low] = 0;

                system("cls");

                SetConsoleTextAttribute(h, 14);
                printf("\n   SEGMENTED SIEVE - PROCESSING\n\n");

                SetConsoleTextAttribute(h, 11);
                printf("Current base prime: %d\n\n", p);

                for (int k = 0; k <= high - low; k++)
                {
                    int num = low + k;

                    if (num == j)
                        SetConsoleTextAttribute(h, 12);
                    else if (segment[k])
                        SetConsoleTextAttribute(h, 10);
                    else
                        SetConsoleTextAttribute(h, 8);

                    printf("[%3d] ", num);

                    if ((k + 1) % 6 == 0)
                        printf("\n");
                }

                Sleep(250);
            }
        }
    }

    // Display final prime numbers
    system("cls");

    SetConsoleTextAttribute(h, 14);
    printf("\n   FINAL PRIME NUMBERS\n\n");

    for (int i = 0; i <= high - low; i++)
    {
        if (segment[i])
            SetConsoleTextAttribute(h, 10);
        else
            SetConsoleTextAttribute(h, 12);

        printf("[%3d] ", low + i);

        if ((i + 1) % 6 == 0)
            printf("\n");
    }

    SetConsoleTextAttribute(h, 7);
    printf("\n\nSegmented Sieve Completed!\n");

    return 0;
}
