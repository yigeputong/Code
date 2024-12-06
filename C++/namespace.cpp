#include <stdio.h>
#include <iostream>

namespace io {
    namespace in {
        template<typename T>
        T input() {
            T input;
            std::cin >> input;
            return input;
        }
    }

    namespace out {
        template<typename T>
        void output(T output) {
            std::cout << output << std::endl;
        }
    }
}