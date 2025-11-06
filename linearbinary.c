#include<stdio.h>

int linearsearch(int arr[],int element,int size){
    for(int i = 0; i< size; i++){

        if(arr[i]==element)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 4, 56, 45, 4567, 4589, 876};
    int size = sizeof(arr)/sizeof(int);
    int element = 56;
    int searchIndex = linearsearch(arr,size,element);
    printf("the element %d was found at index %d \n", element,searchIndex);
    return 0;
}