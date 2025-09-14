#pragma once
#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

class Person {
protected:
    int id;
    string name;
    int age;
public:
    Person() {}
    Person(int id, string name, int age);
    virtual void printInfo() const; 
    int getId() const;
    string getName() const;
    int getAge() const;
};

#endif
