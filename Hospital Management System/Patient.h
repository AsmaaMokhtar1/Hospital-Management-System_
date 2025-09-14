#ifndef PATIENT_H
#define PATIENT_H

#include "Person.h"
#include <string>
using namespace std;

class Patient : public Person {
private:
    string illness;
public:
    Patient() {}
    Patient(int id, string name, int age, string illness);
    void printInfo() const override; 
    string getIllness() const;
};

#endif
