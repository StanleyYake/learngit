#ifndef ANIMAL_H
#define ANIMAL_H
class Animal
{
public:
    Animal(int weight,int height);
    void eat();
    void sleep();
    virtual void breathe();
};
#endif // ANIMAL_H
