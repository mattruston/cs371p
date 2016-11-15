oo languages: runtime error into compile time errors
    type system
    enums
    pass by reference
    consts

int i;
i = 2;
++i;
int j = 3;

const int ci;     // not ok
const int ci = 2;
++ci;             // not ok
const int cj = 3;

int* p = &i;
++*p;
p = &j;
++*p;
p = &ci;     // not ok

const int* pc; // read-only ptr
pc = &ci;
++*pc;         // not ok
pc = &cj;
pc = &i;

int* const cp;       // not ok
int* const cp = &ci; // not ok
int* const cp = &i;
++*cp;
++cp;                // not ok

const int* const cpc;       // not ok
const int* const cpc = &i;
const int* const cqc = &ci;
++cpc;                      // not ok
++*cpc;                     // not ok