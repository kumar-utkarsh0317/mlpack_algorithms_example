#include <iostream>
#include<armadillo>
// #include "function_decleration.hpp"
#include"utklearn.hpp"
using namespace utk;

using namespace arma;
using namespace std;

int main() {
    arma::rowvec a = {1, 4, 10};
    arma::rowvec b = {1, 2, 3};

    double error = utk::absolute_error(a, b);

    std::cout<<"absolute"<<error<<endl;

    return 0;
}
