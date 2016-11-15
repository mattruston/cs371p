C++

local
local static
global
global static
class (instance)
class static

Java

local
class (instance)
class static

void f () {
    ...
    int i = g(...);
    ...}

1. How many are there?
    one per scope entry
2. When are they allocated?
    on scope entry
3. Whan are they initialized?
    on line
4. What is their lifetime?
    lifetime of the scope
5. What is their scope?
    in the scope and after the definition

void f () {
    ...
    static int i = g(...);
    ...}

1. How many are there?
    one
2. When are they allocated?
    on program entry
3. Whan are they initialized?
    on line, only the FIRST time
4. What is their lifetime?
    lifetime of the program
5. What is their scope?
    in the scope and after the definition

// foo.h
extern int i;

// foo.c++
#include "foo.h"
int i = g();

// bar.c++
#include "foo.h"
void f () {
    ++i;}

1. How many are there?
    one
2. When are they allocated?
    on program entry
3. Whan are they initialized?
    on program entry, BEFORE main()
4. What is their lifetime?
    lifetime of the program
5. What is their scope?
    the program, with extern in other files

// foo.c++
static int i = g();

// bar.c++
static int i;
void f () {
    ++i;}

1. How many are there?
    one per file
2. When are they allocated?
    on program entry
3. Whan are they initialized?
    on program entry, BEFORE main()
4. What is their lifetime?
    lifetime of the program
5. What is their scope?
    the file

template <typename T>
struct A {
    T x;};

1. How many are there?
    one per instance
2. When are they allocated?
    when the instance is
3. Whan are they initialized?
    when the instance is
4. What is their lifetime?
    when the instance is
5. What is their scope?
    dictated by the access directives

template <typename T>
struct A {
    static T x;};

1. How many are there?
    one per template type
2. When are they allocated?
    on program entry
3. Whan are they initialized?
    on program entry, BEFORE main()
4. What is their lifetime?
    the program
5. What is their scope?
    dictated by the access directives