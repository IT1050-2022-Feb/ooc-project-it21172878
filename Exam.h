#pragma once
#include <string>
using namespace std;

class Exam
{
private:
	int Eid;
	string sub;
	float mark;
	char grade;

public:
	void setExamDetails(int exID, string exSub, float exMark, char exGrade);
	int displayExamDetails();
	int calGrade();
};

