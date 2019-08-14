#include "HumanBeing.h"
#include <iostream>
using namespace std;

HumanBeing::HumanBeing(int weight, int size, string type, int numArms, int numLegs)
	: Creature(weight, size, type)
{
	cout << "Konstruktor von HumanBeing" << endl;
	m_numArms = numArms;
	m_numLegs = numLegs;
}

HumanBeing::~HumanBeing(void)
{
	cout << "Destruktor von HumanBeing" << endl;
}

void HumanBeing::bike() const
{
	cout << "... Mensch: kann auch radfahren ..." << endl;
}

void HumanBeing::playVioline() const
{
	cout << "... Mensch: kann auch Geige spielen ... " << endl;
}

void HumanBeing::showAttributes() const
{
	Creature::showAttributes();
	cout << "Anzahl Arme: " << m_numArms << endl;
	cout << "Anzahl Beine: " << m_numLegs << endl;

	playVioline();
	bike();
}

void HumanBeing::moveOn() const
{
	cout << "... Mensch fortbewegen ... " << endl;
}
