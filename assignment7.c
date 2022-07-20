// 1. Write a program to find the Nth term of the Fibonnaci series.
#include <stdio.h>
int main()
{
    int a = 0, n;
    int b = 1, c;
    printf("Enter number: ");
    scanf("%d", &n);
    c = a + b;
    for (int i = 4; i <= n; i++)
    {
        a = b;
        b = c;
        c = a + b;
    }
    if (n == 1)
    {

        printf("%d\n", 0);
    }
    else if (n == 2 || n == 3)
    {
        printf("%d\n", 1);
    }
    else
        printf("%dth Term is %d", n, c);
    return 0;
}

// 2. Write a program to print first N terms of Fibonacci series
#include <stdio.h>
int main()
{

    int a = 0, n;
    int b = 1, c;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("%d\n",0);
    printf("%d\n",1);
    c = a + b;
    printf("%d\n",c);
    for (int i = 4; i <= n; i++)
    {
        a = b;
        b = c;
        c = a + b;
        printf("%d\n", c);
    }
    return 0;
}

// 3. Write a program to check whether a given number is there in the Fibonacci
// series or not

#include <stdio.h>
int main()
{
    int a = 0, n;
    int b = 1, c;
    printf("Enter number: ");
    scanf("%d", &n);
    c = a + b;
    int value = 0;
    for (int i = 0; c<= n; i++)
    {
        a = b;
        b = c;
        c = a + b;
        if (c == n)
        {
            value++;
            break;
        }
    }
    if (value)
        printf("present");
    else
        printf("not present");

    return 0;
}

// 4. Write a program to calculate HCF of two numbers
#include <stdio.h>
int main()
{
    int n, m;
    printf("Enter number: ");
    scanf("%d %d", &n, &m);
    int hcf = n < m ? n : m;

    while (hcf)
    {
        if (n %hcf  == 0 && m % hcf == 0)
        {
            printf("%d", hcf);
            break;
        }
        hcf--;
    }
    return 0;
}

// 5. Write a program to check whether two given numbers are co-prime
// numbers or not
#include <stdio.h>
int main()
{
    int n, m;
    printf("Enter number: ");
    scanf("%d %d", &n, &m);
    int hcf = n < m ? n : m;
    int counter = 0;
    while (hcf > 1)
    {
        if (n % hcf == 0 && m % hcf == 0)
        {
            counter++;
            break;
        }
        hcf--;
    }
    if (counter)
    {
        printf("they are not co-prime number");
    }
    else
        printf("they are prime numbers");

    return 0;
}

// 6. Write a program to print all Prime numbers under 100

#include <stdio.h>
int main() // 2 3 5 7 11 13
{
    int s = 0;
    int counter = 0;
    for (int i = 2; i <= 100; i++)
    {
        int j = 2;
        counter = 0;
        while (j < i)
        {
            if (i % j == 0)
            {
                counter++;
                break;
            }

            j++;
        }
        s = j;
        if (counter == 0)
        {
            printf("%d\n", s);
        }
    }
    return 0;
}

// 7. Write a program to print all Prime numbers between two given numbers.
#include <stdio.h>
int main()
{
    int start, end;
    printf("Enter starting and ending number for prime numbers.");
    scanf("%d %d", &start, &end);

    int s = 0;
    int counter = 0;
    for (int i = start; i <= end; i++)
    {
        int j = 2;
        counter = 0;
        while (j < i)
        {
            if (i % j == 0)
            {
                counter++;
                break;
            }

            j++;
        }
        s = j;
        if (counter == 0)
        {
            printf("%d\n", s);
        }
    }
    return 0;
}

// 8. Write a program to find next Prime number of a given number
#include <stdio.h>
int main()
{
    int end;
    printf("Enter prime number.");
    scanf("%d", &end);

    int s = 0, c = 0;
    int counter = 0;
    if (end == 2)
    {
        printf("%d\n", 3);
    }
    else if (end == 3)
    {
        printf("%d\n", 5);
    }
    else if (end % 2 == 0 || end % 3 == 0)
    {
        c++;
        printf("Please enter prime number.");
    }
    else
    {
        for (int i = end; s <= end; i++)
        {

            int j = 2;
            counter = 0;
            while (j < i)
            {
                if (i % j == 0)
                {

                    counter++;
                    break;
                }

                j++;
            }

            s = j;
        }
    }
    if (counter == 0 && c == 0)
    {
        printf("%d\n", s);
    }
    return 0;
}
// 9. Write a program to check whether a given number is an Armstrong number
// or not

#include <stdio.h>
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    int m = n;
    int digit, sum = 0;
    while (n > 0)
    {
        digit = n % 10;
        n = n / 10;
        sum = sum + (digit * digit * digit);
    }
    if (sum == m && sum != 0)
        printf("%d is a armstrong number\n", m);
    else if (m > 0 && m < 10)
        printf("%d is a armstrong number\n", m);
    else
        printf("%d is not a armstrong number", m);
    return 0;
}

// 10. Write a program to print all Armstrong numbers under 1000
#include <stdio.h>
int main()
{
    int n, m, digit, sum = 0;
    for (int i = 1; i <= 1000; i++)
    {
        digit = 0;
        n = i;
        m = n;
        sum = 0;
        while (n > 0)
        {
            digit = n % 10;
            n = n / 10;
            sum = sum + (digit * digit * digit);
        }
        if (m > 1 && m < 10)
        {
            printf("%d\n", m);
        }
        if (m == sum)
        {

            printf("%d\n", m);
        }
    }

    return 0;
}