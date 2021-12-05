#include <iostream>

using namespace std;

template <typename T>
void printarr(T arr[], int length)
{
    cout << '[';
    for (int i = 0; i < length; i++) {
        cout << arr[i];
        if (i < length - 1) {
            cout << ", ";
        }
    }
    cout << ']' << endl;
}

template <typename T>
T* sort(T arr[], int length)
{
    T* newarr = (T*) malloc(length*sizeof(T));

    // copy array
    for (int i = 0; i < length; i++) {
        newarr[i] = arr[i];
    }

    // sort array
    for (int i = 0; i < length; i++) {
        for (int j = i+1; j < length; j++) {
            if (newarr[i] > newarr[j]) {
                int temp = newarr[i];
                newarr[i] = newarr[j];
                newarr[j] = temp;
            }
        }
    }

    return newarr;
}

template <>
char* sort<char>(char arr[], int length)
{
    char* newarr = new char(length);

    // copy array
    for (int i = 0; i < length; i++) {
        newarr[i] = arr[i];
    }

    // sort array
    for (int i = 0; i < length; i++) {
        for (int j = i+1; j < length; j++) {
            if (tolower(newarr[i]) > tolower(newarr[j])) {
                int temp = newarr[i];
                newarr[i] = newarr[j];
                newarr[j] = temp;
            }
        }
    }

    return newarr;
}

int main()
{
    // define test array
    int length1 = 10;
    int arr1[] = {4, 3, 8, 10, 2, 5, 6, 9, 1, 7};

    // print unsorted array
    printarr(arr1, length1);

    // print sorted array
    printarr(sort(arr1, length1), length1);

    // define test array
    int length2 = 10;
    char arr2[] = {'g', 'h', 'R', 'a', 'z', 't', 'y', 'U', 'k', 'L'};

    // print unsorted array
    printarr(arr2, length2);

    // print sorted array
    printarr(sort(arr2, length2), length2);

    return 0;
}
