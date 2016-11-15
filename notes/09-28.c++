Java is a tree,   Object as the root
C++  is a forest, no root

in Java which methods are required to exhibit refinement overriding
    constructors

in C++ which methods are required to exhibit refinement overriding
    constructor
    destructors

in Python there are no methods that are required to exhibit refinement overriding

A -> B -> C

order of execution of the constructors: A B C
order of execution of the destructors:  C B A

software contracts arise in OOP languages

runtime error -> compile error

type systems
enums
in C++, pass by reference
algorithm / containers via iterators
    in C++, compile time
    in J++, performance

T x;     // T's default constructor,      T()
T y(x);  // T's copy constructor,         T(const T&)
T y = x; // T's copy constructor,         T(const T&)
y = x;   // T's copy assignment operator, =(const T&)

template <typename T>
class range_iterator {
    private:
        T _v;

    public:
        // range_iterator (T  v)         // bad, pass by value, makes second copy
        // range_iterator (T& v)         // bad, threatens to change v, doesn't accept r-values
        // range_iterator (const T& v) {
        //    _v = v;}                   // bad, T() followed by =(const T&)
        range_iterator (const T& v) :
            _v (v)                       // good, T(const T&), member initialization list
            {}

        range_iterator& operator ++ () {
            ++_v;
            return *this;}

        bool operator == (const range_iterator& rhs) const { // first  const protects right-hand side
            return _v == rhs._v;}                            // second const protects left-hand  side

++x
x.operator++()

x == y
x.operator==(y)