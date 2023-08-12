#include<iostream>;
 using namespace std;
 int main(){
    /*selection control strucure : if else-if else ladder*/
    /*int age;
    cout<<"Tell me your age"<<endl;
    cin>>age;
  if (age<18){
    cout<<"You can not attend party"<<endl;
  }
  else if (age==18){
    cout<<"You are a kid and you will get a kid pass"<<endl;
     }
  else(age>18);{

    cout<<"You are an adult and you will get free entry but you should have a gf for that"<<endl;
  }*/
   /*selection control structure : switch case statement*/
   int age ;
   cout<<"Tell me your age"<<endl;
   cin>>age;
   switch (age)
   {
   case 13:
   cout<<"You are a kid and cannot became a rizzler"<<endl;
    
    break;

   case 18:
   cout<<"You can now became a rizzler"<<endl;
   
   break;
   
   default:

   cout<<"No special shit"<<endl;

    break;
   }
     
    return 0;
 }