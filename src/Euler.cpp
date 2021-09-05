#include "Euler.h"
#include <iostream>

bool Euler::isEulerPath(Relationship &R)
{
    vector<vector<int>> E;
    vector<int> e;
    int inDegree = 0, outDegree = 0;
    int count = 0;
    while (count != R.getRelationSize())
    {
        for (int i = 0; i != R.getRelationSize(); ++i)
        {
            if (R.getRelation2D(count, i) == 1)
            {
                ++outDegree;
            }
            if (R.getRelation2D(i, count) == 1)
            {
                ++inDegree;
            }
        }
        e.push_back(inDegree);
        e.push_back(outDegree);
        inDegree = 0, outDegree = 0;
        E.push_back(e);
        e.clear();
        ++count;
    }
    // for (int i = 0; i != 7; i++)
    // {
    //     cout << "E[" << i << "][0] ：" << E[i][0] << "\t E[" << i <<"][1] : " << E[i][1] << endl;
    // }
    int inLabel = 0, outLable = 0;
    for (auto &Degree : E)
    {
        if (inLabel != 2 && outLable != 2)
        {
            if (Degree[0] == Degree[1])
            {
                continue;
            }
            if (Degree[0] == Degree[1] + 1)
            {
                ++inLabel;
            }
            else if (Degree[0] == Degree[1] - 1)
            {
                ++outLable;
            }
            else if (Degree[0] != Degree[1])
            {
                ++outLable;
                ++inLabel;
            }
        }
    }
    //cout << "the inlabel and outlabel is : " << inLabel << "\t" << outLable << endl;

    if (inLabel == 0 && outLable == 0)
    {
        //cout << "it is an Euler cycle" << endl;
        return true;
    }
    else if (inLabel == 1 && outLable == 1)
    {
        //cout << "it is an Euler path but not an Euler cycle " << endl;
        return true;
    }
    else
    {
        //cout << "No Eular Path" << endl;
        return false;
    }
}

void Euler::findEulerPath(Relationship &R, const int &startPoint)
{
    for (size_t i = 0; i != 7; ++i)
    {
        if (R.getRelation2D(startPoint, i))
        {
            R.setRelation2D(startPoint, i);
            R.setRelation2D(i, startPoint);
            findEulerPath(R, i);
        }
    }
    result.push(startPoint);
}

void Euler::printEulerPath(People &P)
{
    resultNameIndex = result;
    cout << "The Euler Path is: ";
    while (!result.empty())
    {
        if (result.size() != 1)
        {
            cout << result.top() << " -> ";
        }
        else
        {
            cout << result.top() << endl;
        }
        result.pop();
    }
}

void Euler::printNamePath(People &P)
{
    P.getAllName();
    cout << "The Corresponding People Info is: ";
    while (!resultNameIndex.empty())
    {
        if (resultNameIndex.size() != 1)
        {
           cout << P.allName[resultNameIndex.top()] << "(" << P.allYear[resultNameIndex.top()] << ")"<<" -> " ; 
        }
        else
        {
            cout << P.allName[resultNameIndex.top()] << "(" << P.allYear[resultNameIndex.top()] << ")" << endl;
        }
        resultNameIndex.pop();
    }
}
