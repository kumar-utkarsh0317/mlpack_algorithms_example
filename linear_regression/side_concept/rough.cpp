#include <iostream>
#include <armadillo>

using namespace arma;
using namespace std;

int main() {
    mat A = {1, 2, 3};
    

    A.print("matrix");
    cout<<"rows::"<<A.n_rows<<endl;
    cout<<"cols::"<<A.n_cols<<endl;

    return 0;
}
