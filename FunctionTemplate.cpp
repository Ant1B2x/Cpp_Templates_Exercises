#include <iostream>

using namespace std;

void printarr(int arr[], int length)
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

int* sort(int arr[], int length)
{
    int* newarr = new int(length);

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

int main()
{
    // define test array
    int length = 10;
    int arr[] = {4, 3, 8, 10, 2, 5, 6, 9, 1, 7};

    // print unsorted array
    printarr(arr, length);

    // print sorted array
    printarr(sort(arr, length), length);

    return 0;
}
