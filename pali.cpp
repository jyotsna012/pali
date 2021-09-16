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

  //int to count how many spaces and punction were removed	
  int remove = 0;
	
  //determines length of initial
  int len = strlen(inital);
  
  //counter
  int count2 = 0;
	
  // array to store input without spaces + punctuation	
  char input[100];
	
	
  //if more than 80 characters then user needs to try again. 	
  if(len > 80){
    cout << "There are more than 80 characters. Please run the program to try again" << endl;
    return 0;
  }  
	
  //loops through inital array and adds all numbers and letters to a new array	
  for(int c =0; c < len; c++){
     //if letter
    if(isalpha(inital[c])){
       //appends char to input array
      input[count2] = tolower(inital[c]);
      count2++;
      }
      //if number	  
      else if(isdigit(inital[c])){
	//appends char to number array      
	input[count2] = inital[c];
      	count2++;
      }
      else {
	//if not added to array, then it is removed so add to the remove counter      
        remove++;
      }
      
  } 
	
  //calculates length of input array 
  int num = len - remove;

  //adds null terminating char to input array	
  input[num] = '\0';
   
  //checks to see if palindrome	
  for(int i=0; i < num ;i++){
       //checks the first and last characters and sees if thet are equal
    if(input[i] != input[num-1-i]){
       //if at any point the letters are not equal then prints not palindrome and ends the progaram
       cout << "not palindrome" << endl;
       return 0;
   }
   	  
}
   //if all letters are cycled through and are equal then print palindrome	
   cout << "palindrome" << endl; 

}

