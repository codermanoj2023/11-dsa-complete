// High-level classes should not depend directly on low-level classes. Both should depend on abstractions.
#include <iostream>
using namespace std;

class Keyboard {
public:
    virtual void type() = 0;
    virtual ~Keyboard() = default;
};

class MechanicalKeyboard : public Keyboard {
public:
    void type() override {
        cout << "Typing using Mechanical Keyboard\n";
    }
};

class WirelessKeyboard : public Keyboard {
public:
    void type() override {
        cout << "Typing using Wireless Keyboard\n";
    }
};

class Computer {
private:
    Keyboard& keyboard;

public:
    Computer(Keyboard& keyboard) : keyboard(keyboard) {}

    void useKeyboard() {
        keyboard.type();
    }
};

int main() {
    MechanicalKeyboard mechanical;
    WirelessKeyboard wireless;

    Computer computer1(mechanical);
    Computer computer2(wireless);

    computer1.useKeyboard();
    computer2.useKeyboard();

    return 0;
}