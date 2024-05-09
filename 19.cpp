#include <iostream>

class Animal 
{
public:
    virtual void Voice()
    {
        std::cout << "Some animal sound" << std::endl;
    }
};

class Dog : public Animal 
{
public:
    void Voice() override 
    {
        std::cout << "Woof!" << std::endl;
    }
};

class Cat : public Animal 
{
public:
    void Voice() override 
    {
        std::cout << "Meow!" << std::endl;
    }
};

class Cow : public Animal 
{
public:
    void Voice() override 
    {
        std::cout << "Moo!" << std::endl;
    }
};

int main() {
    const int numAnimals = 3;
    Animal* animals[numAnimals];

    animals[0] = new Dog();
    animals[1] = new Cat();
    animals[2] = new Cow();

    for (int i = 0; i < numAnimals; i++)
    {
        animals[i]->Voice();
    }

    for (int i = 0; i < numAnimals; i++)
    {
        delete animals[i];
    }

    return 0;

}