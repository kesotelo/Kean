#ifndef STUDENTENROLLMENTSYSTEM_H
#define STUDENTENROLLMENTSYSTEM_H
#include <iostream>
#include <string>

#include "Core.h"
#include "GoodToHave.h"
#include "Minor.h"

using namespace std;

class StudentEnrollmentSystem
{
    public:
        StudentEnrollmentSystem();
        virtual ~StudentEnrollmentSystem();

        void addStudent();
        void addScholarship();
        void SchoolName();
    protected:

    private:
};

#endif // STUDENTENROLLMENTSYSTEM_H
