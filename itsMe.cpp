#include <iostream> //include this library to print
#include <limits> // include the limits library
#include <string> //iclude the library of string
#include <list>// include the library of listing
#include <vector> // including the library of vector
using namespace std;
//integer with copy initialization
int birthyear =2008;
int age = 17;
int chromosomes{23};
int currentYear= 2026;
int currentAge = currentYear - birthyear;
int years(int born, int current) {
    return current - born;
}
// string with default initialization
 std::string gender = "female";
 std::string namePhrase= "Precious";

 void put() //void function
    {
        std::cout << "My age is before december is:  "<< age << "years old\n" << std::endl;
    }
 void findAge()
 {
     std::cout << "here my currentAge: " << currentAge << "\n" << std::endl;
 }
int main() // main function
{
    list<string> aboutMe= {"Name: Precious", "Age: 17-18", "Gender: Female", "Nationality: Filipina", "Country: Philippines"};
   for (string info : aboutMe) {
    cout << info << endl;
}
    findAge();
    std::cout << "preserved information about me\n";
    std::cout << namePhrase[0];
    std::cout <<"whats my age? ";
    int numberAge{};
    std::cin >> numberAge;
    put();
    std::cout << years(2008, 2026) << "\n";
    std::cin.clear();
    std::cin.get();
    return 0;
    
}
