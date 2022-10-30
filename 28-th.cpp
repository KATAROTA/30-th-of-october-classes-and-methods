#include <iostream>
using namespace std;


class car {
	public:
		double Engine;
		double Mass;
		double MaxSpeed;
	
		double GetMaxSpeed() {
			return MaxSpeed;
		}
		car( double myEngine, double myMass) {
			Mass = myMass;
			Engine = myEngine;
			MaxSpeed= (myEngine/myMass*1000);
		}
	
	
};



int main() {
	car BMV(300, 200);
	
	
	
	cout << "Enige: " << BMV.Engine << " Mass: " << BMV.Mass << " Max speed: " << BMV.GetMaxSpeed() << endl;
	return 0;
	
	
}
