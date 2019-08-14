#include "Creature.h"
#include <iostream>
using namespace std;

Creature::Creature(int weight, int size, string type)
{
	cout << "Konstruktor von Creature" << endl;
	m_weight = weight;
	m_size = size;
	m_type = type;
}

Creature::Creature(const Creature& c)
{
	cout << "Kopierkonstruktor von Creature" << endl;
	m_weight = c.m_weight;
	m_size = c.m_size;
	m_type = c.m_type;
}

Creature::~Creature(void)
{
	cout << "Destruktor von Creature" << endl;
}

int Creature::getWeight() const
{
	return m_weight;
}

void Creature::showAttributes() const
{
	cout << "Groesse: " << m_size << endl;
	cout << "Gewicht: " << m_weight << endl;
	cout << "Art: " << m_type << endl;
}

void Creature::moveOn() const
{
	cout << "... Lebewesen fortbewegen ... " << endl;
}
