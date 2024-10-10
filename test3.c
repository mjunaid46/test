#include <stdio.h>
#include <stdlib.h>


main() {
  
    int global_var = 0;

  
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
