#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);
#define endl '\n'
void file()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    // freopen("error.txt","w",stderr);
    #endif
}
class Employee      /*Class Method*/
{
public:
    string Name,Company;
    int Age;

    void Introduce_Person()     /*Member Functions(Methods)*/
    {
        cout << "Name -> " << Name << endl;
        cout << "Company -> " << Company << endl;
        cout << "Age -> " << Age << endl;
    }
};
void solve()
{
    Employee Person1;       /*Create an Object of the Class 'Person1'*/
    Person1.Name = "Tamzid_Hossen";
    Person1.Company = "Google";
    Person1.Age = 30;
    Person1.Introduce_Person();
    Employee person2;
    person2.Name = "Anamika_Parbin";
    person2.Company = "Amazon";
    person2.Age = 20;
    person2.Introduce_Person();
}
int main()
{
    optimize();
    file();
    solve();
    return 0;
}