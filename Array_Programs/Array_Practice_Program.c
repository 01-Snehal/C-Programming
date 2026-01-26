#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[5];
    int largest_element = 0;

    printf("\n\n Enter Array Elements: ");

    for(int i = 0; i < 5;i++)
    {
        printf("\n\n Enter %d Element: ",i);
        scanf("%d",&arr[i]);
    }

    printf("\n\n Array Elements Are : ");

    for(int i = 0; i < 5; i++)
    {
        printf("\n\n Element %d is : %d",i,arr[i]);
    }
    largest_element = arr[0];
    for(int i = 0; i < 5; i++)
    {
        if(largest_element < arr[i])
        {
            largest_element = arr[i];
        }
    }
    printf("\n\n Largest Element %d :",largest_element);



}
