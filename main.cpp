#include <iostream>

using namespace std;

int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;

    cout << "You are " << age << " years old.";

    //below is to pause console from closing
    std::getchar();
    std::getchar();
    return 0;
}
