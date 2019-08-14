// creatureApp.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include "Creature.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	Creature*	pCreature = new Creature(71, 175, "Monster");
	cout << endl;
	pCreature->showAttributes();

	cout << endl;
	pCreature->moveOn();

	cout << endl;
	delete pCreature;

	return 0;
}

