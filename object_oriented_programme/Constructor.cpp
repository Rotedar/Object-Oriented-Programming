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
    Employee(string name, string compay, int age)      /*Constructor Body*/
    {
        Name = name;
        Company = compay;
        Age = age;
    }
};
void solve()
{
    Employee Person1 = Employee("Tamzid_Hossen","Google", 30);       /*Create an Object of the Class 'Person1' using the Constructor*/
    Person1.Introduce_Person();

    Employee person2 = Employee("Anamika_Parbin", "Amazon", 20);
    person2.Introduce_Person();
}
int main()
{
    optimize();
    file();
    solve();
    return 0;
}