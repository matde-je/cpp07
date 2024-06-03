#include "Array.hpp"


int main(){

    Array<int> ab;
    Array<int> bc(10);
    Array<int> cd(bc);
    Array<int> dc;
    ab = bc;
    ab = ab;
    bc[0];
    bc[11];
    bc[-1];
    ab[0] = 123;
    std::cout << "cd size " << cd.size_() << std::endl;
    std::cout << "dc size " << dc.size_() << std::endl;
    std::cout << "ab size " << ab.size_() << std::endl;
    std::cout << "bc size " << bc.size_() << std::endl;
    std::cout << "ab[0] " << ab[0] << std::endl;

}