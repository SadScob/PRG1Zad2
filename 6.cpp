#include <iostream>
# include <vector>

using namespace std;

struct students{
    string imie;
    string nazw;
    vector<float> oceny;
    students(string a, string b, vector<float> c){
        imie = a;
        nazw = b;
        copy(c.begin(), c.end(), back_inserter(oceny));
    }
};

float Srednia(students a){
    int result = 0;
    for (int i = 0; i < a.oceny.size(); ++i) {
        result += a.oceny[i];
    }
    return result / a.oceny.size();
}

students get_best_student(vector<students> vec){
    int max = Srednia(vec[0]);
    int index = 0;
    for (int i = 1; i < vec.size(); ++i) {
        if (max < Srednia(vec[i])) {
            max = Srednia(vec[i]);
            index = i;
        }
    }
    return vec[index];
}

auto main() -> int{
    students student1 = students("QWER","tyu",{1,2,3,4,5});
    students student2 = students("Asd","FGhj",{5,4,3,2,1});
    students student3 = students("ZXC","Cursed",{0,1,2,0,1});
    students student4 = students("POKIkh","ASF",{1,3,0,1,1});

    vector<students> vectorOfStudents ={student1,student2,student3,student4};
    cout << get_best_student(vectorOfStudents).imie << get_best_student(vectorOfStudents).nazw<<Srednia(get_best_student(vectorOfStudents)) << endl ;
    return 0;
}
