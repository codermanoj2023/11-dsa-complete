// A class should not be forced to implement functions that it does not need
#include <iostream>
using namespace std;

class Workable {
public:
    virtual void work() = 0;
    virtual ~Workable() = default;
};

class Eatable {
public:
    virtual void eat() = 0;
    virtual ~Eatable() = default;
};

class Human : public Workable, public Eatable {
public:
    void work() override {
        cout << "Human working\n";
    }

    void eat() override {
        cout << "Human eating\n";
    }
};

class Robot : public Workable {
public:
    void work() override {
        cout << "Robot working\n";
    }
};

int main() {
    Human human;
    Robot robot;

    human.work();
    human.eat();

    robot.work();

    return 0;
}