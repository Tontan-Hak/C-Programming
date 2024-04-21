#include <stdio.h>

int main(){
    int first = 1;
    int val, maxval, minval;
    while(1){
        printf("Enter a value: ");
        scanf("%d", &val);
        if(first){
            maxval = val;
            minval = val;
            first = 0;
        }
        if(val > maxval){
            maxval = val;
        }
        if(val < minval){
            minval = val;
        }
        printf("Max value: %d\n", maxval);
        printf("Min value: %d\n", minval);
    }
}