#include <iostream>
int i = 1;
enum class B : int {a = 1, c = 2};
B b1 (B(2));
//B b1_1(2);недопускається
//B b1_2{2};недопускається

B b2 = B(1);
// B b2_1 = {1}; у С++17 допускається
// B b2_2 = B{1};у С++17 допускається

void f (B){}


int main() {
    // f({2});  у С++17 недопускається
    f(b2);

}
