In Java

void f (double) {...}

void h (int) {...}

void g () {
    f(2);    // promotion, ok
    h(2.34); // demontion, not ok

In C++

promotion and demotion, ok

void f (string s) {...}

void g () {
    f("abc"); ok, because C string -> C++ string

int i = 2;
int j = i;
++j;
cout << i << " " << j; // 2 3

two tokens: * &
two contexts: next to a type, next to a variable

int  i = 2;
int* p = &i; // &2, not ok, must be an l-value
// ++p;      // legal, but unwanted here
++*p;        // ++2, not ok; ++i, not ok; must be a pointer
cout << i;   // 3

if you can take it's address, that's what makes it an l-value

& needs an l-value
* needs a pointer

int  i = 2;
int& r = i; // &i, not ok; 2, not ok; must be an lvalue
++r;
cout << i;  // 3

int j = 10;

r = &j; // not ok
r = j;  // same as i = j;
r = 5;  // same as i = 5;

++&r;   // ++&i; not ok