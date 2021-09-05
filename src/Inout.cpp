#include "Inout.h"
#include "Euler.h"
#include <iostream>
#include <fstream>
#include <assert.h>
#include "People.h"

using std::cout;
using std::endl;
using std::ifstream;
using std::string;

void Inout::readInfo(People &P)
{
    ifstream inFile1;
    inFile1.open("/home/yhqiu/pa1/testcase/people.txt");
    assert(inFile1.is_open());
    string s1;
    while (getline(inFile1, s1))
    {
        P.peopleInfo.push_back(s1);
    }
    inFile1.close();

    ifstream inFile2;
    inFile2.open("/home/yhqiu/pa1/testcase/relationship.txt");
    assert(inFile2.is_open());
    string s2;
    while (getline(inFile2, s2))
    {
        for (auto &a : s2)
        {
            if (a == '0' || a == '1')
            {
                P.relationInfo.push_back(a - 48);
            }
        }
        P.trans2D(P.relationInfo);
        P.relationInfo.clear();
    }
    inFile2.close();
}

