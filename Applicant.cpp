#include <iostream>
#include <string>
#include "Applicant.h"
using namespace std;

Applicant::Applicant()
{	cout << "Enter Applicant ID: ";
	cin >> aID;

	cout << "Enter Applicant Name: ";
	cin >> aName;

	cout << "Enter Applicant mobile number: ";
	cin >> mobileNO;

	cout << "Enter Applicant Email: ";
	cin >> email;

	cout << "Enter Applicant Address: ";
	cin >> address;

	cout << "Enter Applicant Username: ";
	cin >> username;

	cout << "Enter Applicant Password: ";
	cin >> password;
	cout << "\n";
}

int Applicant::printApplicantDetails()
{
	cout << "Applicant ID: " << aID << endl;
	cout << "Applicant Name: " << aName << endl;
	cout << "Applicant mobile number: " << mobileNO << endl;
	cout << "Applicant Email: " << email << endl;
	cout << "Applicant Address: " << address << endl;
	cout << "Applicant Username: " << username << endl;
	cout << "Applicant Password: " << password << endl;
	cout << "\n";
    return 0;
}

Applicant::~Applicant()
{
	cout << "Memory Deallocation...!";
	cout << "\n";
}
