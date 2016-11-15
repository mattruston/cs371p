Big Picture

The two major relationships in OOP are containment and inheritance.

We are still in the middle of containment in class in the form of a generic container, vector.
We are now also doing containment in a project in the form of non-generic container, Darwin.

Soon, we will embark on inheritance in class and in a project.

Java

constructors exhibit refinement
finalize     does not

class A {
    A (int) {}}

class B extend A {
    B () {super(2);}

C++

constructors exhibit refinement
destructors  exhibit refinement

class A {
    A (int) {}}

class B extend A {
    B () : A(2) {}

member initialization list needed in four cases:
    const member
    reference member
    user-type member with no default constructor
    parent with no default constructor

In generic containers getters of attributes of the container and getters of the elements is common, for example, size() and operator[]().

In generic containers setters of the elements is also common, for example, operator[]() again.

In non-generic containers, it's ideal to have no getters and no setters, hide everything, only provide behavior.

Your job is to design Darwin, Creature, and Species, in such a way as for them to know the least about each other.