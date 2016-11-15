bool equals (const Shape& rhs) {
    if (const Circle* p = dynamic_cast<const Circle*>(&rhs))
        return Shape::equals(rhs) && (_r == p->_r);
    return false;}

struct A {
    virtual void f (int)
        {}
    A* clone () const = 0;};

struct B : A {
    void f (int) override
        {}
    A* clone () const {
        return new B(*this;}};

int main () {
    A* p = new B;
    p->f(2);      // B::f
    A* q = new C;

    *p = *q; // not ok
    delete p;
    p = q->clone()


struct A {
    virtual void f (int) final {}
    virtual void g (int) {}
    virtual void h (int) = 0;};























