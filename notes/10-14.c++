benefits of use the heap are:
    lifetime transcends scope
    runtime size

memory management
    1. be careful
    2. garbage collector
    3. Valgrind, memory checker
    4. encapsulate new / delete in constructor / destructor

template <typename T>
class vector {
    private:
        T* _a;
        int _s;
    public:
        vector () {
            _a = nullptr;
            _s = 0;}
        vector (int s) {
            _a = new T[s];
            _s = s;
            fill(_a, _a + _s, T())