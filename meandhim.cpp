/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<string>
#include<vector>
#include<list>
using namespace std;

namespace XY {
    int zach = 22; // have lacked 1 more genetic variable
}
namespace XX {
    int precious = 23; // sufficient genetic variable
}
void geneticGambled() {
    char F = 100; // Full Identical twins
    char H = 50; //Half Fraternal twins
    char Z= 0; //A single baby
}


// using and typedef is used if u want an additional name
using person_name = std::string; // can be used to declare a string
//person_name is the identifier
typedef int nomnom; // can be used to declare an integer
// nomnom is the identifier

int main()
{
    //Data
    person_name zach1= "Zachary Bates";
    person_name precious = "Precious Prado";
    nomnom zachAge = 16;
    nomnom preciousAge = 17;
    
    
    string zz = "Zachary Bates";
    
    //zach chromosomes were eventually fixed
        XY::zach+=1;
        // the calculation of two chromosomes
        int pairCombination = XY::zach + XX::precious;
    
    cout << "Wanna know the father?: "<< std::endl;
    getline(cin, zach1);
    cout << "The name of the father is: " << zz <<std::endl;
    
    typedef string choices;
    choices userSelection;
    cout << "choose what u wanna know between these couple: " << std::endl;
    cout<< "---------------------------------------------" << std::endl;
    
    cout << "choices are: [gender, age, numberofbabies, genderofbaby, nationality, name, country]\n" << std::endl;
   getline(cin, userSelection);

    
  
    
   if (userSelection == "gender") {
       cout << "Zach= male and Precious= Female" << std::endl;
   }
    
    return 0;
}
