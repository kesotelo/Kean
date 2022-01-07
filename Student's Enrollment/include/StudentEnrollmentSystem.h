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
        static const int numberOfStudents = 5000;
        Core c;
        GoodToHave gth;
        Minor m;

        virtual ~StudentEnrollmentSystem();
        void showEnrolled();
        void addStudent();
        void addScholarship();
        void joinOrganizations();
    protected:

    private:
};

#endif // STUDENTENROLLMENTSYSTEM_H
