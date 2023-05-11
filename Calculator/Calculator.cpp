#include <iostream>
using namespace std;

int a, b;
int difference;
int sum;
string op;

int main() {
    cout << "add or subtract?" << endl;
    cin >> op;
    
    if(op == "add"){
    cout << "what number do you want to add?" << endl;
    cin >> a;
    cout << "what number do you want to add it with" << endl;
    cin >> b;
    int sum = a+b;
    cout << "The result of " << a << " + " << b << " is " << sum << endl;
    }
    if(op == "subtract"){
        cout << "What number do you want to subtract?" << endl;
        cin >> a;
        cout << "What number do you want to subtract it with?" << endl;
        cin >> b;
        int difference = a-b;
        cout << "The result of " << a << " - " << b << " is " << difference << endl;
    }
    return 0;
}
