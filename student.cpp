#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

// Define a structure to store student information
struct Student {
    string rId;     // Registration ID
    string fName;   // First name
    string lName;   // Last name
    string classes; // Class information
    string number;  // Mobile number
};

// Function to register a new student
void newStudentRegistration() {
    // Open the file in append mode to add new students
    ofstream outfile("studentInfo.txt", ios::app);
    if (!outfile.is_open()) {
        cout << "Error: Unable to open file for writing!" << endl;
        return;
  }
