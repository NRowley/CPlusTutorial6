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

const float RUN_SPEED = 800.f;
const float WALK_SPEED = 400.f;
const float CROUCH_SPEED = 250.f;

enum MovementStatus {
	MS_crouched
};

void updateMovementSpeed(PlayerStatus PS, float& moveSpeed);
void switchOnInt(int i);

int main() {

	//ENUMS///////////////////////////
	PlayerStatus status;

	//status = PS_crouched;

	/*if (status == PS_crouched) {
		cout << "crouching \n";
	}

	status = PlayerStatus::PS_airborne;

	if (status == PS_crouched) {
		cout << "crouching \n";
	}*/

	//Switch Statements///////////////
	float moveSpeed;
	int int1;

	status = PS_walking;
	status = PS_running;
	
	updateMovementSpeed(status, moveSpeed);
	cout << "Move speed: " << moveSpeed << endl;
	int1 = 10;
	switchOnInt(int1);

	system("pause");
}

void updateMovementSpeed(PlayerStatus PS, float& moveSpeed) {

	switch (PS) {
	case PS_walking:
		moveSpeed = WALK_SPEED;
		break;

	case PS_running:
		moveSpeed = RUN_SPEED;
		break;

	case PS_crouched:
		moveSpeed = CROUCH_SPEED;
	}

}

void switchOnInt(int i) {
	switch (i) {
	case 0:
		cout << "Your number was zero. \n";
		break;

	case 1:
		cout << "Your number was one. \n";
		break;

	default:
		cout << "Your number was " << i << endl;
	}
}