#pragma once
class Cat {
	static int _howMany;

public:
	Cat() {
		_howMany++;
	}
	static void printHowMany();
};