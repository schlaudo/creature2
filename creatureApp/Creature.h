#pragma once
#include <string>
using namespace std;

class Creature
{
	int m_weight;
	int m_size;
	string m_type;
public:
	Creature(int weight, int size, string type);
	Creature(const Creature& c);
	virtual ~Creature(void);

	int getWeight() const;
	virtual void showAttributes() const;
	virtual void moveOn() const;
};

