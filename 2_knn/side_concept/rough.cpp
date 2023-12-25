#include <iostream>
#include<string>
#include "/home/kumar/Desktop/mlpack_source_code_and_build/mlpack/build/installdir/include/mlpack.hpp"
#include <armadillo>
#include "utklearn.hpp"
using namespace std;


int main(){
    string path = "/home/kumar/Desktop/mlpack_function_practice/datasets/Iris.csv";
    arma::mat data;
    arma::field<string> headers;
    arma::field<string> headers1 = {"rahul", "utl"};
    bool load_status = data.load(arma::csv_name(path, headers));
    data.shed_col(data.n_cols -1);
    if(!load_status)
    {
        cout<<"no data is loaded"<<endl;
    }
    for (string s : headers)
    {
        cout<<s<<endl;
    }
    data.print();

    
}