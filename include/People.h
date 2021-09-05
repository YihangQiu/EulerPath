#ifndef PA1_PEOPLE_H
#define PA1_PEOPLE_H
#include <vector>
#include <string>
using namespace std;

class People
{
private:
    vector<vector<int>> relation2D;

public:
    vector<string> peopleInfo;
    vector<string> peopleInfo1;
    vector<string> splitInfo(string&);
    void getAllName();
    vector<string> allName;
    vector<string> allYear;
    People() = default;
    ~People() = default;

    vector<int> relationInfo;
    void trans2D(vector<int> v)
    {
        relation2D.push_back(v);
    }
    int getRelation2D(int a, int b)
    {
        return relation2D[a][b];
    }
    int setRelation2D(int a, int b)
    {
        return relation2D[a][b] = 0;
    }
    size_t getRelationSize()
    {
        return relation2D.size();
    }

};


#endif //People.h