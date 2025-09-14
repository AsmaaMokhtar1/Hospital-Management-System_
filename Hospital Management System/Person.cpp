#include "Person.h"
#include <iostream>
using namespace std;

Person::Person(int id, string name, int age)
    : id(id), name(name), age(age) {
}

void Person::printInfo() const {
    cout << "ID: " << id << ", Name: " << name << ", Age: " << age;
}

int Person::getId() const { return id; }
string Person::getName() const { return name; }
int Person::getAge() const { return age; }
