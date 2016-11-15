struct A {};

A()         // default constructor
~A()        // destructor
=(const A&) // copy assignment operator
A(const A&) // copy constructor

template <typename T>
class vector {
    private:
        T*  _a;
        int _s;

    public:
        vector (int s = 0, const T& v = T()) {
            _a = new T[s];
            _s = s;
            fill(_a, _a + _s, v)}

        vector (const vector& rhs) {
//            _a = nullptr;
//            *this = rhs;
            _a = new T[rhs._s];
            _s = rhs._s;
            copy(rhs._a, rhs._a + _s, _a);}

        ~vector () {
            delete [] _a;}

        vector& operator = (vector rhs) {
            swap(_a, rhs._a)
            swap(_s, rhs._s)
/*
            if (*this == rhs)     if (this == &rhs)
                return *this
            delete [] _a;
            _a = new T[rhs._s];
            _s = rhs._s;
            copy(rhs._a, rhs._a + _s, _a);}
*/
            return *this;}

void f (vector<int> t) {...}

int main () {
    vector<int> x(10, 2);
    vector<int> y(x);
    f(x);
    vector<int> z(20, 3);
    x = z;
    x = x;
    return 0;}