#include <iostream>
#include <string>

using namespace std;

struct Student {
    string name;
    string department;
    string subjects[6];
    float grades[6];
};

int main() {
    Student s;

    s.subjects[0] = "Programming";
    s.subjects[1] = "Mathematics";
    s.subjects[2] = "Introduction to AI";
    s.subjects[3] = "Data Structures";
    s.subjects[4] = "Statistics";
    s.subjects[5] = "English";

    cout << "Enter Student Name: ";
    getline(cin, s.name);

    cout << "Enter Department: ";
    getline(cin, s.department);

    cout << "\n--- Enter Grades for 6 Subjects ---\n";
    for (int i = 0; i < 6; i++) {
        cout << "Enter grade for " << s.subjects[i] << ": ";
        cin >> s.grades[i];
    }

    cout << "\n====================================\n";
    cout << "          ACADEMIC REPORT           \n";
    cout << "====================================\n";
    cout << "Student Name: " << s.name << "\n";
    cout << "Department:   " << s.department << "\n";
    cout << "------------------------------------\n";

    float total = 0;

    for (int i = 0; i < 6; i++) {
        cout << s.subjects[i] << ": " << s.grades[i] << "\n";
        total += s.grades[i];
    }

    float average = total / 6.0;

    cout << "------------------------------------\n";
    cout << "Total Marks: " << total << " / 600\n";
    cout << "Average:     " << average << "%\n";
    cout << "====================================\n";

    return 0;
}
