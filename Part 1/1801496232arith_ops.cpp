#include <iostream>
using namespace std;

// Create different functions based on operation
void add(float *a, float *b){
    float c = 0;
    c = *a + *b;
    cout << *a << " + " << *b << " = " << c << endl;
}

void subtract(float *a, float *b){
    float c = 0;
    c = *a - *b;
    cout << *a << " - " << *b << " = " << c << endl;
}

void multiply(float *a, float *b){
    float c = 0;
    c = *a * *b;
    cout << *a << " * " << *b << " = " << c << endl;
}

void divide(float *a, float *b){
    if (*b == 0){
        cout << "Cannot divide by 0. Please try again." << endl;
        return;
    }
    float c = 0;
    c = *a / *b;
    cout << *a << " / " << *b << " = " << c << endl;
}

int main(){
    // Get user inputs
    string op;
    cout << "Type one of the following to select operation (case sensitive):\nadd, subtract, multiply, divide\n";
    cin >> op;

    float x, y = 0;
    cout << "Enter the first integer x = ";
    cin >> x;
    cout << "Enter the second integer y = ";
    cin >> y;

    // Call function to perform selected operation
    if (op == "add"){
        add(&x, &y);
    }
    else if (op == "subtract"){
        subtract(&x, &y);
    }
    else if (op == "multiply"){
        multiply(&x, &y);
    }
    else if (op == "divide"){
        divide(&x, &y);
    }
    else{
        cout << "Error. Invalid operation type." << endl;
    }
    return 0;
}
