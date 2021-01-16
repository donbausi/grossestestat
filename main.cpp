/*
* main.cpp
* Chris Boesener
* 14.01.2021
*/

#include <iostream>
#include <string>
#include "Person.h"

int main(int argc, char* argv[])
{
    Person p1("Hans Wurst", 26);
    Person p2("Gundula Gause", 37);

    PKW au1();
    //PKW au2(PKW& au1);

    //Bike b1();

    //p1.besitztFahrzeuge(au1);

    cout << au1 << endl;





    return 0;
}