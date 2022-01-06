#include <iostream>
using namespace std;
#include<vector>

int main()
{
    //Declaration 
    vector<int> *vp=new vector<int>();   //Dynamic
    vector<int> v;                       //Statically
    for(int i=0;i<100;i++)
    {
        cout<<"Capacity"<<v.capacity()<<endl;
        v.push_back(i+1);
        cout<<"Size:"<<v.size()<<endl;
    }
    /*
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
     v[1]=1000;
     for(int i=0;i<v.size();i++)
     {
         cout<<v[i]<<endl;
     }
    
     we have not use [] for insertion
     v[4]=123;
     v[5]=999;
     
    v.push_back(50);
    v.push_back(60);

    
    cout<<v[0]<<endl;
    cout<<v[1]<<endl;
    cout<<v[2]<<endl;
    cout<<v[3]<<endl;
    cout<<v[4]<<endl;
    cout<<v[5]<<endl;
    cout<<v[6]<<endl;

    cout<<"Size:"<<v.size()<<endl;
    cout<<v.at(5)<<endl;
    cout<<v.at(6)<<endl;
    cout<<v.at(7)<<endl;



    */






}




                    /*************NOTE*******************/
                    /*

                    1. Use [] for get value or update not for insert.
                    2. Use v.at(2) function ".at()" for printing because it acceses only with range size







                    */