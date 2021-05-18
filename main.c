#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0;
    printf("Please Enter positive integer number: ");
    scanf("%d", &n );
    int prime[n];

    //crating array and add elements 2 to n
    for(int i=2; i <= n; i++)
    {
        prime[i] = i;

    }

    //read array elements one by one
    for(int m=0; m <= n; m++)
    {
        int count=0;

        for(int i=1; i<=prime[m]; i++)
        {
            //divide element to find that element is prime or not
            if(prime[m] % i == 0)
            {
                count =count + 1;

            }
            //mark all non prime numbers as -1
            if (count >= 3)
            {
                prime[m] = -1;
            }

        }
    }
    printf("All prime numbers from 0 to %d are:\n",n );
    for(int i=2; i <= n; i++)
    {
        //print all non marked numbers in array
        if (prime[i] != -1)
        {
            printf("%d ", prime[i]);
        }
    }



    return 0;
}
