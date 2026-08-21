// One class should handle one responsibility

#include <iostream>
using namespace std;

class Employee {
public:
    void calculateSalary() {
        cout << "Calculating salary\n";
    }
};

class EmployeeDatabase {
public:
    void saveEmployee() {
        cout << "Saving employee to database\n";
    }
};

class EmployeeReport {
public:
    void generateReport() {
        cout << "Generating employee report\n";
    }
};

int main() {
    Employee e;
    EmployeeDatabase db;
    EmployeeReport report;

    e.calculateSalary();
    db.saveEmployee();
    report.generateReport();

    return 0;
}