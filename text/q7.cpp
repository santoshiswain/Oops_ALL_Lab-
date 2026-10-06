#include<iostream>
using namespace std;

int main(){
    string  a={'a','b','c','d','e','f',' ','H','I','j'};
    string  *ptr=&a;
    int uppre=0;
    int lower=0;
    int space=0;
    for(int i=0;i<ptr->length();i++){
        if((*ptr)[i]>='A' && (*ptr)[i]<='Z'){
            uppre++;
        }
        else if((*ptr)[i]>='a' && (*ptr)[i]<='z'){
            lower++;
        }
        else if((*ptr)[i]==' '){
            space++;
        }
    }
    cout<<"Number of uppercase letters : "<<uppre<<endl;
    cout<<"Number of lowercase letters : "<<lower<<endl;
    cout<<"Number of spaces : "<<space<<endl;
    return 0;
}