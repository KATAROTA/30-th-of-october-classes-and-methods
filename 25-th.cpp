#include <iostream>
using namespace std;


class Human {
	private:
		int age;
	public:
		string name;
	
	int GetAge() { //Geter для получения атрибута через метод
		return age;
		
	}
	void setAge(int MyAge) {//сетер для прописания
		if (MyAge > 10) {
			age = MyAge;
		}
	}
};



int main() {
	Human Man;
	
	Man.name = "Heisenberg";
	//Man.age = 56; без метода к приватному атрибуту нельзя обратиться
	
	Man.setAge(56); //задание атрибута через сетер
	cout << Man.GetAge() << endl; //получение атрибута через гетер
	
	return 0;
}
