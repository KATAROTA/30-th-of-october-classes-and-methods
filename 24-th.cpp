#include <iostream>
using namespace std;

class Human {
	public:
		string name;
		int year;
		string dataOfBirthday;
		string gender;
		
		void Talk(string textToTalk) {
			cout <<  name << " speaks: " << textToTalk << endl;
		}
	
	
};

int main() {
	string Heis;
	Human First;
	First.name = "Heisenberg";
	First.year = 17;
	First.dataOfBirthday = "25.03.07";
	First.gender = "man";
	
	cout << First.year << endl;
	
	First.year++;
	
	cout << First.year << endl;
	
	First.Talk(" Say my name");
	cin >> Heis;
	First.Talk(" you are goddamn right");
	
	Human Second;
	Second.name = "Denis";
	cout << Second.year << endl;
	//Second.year выводить нельзя, если он не прописан, ибо выйдет фигня какая то
	
	
	return 0;
	
		
}

