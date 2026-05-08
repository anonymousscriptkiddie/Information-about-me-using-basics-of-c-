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
  void ages(){
      string agers="16 and 17";
      cout << "Zach and Precious ages are: " << agers << endl;
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
    else if (userSelection == "age") {
        ages();
    }
    else if (userSelection == "numberofbabies") {
        cout << "it supposed to be a gamble"<< endl;
    }
    int birthyearGap;
    cout << "Guess Zach Birthyear: \n "<<endl;
    cout << "choices: 2009 or 2008\n" <<endl;
    cin >> birthyearGap;
    
    switch(birthyearGap){
        case 2008:
        cout << "its precious birthyear, therefore you are wrong" << endl;
        break;
        case 2009:
        cout << "zach birth year is correct" << endl;
        break;
        default:
        cout << "enter the choices, not any other" << endl;
    }
    int birthyearGap1;
    cout << "guess Precious Birthyear: " << endl;
    cout << "choices: 2009 or 2008\n" << endl;;
    cin >>birthyearGap1;
    
    switch(birthyearGap1){
        case 2008:
        cout << "its precious birtyear and you are absolutely right" <<endl;
        break;
        case 2009:
        cout << "its zach birthday therefore, u guess it wrong " << endl;
        default:
        cout << "enter the choices, not any other" << endl;
    }
   
    
    return 0;
}
