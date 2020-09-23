#include "std_lib_facilities.h"

int main()
{

//get name
 cout << "Enter the name of the person you want to write to: \n";
 string first_name; 
 cin >> first_name;
 cout << "\n";

//get another name
 cout << "Enter a name of another friend: \n";
 string friend_name;
 cin >> friend_name;
 cout << "\n";

//check if male or female
 cout << "If the friend is male please enter 'm'\n"
 	<< "If the friend is female please enter 'f'\n"
 	<< "m/f?: \n";
 char friend_sex = 0;
 cin >> friend_sex;
 cout << "\n";

//get age
 cout << "Enter your age: \n";
 int age = 0;
 cin >> age;
 cout << "\n";

 if(age <= 0 or age >= 110)
 	simple_error("you're kidding!");

 //letter
 cout << "Dear " << first_name << ",\n"
 	<< "We haven't talked in a while\n"
 	<< "I hope you are doing fine " << first_name << " :)\n";
 cout << "Have you seen " << friend_name << " lately?\n";

 //ask them to call me
 if(friend_sex == 'm')
 	cout << "If you see " << friend_name << " please ask him to call me.\n";
 if(friend_sex == 'f')
 	cout << "If you see " << friend_name << " please ask her to call me.\n";


 cout << "I hear you just had a birthday and you are " << age << " years old.\n";

//msg about the age
 if(age < 12)
 	cout << "Next year you will be " << age + 1 << ".\n";
 if(age == 17)
 	cout << "Next year you will be able to vote.\n";
 if(age > 70)
 	cout << "I hope you are enjoying retirement.\n";

 cout << "Yours sincerely,\n\n";
 cout << "Vangel Attila\n";

 return 0;
}