#include<stdio.h>

int main()
{
    int arr[20];
    int num;
    int i;

    printf("Enter number of elements in array: ");
    scanf("%d", &num);

    printf("Enter your array: ");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }

    // max is for maximum number and 
    // smax for next(second) maximum number
    int max, smax;

    // Assigning max and smax with arr[0] and arr[1] depending
    // on the condition max > smax
    if (arr[0] > arr[1])
    {
        max = arr[0];
        smax = arr[1];
    }
    else 
    {
        max = arr[1];
        smax = arr[0];
    }
    
    // Comparing rest of the element in the array
    for (i = 2; i < num; i++)
    {
        if (arr[i] > smax)
        {
            if (arr[i] > max)
            {
                smax = max;				
                max = arr[i];
            }
            else
            {
                smax = arr[i];
            }
        }
    }

    printf("Max: %d\n", max);

    printf("Next max: %d", smax);
}

/*
Enter number of elements in array: 5
Enter your array: 1
2
3
4
5
Max: 5
Next max: 4*/
