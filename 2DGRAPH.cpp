#include<iostream>
using namespace std;
int main (){


double m,n;
cin>>m>>n;

if( m>0 && n>0){

cout<<"Q1";

}
else if ( m<0 && n>0){

    cout<<"Q2";
}
else if (m<0 && n<0){


    cout<<"Q3";
}
else if ( m>0 && n<0){


    cout<<"Q4";
}

else if ( m==0 && n==0){

    cout<<"Origem";
}
else if ((m>0 && n==0) || (m<0 && n==0) ){


    cout<<"Eixo X";
}
else if ( (m==0 && n>0) || (m==0 && n<0)){


    cout <<"Eixo Y";
}


}