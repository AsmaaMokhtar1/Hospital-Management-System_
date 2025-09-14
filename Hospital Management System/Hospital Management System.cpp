#include "Hospital.h"
#include <iostream>
using namespace std;

int main() {
    Hospital h;

    Patient p1(1, "Asmaa", 21, "Flu");
    Patient p2(2, "Ahmed", 30, "Cold");
    Doctor d1(1, "Dr. Ali", 45, "Cardiology"); 
    Doctor d2(2, "Dr. Sara", 38, "Pediatrics");

    h.addPatient(p1);
    h.addPatient(p2);
    h.addDoctor(d1);
    h.addDoctor(d2);

    Appointment a1(1, 2, "2025-09-15", "10:00");
    Appointment a2(2, 1, "2025-09-15", "11:00");

    h.addAppointment(a1);
    h.addAppointment(a2);

    cout << "Patients:\n"; h.printPatients();
    cout << "\nDoctors:\n"; h.printDoctors();
    cout << "\nAppointments:\n"; h.printAppointments();

    return 0;
}
