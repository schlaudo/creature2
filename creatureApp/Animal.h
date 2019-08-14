#pragma once
#include "creature.h"

class Animal : public Creature
{
	int m_numLegs;
public:
	Animal(int weight, int size, string type, int numLegs);
	~Animal(void);

	void showAttributes() const;
	void moveOn() const;
};

