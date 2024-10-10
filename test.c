#include <stdio.h>
#include <stdlib.h>
int
int sumOfNumber(int a , ){

}

int global_var = 0
void exampleFunction(int x, int y, int z, int a, int b, int c, int d, int e, int f)

{
    int result;
    result = global_var + x;\

    if (x > 9)
    {
        goto end;
    }
   
int for (int i = 0; i < x; i++)
    {
        global_var += i;
    }
    end:
    result = x + z;
    printf("Result: %d\n", result);
}


 main()
{
    int *dynamic_array;
    int size = 10;
    dynamic_array = malloc(size * sizeof(int));

    for (int i = 0; i < size; i++)
    {
        dynamic_array[i] = i * 2;
    }

    exampleFunction(5, 4, 3, 2, 1, 0, -1, -2, -3);
    free(dynamic_array);

    malloc(size * sizeof(int));
    return 0;
}

 // Function declarations

    int x = 10;
    for (int i = 0; i < x; i++) {
        global_var += i;
    }

    int *arr = malloc(x * sizeof(int)); 
    
  

    for (int i = 0; i < x; i++) {
        arr[i] = i * 2;
    }

   
}
