#include <iostream>
using namespace std;

class Base {
   public:
    virtual void print() {      //virtual function on class;
        cout << "Base Function" << endl;
    }
};

class Derived : public Base {
   public:
    void print() {
        cout << "Derived Function" << endl;
    }
};

int main() {
    Derived derived1;

    // pointer of Base type that points to derived1
    Base* base1 = &derived1;

    // calls member function of Derived class
    base1->print();

    return 0;
}
// #include <iostream> 
// using namespace std; 
// class A { 
// public: 
//     void say() 
//     { 
//         cout << "Hello world"<<endl; 
//     } 
// }; 
// class B : public virtual A { 
// };   
// class C : public virtual A { 
// };   
// class D : public B, public C { 
// }; 
