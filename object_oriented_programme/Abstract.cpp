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
class AbstractEmployee
{
    virtual void AskForPromotion() = 0;
};
class Employee:AbstractEmployee      /*Class Method*/
{
private:
    string Name,Company;
    int Age;
public:
    Employee(string name, string compay, int age)      /*Constructor Body*/
    {
        Name = name;
        Company = compay;
        Age = age;
    }
    void AskForPromotion()
    {
        if(Age>30)
        {
            cout << Name << " got promoted!" << endl;
        }
        else
        {
            cout << Name << " Error: Sorry No promotion for you!" << endl;
        }
    }  
};
class Developer: Employee
{
public:
    string FavPorgrammingLanguage;
    Developer(string name, string company, int age, string Favlanguage)
        :Employee(name,company,age)
    {
        FavPorgrammingLanguage = Favlanguage;
    }
    void FixBug()
    {
        cout << "fixed bug using " << FavPorgrammingLanguage << endl;
    }
};
void solve()
{
    Employee Person1 = Employee("Tamzid_Hossen","Google", 35);       /*Create an Object of the Class 'Person1' using the Constructor*/
    Employee Person2 = Employee("Anamika_Parbin", "Amazon", 14);
    Person1.AskForPromotion();
    Person2.AskForPromotion();
    Developer d = Developer("Tamzid_Hossen", "Google", 22 ,"C++");
    d.FixBug();
}
int main()
{
    optimize();
    file();
    solve();
    return 0;
}