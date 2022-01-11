#include <iostream>
#include <vector>

using namespace std;

float average_of(vector<int> a){
    int sum = 0;
    for (int i = 0; i < a.size(); ++i) {
        sum += a[i];
    }
    return sum / a.size();
}

int main(int argv,char* argc[]) {

    vector<int> vec{1,2,3,4,5};
    cout << average_of(vec) << endl;
}

