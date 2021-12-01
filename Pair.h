#ifndef CPP_TEMPLATE_PROJECT_PAIR_H
#define CPP_TEMPLATE_PROJECT_PAIR_H

#include <iostream>

using namespace std;

const int ascii_offset = 64;

template <typename T, typename Q>
class Pair {
private:
    T first;
    Q second;
public:
    Pair<T,Q>(T first, Q second) {
        this->first = first;
        this->second = second;
    };
    T getFirst() {
        return this->first;
    };
    Q getSecond() {
        return this->second;
    };
    void printMax() {
        if (this->getFirst() > this->getSecond()) {
            cout << this->getFirst() << endl;
        } else {
            cout << this->getSecond() << endl;
        }
    };
};

template <>
void Pair<char, int>::printMax() {
    if (this->getFirst() - ascii_offset > this->getSecond()) {
        cout << this->getFirst() << endl;
    } else {
        cout << this->getSecond() << endl;
    }
}


#endif //CPP_TEMPLATE_PROJECT_PAIR_H
