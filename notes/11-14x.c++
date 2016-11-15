struct A {
    void f (int) {}
    virtual void g (int) {}};

struct B : A {
    void f (int) {}
    void g (int) {}};

int main () {
    A* p;
    if (...)
        p = new A;
    else
        p = new B;
    p->f(2);
    p->g(2);

bool equals (const shape& rhs) {
    if (const circle* p = dynamic_cast<const circle*>(&rhs))
        return shape::equals(rhs) && (_r == p->_r);
    return false;}

struct A {
    virtual void f (long) {}};

struct B : A {
    void f (int) override {}};

int main () {
    A* p;
    if (...)
        p = new B;
    else
        p = new C;
    p->f(2);

A* p = new B;
A* q = new C;
*p = *q; // not ok
delete p;
p = q->clone();

struct A {
    virtual A* clone () const = 0;};

struct B : A {
    A* clone () const {
        return new B(*this);}}



















