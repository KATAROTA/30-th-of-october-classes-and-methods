#include <iostream>
using namespace std;



class Human {
	private:
		int age;
	public:
		string name;
		
		Human() {
			age = 31;
			cout<<"Constructor have created Human";
			
			
		}
		Human(string myName) {
			age =18;
			name = myName;
			cout << "created man with name: " << myName << endl;
			
			
		}
		int getAge() {
			return (age < 30)? age : age -2;
			//if (age <30) {
			//	return age
			//}
			//else{
			//	return age-2
			//}
			
		}
		void setAge(int MyAge) {
			if (MyAge > 0){
				MyAge = age;
			}
			
		}
		
		Human(int myAge, string myName) {
			age = myAge;
			name = myName;
			cout << "created man with name: " << name << " and its is: " << age << " years old" << endl;
			
		}
		
		
	
};


int main() {
	Human firstMan;
	firstMan.name = "Heisenberg";
	cout << firstMan.getAge() << endl;
	Human secondMan("Heisenbergus");
	cout << secondMan.getAge() << endl;
	
	Human thirdMan("HEIS");
	cout << thirdMan.getAge() << endl;
	Human fourthMan(24, "JESSY");
	Human fivethMan;
	fivethMan.name="Woman";
	cout << fivethMan.getAge() << endl;
	return 0;
	
	
	
	
}
