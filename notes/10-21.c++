template <typename T, typename A = allocator<T>>
class vector {
    private:
        A   _x;
        T*  _a;
        int _s;

    public:
        vector (int s = 0, const T& v = T(), const A& x = A()) :
            _x (x),
            _a (_x.allocate(s)),
            _s (s) {
            for (int i = 0; i != s; ++i)
                _x.construct(_a + i, v);}

        ~vector () {
            for (int i = 0; i != s; ++i)
                _x.destroy(_a + i);
            _x.deallocate(_a, _s);}

vector<int,    allocator<int>>      x(10, 2);
vector<int, my_allocator<int, ...>> y(20, 3);
vector<int>                         z(30, 4);

my_allocator<int, 100> m(...);
vector<int, my_allocator<int, 100>> t(40, 5, m);