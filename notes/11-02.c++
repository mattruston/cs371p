my_vector (my_vector&& rhs) :
        _a (move(rhs._a)),
        _b (rhs._b),
        _e (rhs._e) {
    rhs._b = nullptr;
    rhs._e = nullptr;}

my_vector& operator = (const my_vector& rhs) {
    my_vector that(rhs);
    swap(that);
    return *this;}

my_vector& operator = (my_vector&& rhs) {
    my_vector that(move(rhs));
    swap(that);
/*
    my_vector that;
    that.swap(rhs);
    swap(that);
*/
/*
    my_destroy(_a, _b, _e);
    _a.deallocate(_b, size());}
    _a = move(rhs._a);
    _b = rhs._b;
    _e = rhs._e;
    rhs._b = nullptr;
    rhs._e = nullptr;
*/
    return *this;}