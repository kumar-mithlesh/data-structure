#include<iostream>
using namespace std;
class shape
{
    public:
        void display()
        {
            cout<<"this is shape"<<endl;
        }
};
class circle:public shape
{
    public:
        void display()
        {
            cout<<"this is circular shape"<<endl;
        }

};
class rectangle:public shape
{
    public:
        void display()
        {

            cout<<"this is rectangular shape"<<endl;
        }

};
class square:public rectangle
{
public:
    void display()
    {
        cout<<"rectangle is square"<<endl;
    }
};
int main()
{
    shape s1;
    rectangle s2;
    //circle s3;
    square s4;
    s1.display();
    s2.display();
    //s3.display();
    s4.display();
    return 0;
}
