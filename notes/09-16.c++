equal(a + 25, a + 30, b + 35)

a must have at least 30 elements
b must have at least 40 elements

template <typename T>
bool equal (T b, T e, T x) {
    while (b != e) {
        if (*b != *x)
            return false;
        ++b;
        ++x;}
    return true;}

template <typename T>
class list {
    ...
    class iterator {
        ... // *
            // !=
            // ++

int main () {
    double m[] = {2, 3, 4};
    double n[] = {2, 3, 4};
    cout << equal(m, m + 3, n); // T -> double; T -> double*

    list<int> p = {2, 3, 4};
    list<int> q = {2, 3, 4};
    cout << equal(begin(p), end(p), begin(q)); // T-> list<int>::iterator

input iterator
    ++, ==, !=, * (read only)
output iterator
    ++, * (write only)
forward iterator
    ++, ==, !=, * (read write)
bidirectional iterator
    <forward>, --
random access iterator
    <bidirectional>, [], +, <, >, <=, >=

vector, deque
    random access iterator
list
    bidirectional iterator
forward_list
    forward iterator
ostream_iterator
    output iterator
istream_iterator
    input iterator

algorithms should demand  the WEAKEST   iterators
containers should provide the STRONGEST iterators