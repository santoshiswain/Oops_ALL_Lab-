#include<iostream>
using namespace std;


class library{
    int id;
    string title,name;
    int dob;
    public:
     void input(){
      cout<<"Enter id: ";
      cin>>id;
      cout<<"Enter name: ";
      cin>>name;
      cout<<"Enter title: ";
      cin>>title;
      cout<<"Enter dob \n";
      cin>>dob;
  }
  int fine(){
    if(dob<15){
        cout<<"No fine required"<<endl;
    }else{
        int k=(dob-15)*2;
        return k;
    }
  }
  void display(){
    cout<<"The money transaction"<<fine();
  }
};

int main(){
    library l;
    l.input();
    l.display();
    return 0;
}
