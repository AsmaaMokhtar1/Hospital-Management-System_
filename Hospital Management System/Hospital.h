#ifndef HOSPITAL_H
#define HOSPITAL_H

#include <map>
#include <vector>
#include "Patient.h"
#include "Doctor.h"
#include "Appointment.h"
using namespace std;

class Hospital {
private:
    map<int, Patient> patients;
    map<int, Doctor> doctors;
    vector<Appointment> appointments;
public:
    void addPatient(Patient p);
    void addDoctor(Doctor d);
    void addAppointment(Appointment a);
    Patient* findPatientById(int id);
    Doctor* findDoctorById(int id);
    void printPatients() const;
    void printDoctors() const;
    void printAppointments() const;
};

#endif
