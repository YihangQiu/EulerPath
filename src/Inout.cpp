#include "Inout.h"
#include "Euler.h"
#include <iostream>
#include <fstream>
#include <assert.h>
#include "People.h"
#include "Relationship.h"

using std::cout;
using std::endl;
using std::ifstream;
using std::string;

void Inout::readInfo(People &P, Relationship &R)
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
                R.relationInfo.push_back(a - 48);
            }
        }
        R.trans2D(R.relationInfo);
        R.relationInfo.clear();
    }
    inFile2.close();
}

