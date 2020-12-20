//============================================================================
// Name        : new__class.cpp
// Author      : mr.softwear !!
// Version     : 2020
// Copyright   :own
// Description : Hello World in C++, Ansi-style
//============================================================================
/*
 * wring code using class (function are using inside the class
*/
#include <iostream>
#include<string>

using namespace std;

class persion {            //     creating class
	public :                                  //      Access specifier
		string f_name ;
		string l_name;
		string st_mob ;
		string nd_mob;

		string f_l_name() {            // function  definition
			return f_name + " " + l_name ;

		}

		string st_nd_mob() {                   // function definition
			return st_mob + "  / " + nd_mob;

		}
};
int main() {
	/*
	 * creating abject for class
	 */
	persion persion1;                                   // gating  data form specifier
		persion1.f_name = "VISHAL";
		persion1.l_name = "KUMAR";
		persion1.st_mob = "9931627686";
		persion1.nd_mob = "NOT NOW";
		/*
		 * creating abject for class
		 */
	persion persion2;                                         // gating data specifier
		persion2.f_name = "SUDHIR";
		persion2.l_name = "KUMAR";
		persion2.st_mob = "NOT NOW";
		persion2.nd_mob = "NOT NOW";

		cout << "Name :  " << persion1.f_l_name() << endl ;                    // printing data of  1st function definition
		cout << "Mob Number :  " << persion1.st_nd_mob() << endl << "\n";
		cout << "Name :  " << persion2.f_l_name() << endl ;                    // printing data of 2nd function definition
		cout << "Mob Number :  " << persion2.st_nd_mob() << endl;
	return 0;
}
