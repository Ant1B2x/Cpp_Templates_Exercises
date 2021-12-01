# C++ Templates - Exercises
Abbo Thomas

Bédex Antoine

[TOC]

# Function Templates

This exercise will show you how to use function templates. It has already been presented in our seminar trailer. Open the file `Sorting.cpp`, you will find a method to print arrays (`printarr`), a method to sort arrays (`sort`) and a main program. Execute the program, it should print a non-sorted array, sort it, and then print it again. Your task will be to convert these first two methods in order to make them work with arrays of any kind (not only `int` arrays) in a way that such a main function should compile and work:

```c++
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
```

We now want to change the sort algorithm for, and only for, `char` arrays. Instead of getting this output: `[L, R, U, a, g, h, k, t, y, z]`, you should get the following output: `[a, g, h, k, L, R, t, U, y, z]`. That means, sorting the letters without taking care of the case. **Hint:** you might look at template specializations.

### Resources

https://www.cplusplus.com/doc/oldtutorial/templates/

https://www.geeksforgeeks.org/templates-cpp/

https://www.geeksforgeeks.org/template-specialization-c/

# From C-style Macros to C++ Templates

Lorem ipsum

# Class Templates

Lorem ipsum

# Templates from STL

The aim of this exercise will be for you to use some template classes from the C++ STL. First, in the file `TemplatesSTL.cpp`, you will define a list of `<string>` containing the following values:

| Name    |
| ------- |
| Pitt    |
| Clooney |
| Damon   |
| Garcia  |

Then, using the methods from the class list, you will print the elements of the list, sort this list, and print these elements again. They should be printed sorted.

You will now see how to use STL maps. Create a map of `<string,int>` containing the following values:

| Name    | Age  |
| ------- | ---- |
| Pitt    | 57   |
| Clooney | 60   |
| Damon   | 51   |
| Garcia  | 65   |

Then, using the methods from the class list, you will print the age of Clooney and Garcia.

These basic examples were just here to show you how easy it is to use the predefined C++ template classes. C++ is an object-oriented language that comes with its powerful templates and really useful embedded classes, so you should use them as much as possible.

### Resources

1. https://www.geeksforgeeks.org/list-cpp-stl/
2. https://www.geeksforgeeks.org/map-associative-containers-the-c-standard-template-library-stl/

# Template Metaprogramming

In the file `TemplateMetaprogramming.cpp`, using template metaprogramming, implement the Fibonacci number. The result should be computed at compile-time instead of run-time. **Hint:** you might look at struct templates.

### Resources

1. https://en.wikipedia.org/wiki/Fibonacci_number

2. https://en.wikipedia.org/wiki/Template_metaprogramming

