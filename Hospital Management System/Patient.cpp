#include "Patient.h"
#include <iostream>
using namespace std;

Patient::Patient(int id, string name, int age, string illness)
    : Person(id, name, age), illness(illness) {
}

void Patient::printInfo() const {
    cout << "Patient - ";
    Person::printInfo();
    cout << ", Illness: " << illness << endl;
}

string Patient::getIllness() const { return illness; }
