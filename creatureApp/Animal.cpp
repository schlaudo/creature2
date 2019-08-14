#include "Animal.h"
#include <iostream>
using namespace std;

Animal::Animal(int weight, int size, string type, int numLegs)
	: Creature(weight, size, type)
{
	cout << "Konstruktor von Animal" << endl;
	m_numLegs = numLegs;
}

Animal::~Animal(void)
{
	cout << "Destruktor von Animal" << endl;
}

void Animal::showAttributes() const
{
	Creature::showAttributes();
	cout << "Anzahl Beine: " << m_numLegs << endl;
}

void Animal::moveOn() const
{
	cout << "... Tier fortbewegen ... " << endl;
}
