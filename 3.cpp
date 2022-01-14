#include <iostream>
#include <vector>
#include <string>

using namespace std;

float dot_product(vector<float>a,vector<float>b){
    if (a.size()!=b.size()){
        return 0;
    }
    else {
        float sum = 0;
        for(int i = 0; i < a.size(); ++i){
            sum += a[i]*b[i];
        }
        return sum;
    }
}
auto main() -> int
{
    vector<float>a={1,2,3};
    vector<float>b={0,4,5};
    cout<<dot_product(a,b)<< endl;
}
