// array sort descending order to use selection algorithm in c program...

#include <stdio.h>

int main() {
    int ara[] = {19, 11, 17, 18, 13, 20, 14, 16, 15, 12};
    int len = sizeof(ara) / sizeof(ara[0]);
    int sorted_array[len];
    int i, j;

    //initialize to all element by 0
    for(j = 0; j < len; j++){
        sorted_array[j] = 0;
    }

    int max, min_index;
    for(i = 0; i < len; i++){
        max = ara[0];
        min_index = 0;
        for(j = 0; j < len; j++){
            if(ara[j] > max){
                max = ara[j];
                min_index = j;
            }
        }
        sorted_array[i] = max;
        ara[min_index] = -1;
    }

    //print all sorted value...
    for(i = 0; i < len; i++){
        printf("%d ", sorted_array[i]);
    }

return 0;
}

