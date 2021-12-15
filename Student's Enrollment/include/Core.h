#ifndef CORE_H
#define CORE_H
#include <iostream>
#include <string>

using namespace std;

class Core
{
    public:
        Core();
        virtual ~Core();
        string name, birthday, gender, address, section, birthplace, civil_status, dominant_hand, religion, cd, tn, bt, d, ps;
        float height, weight;
        int grade, age, pn, lrn;
        string sn ;
        string sa = "(Di pa rin alam kung saan)";

    protected:

    private:
};

#endif // CORE_H
