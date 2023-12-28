#include <iostream>
#include<string>
#include "/home/kumar/Desktop/mlpack_source_code_and_build/mlpack/build/installdir/include/mlpack.hpp"
#include <armadillo>
#include "utklearn.hpp"
using namespace std;


int main(){
    arma::mat v = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    utk::normalize_features(v);
    v.print("this is the  normalized one::");



    
}