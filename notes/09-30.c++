template <typename T>
class range_iterator {
     friend bool operator == (const range_iterator& lhs, const range_iterator& rhs) {
        return lhs._v == rhs._v;}

    private:
        T _v;

    public:
//        bool operator == (const range_iterator& rhs) const { // first  const protects right-hand side
//            return _v == rhs._v;}                            // second const protects left-hand  side

        range_iterator operator ++ (int) { // post increment
            range_iterator t = *this;
            ++*this;
            return t;}

C++ friends
    if A declares B a friend
    what can A be? class/type
    what can B be? function, method, class
    friends have access to everything
    friendship is not symmetric
    friendship is not transitive

void f (range_iterator<int> v) {...}

int main () {
    range_iterator<int> x = 2; // only if constructor is NOT explicit
    range_iterator<int> x(2);
    f(x);                      // copy constructor
    f(range_iterator<int>(2)); // copy constructor
    f(2);                      // copy constructor

    ++x;
    x.operator++()

    x++;
    x.operator++(0)

    range_iterator<int> y = 2;

    // with operator==() as a method
    cout << (x == y);
    cout << x.operator==(y);
    cout << (x == 2);
    cout << x.operator==(2);
    cout << (2 == x);
    cout << 2.

    // with operator==() as a function
    cout << (x == y);
    cout << operator==(x, y);
    cout << (x == 2);
    cout << operator==(x, 2);
    cout << (2 == x);
    cout << operator==(2, x);
    