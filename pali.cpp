#include <iostream>
#include <ctime> 
#include <cstdlib>
#include <cstring>

using namespace std;

int main(){
  //ask user to enter upto 80 char
  cout << "Please enter a phrase of upto 80 characters below." << endl;
	
  //iniatl array is where the phrase the user enters will be stored
  char inital[100];
	
  //gives user space to type and store that input into inital upto 100 char
  cin.get(inital, 100);
  cin.get();
	
  //determines length of initial
  int len = strlen(inital);
  
  for(i=0; i < len ;i++){
    if(inital[i] != inital[len-1-i]){
       cout << "not palindrome" << endl;
       return 0;
   }
   
	  
   cout << "palindrome" << endl; 
	  
}
