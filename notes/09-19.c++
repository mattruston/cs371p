software contracts between algorithms and containers

write algorithms that demand the  WEAKEST   iterator
write containers that provide the STRONGEST iterator

iterators are really glue

input
output
forward
bidirectional
random access

template <typename II1, typename II2>
bool equal (II1 b, II1 e, II2 x) {
    while (b != e) {
        if (*b != *x)
            return false;
        ++b;
        ++x;}
    return true;}

int    a[] = {2, 3, 4}
double b[] = {2, 3, 4}
cout << (a == b);           // false
cout << equal(a, a + 3, b); // true, II1 -> int*, II2 -> double*

In Java

List interface
    get(index)

ArrayList:  O(1) get
LinkedList: O(n) get
Vector:     O(1) get
...

sort (quicksort) uses List

sort with ArrayList  becomes n log n
sort with LinkedList becomes n^2 log n

In C++

sort (quicksort) use random access iterators

sort with vector becomes n log n
sort with list   does not compile

template <typename II, typename OI>
OI copy (II b, II e, OI x) {
    while (b != e) {
        *x = *b;
        ++b;
        ++x;}
    return x;}

template <typename I, typename T>
void fill (FI b, FI e, const T& v) {
    while (b != e) {
        *b = v;
        ++b;}}