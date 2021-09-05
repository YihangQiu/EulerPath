#include "People.h"
#include <iostream>

vector<string> People::splitInfo(string &S)
{
    vector<string> words{};
    size_t pos = 0;
    const string space = " ";
    while ((pos = S.find(space)) != string::npos)
    {
        words.push_back(S.substr(0, pos));
        S.erase(0, pos + space.length());
    }
    return words;
    
}

void People::getAllName()
{
    peopleInfo1 = peopleInfo;
    for (size_t i = 0; i < peopleInfo.size(); ++i)
    {
        vector<string> temp;
        temp = splitInfo(peopleInfo[i]);
        allName.push_back(temp[1]);
        allYear.push_back(temp[2]);
    }
}


