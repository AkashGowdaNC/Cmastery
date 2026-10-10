int number = 7;

if (number % 2 == 0)
{
    printf("Even");
}
else
{
    printf("Odd");
}
\*
number = 7

7 % 2
 ↓
1

1 == 0
 ↓
false

else executes
 ↓
Odd
*\
int found = 0;

for (int i = 0; i < n; i++)
{
    if (arr[i] == target)
    {
        found = 1;
        break;
    }
}

if (found)
{
    printf("Found");
}
else
{
    printf("Not found");
}
//Primes from 1 to n
#include <stdio.h>

int isPrime(int n)
{
    if (n < 2)
    {
        return 0;
    }

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))
        {
            printf("%d ", i);
        }
    }

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))
        {
            printf("%d ", i);
        }
    }
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))
        {
            printf("%d ", i);
        }
    }


for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))
        {
            printf("%d ", i);
        }
    }
for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))
        {
            printf("%d ", i);
        }
    }


