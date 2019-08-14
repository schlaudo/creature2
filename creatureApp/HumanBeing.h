#pragma once
#include "Creature.h"

class HumanBeing : public Creature
{
	int m_numArms;
	int m_numLegs;
public:
	HumanBeing(int weight, int size, string type, int numArms, int numLegs);
	~HumanBeing(void);

	void playVioline() const;
	void bike() const;

	void showAttributes() const;
	void moveOn() const;
};

