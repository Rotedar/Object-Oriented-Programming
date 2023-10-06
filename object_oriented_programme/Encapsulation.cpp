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
private:
    string Name,Company;
    int Age;
public:
    void setName(string name)
    {
        Name = name;
    }
    string getName()
    {
        return Name;
    }
    void setCompany(string company)
    {
        Company = company;
    }
    string getCompany()
    {
        return Company;
    }
    void setAge(int age)
    {
        if(Age >= 18)
        {
            Age = age;
        }
        else
        {
            cout << "Error: Age cannot be negative!" << endl;
            return;
        }
    }
    int getAge()
    {
        return Age;
    }
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

    Employee Person2 = Employee("Anamika_Parbin", "Amazon", 14);
    Person2.Introduce_Person();
    
    Person1.setAge(22);
    cout << Person1.getName() << " is " << Person1.getAge() << " year old" << endl;
    Person2.setAge(14);
    cout << Person2.getName() << " is " << Person2.getAge() << " year old" << endl;
}
int main()
{
    optimize();
    file();
    solve();
    return 0;
}