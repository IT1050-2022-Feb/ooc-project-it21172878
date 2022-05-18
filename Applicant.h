#include <string>
using namespace std;

class Applicant
{
private:
	int aID;
	string aName;
	int mobileNO;
	string email;
	string address;
	string username;
	string password;

public:
	Applicant();
	int printApplicantDetails();
	~Applicant();
};

