#ifndef PA1_RELATIONSHIP_H
#define PA1_RELATIONSHIP_H
using namespace std;
#include <vector>
#include <string>

class Relationship
{
private:
    vector<vector<int>> relation2D;

public:
    vector<int> relationInfo;
    Relationship() = default;
    ~Relationship() = default;

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

#endif