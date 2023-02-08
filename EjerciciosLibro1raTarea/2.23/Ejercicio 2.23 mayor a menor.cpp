#include <iostream>

using namespace std;

int num1, num2, num3, num4, num5;
int main(){

cout<<"Bienvenido al sistema de mayor a menor de numeros"<<endl;

cout<<"Ingrese 5 numeros"<<endl;
cin>>num1;
cin>>num2;
cin>>num3;
cin>>num4;
cin>>num5;

if(num1 >num2 && num1 > num3 && num1 > num4 && num1 >num5){
 if(num2 >num3 && num2 > num4 && num2 > num5){
    cout<<num1<<" "<<num2<<"  "<<num3<<" "<<num4<<" "<<num5<<endl;
}
 else if(num2<num3&&num2<num4&&num2<num5){
    cout<<num1<<" "<<num3<<" "<<num4<<" "<<num5<<" "<<num2<<endl;
 }
}
else if(num2<num3&&num2<num4&&num2<num5){
    if(num1>num3&&num1>num4&&num1<num5){
        cout<<num2<<" "<<num1<<" "<<num3<<" "<<num4<<" "<<num5<<endl;
    }
    else if(num1<num3&&num1<num4&&num1<num5){
        cout<<num2<<" "<<num3<<" "<<num4<<" "<<num5<<num1<<endl;
    }
}
else{
    if(num1>num2 && num1>num3 && num1>num4){
        cout<<num5<<" "<<num1<<" "<<num2<<" "<<num3<<" "<<num4<<endl;
    }
    else if (num1<num2 &&num1<num3 && num1<num4){
        cout<<num5<<" "<<num4<<" "<<num3<<" "<<num2<<" "<<num1<<endl;
    }
}
cout<<endl;
return 0;
}
