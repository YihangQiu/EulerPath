#ifndef PA1_PEOPLE_H
#define PA1_PEOPLE_H
#include <vector>
#include <string>
using namespace std;

class People
{
private:

public:
    vector<string> peopleInfo;
    vector<string> peopleInfo1;
    vector<string> splitInfo(string&);
    void getAllName();
    vector<string> allName;
    vector<string> allYear;
    People() = default;
    ~People() = default;
};




#endif //People.h