Object Model

Java
    built-in types on the heap?
    yes, indirectly via user types
    user-types on the stack
    no
    A x;         // reference
    A x = new A;

C++
    user-types be on the stack?
    yes
    A x; // ok, and is an object
    built-in type on the heap?
    yes
    int* p = new int;

class B extends class A

Java
    B x = new A; // not ok
    A x = new B; // ok, lose some info

C++
    B* p = new A; // not ok
    A* p = new B; // ok, lose some info

AbstractCell
    ConwayCell
    FredkinCell

vector<CC> x(s, CC(...));
CC(...), once
CC(CC),  s times

vector<AC> x(s, CC(...)); // maybe ok, but not useful

vector<AC*> x(s, CC(...));     // not ok
vector<AC*> x(s, new CC(...)); // ok, but not useful
CC(...), once

vector<AC*> x(s);
fill(begin(x), end(x), new CC(...)); // ok, but not useful
CC(...), once

{
vector<AC*> x(s);
loop
    x[i] = new CC(...);
...
delete x[j]
x[j] = new FC(...);
...
loop
    delete x[i];
}

class Cell {
    private:
        AC* _p;

    public:
        Cell (AC* p) {
            _p = p;}

        ~Cell () {
            delete _p;}

        copy constructor
        copy assignment operator

int main () {
    Cell x = new CC(...);
    Cell y = new FC(...);
    Cell z = x;           // copy   CC
    z = y;                // delete CC, copy FC

    vector<C> x(s, C(new CC(...)));
    CC(...), once
    C(AC*),  once
    C(C),    s times
    CC(CC),  s times
    ~C(),    once
    ~CC(),   once

    vector<AC*> x(s, new CC(...)); // ok, but not useful
    vector<C>   x(s, new CC(...)); // ok, very useful

    Life<CC> x;
    Life<FC> y;
    Life<C>  z;