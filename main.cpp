#include <iostream>
#include <string>//needed for getline

using namespace std;

int main()
{
    int num1, num2;
    cout << "Welcome to the calculator" << endl;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "The sum of those is " << num1 + num2;

    //below is to pause console from closing
    std::getchar();
    std::getchar();
    return 0;
}
