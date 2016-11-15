In Java:

class A {
           class B {...} // non-static inner class
    static class C {...}
    ...}

class T {
    public void static main (...) {
        A x   = new A(...);
        A.B y = x.new B(...);
        A.C z = new A.C(...);

class LinkedList {
    static class Node {
        ...}

    class iter implements Iterator {
        ...}

    Iterator iterator () {
        return new iter();}}

In C++:

template <typename T>
class Range {
    private:
        T _b;
        T _e;

    public:
        class iterator {...};

        Range (const T& b, const T& e) :
                _b (b), _e (e)
            {}

        iterator begin () const {
            return iterator(_b);}

        iterator end () const {
            return iterator(_e);}