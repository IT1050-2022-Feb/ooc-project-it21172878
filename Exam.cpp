#include <iostream>
#include "Exam.h"
using namespace std;

void Exam::setExamDetails(int exID, string exSub, float exMark, char exGrade)
{
    Eid = exID;
    sub = exSub;
    mark = exMark;
    grade = exGrade;

    cout << "Enter Exam ID: ";
    cin >> Eid;

    cout << "Enter Exam Subject: ";
    cin >> sub;

    cout << "Enter Exam Mark: ";
    cin >> mark;
}

int Exam::displayExamDetails()
{
    cout << "\n";
    cout << "Exam ID: " << Eid << endl;
    cout << "Exam Subject: " << sub << endl;
    cout << "Exam Mark: " << mark << endl;
    
    return 0;
}

int Exam::calGrade()
{
    if (mark < 35)
    {
        cout << "Exam Grade: S" << endl;
    }
    else if (mark < 45)
    {
        cout << "Exam Grade: C" << endl;
    }
    else if (mark < 75)
    {
        cout << "Exam Grade: B" << endl;
    }
    else if (mark <= 100)
    {
        cout << "Exam Grade: A" << endl;
    }
    else
    {
        cout << "Invalid mark..!" << endl;;
    }
    return 0;
}
