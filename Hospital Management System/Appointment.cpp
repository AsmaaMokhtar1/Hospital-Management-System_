#include "Appointment.h"
#include <iostream>
using namespace std;

Appointment::Appointment(int pid, int did, string date, string time)
    : patientId(pid), doctorId(did), date(date), time(time) {
}

void Appointment::printInfo() const {
    cout << "Appointment - Patient ID: " << patientId
        << ", Doctor ID: " << doctorId
        << ", Date: " << date << ", Time: " << time << endl;
}

int Appointment::getPatientId() const { return patientId; }
int Appointment::getDoctorId() const { return doctorId; }
