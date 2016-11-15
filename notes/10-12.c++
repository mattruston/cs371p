T a[] = {2, 3, 4};
T* const a
Ts int constructor 3 times

T a[s] = {2, 3, 4};
Ts int     constructor 3   times
Ts default construct   s-3 times

T a[s]
Ts default construct s times, only if T is a user-defined type

T a[s] = {}
Ts default constructor s times

T x = v;
T y = x; // copy constructor
y = x;   // copy assignment operator

arrays do not have a copy constructor or a copy assignment operator

stack
    compile time size
    lifetime of data is tied to the scope

heap (free store)
    runtime size
    lifetime of data is tied to new / delete

forget to delete
delete too early
delete the wrong address
delete too many times

T* const is a good type of pointer for holding on to heap data