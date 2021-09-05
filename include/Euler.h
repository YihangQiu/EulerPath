#ifndef PA1_EULER_H
#define PA1_EULER_h
#include "Relationship.h"
#include "People.h"
#include <stack>
using std::stack;

class Euler
{
private:
    stack<int> result;
    stack<int> resultNameIndex;

public:
    Euler() = default;
    ~Euler() = default;
    bool isEulerPath(Relationship &);
    void findEulerPath(Relationship &, const int &);
    void printEulerPath(People &);
    void printNamePath(People &);
};

#endif