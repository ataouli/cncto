#include <iostream>
#include <string>
using namespace std;
class teacher
{
    public:
    teacher(string,int,char,string,string,string);
    void display();

    protected:
    string name;
    int age;
    char sex;
    string title;
    string addr;
    string tel;
};

teacher::teacher(string nam,int a,char s ,string tit ,string ad,string t):name(nam),age(a),sex(s),title(tit),addr(ad),tel(t){}
void teacher::display()
{

    cout<<"name:"<<name<<endl;
    cout<<"age:"<<age<<endl;
    cout<<"sex:"<<sex<<endl;
    cout<<"title:"<<title<<endl;
    cout<<"addr:"<<addr<<endl;
    cout<<"tel:"<<tel<<endl;
}
class cadre
{
    public:
    cadre(string,int,char,string,string,string);
    void display();
    protected:
    string name;
    int age;
    char sex;
    string post;
    string addr;
    string tel;
};
cadre::cadre(string nam,int a,char s ,string p ,string ad,string t):
name(nam),age(a),sex(s),post(p),addr(ad),tel(t){}
void cadre::display()
{
    cout<<"name:"<<name<<endl;
    cout<<"age:"<<age<<endl;
    cout<<"sex:"<<sex<<endl;
    cout<<"post:"<<post<<endl;
    cout<<"addr:"<<addr<<endl;
    cout<<"tel:"<<tel<<endl;
}

class person:public teacher,public cadre
{
    public:
    person(string,int,char,string,string,string,string,float);
    void display();
    private:
    float wage;
};
person::person(string nam,int a,char s ,string tit,string p ,string ad,string t,float w):
teacher(nam,a,s,tit,ad,t),cadre(nam,a,s,p,ad,t),wage(w){}
void person::display()
{
    teacher::display();
    cout<<"post:"<<cadre::post<<endl;
    cout<<"wages"<<wage<<endl;

}
int main()
{
    person p1("liming",20,'m',"prof","president","address","4545455",1535.2);
    p1.display();
    return 0;
}