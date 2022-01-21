#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct students{
    string imie;
    string nazw;
    students(string a, string b){
        imie = a;
        nazw = b;
    }
};

struct group{
    string groupname;
    vector<students> studvec1;
    group(string a, vector<students> b){
        groupname = a;
        copy(b.begin(), b.end(), back_inserter(studvec1));
    }
};

void AddStud(group a11, students imie){
   a11.studvec1.push_back(imie);
}

auto main() -> int {
    students student1 = students("QWER", "tyu");
    students student2 = students("Asd", "FGhj");
    students student3 = students("ZXC", "Cursed");
    students student4 = students("POKIkh", "ASF");

    vector<students> studvec2 = {student1, student2, student3, student4};
    group c105 = group("c105", studvec2);


    return 0;
}
