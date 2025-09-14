#include "Hospital.h"
#include <iostream>
using namespace std;

void Hospital::addPatient(Patient p) { patients[p.getId()] = p; }
void Hospital::addDoctor(Doctor d) { doctors[d.getId()] = d; }
void Hospital::addAppointment(Appointment a) { appointments.push_back(a); }

Patient* Hospital::findPatientById(int id) {
    if (patients.find(id) != patients.end()) return &patients[id];
    return nullptr;
}

Doctor* Hospital::findDoctorById(int id) {
    if (doctors.find(id) != doctors.end()) return &doctors[id];
    return nullptr;
}

void Hospital::printPatients() const {
    for (auto& p : patients) p.second.printInfo();
}

void Hospital::printDoctors() const {
    for (auto& d : doctors) d.second.printInfo();
}

void Hospital::printAppointments() const {
    for (auto& a : appointments) a.printInfo();
}
