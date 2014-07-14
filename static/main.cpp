#include <iostream>
using namespace std;

class Point
{
public:
    static void initial()
    {
        x=0;
        y=0;
    }
    void output()
    {
        initial();
    }
private:
    static int x,y;
};

int Point::x=0;
int Point::y=0;

int main()
{
//    Point p;
//    p.output();
//    p.initial();
    Point::initial();
//    Point::output();
    return 0;
}
