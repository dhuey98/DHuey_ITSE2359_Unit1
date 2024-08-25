#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    const int num_students = 53;  // Total number of students

    // Arrays to store names, ages, and GPAs
    string names[num_students];
    
    int ages[num_students];
    
    float gpas[num_students];

    ifstream file("student_data.txt");
    
    if (!infile) {
        cout << "File could not be opened!" << endl;
        return 1;
    }
    for (int i = 0; i < num_students; i++) {
        
        file >> names[i] >> ages[i] >> gpas[i];
    }
     file.close();

    float totalGPA = 0.0;
    for (int i = 0; i < num_students; i++) {
        totalGPA += gpas[i];
    }
    float averageGPA = totalGPA / num_students;
    cout << "The average GPA of the class is: " << averageGPA << endl;

    // Finding the highest GPA
    float highestGPA = gpas[0];
    for (int i = 1; i < num_students; i++) {
        if (gpas[i] > highestGPA) {
            highestGPA = gpas[i];
        }
    }
    cout << "The students with the highest GPA are: ";
    for (int i = 0; i < num_students; i++) {
        if (gpas[i] == highestGPA) {
            cout << names[i] << " ";
        }
    }
    cout << "with a GPA of " << highestGPA << endl;

    // Finding the oldest and youngest students
    int oldestAge = ages[0];
    int youngestAge = ages[0];
    for (int i = 1; i < num_students; i++) {
        if (ages[i] > oldestAge) {
            oldestAge = ages[i];
        }
        if (ages[i] < youngestAge) {
            youngestAge = ages[i];
        }
    }

    cout << "The oldest students are: ";
    for (int i = 0; i < num_students; i++) {
        if (ages[i] == oldestAge) {
            cout << names[i] << " ";
        }
    }
    cout << "who are " << oldestAge << " years old." << endl;

    cout << "The youngest students are: ";
    for (int i = 0; i < num_students; i++) {
        if (ages[i] == youngestAge) {
            cout << names[i] << " ";
        }
    }
    cout << "who are " << youngestAge << " years old." << endl;

    return 0;
}