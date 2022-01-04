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
   cout << ("Enter LRN: ");
   cin >> lrn;
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

   c.address = address;
   c.age = age;
   c.birthday = birthday;
   c.birthplace = birthplace;
   c.bt = bt;
   c.cd = cd;
   c.d = d;
   c.dominant_hand = dominant_hand;
   c.gender = gender;
   c.grade = grade;
   c.height = height;
   c.lrn = lrn;
   c.name = name;
   c.pn = pn;
   c.ps = ps;
   c.religion = religion;
   c.sa = sa;
   c.section = section;
   c.tn = tn;
   c.weight = weight;

   gth.fdc = fdc;
   gth.fn = fn;
   gth.fo = fo;
   gth.ga = ga;
   gth.gc = gc;
   gth.gn = gn;
   gth.gr = gr;
   gth.mcd = mcd;
   gth.mn = mn;
   gth.mo;

    cin.clear();
    fflush(stdin);
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

   cout << "REMINDER FOR THOSE YOU QUALIFIED. YOU MUST MAINTAIN AN 80+ AVERAGE GRADE.";

   m.fi = fi;
   m.mi = mi;
   m.ti;



}

void StudentEnrollmentSystem::joinOrganizations(){
    int orgz;

    cout << "===================================================\n";
    cout << "=====Choose your preferred school organization=====\n";
    cout << "===================================================\n";
    cout << "1. Dance Troupe\n";
    cout << "2. Glee Club\n";
    cout << "3. Basketball Club\n";
    cout << "4. Boy Scouts of the Philippines\n";
    cout << "5. Girl Scouts of the Philippines\n";
    cout << "Organization No. ";
    cin >> orgz;

    switch(orgz){
    case 1:
        cout << "+++++DANCE TROUPE EVENTS+++++\n";
        cout << "-Practice\n";
        cout << "-Outside School Competitions\n";
        cout << "-Intermission number to numerous events\n";
        cout << "YOU ARE NOW A MEMBER OF THE SCHOOL'S DANCE TROUPE\n";
        break;
    case 2:
        cout << "+++++GLEE CLUB EVENTS+++++\n";
        cout << "-Practice\n";
        cout << "-School Competition\n";
        cout << "-Intermission number to numerous events\n";
        cout << "YOU ARE NOW A MEMBER OF THE SCHOOL'S GLEE CLUB\n";
        break;
    case 3:
        cout << "+++++BASKETBALL CLUB EVENTS+++++\n";
        cout << "-Practice\n";
        cout << "-Intramurals\n";
        cout << "-Outside School Competitions\n";
        cout << "YOU ARE NOW A MEMBER OF THE SCHOOL'S BASKETBALL CLUB\n";
        break;
    case 4:
        cout << "+++++BOY SCOUTS OF THE PHILIPPINES EVENTS+++++\n";
        cout << "-Disaster Drills Assistance\n";
        cout << "-Jamboree\n";
        cout << "-Overnight Campings\n";
        cout << "-Color Bearers in important events\n";
        cout << "-Law and Order in school events\n";
        cout << "YOU ARE NOW A MEMBER OF THE BOY SCOUTS OF THE PHILIPPINES\n";
        break;
    case 5:
        cout << "+++++GIRL SCOUTS OF THE PHILIPPINES EVENTS+++++\n";
        cout << "-Disaster Drills Assistance\n";
        cout << "-Overnight Campings\n";
        cout << "-Volunteering to social works\n";
        cout << "-Law and Order in school events\n";
        cout << "YOU ARE NOW A MEMBER OF THE GIRL SCOUTS OF THE PHILIPPINES\n";
        break;







    }
    m.orgz;
}
