#include<iostream>
using namespace std;
class Animal{
    public :
    int x = 10; //data member of class
    int y = 20;
    void add(int x, int y)
    {
        int res = x + y;
        cout<<res<<endl;
    }
    void display()
    {
        cout<<"This is our first class"<<endl;
    }

};
int main()
{
    Animal obj;
    obj.display();
    return 0;
}
/*
oops concept:
class : 
object : 
inheritance:
Polymorphism:
Encapsulation:
Abstraction:
Message passing:
Dynamic Binding:

Class : Template or Blueprint which is made for a particular purpose
Object : instance of class

How to create class in C++:
class - keyword - use to create class

Access Modifier : 
public  - Access to everyone either withing the class or outside class and packages
protected - Access within class and inherited child within package
private - Access within the class only

*/