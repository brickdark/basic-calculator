##include <iostream>
using namespace std;

int main() {
    int a, b;
    char symbolz;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter an symbol (+, -, *, /): ";
    cin >> symbolz;
    cout << "Enter second number: ";
    cin >> b;
    switch(symbolz) {
        case '+':
        cout << "solution = " << a + b; 
        break;
        case '-': 
        cout << "solution = " << a - b; 
        break;
        case '*': 
        cout << "solution = " << a * b; 
        break;
        case '/': 
        cout << "solution = " << a / b; 
        break;
        default: 
        cout << "Invalid operator!";
    }

    return 0;
}

