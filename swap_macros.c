//
// Created by dzhik on 13.05.2023.
//

#include "swap_macros.h"

// определем тип переменной
#define swap(arr, i, j) {           \
  __typeof__(arr[0]) temp = arr[i]; \
  arr[i] = arr[j];                  \
  arr[j] = temp;                    \
}

int swap_macros(){
    puts("Input ");

    int int_arr[] = {1, 2, 3, 4, 5};
    float float_arr[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    char char_arr[] = {'A', 'B', 'C', 'D', 'E'};

    swap(int_arr, 2, 3);
    for(int i = 0; i < 5; i++)
        printf("%d ", int_arr[i]);

    return 0;
}
