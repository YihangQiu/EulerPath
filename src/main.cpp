#include <iostream>
#include "Inout.h"
#include "Euler.h"

int main(int argc, char *argv[])
{
    // printf("*******usage : ./PA1 [0-6]********* \n");
    // printf("*******example: ./PA1 0 ********\n\n");
    int start = atoi(argv[1]);

    People people;
    Relationship relationship;
    Inout inout;

    inout.readInfo(people, relationship);

    Euler euler;

    if (euler.isEulerPath(relationship) == false)
    {
        printf("No Eular Path.\n");
    }
    else
    {
        euler.findEulerPath(relationship, start);
        euler.printEulerPath(people);
        euler.printNamePath(people);
    }
}
