#include<bits/stdc++.h>

using namespace std;


class Shallow
{
    private:
        int *data; // raw data pointer
    public:

        void set_data_value(int d){ *data = d;}
        int get_data_value(){return *data;}

        //constructor
        Shallow(int d);
        // copy constructor 
        Shallow(const Shallow &source);

        // destructor call
        ~Shallow();

};
Shallow::Shallow(int d)
{
    data = new int; // since we have attribute is pointer to int-
    // we new data type hklc
    *data = d;
}
Shallow::Shallow(const Shallow &source) 
    :data{source.data}
{
    cout<<"shallow copy constructor has been called"<<endl;
}
Shallow::~Shallow()
{
    delete data;
    cout<<"destructor has been called\n";
}

void display(Shallow s)
{
    cout<<s.get_data_value()<<endl;
}
int main(){
    Shallow obj1(199);
    display(obj1);

    Shallow obj2{obj1}; //here refer to same value if we 
                        // change value of obj2 by deauflt obj1 value also changes 
                        // pretty understandable in copy constructor we are passing pass by refernce
    obj2.set_data_value(1000);


}