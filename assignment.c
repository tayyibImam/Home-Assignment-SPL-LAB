#include <stdio.h>

int getRemainder(int x, int n)
{
    int remainder, temp = 0;
    while (temp+n <= x )
    {
        temp += n;
    }

    remainder = x - temp;
    return remainder;
}

int getQuotient(int x, int n)
{
    int quotient = 0, temp = 0;

    while (temp+n <= x)
    {
        temp += n;
        quotient += 1;
    }
    return quotient;
}

int sumOfDigits(int num)
{
    int sum = 0, temp = num;
    
    while (temp > 9)
    {
        int rem = getRemainder(temp, 10);
        sum += rem;

        int quo = getQuotient(temp, 10);
        temp = quo;

    }
    
    sum += temp;
    return sum;
}

int isPrime(int num)
{

    if (num == 2)
    {
        return 1;
    }

    else if (num < 2)
    {
        return 0;
    }
    
    
    for (int i = 2; i < num; i++)
    {
        if (getRemainder(num, i) == 0)
        {
            return 0;
        }
    
    }

    return 1;
    
}

int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int ArrayA[n], ArrayB[n], primeOrNot = 0;
    printf("Enter %d numbers: ", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ArrayA[i]);
    }
    

    for (int i = 0; i < n; i++)
    {
        int sum = sumOfDigits(ArrayA[i]);
        ArrayB[i] = sum;
    }

    printf("Sum of digits array (B): ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",ArrayB[i]);

        primeOrNot += isPrime(ArrayB[i]);
    }

    if (primeOrNot)
    {
        printf("\nPrime numbers in the sum array: ");
        for (int i = 0; i < n; i++)
        {
            if(isPrime(ArrayB[i]))
                printf("%d", ArrayB[i]);

        }
        
    }
    else printf("\nNo prime numbers found in the digit sums.");
    
}