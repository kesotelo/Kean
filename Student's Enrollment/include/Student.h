#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include <iostream>

using namespace std;


class Student
{
    public:
        Student();
        virtual ~Student();
        int grade, age, mi, fi, ti, pn, lrn;
        float height, weight;
        string  mn, mcd , fn , mo , fo, fdc;
        string name, birthday, gender, address, section, birthplace, civil_status, dominant_hand, religion, cd, tn, bt;
        string d , orgz, ps;
        string sn = "(Pag-uusapan pa)";
        string sa = "(Di pa rin alam kung saan)";
        string gn, gr, gc, ga;
    protected:

    private:
};

#endif // STUDENT_H
