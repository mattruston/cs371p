if T is a built-in type (int, float, char, ...)
    T a[s];            // O(1)
    fill(a, a + s, v); // O(n) memcpy

if T is a user-defined type
    T a[s];            // O(n) default constructors
    fill(a, a + s, v); // O(n) copy assignment operator

template <typename T>
class vector {
    private:
        T* a;
    ...

vector<int> x(s, v); one linear pass

allocators respond to:
    allocate
    deallocate
    construct
    destroy

allocator<T> x;
T* a = x.allocate(s);      // O(1) allocate space only
loop                       // O(n)
    x.construct(&a[i], v); // copy constructor

vector<T, my_allocator<T>> x(s, v); // specify user allocator type

strategy pattern
    compile time pattern is called policy pattern

allocator<double, 100> x;  // allocator with a 100 byte free store
double* a = x.allocate(3); // looking for a block with 24 bytes

cost of allocate() is O(n) on number of blocks
first fit

if I find:
    < 24 bytes:     failure
    24:             user gets exactly what was requested
    24 to 40 bytes: user gets more than what was requested
    > 40 bytes:     user gets exactly what was requested

x.deallocate(a);

deallocate() is O(1)
coalesce with the blocks behind and ahead

valid() is a class-invariant checker
O(n) on number of blocks