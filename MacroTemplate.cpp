#include <iostream>

template <typename T>
T max(T a, T b) {
    return (a < b) ? b : a;
}

template <typename T>
T* init_array(T init_value, int length) {
    T* array = (T*) malloc(length*sizeof(T));
    for (int i = 0; i < length; i++) {
        array[i] = init_value;
    }
    return array;
}

int main()
{
    // Using max
    int a = 3; 
    int b = 5;
    float c = 4.2;
    float d = 8.6;

    printf("max : %d\n", max(a, b));
    printf("max : %f\n", max(c,d));

    // Using init_array
    char init_value1 = 'h'; // any value
    int length = 10;
    char* array1 = init_array(init_value1, 10);

    printf("\n[");
    for (int i = 0; i < length; i++) {
        printf("%c ", array1[i]);
    }
    printf("]\n");

    int init_value2 = 0;
    length = 5;
    int* array2 = init_array(init_value2, 5);

    printf("\n[");
    for (int i = 0; i < length; i++) {
        printf("%d ", array2[i]);
    }
    printf("]\n");
}
