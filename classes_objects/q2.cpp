#include <iostream>
using namespace std;

class Distance
{
    private:
    int feet;
    float inches;

    public:
    void setdata(int ft,float in)
    {
        (feet=ft,inches=in);
    }
    void getdata()
    {
        cout<<"\n enter feet:";
        cout<<"enter inches:";
        cin>>feet;
        cin>>inches;
    }
    void showdata()
    {
        cout<<"feet:"<<feet;
        cout<<"inches:"<<inches;
    }

};
int main()
{
    Distance d1,d2;
    d1.setdata(5,6);
    d2.getdata();
    d1.showdata();
    d2.showdata();

}