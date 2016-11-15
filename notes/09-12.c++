void f (int v) {
    ++v;}
    
void g (int* p) {
    ++*p;}    

void h (int& r) {
    ++r;}

int main () {
    int i = 2;
    f(i);
    cout << i; // 2
    
    int j = 3;
    g(&j);
    cout << j; // 4
    
    int k = 4;
    h(k);
    cout << k; // 5

    return 0;}

RMSE (root mean squared error)