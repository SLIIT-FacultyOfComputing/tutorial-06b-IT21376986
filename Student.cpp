#include "Student.h"
#include <iostream>

// Assign studentId and name
Student::assignDetails() {
  
}

// Display StudentId and Name
Student::display() {
  
}

#include "Student.h"
#include <cstring>
#include <iostream>

// Assign studentId and name
Student :: assignDetails() {
	studentID = 1010;
	strcpy(name, "kamal");
}

// Display StudentId and Name
Student :: display() {
	cout<<"student id : " <<studentID<<endl;
	cout<<"student name : " <<name<<endl;
}
