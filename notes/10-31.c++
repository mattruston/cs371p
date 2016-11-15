stack vs heap

stack objects do not transcend scope
heap  objects do

stack objects have to know their size at compile time
heap  objects do not

vector<int> f () {
	vector<int> x(10000, 2);
	...
	return x;}

int main () {
	vector<int> y = f();

if vector only has copy semantics, main(), above, is expensive

with move semantics main() is cheap