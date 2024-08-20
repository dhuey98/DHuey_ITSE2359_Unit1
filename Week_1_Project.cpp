#include <iostream>
#include <string>
using namespace std;

int main() {
    const int num_students = 53;  // Total students

    // Name, age, and gpa arrays
    string names[num_students] = {
        "John", "Jane", "Alice", "Bob", "Charlie", "Diana", "Eve", "Frank", "Grace", "Hank", "Ivy", "Jack", "Karen", "Leo", "Mona", "Nina",
         
        "Oscar", "Paul", "Quinn", "Rita", "Sam", "Tina", "Uma", "Vince", "Walt", "Xena", "Yara", "Zane", "Amy", "Ben", "Cindy", "Derek",
         
        "Elena", "Fred", "Gina", "Hugo", "Isla", "Jake", "Lara", "Mike", "Nora", "Omar", "Pia", "Quinn", "Ralph", "Sara", "Troy", "Una",
         
        "Vera", "Will", "Xander", "Yvonne", "Zack"
    };

    int ages[num_students] = {
        20, 22, 19, 21, 23, 20, 22, 24, 21, 22, 20, 23, 19, 22, 21, 20,
         
        23, 24, 22, 21, 20, 23, 24, 21, 22, 20, 23, 19, 22, 21, 20, 23,
         
        24, 21, 22, 20, 23, 24, 21, 22, 22, 20, 23, 19, 22, 21, 20, 23,
         
        21, 22, 20, 23, 24
    };

    float gpas[num_students] = {
        3.5, 3.8, 3.7, 3.2, 3.9, 3.6, 3.4, 3.1, 3.7, 3.3, 3.8, 3.5, 3.9, 3.6, 3.4, 3.7,
         
        3.8, 3.2, 3.9, 3.6, 3.4, 3.7, 3.5, 3.3, 3.8, 3.9, 3.6, 3.4, 3.5, 3.7, 3.8, 3.6,
         
        3.2, 3.3, 3.9, 3.7, 3.4, 3.5, 3.8, 3.6, 3.9, 3.7, 3.4, 3.5, 3.8, 3.6, 3.9, 3.3,
         
        3.7, 3.5, 3.8, 3.6, 3.9
    };

    // Calculate average GPA
    float TotalGPA = 0.0;
    for (int i = 0; i < num_students; i++) {
        TotalGPA += gpas[i];
    }
    float AverageGPA = TotalGPA / num_students;
    cout << "The average GPA of the class is: " << AverageGPA << endl;

    // Get the highest GPA
    float HighestGPA = gpas[0];
    cout << "The students with the highest GPA are: ";
    for (int i = 1; i < num_students; i++) {
        if (gpas[i] > HighestGPA) {
            HighestGPA = gpas[i];
        }
    }
    for (int i = 0; i < num_students; i++) {
        if (gpas[i] == HighestGPA) {
            cout << names[i] << " ";
        }
    }
    cout << "with a GPA of " << HighestGPA << endl;

    // Find the oldest and youngest ages
    int OldestAge = ages[0];
    int YoungestAge = ages[0];
    cout << "The oldest students are: ";
    for (int i = 1; i < num_students; i++) {
        if (ages[i] > OldestAge) {
            OldestAge = ages[i];
        }
    }
    for (int i = 0; i < num_students; i++) {
        if (ages[i] == OldestAge) {
            cout << names[i] << " ";
        }
    }
    cout << "who are " << OldestAge << " years old." << endl;

    cout << "The youngest students are: ";
    for (int i = 1; i < num_students; i++) {
        if (ages[i] < YoungestAge) {
            YoungestAge = ages[i];
        }
    }
    for (int i = 0; i < num_students; i++) {
        if (ages[i] == YoungestAge) {
            cout << names[i] << " ";
        }
    }
    cout << "who are " << YoungestAge << " years old." << endl;

    return 0;
}