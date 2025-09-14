#include "Doctor.h"
#include <iostream>
using namespace std;

Doctor::Doctor(int id, string name, int age, string specialty)
    : Person(id, name, age), specialty(specialty) {
}

void Doctor::printInfo() const {
    cout << "Doctor - ";
    Person::printInfo();
    cout << ", Specialty: " << specialty << endl;
}

string Doctor::getSpecialty() const { return specialty; }
