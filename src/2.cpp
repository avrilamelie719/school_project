// Random C++ Code

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string name;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Hello, " << name << "!" << endl;
    
    vector<int> numbers;
    for (int i = 0; i < 10; i++) {
        numbers.push_back(i);
    }
    for (int number : numbers) {
        cout << number << " ";
    }
    cout << endl;
    
    return 0;
}
