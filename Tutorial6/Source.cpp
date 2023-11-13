#include <iostream>
#include <string>
using namespace std;

enum PlayerStatus {
	PS_crouched,
	PS_standing,
	PS_walking,
	PS_running,
	PS_sprinting,
	PS_hiding,
	PS_airborne,
	PS_climbing
};

enum MovementStatus {
	MS_crouched
};

int main() {

	//ENUMS///////////////////////////
	PlayerStatus status;

	status = PS_crouched;

	if (status == PS_crouched) {
		cout << "crouching \n";
	}

	status = PlayerStatus::PS_airborne;

	if (status == PS_crouched) {
		cout << "crouching \n";
	}

	system("pause");
}