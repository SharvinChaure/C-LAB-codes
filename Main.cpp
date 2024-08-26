#include <iostream>
using namespace std;

int main() 
{
    int first, second, add, subtract, multiply, division;
    float divide;
    
    cout << "Please enter teo integers";
    cin >> first;
    cin >> second;
    
         add = first + second;
    subtract = first - second;
    multiply = first * second;
      divide = first/(float)second;
    
    cout << "Sum = " << add << endl;
    cout << "Difference = " << subtract << endl;
    cout << "Multiplication =" << multiply << endl;
    cout << "Division =" << divide << endl;
    
    return 0;
}