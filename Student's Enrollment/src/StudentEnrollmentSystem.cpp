#include "StudentEnrollmentSystem.h"
#include <iostream>
#include <string>

#include "Core.h"
#include "GoodToHave.h"
#include "Minor.h"

using namespace std;

StudentEnrollmentSystem::StudentEnrollmentSystem()
{
    //ctor
}

StudentEnrollmentSystem::~StudentEnrollmentSystem()
{
    //dtor
}

void StudentEnrollmentSystem::addStudent(){

    string name, birthday, gender, address, section, birthplace, civil_status, dominant_hand, religion, cd, tn, bt, d, ps;
    float height, weight;
    int grade, age, pn, lrn;

    string sa = "(Di pa rin alam kung saan)";
    string sn = "(Pag-uusapan pa)";

    string  mn, mcd , fn , mo , fo, fdc;
    string gn, gr, gc, ga;

    cout << "Welcome to online enrollment of " << sn << endl;
    cout << "REMINDER: PLEASE CAPITALIZED ALL FIRST LETTER WHEN FILLING UP. \n";
    cout << "If transferee please state your previous school, if not put (Just put not).\n";

   getline(cin, ps);
   cout << "Enter your name: ";
   getline(cin, name);
   cout << "Enter address: ";
   getline(cin, address);
   cout << "Enter birthdate: ";
   getline(cin, birthday);
   cout << "Enter birthplace: ";
   getline(cin, birthplace);
   cout << "Enter your gender: ";
   getline(cin, gender);
   cout << "What's your dominant hand: ";
   getline(cin, dominant_hand);
   cout << "Civil Status: ";
   getline(cin, civil_status);
   cout << ("Religion: ");
   getline(cin, religion);
   cout << "Contact number or email(If none type N/A): ";
   getline(cin, cd);
   cout << "Telephone number(If none type N/A): ";
   getline(cin, tn);
   cout << "If you have a disability please state it. If none Put (N/A): ";
   getline(cin, d);
   cout << "Enter mother's name: ";
   getline(cin, mn);
   cout << "Enter mother's contact details(Email or phone number): ";
   getline(cin, mcd);
   cout << "Enter mother's occupation: ";
   getline(cin, mo);
   cout << "Enter father's name: ";
   getline(cin, fn);
   cout << "Enter father's contact details(Email or phone number): ";
   getline(cin, fdc);
   cout << "Enter father's occupation: ";
   getline(cin, fo);
   cout << "Enter guardian's name: ";
   getline(cin, gn);
   cout << "Relationship to guardian: ";
   getline(cin, gr);
   cout << "Contacts of guardian(Either cellphone # or email): ";
   getline(cin, gc);
   cout << "Address of guardian: ";
   getline(cin, ga);
   cout << "Enter blood type: ";
   cin >> bt;
   cout << "Enter weight(in kg): ";
   cin >> weight;
   cout << "Enter height(in cm): ";
   cin >> height;
   cout << "Enter your age: ";
   cin >> age;
   cout << "====================================================== \n";
   cout << "SECTIONS \n" << "Diamond \n" << "Jade \n" << "Ruby \n" << "Emerald \n";
   cout << "====================================================== \n";
   cout << "Please select your designated section: ";
   cin >> section;

   cout << "====================================================== \n";
   cout << "GRADE \n" << "1 \n" << "2 \n" << "3 \n" << "4 \n" << "5 \n" << "6 \n";
   cout << "====================================================== \n";






   cout << "Hello!! " << name << "," " Enter your grade level: ";
   cin >> grade;


   cout << "Please wait your schedule is being processed \n"  << "............ \n" << "............ \n" << "............ \n" << "............ \n";
   cout << "Your schedule is down below. \n";
   cout << " " << endl;





    switch(grade){
   case 1:
    cout << "Basic information......................................................................... \n" << "Name: " << name;
    cout << " " << endl;
    cout << "\nBirthdate: " << birthday;
    cout << " " << endl;
    cout << "\nAge: " << age;
    cout << " " << endl;
    cout << "\nContacs of student: " << cd;
    cout << " " << endl;
    cout << "\nTelephone number: " << tn;
    cout << " " << endl;
    cout << "\nAdress: " << address;
    cout << " " << endl;
    cout << "\nGender: " << gender;
    cout << " " << endl;
    cout << "\nDisability: " << d;
    cout << " " << endl;
    cout << "\nReligion: " << religion;
    cout << " " << endl;
    cout << "\nGuardian's details: " << "\nName: " << gn;
    cout << " " << endl;
    cout << "\nContacts: " << gc;
    cout << " " << endl;
    cout << "\nAddress: " << ga;
    cout << " " << endl;
    cout << " " << endl;
    cout << " " << endl;
    cout << " " << endl;
    cout << " " << endl;
    cout << " " << endl;
    cout << " " << endl;
    cout << "\nHi " << name + ",";
    cout << "\nYou are now enrolled at " << grade << "-" << section + "\n" ;
    cout << " " << endl;
    cout << "Monday: Math 9am-10am, break time 10am-10:30am English 10:30am-11:30am, 11:30am-12:30pm Filipino\n";
    cout << " " << endl;
    cout << "Wednesday: HEKASI 9am-10am, break time 10am-10:30am GMRC 10:30am-11:30am, 11:30am-12:30pm HE/TLE \n";
    cout << " " << endl;
    cout << "Friday: Science 9am-10am, break time 10am-10:30am PE10:30am-11:30am, 11:30am-12:30pm Religion\n";
    cout << " " << endl;







    break;

   case 2:
   cout << "Basic information......................................................................... \n" << "Name: " << name;
   cout << " " << endl;
    cout << "\nBirthdate: " << birthday;
    cout << " " << endl;
    cout << "\nAge: " << age;
    cout << "\nContacs of student: " << cd;
    cout << " " << endl;
    cout << "\nTelephone number: " << tn;
    cout << " " << endl;
    cout << "\nAdress: " << address;
    cout << " " << endl;
    cout << "\nGender: " << gender;
    cout << " " << endl;
    cout << "\nDisability: " << d;
    cout << " " << endl;
    cout << "\nReligion: " << religion;
    cout << " " << endl;
    cout << "\nGuardian's details: " << "\nName: " << gn;
    cout << " " << endl;
    cout << "\nContacts: " << gc;
    cout << " " << endl;
    cout << "\nAddress: " << ga;
    cout << " " << endl;
    cout << " " << endl;
    cout << " " << endl;
    cout << " " << endl;
    cout << " " << endl;
    cout << " " << endl;
    cout << " " << endl;


    cout << "\nHi " << name + ",";
    cout << " " << endl;
    cout << "\nYou are now enrolled at " << grade << "-" << section + "\n"  ;
    cout << " " << endl;
    cout << "Monday: HEKASI 9am-10am, break time 10am-10:30am PE 10:30am-11:30am 11:30am-12:30pm GMRC\n";
    cout << " " << endl;
    cout << "Wednesday: Filipino 9am-10am, break time 10am-10:30am Math 10:30am-11:30am 11:30am-12:30pm English\n";
    cout << " " << endl;
    cout << "Friday: Religion 9am-10am, break time 10am-10:30am HE/TLE 10:30am-11:30am 11:30am-12:30pm Science \n";


    break;

   case 3:
    cout << "Basic information......................................................................... \n" << "Name: " << name;
    cout << " " << endl;
    cout << "\nBirthdate: " << birthday;
    cout << " " << endl;
    cout << "\nAge: " << age;
    cout << " " << endl;
    cout << "\nContacs of student: " << cd;
    cout << " " << endl;
    cout << "\nTelephone number: " << tn;
    cout << " " << endl;
    cout << "\nAdress: " << address;
    cout << " " << endl;
    cout << "\nGender: " << gender;
    cout << " " << endl;
    cout << "\nDisability: " << d;
    cout << " " << endl;
    cout << "\nReligion: " << religion;
    cout << " " << endl;
    cout << "\nGuardian's details: " << "\nName: " << gn;
    cout << " " << endl;
    cout << "\nContacts: " << gc;
    cout << " " << endl;
    cout << "\nAddress: " << ga;
    cout << " " << endl;
    cout << " " << endl;
    cout << " " << endl;
    cout << " " << endl;
    cout << " " << endl;
    cout << " " << endl;
    cout << " " << endl;


    cout << "\nHi " << name + ",";
    cout << "\nYou are now enrolled at " << grade << "-" << section + "\n"  ;
    cout << " " << endl;
    cout << "Monday: Science 9am-10am, break time 10am-10:30am English 10:30am-11:30am 11:30am-12:30pm Filipino\n";
    cout << " " << endl;
    cout << "Tuesday: GMRC 9am-10am, break time 10am-10:30am Math 10:30am-11:30am 11:30am-12:30pm PE\n";
    cout << " " << endl;
    cout << "Wednesday: Religion 9am-10am, break time 10am-10:30am HE/TLE 10:30am-11:30am 11:30am-12:30pm HEKASI\n";
    cout << " " << endl;
    cout << " " << endl;
    cout << " " << endl;
    cout << " " << endl;
    cout << " " << endl;
    cout << " " << endl;
    cout << " " << endl;
    break;



   case 4:
   cout << "Basic information......................................................................... \n" << "Name: " << name;
   cout << " " << endl;
    cout << "\nBirthdate: " << birthday;
    cout << " " << endl;
    cout << "\nAge: " << age;
    cout << " " << endl;
    cout << "\nContacs of student: " << cd;
    cout << " " << endl;
    cout << "\nTelephone number: " << tn;
    cout << " " << endl;
    cout << "\nAdress: " << address;
    cout << " " << endl;
    cout << "\nGender: " << gender;
    cout << " " << endl;
    cout << "\nDisability: " << d;
    cout << " " << endl;
    cout << "\nReligion: " << religion;
    cout << " " << endl;
    cout << "\nGuardian's details: " << "\nName: " << gn;
    cout << " " << endl;
    cout << "\nContacts: " << gc;
    cout << " " << endl;
    cout << "\nAddress: " << ga;
    cout << " " << endl;
    cout << " " << endl;
    cout << " " << endl;
    cout << " " << endl;
    cout << " " << endl;
    cout << " " << endl;
    cout << " " << endl;



    cout << "\nHi " << name + ",";
    cout << " " << endl;
    cout << "\nYou are now enrolled at " << grade << "-" << section + "\n"  ;
    cout << " " << endl;
    cout << "Monday: Filipino 9am-10am, break time 10am-10:30am Science 10:30am-11:30am \n";
    cout << " " << endl;
    cout << "Tuesday: GMRC 9am-10am, break time 10am-10:30am Math 10:30am-11:30am \n";
    cout << " " << endl;
    cout << "Wednesday: Religion 9am-10am, break time 10am-10:30am PE 10:30am-11:30am \n";
    cout << " " << endl;


    break;

   case 5:
   cout << "Basic information......................................................................... \n" << "Name: " << name;
   cout << " " << endl;
    cout << "\nBirthdate: " << birthday;
    cout << " " << endl;
    cout << "\nAge: " << age;
    cout << " " << endl;
    cout << "\nContacs of student: " << cd;
    cout << " " << endl;
    cout << "\nTelephone number: " << tn;
    cout << " " << endl;
    cout << "\nAdress: " << address;
    cout << " " << endl;
    cout << "\nGender: " << gender;
    cout << " " << endl;
    cout << "\nDisability: " << d;
    cout << " " << endl;
    cout << "\nReligion: " << religion;
    cout << " " << endl;
    cout << "\nGuardian's details: " << "\nName: " << gn;
    cout << " " << endl;
    cout << "\nContacts: " << gc;
    cout << " " << endl;
    cout << "\nAddress: " << ga;
    cout << " " << endl;
    cout << " " << endl;
    cout << " " << endl;
    cout << " " << endl;
    cout << " " << endl;
    cout << " " << endl;
    cout << " " << endl;


    cout << "\nHi " << name + ",";
    cout << " " << endl;
    cout << "\nYou are now enrolled at " << grade << "-" << section + "\n"  ;
    cout << " " << endl;
    cout << "Monday: English 9am-10am, break time 10am-10:30am Filipino 10:30am-11:30am \n";
    cout << " " << endl;
    cout << "Tuesday: Math 9am-10am, break time 10am-10:30am Science 10:30am-11:30am \n";
    cout << " " << endl;
    cout << "Wednesday: HE/TLE 9am-10am, break time 10am-10:30am GMRC 10:30am-11:30am \n";
    cout << " " << endl;
    cout << "Thursday: PE 9am-10am, break time 10am-10:30am Religion 10:30am-11:30am\n";
    cout << " " << endl;
    break;

  case 6:
   cout << "Basic information......................................................................... \n" << "Name: " << name;
   cout << " " << endl;
    cout << "\nBirthdate: " << birthday;
    cout << " " << endl;
    cout << "\nAge: " << age;
    cout << " " << endl;
    cout << "\nContacs of student: " << cd;
    cout << " " << endl;
    cout << "\nTelephone number: " << tn;
    cout << " " << endl;
    cout << "\nAdress: " << address;
    cout << " " << endl;
    cout << "\nGender: " << gender;
    cout << " " << endl;
    cout << "\nDisability: " << d;
    cout << " " << endl;
    cout << "\nReligion: " << religion;
    cout << " " << endl;
    cout << "\nGuardian's details: " << "\nName: " << gn;
    cout << " " << endl;
    cout << "\nContacts: " << gc;
    cout << " " << endl;
    cout << "\nAddress: " << ga;
    cout << " " << endl;
    cout << " " << endl;
    cout << " " << endl;
    cout << " " << endl;
    cout << " " << endl;
    cout << " " << endl;
    cout << " " << endl;



    cout << "\nHi " << name + ",";
    cout << " " << endl;
    cout << "\nYou are now enrolled at " << grade << "-" << section + "\n"  ;
    cout << " " << endl;
    cout << "Monday: GMRC 9am-10am, break time 10am-10:30am PE 10:30am-11:30am \n";
    cout << " " << endl;
    cout << "Tuesday: Science 9am-10am, break time 10am-10:30am Math 10:30am-11:30am \n";
    cout << " " << endl;
    cout << "Wednesday: PE 9am-10am, break time 10am-10:30am HE/TLE 10:30am-11:30am \n";
    cout << " " << endl;
    cout << "Friday: Religion 9am-10am, break time 10am-10:30am English 10:30am-11:30am\n";


    break;

  default:
    cout << "Wrong input of grade level.\n";
    break;

   }



}

void StudentEnrollmentSystem::addScholarship(){
    int mi, fi , ti;

   cout << "Enter mother's income: ";
   cin >> mi;
   cout << "Enter father's income: ";
   cin >> fi;
   ti = mi + fi;
   if(ti <= 30000){
    cout << "You are qualified for the scholarship \n";
   }else {
   cout << "You're not qualified for the scholarship \n";
   }

   cout << "REMINDER FOR THOSE YOU QUALIFIED. YOU MUST MAINTAIN AN 80+ AVERAGE.";



}
