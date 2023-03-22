#include <stdio.h>

void bubbleSort(int arr[], int n)
{
   int i, j,temp;
   //char itr[]=NULL;
   for (i = 0; i < n-1; i++)
   {        
        printf("bubble sort iteration %d\n",i+1);

        for (j = 0; j < n-i-1; j++)
        {

           if (arr[j] > arr[j+1])
           {
             temp=arr[j];
             arr[j]=arr[j+1];
             arr[j+1]=temp;
           }
           printArray(arr, n);
        }

    }
}

void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    int arr[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};

    int n = 9;

    printf("Array bofore sorting: \n");
    printArray(arr, n);

    bubbleSort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}
