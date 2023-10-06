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
class Employee:AbstractEmployee     /*Class Method*/
{
private:
    string Company;
    int Age;
protected:
    string Name;
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
    virtual void work()
    {
        cout << Name << " is checking email, task backlog, performing tasks...." << endl;
    }
};
class Developer: public Employee
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
        cout << Name << " fixed bug using " << FavPorgrammingLanguage << endl;
    }
    void work()
    {
        cout << Name << " is writting " << FavPorgrammingLanguage << " code..." << endl;
    }
};
class Teacher: public Employee
{
public:
    string Subject;
    Teacher(string name, string company, int age, string subject)
    :Employee(name,company,age)
    {
        Subject = subject;
    }
    void PrepareLesson()
    {
        cout << Name << " is preparing " << Subject << " lesson" << endl;
    }
    void work()
    {
        cout << Name << " is teaching " << Subject << "...." << endl;
    }
};
void solve()
{
    Developer d = Developer("Tamzid_Hossen", "Google", 22 ,"C++");
    d.FixBug();
    d.AskForPromotion();
    Teacher t = Teacher("Anamika_Parbin", "Amazon", 22 ,"English");
    t.PrepareLesson();
    t.AskForPromotion();
    // d.work();
    // t.work();
    Employee* E1 = &d;
    Employee* E2 = &t;
    
    E1->work();
    E2->work();
}
int main()
{
    optimize();
    file();
    solve();
    return 0;
}