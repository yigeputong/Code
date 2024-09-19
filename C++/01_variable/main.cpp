#include <iostream>
int main() {
    /* short = (-32767 - +32767)
     * int = (-2^31 - +2^31)
     * long = (-2^63 - +2^63)
     * long long = (-2^63 - +2^63)
     */
    int variable = 8;
    std::cout << variable << std::endl;
    variable = 20;
    std::cout << variable << std::endl;

    system ("pause");
    return 0;
}