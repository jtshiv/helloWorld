#include <iostream>

using namespace std;
int main()
{
    cout << 5 + 7;
    //They have to start with this
    cout << "Hello World!!!!!!";

    //Testing out variables
    string authorName = "Dumbledore";
    int authorAge;
    authorAge = 87;
    cout << "Who wrote this? ";
    cout << "It was probably " << authorName << ". ";
    cout << "How old were they? ";
    cout << "They were probably " << authorAge << " years old.";

    //Testing out different data types
    char grade = 'A';
    string phrase = "I know what these are";
    int age = 100; //Integers can't have decimals
    double gpa = 5.2; //larger than float
    bool isMale = true; //the true and false variable boolean

    cout << "\n" << grade << phrase << age << gpa << isMale;

    //Testing string functions
    cout << "\n\n" << phrase.length();
    cout << "\n" << phrase[0]; //get individual chars
    phrase[0]='B'; //replacing indiv chars
    cout << "\n" << phrase << "\n";
    cout << phrase.find("know",0) << "\n"; //find string in string from first char
    cout << phrase.substr(8,4); //get substring from char 8 for 4 chars

    return 0;
}
