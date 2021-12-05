# C++ Templates - Exercises
Abbo Thomas

Bédex Antoine

[TOC]

# Preamble

We've prepared a folder in which you will find a `Makefile` to help you building the sources. Here is how it works:

- Open a terminal in the sources directory
- Build all the exercises using the command `make all`
- ... or build a specific exercise using the command `make <filename>` (eg. `make FunctionTemplate`)
- Launch a program with `./<filename>` (eg. `./FunctionTemplate`)
- You can clean all compiled items by using `make clean`

# Function Templates

This exercise will show you how to use function templates. It has already been presented in our seminar trailer. Open the file `FunctionTemplate.cpp`, you will find a method to print arrays (`printarr`), a method to sort arrays (`sort`) and a main program. Execute the program, it should print a non-sorted array, sort it, and then print it again. Your task will be to convert these first two methods in order to make them work with arrays of any kind (not only `int` arrays) in a way that such a main function should compile and work:

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

1. https://www.cplusplus.com/doc/oldtutorial/templates/
2. https://www.geeksforgeeks.org/templates-cpp/
3. https://www.geeksforgeeks.org/template-specialization-c/

# From C-style Macros to C++ Templates

In the file `Macro.c`, you will find two functions: `max` and `init_array`. They respectively return you the max of two values of a generic type and create an array of specific type and size, with a default value for each element. These two functions are generic implemented the "C-way", that means, using preprocessor macros. You will also find a main function using them.

In this exercise you will have to rewrite the same functions using C++ templates in the file `MacroTemplate.cpp` (ie. re-implement `max` and `init_array` using C++ function templates). You will have to copy the main from `Macro.c`, however, it will require some modifications. **Hint:** see what you can remove.

We see that the C++ syntax for defining generic function is much more easy and coherent with the rest of the language than C syntax (macros). Indeed, macros can produce really hard-to-read code when using them for long functions. 

### Resources

1. Those of the first exercise
2. https://stackoverflow.com/questions/7256203/how-to-implement-a-generic-macro-in-c
3. https://stackoverflow.com/questions/12863455/using-preprocessor-directives-to-define-generic-functions-in-c

# Class Templates

In this exercise, you will be brought to create a generic class using class templates. In the file `Pair.h`, implement a class with the following requirements:

- The class is a template class with two typename arguments, `T` and `Q`
- The class has two private members, `first` and `second`, respectively of type `T` and `Q`
- The class has a constructor that receives two parameters of types `T` and `Q`, and that assigns the values of these parameters to `first` and `second`
- The class has getters for `first` and `second`
- The class has a method `printMax` that prints the largest value between `first` and `second`

**Hint:** although it is not advised, you can define a whole C++ class in a single `.h` (header) file instead of two `.h` and `.cpp` files (header and implementation). For this small exercise, we recommend you to do it this way.

Once the `Pair` class is written, implement in the main of the file `ClassTemplate.cpp` the following actions:

- Create a `Pair<int, int>` with two chosen values and then print its max
- Create a `Pair<char, char>` with two chosen values and then print its max
- Create a `Pair<char, int>` with the values `'K'` and `13` and then print its max
- Create a `Pair<int, char>` with the values `13` and `'K'` and then print its max

Then, in the file `Pair.h`, create a template specialization for the method `printMax`. This specialization should, for `Pair<char, int>` and only for this, have the following behavior: the parameter of type `int` will be compared to the position in the alphabet of the parameter of type `char`. For example, the value of A will be `1` instead of `65` (its ASCII position).

Execute `ClassTemplate`. What do you observe? The output of `printMax` should be different for the pairs of types `Pair<char, int>` and `Pair<int, char>`. This is because we only specified a specialization for pairs of type `Pair<char, int>`. If we wanted to have the same behavior for pairs of type `Pair<int, char>`, we should have specialized `printMax` for this type as well.

We can easily note one great weakness of class templates: when using N-parameters templates with specializations, the amount of redundant specializations (and thus boilerplate code) will increase exponentially.

### Resources

1. Those of the first exercise

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

