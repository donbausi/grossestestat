#pragma once
/* Person.h
TestGross: Klassen
- Person - konkret
Loose, 18.12.2019
*/

#include <iostream>
#include <string>
#include "Haus.h" 
#include "Fahrzeug.h"
#include "PKW.h"
#include "Bike.h"

using namespace std;

class Person : public PKW, public Bike, public Haus
{
private:
	string Name;
	int Alter;
	PKW* benutztePKW;
	Fahrzeug* besitzteFahrzeuge;
	int count;
public:

	Person(string name = string("harry"), int alter = 100);
	//Person(const PKW p, const  Bike b,const Haus h);
	Person(const Person& st);
	~Person() {};
	string getName() const { return Name; }
	void setName(string name) { Name = name; }
	int getAlter() const { return Alter; }
	void setAlter(int alter) { Alter = alter; }
	PKW getBenutzePKW() const { return *this->benutztePKW; }
	void setBenutzePKW(PKW p) { this->benutztePKW = &p; }
	//Fahrzeug[] getBesitztFahrzeuge() const { return besitzteFahrzeuge; }
	/*void setBesitztFahrzeuge(Fahrzeug[] f) {
		this.besitzteFahrzeuge
			= f;
	}*/

	void benutzePKW(const PKW p);
	inline void besitztFahrzeuge(const Fahrzeug& f)
		;

	const Person& operator = (const Person& f);
	friend ostream& operator << (ostream& s, const Person& z);
	friend istream& operator >> (istream& s, Person& z);

};

