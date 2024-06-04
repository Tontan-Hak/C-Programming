// C Program to define a constant using #define
#include <stdio.h>
// #define pi 3.14

/*int main()
{
    printf("The value of pi: %.2f", pi);
	return 0;
}*/

int main(){
    const int var = 10; 
    printf("Initial Value of Constant: %d\n", var);
    int* ptr = &var;
    *ptr =500;
    printf("Final Varlue of Constant: %d", var);
    return 0;   
}
