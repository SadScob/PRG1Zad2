#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct student{
    string imie;
    string nazw;
    vector<float>oceny;
};
void average_of(student stud1){
float a = 0;
float result = 0;
for(int i = 0; i<stud1.oceny.size();i++)
{
    result += stud1.oceny[i];
    a = result/ stud1.oceny.size();
}
cout<< "srednia ocena ucznia "<< stud1.imie<< " "<< stud1.nazw<< " "<< a<<"\n";

}
auto main() -> int{
    auto stud1 = student();

    stud1.imie = "Alex";
    stud1.nazw =" Patapau";
    stud1.oceny= {5, 4, 2, 2, 5, 3, 5, 2};
    average_of(stud1);
}
