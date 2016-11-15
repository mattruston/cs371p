int i = 2;
int j = ++i;
cout << i << " " << j << endl; // 3 3

++i = j;

++++i;

int i = 2;
int j = i++;
cout << i << " " << j << endl; // 3 2

(i++) = j; // no

++(i++); // no

for (I i = 0; i != s; ++i) {
    ...}

int i = 2;
++i;

int i = 2;
i++;

int f (...) {
    ...
    if (<something wrong>)
        throw E(...);
    ...

int g (...) {
    ...
    try {
        ...
        int i = f(...)
        ...
    catch (E& x)
        <something wrong>
    ...