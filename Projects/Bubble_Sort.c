#include <stdio.h>
#include <string.h>
#define MAX 50
void bubblesort(int arr[],int size)
{
    int i,j;
    for (i=0; i<size; i++)
    {
        for (j=1; j<size-i; j++)
        {
            if (arr[j-1]>arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
        }
    }
}

   
int main()
{
    int array[MAX],size;
    int i;
    
    printf("Kaç Elemanlı Sayı:");
    scanf("%d",&size);
    
    printf("Sayıları Giriniz: \n");
    for (i=0; i<size; i++)
    {
        scanf("%d",&array[i]);
    }
    
    bubblesort(array,size);
    
    for (i=0; i<size; i++)
    {
        printf("%d ",array[i]);
    }
    
    
    return 0;
}



