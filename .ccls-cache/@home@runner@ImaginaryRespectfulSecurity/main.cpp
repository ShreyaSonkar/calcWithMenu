#include <iostream>

using namespace std;

int main() {
	//declaring variables
	int option;
	float num1, num2;
  //displaing menu
  cout << " Menu for Calculation!" << endl;
  cout << "1. Add" << endl;
  cout << "2. Substract" << endl;
  cout << "3. Multiply" << endl;
  cout << "4. Divide!" << endl;
  //read th eoptions.
  cout << " Select an Option: " << endl;
  cin >> option;
  //read two opperands from the user
  cout << "Enter first number: " << endl;
  cin >> num1;
  cout << " Enter Second number: " << endl;
  cin >> num2;
   // using switch to check the operation selected an applied working accordingly
  switch(option){
	case 1:
   		cout << num1 << " + " << num2 << " = " << (num1 + num2);
   	break;
  	case 2:
  		 cout << num1 << " - " << num2 << " = " << (num1 - num2);
  	 break;
   	case 3:
   		cout << num1 << " * " << num2 << " = " << (num1 * num2);
   	break;
  	case 4:
  	 	cout << num1 << " / " << num2 << " = " << (num1 / num2);
   	break;
  	 default:
			cout << " Invalid operation";

		return 0;
  }
}





 

