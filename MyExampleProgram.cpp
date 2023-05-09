#include <iostream>
#include <cstring>

using namespace std;

struct Student {
    int id;
    char name[50];
    float gradeAverage;
};

void addStudent(Student *students[], int &numStudents) {
    Student *newStudent = new Student;

    cout << "Student ID: ";
    cin >> newStudent->id;
    cout << "Student Name: ";
    cin.ignore();
    cin.getline(newStudent->name, 50);
    cout << "Grade Average: ";
    cin >> newStudent->gradeAverage;

    students[numStudents] = newStudent;
    numStudents++;
}

void deleteStudent(Student *students[], int &numStudents) {
    int idToDelete;

    cout << "ID of student to delete: ";
    cin >> idToDelete;

    for (int i = 0; i < numStudents; i++) {
        if (students[i]->id == idToDelete) {
            delete students[i];

            for (int j = i; j < numStudents - 1; j++) {
                students[j] = students[j+1];
            }

            numStudents--;
            cout << "Student deleted." << endl;
            return;
        }
    }

    cout << "Student not found." << endl;
}

void listStudents(Student *students[], int numStudents) {
    for (int i = 0; i < numStudents; i++) {
        cout << students[i]->id << "\t" << students[i]->name << "\t" << students[i]->gradeAverage << endl;
    }
}

int main() {
    Student *students[100];
    int numStudents = 0;

    int choice;
    while (true) {
        cout << endl << "1- Add Student" << endl;
        cout << "2- Delete Student" << endl;
        cout << "3- List Students" << endl;
        cout << "4- Quit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addStudent(students, numStudents);
                break;
            case 2:
                deleteStudent(students, numStudents);
                break;
            case 3:
                listStudents(students, numStudents);
                break;
            case 4:
                return 0;
            default:
                cout << "Invalid choice." << endl;
        }
    }
}