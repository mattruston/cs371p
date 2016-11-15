p.move(5, 6);    // not ok
*p.move(5, 6);   // not ok
(*p).move(5, 6); // ok
p->move(5, 6);   // ok

define class Circle
	three-arg constructor
	area()    method
	radius()  method
	==()      operator

class Circle : public Shape {
	friend bool operator == (const Circle& lhs, const Circle& rhs) {
		return (static_cast<Shape&>(lhs) == rhs) && (lhs._r == rhs._r);}

	private:
		int _r;

	public:
		Circle (int x, int y, int r) :
			    Shape (x, y),
			    _r    (r)
			{}

		Circle (const Circle& rhs) :
			    Shape(rhs),
			    _r(rhs._r)
			{}

		Circle& operator = (const Circle& rhs) {
			Shape::operator=(rhs);
			_r = rhs._r;
			return *this;}

		double area () const {
			return pi * r * r;}

		int radius () const {
			return _r;}};