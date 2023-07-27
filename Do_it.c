#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>
#include <stdbool.h>

int* filter_Even()
{
    int size_array = 2;
    int count_add_numbers = 0;
    
    int *first_array = malloc(size_array * sizeof(int));
    int *second_array;

    char stop_char;
    char end = 's';
    // printf("If you want stop push -s\n");
    // scanf("%c");
    bool flag = true;

    while (flag == true)
    {
        
        if(size_array > count_add_numbers){
            for (int i = count_add_numbers; i <= size_array; i++)
            {
                printf("[");
                    for (int i = 0; i < count_add_numbers; i++) {
                        printf("%d\t",first_array[i]);
                    }
                    printf("]\n");
                printf("\nWrite element number - %d : ",count_add_numbers+1);
                scanf("%d",&first_array[i]);
                printf("\n element = %d \n",first_array[i]);
                printf("If you want stop push -s :\n");
                scanf("%c",&stop_char);
                if (stop_char == end)
                {       
                    flag =false;
                    printf("[");
                    for (int i = 0; i < count_add_numbers; i++) {
                        printf("%d\t",first_array[i]);
                    }
                    printf("]\n");
                    break;
                }
                count_add_numbers++;
            }
        }
        else{
            size_array = size_array * 2;
            int *second_array = malloc(size_array * sizeof(int));
            for (int i = 0; i <count_add_numbers;i++)
            {
                second_array[i] = first_array[i];
            }
            first_array = second_array;
        }
    }

    int p = 0;
    int* output_array = NULL;
    output_array = (int*)realloc(output_array, (p + 1) * sizeof(int));
    for (int i = 0; i < count_add_numbers; i++)
    {
        if (first_array[i] % 2 == 0)
        {
            output_array[p] = first_array[i];
            p++;
        }
    }
    printf("[");
    //int* output_array = malloc(p * sizeof(int));
    for (int i = 0; i < p; i++)
    {
        printf("%d ", output_array[i]);
    }
    printf("]\n");

    return (int *)output_array; // typecast
}


int main()
{
    
    int* array = filter_Even();

}