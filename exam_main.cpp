// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Exam.h";
using namespace std;

int main()
{
    Exam e1;
    e1.setExamDetails(001, "SPM", 91, 'A');
    e1.displayExamDetails();
    e1.calGrade();

    system("pause>0");
    return 0;
}