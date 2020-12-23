#include<bits/stdc++.h>

using namespace std;

class Deep{
    private:
        int *data;

    public:
        void set_data_value(int d){*data = d;}
        int get_data_value(){return *data;}

        // constructor
        Deep(int d);
        // copy constructor - Deep copy

        Deep(const Deep &souce);

        ~Deep();

        // 
};
Deep::Deep(int d){
    data = new int;
    *data = d;
}
// deep copy 
Deep::Deep(const Deep &source)
{
    data = new int;     //allocating the storage

    *data = *source.data;
    cout<<"copy constructor has been called\n";

}
Deep :: ~Deep(){
    delete data;
    cout<<"Destructor has been called\n";
}
void display(Deep s)
{
    cout<<s.get_data_value()<<endl;
}
int main()
{
    Deep obj1{100};

    display(obj1);

    Deep obj2{obj1};
    obj2.set_data_value(1000);

    display(obj2);

}