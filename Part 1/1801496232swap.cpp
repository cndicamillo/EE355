#include <iostream>
using namespace std;

// Use algebra to swap the values using pointers
void number_swap(int *num1, int *num2){
    *num1 = *num1 + *num2;
    *num2 = *num1 - *num2;
    *num1 = *num1 - *num2;
}

int main(){
    int x, y = 0;
    // Get values from user input
    cout << "Enter the first integer x = ";
    cin >> x;
    cout << "Enter the second integer y = ";
    cin >> y;
    // Call function to swap the values
    number_swap(&x, &y);
    // Print
    cout << "The swapped values are: x = " << x << ", y = " << y << endl;
    return 0;
}
