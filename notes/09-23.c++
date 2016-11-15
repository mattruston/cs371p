template <typename II1, typename II2>
double rmse (II1 b, II1 e, II2 c) {
    double sum = 0;
    int    s   = 0;
    while (b != e) {
        double d = (*b - *c);
        sum += d * d;
        ++b;
        ++c;
        ++s;}
    return sqrt(sum / s);}

template <typename II1, typename II2>
double rmse (II1 b, II1 e, II2 c) {
    double sum = 0;
    int    s   = distance(b, e);
    while (b != e) {
        double d = (*b - *c);
        sum += d * d;
        ++b;
        ++c;}
    return sqrt(sum / s);}

template <typename II, typename OI, typename UF>
void transform (II b, II e, OI x, UF f) {...}

template <typename II1, typename II2, typename OI, typename BF>
void transform (II1 b, II1 e, II2 c, OI x, BF f) {...}

template <typename II, typename T>
T accumulate (II b, II e, const T& v) {...}

template <typename II, typename T, typename BF>
T accumulate (II b, II e, const T& v, BF f) {...}

double f (double x, double y) {
    return (x - y) * (x - y);}

template <typename II1, typename II2>
double rmse (II1 b, II1 e, II2 c) {
    vector<double> x(distance(b, e));
    transform(b, e, c, begin(x), f);
    double sum = accumulate(begin(x), end(x), 0.0);
    return sqrt(sum / v.size());

template <typename II1, typename II2>
double rmse (II1 b, II1 e, II2 c) {
    vector<double> x;
    transform(b, e, c, back_inserter(x), f);
    double sum = accumulate(begin(x), end(x), 0.0);
    return sqrt(sum / x.size());}
    