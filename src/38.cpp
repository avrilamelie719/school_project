#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Please enter your age: ";
    cin >> age;
    
    if (age >= 18) {
        cout << "You are an adult.";
    } else {
        cout << "You are a minor.";
    }
    
    return 0;
}
