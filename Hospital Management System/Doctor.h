#ifndef DOCTOR_H
#define DOCTOR_H

#include "Person.h"
#include <string>
using namespace std;

class Doctor : public Person {
private:
    string specialty;
public:
    Doctor() {}
    Doctor(int id, string name, int age, string specialty);
    void printInfo() const override;
    string getSpecialty() const;
};

#endif
