#include <iostream>

int main()
{
    //They have to start with this
    std::cout << "Hello World!!!!!!";

    //Testing out variables
    std::string authorName = "Dumbledore";
    int authorAge;
    authorAge = 87;
    std::cout << "Who wrote this? ";
    std::cout << "It was probably " << authorName << ". ";
    std::cout << "How old were they? ";
    std::cout << "They were probably " << authorAge << " years old.";

    //Testing out different data types
    char grade = 'A';
    std::string phrase = "I know what these are";
    int age = 100; //Integers can't have decimals
    double gpa = 5.2; //larger than float
    bool isMale = true; //the true and false variable boolean

    std::cout << "\n" << grade << phrase << age << gpa << isMale;

    //Testing string functions
    std::cout << "\n\n" << phrase.length();
    std::cout << "\n" << phrase[0]; //get individual chars
    phrase[0]='B'; //replacing indiv chars
    std::cout << "\n" << phrase << "\n";
    std::cout << phrase.find("know",0) << "\n"; //find string in string from first char
    std::cout << phrase.substr(8,4); //get substring from char 8 for 4 chars

    return 0;
}
