#include <iostream>
#include <string>
using namespace std;

#include "Jantung.h"
#include "manusia.h"

int main() {
	manusia* varManusia = new manusia("Faris");
	delete varManusia;

	return 0;
}