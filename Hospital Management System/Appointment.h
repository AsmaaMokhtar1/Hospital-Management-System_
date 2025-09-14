#ifndef APPOINTMENT_H
#define APPOINTMENT_H

#include <string>
using namespace std;

class Appointment {
private:
    int patientId;
    int doctorId;
    string date;
    string time;
public:
    Appointment(int pid, int did, string date, string time);
    void printInfo() const;
    int getPatientId() const;
    int getDoctorId() const;
};

#endif
