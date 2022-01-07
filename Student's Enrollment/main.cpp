#include <iostream>
#include <string>
#include<conio.h>

#include "StudentEnrollmentSystem.h"
using namespace std;




int main()
{


    StudentEnrollmentSystem ses;

    int c = -1;

    while(c != 0){
    cout << "Hi, Welcome to our Student enrollment system." << endl;
    cout << "How can we help you?" << endl;

    cout <<"----------------------------------------------" << endl;
    cout <<"(1) Online Enrollment." << endl;
    cout <<"(2) Onsite Enrollment." << endl;
    cout <<"(3) Apply for scholarship" << endl;
    cout <<"(4) Join an organization" << endl;
    cout <<"(5) Show previous enrolled  student info" << endl;
    cout <<"---------------------------------------------" << endl;
    cin >>c;
    system("cls");



    switch(c){
    case 1:
        ses.addStudent();
        break;
        cin.clear();
        fflush(stdin);

    case 2:
        cout << "NOTE: ONSITE ENROLLMENT IS ONLY OPEN DURING MON-FRI 8AM-5PM.";
        break;
        cin.clear();
        fflush(stdin);

    case 3:
        ses.addScholarship();
        cin.clear();
        fflush(stdin);
        break;

    case 4:
        ses.joinOrganizations();
        cin.clear();
        fflush(stdin);
        break;
    case 5:
        ses.showEnrolled();
        cin.clear();
        fflush(stdin);
        break;
    }
}

    return 0;
}
