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
  int remove = 0;
	
  //determines length of initial
  int len = strlen(inital);
  int count2 = 0;
  char input[100];
	
  for(int c =0; c < len; c++){
    if(isalpha(inital[c])){
      input[count2] = tolower(inital[c]);
      count2++;
      }
     if(isdigit(inital[c])){
	input[count2] = inital[c];
      	count2++;
      }
      else{
      	remove++;
      }
  } 
    
  int num = len - remove
  cout << num << endl;
  input[num] = '\0';
  cout << input << endl;

  for(int i=0; i < num ;i++){
    if(input[i] != input[len2-1-i]){
       cout << "not palindrome" << endl;
       return 0;
   }
   	  
}
   cout << "palindrome" << endl; 

}

