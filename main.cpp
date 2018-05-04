#include <iostream>

using namespace std;

class A {
public:
        virtual void foo() { cout << "A::foo()" << endl; };
        virtual void bar() { cout << "A::bar()" << endl; };
                void baz() { cout << "A::baz()" << endl; };
};

class B : public A {
public:
        virtual void foo() { cout << "B::foo()" << endl; };
                void bar() { cout << "B::bar()" << endl; };
        virtual void baz() { cout << "B::baz()" << endl; };
};

class C : public B {
public:
        virtual void foo() { cout << "C::foo()" << endl; };
        virtual void bar() { cout << "C::bar()" << endl; };
                void baz() { cout << "C::baz()" << endl; };
};

int main () {
        A* a1 = new B;
        a1->foo();      //B::foo()
        a1->bar();      //B::bar()
        a1->baz();      //A::baz()

        A* a2 = new C;
        a2->foo();      //C::foo()
        a2->bar();      //C::bar()
        a2->baz();      //A::baz()
}
