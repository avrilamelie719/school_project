#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    vector<string> names;
    string name;
    while (cin >> name) {
        names.push_back(name);
    }
    for (auto name : names) {
        cout << name << endl;
    }
    return 0;
}
