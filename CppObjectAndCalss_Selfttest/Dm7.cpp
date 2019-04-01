#include "Dm7.h"
#include "iostream"
using namespace std;
#define _CRT_SECURE_NO_WARNINGS

Plorg::Plorg(const char* name, int ci)
{
	//strcpy(m_name, name);
	m_CI = ci;
}

Plorg::~Plorg()
{
	delete m_name;
	m_CI = 0;
}

void Plorg::setCI(int ci)
{
	m_CI = ci;
}

void Plorg::shwData()
{
	cout << "Name :" << m_name << "\nCI :" << m_CI << endl;
}
