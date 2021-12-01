#include <iostream>
#include <list>
#include <map>

using namespace std;

void print(const list<string> &l)
{
    for (const string &i: l) {
        cout << i << endl;
    }
}

int main() {
    // List
    list<string> l;
    l.emplace_back("Pitt");
    l.emplace_back("Clooney");
    l.emplace_back("Damon");
    l.emplace_back("Garcia");
    print(l);
    l.sort();
    print(l);

    // Map
    map<string, int> ages;
    ages.insert(pair<string, int>("Pitt", 57));
    ages.insert(pair<string, int>("Clooney", 60));
    ages.insert(pair<string, int>("Damon", 51));
    ages.insert(pair<string, int>("Garcia", 65));
    cout << "Pitt: " << ages["Pitt"] << endl;
    cout << "Damon: " << ages["Damon"] << endl;
}
