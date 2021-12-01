/* To compile this file you can use in your terminal :
   gcc -Wall -Werror Macro.c app
   you can then run app using "./app" to see what this program outputs */

#include <stdio.h>
#include <stdlib.h>

//C Macro Template for a max function
#define MAX(type) \
type max_##type(type a, type b){\
    if(a<b) return b;\
    else return a;\
}

//C Macro Template to initialize an array of any type
#define INIT_ARRAY(type) \
type* init_array_##type(type init_value, int length){\
    type* array = (type*)malloc(length*sizeof(type));\
    for(int i=0 ; i<length ; i++){\
        array[i] = init_value;\
    }\
    return array;\
}

MAX(float);
MAX(int);
INIT_ARRAY(char);
INIT_ARRAY(int);

int main(int argc, char** argv)
{
    // Using MAX
    int a = 3; 
    int b = 5;
    float c = 4.2;
    float d = 8.6;

    printf("max : %d\n", max_int(a, b));
    printf("max : %f\n", max_float(c,d));

    // Using INIT_ARRAY
    char init_value1 = 'h'; //any value
    int length = 10;
    char* array1 = init_array_char(init_value1, 10);

    printf("\n[");
    for(int i=0 ; i<length; i++){
        printf("%c ", array1[i]);
    }
    printf("]\n");


    int init_value2 = 0;
    length = 5;
    int* array2 = init_array_int(init_value2, 5);

    printf("\n[");
    for(int i=0 ; i<length; i++){
        printf("%d ", array2[i]);
    }
    printf("]\n");

    

}
