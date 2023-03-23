#include <stdio.h>

// global variable declaration
int pass = 0;
int swaps = 0;

// function to swap two elements
void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;

    // updates swaps by 1 whenever swap occurs
    swaps += 1;
}

// function to perform bubble sort
void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        // sets pass to update by 1 each time
        pass += 1;
        // initializes swaps veriable
        swaps = 0;

        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
            {
                // function call to swap elements
                swap(&arr[j], &arr[j + 1]);
            }

            // print statement to show how many swaps occurred per pass through
            printf("pass #%d: %d\n", pass, swaps);
    }
}

// main function
int main()
{
    int arr[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, n);

    return 0;
}