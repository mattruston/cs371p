in Java
    to be iterable means
        to respond to iterator() with
        an object that implements the interface Iterable

in C++
    to be iterable means
        to respond to begin() and end() with
        an object that responds to *, ++, etc.

distance() is O(1) with a random access iterator
distance() is O(n) with a weaker iterator
distance() is not defined with an output iterator

the syntax of a lambda is:
    a capture list (by value or by reference)
    an argument list
    ->
    a return type
    a body

back_inserter() returns an output iterator that when written to results in a push_back() on the underlying container

template <typename II, typename UP>
bool all_of (II b, II e, UP f) {
    while (b != e) {
        if (!f(*b))
            return false;
        ++b;}
    return true;}