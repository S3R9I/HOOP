#pragma once
#include <string>
#include "Module.h"
#include <iostream>
#include <vector>

using namespace std;

class Docent
{
public:
private:
	string name;
	vector<Module> linkedmodules;
	//Zo kan je aan de klassen de klassen koppelen die hij heeft. Deze kan je dan in het grid laden. Omdat leraar en klassen hetzelfde zijn kan je misschien een factorypattern daarvoor gebruiken

};
#pragma once