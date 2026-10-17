#include<iostream>
#include<string>

using namespace std;

class Student {
    public:

string name ; 
int age ; 
int roll ; 
int nOS ; 
Student (string name , int age , int roll , int nOS ) {
  this -> name = name ;
  this -> age = age ;
  this -> roll = roll ;
  this -> nOS = nOS ;
}
void Data () {

 cout << "Name =  " << name << endl ; 
 cout << "age = " << age << endl ; 
 cout << "roll = " << roll << endl; 
 cout << "nOS = " << nOS << endl ; 

}

}; 
int main () {
  
  Student s1( "Aditya" , 18 , 1 , 7 ) ;
  Student s2("Ayush" , 18 , 2 , 5) ;
  Student s3("Anand" , 18 , 3 , 5) ;
  Student s4( "Prashant" , 18 , 4 , 4); 
  Student s5("Shivam" , 18 , 4 , 4) ;

  

   int n ; 
   cout << "Enter the roll number " ;
   cin >> n ; 


  if ( n == 1) {
    s1. Data () ;
  }
  else if (n == 2) {
    s2. Data () ;
  }
   else if ( n== 3) {
    s3. Data () ;
   }
   else if (n==4) {
    s4. Data () ; 
   }
   else if (n==5) {
    s5.Data () ;
   }
   else  {
    cout << "Student not found ";
   }
   return 0;
   
   
    

}