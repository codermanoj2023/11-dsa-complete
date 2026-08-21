// A class should be open for extension but closed for modification

#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() = 0;
};

class Circle : public Shape {
public:
    void area() override {
        cout << "Calculating circle area\n";
    }
};

class Rectangle : public Shape {
public:
    void area() override {
        cout << "Calculating rectangle area\n";
    }
};

class Triangle : public Shape {
public:
    void area() override {
        cout << "Calculating triangle area\n";
    }
};

int main() {
    Shape* s1 = new Circle();
    Shape* s2 = new Rectangle();
    Shape* s3 = new Triangle();

    s1->area();
    s2->area();
    s3->area();

    delete s1;
    delete s2;
    delete s3;

    return 0;
}