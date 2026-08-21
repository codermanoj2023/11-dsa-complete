// An object of a child class should be able to replace an object of its parent class without breaking the program.
#include <iostream>
using namespace std;

class Bird {
public:
    virtual void eat() {
        cout << "Bird is eating\n";
    }

    virtual ~Bird() = default;
};

class FlyingBird : public Bird {
public:
    virtual void fly() {
        cout << "Flying...\n";
    }
};

class Sparrow : public FlyingBird {
};

class Penguin : public Bird {
};

int main() {
    Sparrow s;
    Penguin p;

    s.eat();
    s.fly();

    p.eat();

    return 0;
}