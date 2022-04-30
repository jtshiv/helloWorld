#include <iostream>
#include <string>//needed for getline

using namespace std;

int main()
{
    string name;
    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Hello " << name;

    //below is to pause console from closing
    std::getchar();
    std::getchar();
    return 0;
}
