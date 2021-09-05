#include <iostream>
#include "Inout.h"
#include "Euler.h"

int main(int argc, char *argv[])
{
    int start = atoi(argv[1]);

    People people;
    Inout inout;

    inout.readInfo(people);

    Euler euler;

    if (euler.isEulerPath(people) == false)
    {
        printf("No Eular Path.\n");
    }
    else
    {
        euler.findEulerPath(people, start);
        euler.printEulerPath(people);
        euler.printNamePath(people);
    }
}
