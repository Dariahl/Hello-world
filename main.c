#include <stdio.h>
#include <stdlib.h>

void sort(int **arr);   //sorting

int main()
{
    int arr[10] = {5, 1 ,9, 8, 6 ,7, 2 ,4, 5, 3};
    int **pointer = (int**)calloc(10, sizeof (int*));     //dinamic array
    int i = 0;

    for(i = 0; i < 10; i++){                            //copier arr in the pointer
        pointer[i] = &arr[i];
        printf("%p\n", *(pointer + i));
    }

    for(i = 0; i < 10; i++){                            //show the arr
        printf("%i  ", arr[i]);
    }
    printf("\n");

    sort(pointer);                                     //function call

    for(i = 0; i < 10; i++){                          //show the pointer
        printf("%i  ", *(*(pointer + i)));
    }
    printf("\n");

    for(i = 0; i < 10; i++){                          //show the arr
        printf("%i  ", arr[i]);
    }

    return 0;
}

void sort(int **arr)                          //sorting
{
     int j = 0 , i = 0;
     int temp = 0;

    for(i = 0; i < 10 - 1; i++)
     {
        for(j = i + 1; j < 10; j++)
        {
            if(*(*(arr + i)) > *(*(arr + j)))
            {
                 temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
