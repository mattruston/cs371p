int i = 2;
int j = i;   // copy of i

int* p = &i;
int* q = p;  // copy of p

int  i = 2;
int  j = 3;
int& k = i + j; // not ok, not an l-value

in Java

class A {
    public void f (...) {...}    // anywhere has access
    protected void g (...) {...} // descendants have access
    private void h (...) {...}   // only A itself has access
    void x (...) {...}}          // package access

in C++

struct A {
    void f (...) {...}}; // public

class B {
    void g (...) {...}}; // private

convention
    everything is public, use struct
    otherwise use class

enum color  {red, green};
enum color2 {red, green}; // not ok

enum class color3 {red, green};
enum class color4 {red, green}; // ok

void f (color c) {
    ...}

int main () {
    f(color3::red); // ok
    f(334343);      // not ok

object-oriented languages are trying to help
make compile time errors out of run time errors