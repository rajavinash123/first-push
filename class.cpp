#include <iostream>
using namespace std;
class Hero
{
private:
    int helth;
    public: 
    char level;
    int getHelth()
    {
        return helth;
    }
    char getLevel()
    {
        return level;
    }
    void setHelth(int h)
    {
        helth = h;
    }
    void setLevel(char ch)
    {
        level = ch;
    }
};
int main()
{
Hero h1;
 h1.level=four;
}