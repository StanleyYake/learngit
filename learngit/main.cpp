#include <iostream>
#include"Animal.h"
#include"fish.h"
using namespace std;

void dplay(Animal* a)
{
    a->breathe();
}

int main()
{
    Fish fi;
    dplay(&fi);
    return 0;
}
