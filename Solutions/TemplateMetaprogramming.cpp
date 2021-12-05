#include <iostream>

using namespace std;

template <unsigned N>
struct Fibo
{
    static const unsigned val = Fibo<N-1>::val + Fibo<N-2>::val;
};

template <>
struct Fibo<0>
{
    static const unsigned val = 0;
};

template <>
struct Fibo<1>
{
    static const unsigned val = 1;
};

int main()
{
    cout << Fibo<16>::val << endl;

    return 0;
}
