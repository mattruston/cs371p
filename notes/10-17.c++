template <typename T>
class vector {
    private:
        T*  _a;
        int _s;

    public:
        vector (int s = 0, const T& v = T()) {
            _a = (s == 0) ? nullptr : new T[s];
            _s = s
            fill(_a, _a + _s, v);}

        T* begin () {
            return _a;}

        int size () const {
            return _s;}

        T* end () {
            return _a + _s;}

        T& operator [] (int i) {
            return _a[i];}

        const T& operator [] (int i) const {
            return _a[i];}

begin(x) -> x.begin()