#include"StivaStatica.h"
#include<iostream>
using namespace std;
int main(){
Array_Stack st;
try{
st.push(10);
st.push(20);
int vf=st.peek();
cout<<vf;
}
catch(Array_Stack::Stack_Underflow ex){
cout<<"Stiva goala";
}
//system("pause");
return 0;
  }