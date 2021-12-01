#include <iostream>
#include "Pair.h"

using namespace std;

int main() {
    Pair<int, int> pint = Pair<int, int>(13, 20);
    cout << pint.getFirst() << " " << pint.getSecond() << endl;
    pint.printMax();

    Pair<char, char> pchar = Pair<char, char>('B', 'K');
    cout << pchar.getFirst() << " " << pchar.getSecond() << endl;
    pchar.printMax();

    Pair<char, int> pcharint = Pair<char, int>('K', 13);
    cout << pcharint.getFirst() << " " << pcharint.getSecond() << endl;
    pcharint.printMax();

    Pair<int, char> pintchar = Pair<int, char>(13, 'K');
    cout << pintchar.getFirst() << " " << pintchar.getSecond() << endl;
    pintchar.printMax();
}
