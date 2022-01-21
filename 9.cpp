#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool contains_all(vector<int> a, vector<int> b) {
    int f = 0;
    for (int i = 0; i < a.size(); ++i) {
        for (int j = 0; j < b.size(); ++j) {
            if (b[j] == a[i]) { f++; }
        }
    }
    if (f == b.size()) { return true; }
    else { return false; }
}

auto main() -> int {
    vector<int> aa;
    int f;
    cout<<"\nWpisz argumenty wektora a:\n\n";
    do {

        cin >> f;
        aa.push_back(f);
    } while (f != 0);
    vector<int> bb;
    cout<<"\nWpisz argumenty wektora b:\n\n";
    do {
        cin >> f;
        bb.push_back(f);
    } while (f != 0);

    if (contains_all(aa, bb))cout << "Tak" << endl;
    else {
        cout << "Nie" << endl;
    }


}


