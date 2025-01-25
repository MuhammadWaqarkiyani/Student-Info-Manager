
    Student s;
cout << "Enter Registration ID: ";
    cin >> s.rId;

    // Collect other student details
    cout << "Enter First Name: ";
    cin >> s.fName;
    cout << "Enter Last Name: ";
    cin >> s.lName;
    cout << "Enter Class: ";
    cin >> s.classes;
    cout << "Enter Mobile Number: ";
    cin >> s.number;

    // Write student information to the file
    outfile << s.rId << " " << s.fName << " " << s.lName << " " << s.classes << " " << s.number << endl;
    cout << "Successfully Added" << endl;

    outfile.close();
}

// Function to update an existing student's information
void updateStudentInformation() {
    string rId;
    cout << "Enter Registration ID to update: ";
    cin >> rId;

    ifstream infile("studentInfo.txt");
    ofstream tempfile("tempInfo.txt");
    if (!infile.is_open() || !tempfile.is_open()) {
        cout << "Error: Unable to open files!" << endl;
        return;
    }
