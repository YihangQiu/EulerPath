#ifndef PA1_INOUT_H
#define PA1_INOUT_H

#include <string>
#include <vector>
#include "People.h"
#include "Relationship.h"



class Inout
{
private:
    int ID;
    char name;
    int year;

public:
    Inout() = default;
    ~Inout() = default;
    void readInfo(People&,Relationship&);
};

#endif