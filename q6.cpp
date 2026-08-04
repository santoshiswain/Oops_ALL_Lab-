#include<iostream>
using namespace std;




class Distance{
    int n1;
    int n2;
    int f1,f2;
    int i1,i2;
    public:
    void input(){
        cout<<"Enter num1"<<endl;
        cout<<"Enter feet value \n";
        cin>>f1;
        cout<<"Enter inch value \n";
         cin>>i1;
        cout<<"Enter n2"<<endl;
        cout<<"Enter feet value \n";
        cin>>f2;
        cout<<"Enter inch value \n";
        cin>>i2;
    }
    int add(){
        if(i1+i2>12){
            int r=(i1+i2)/12;
            cout<<"The result"<<(f1+f2+r)<<"feet"<<(i1+i2)%12<<"inch\n";
        }else{
            cout<<"The result"<<(f1+f2)<<"feet"<<(i1+i2)<<"inch\n";
        }

    }
    void display(){
        cout<<add();
    }
};

int main(){
 Distance d;
 d.input();
 d.display();
 return 0;
}