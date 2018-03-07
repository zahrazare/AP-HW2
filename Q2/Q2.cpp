#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>


int main()
{
  std::fstream read;             //creating an object of fstream library 
  read.open("Error_find.txt");  //open the text file
  std::string text{};          //a varialbe to save the file's words 
  

 
  //do this WHILE till the file is done
  while(read>>text)             //store each word of file in variable tesxt             
 {
  
   std::string save{};         //an interface variable
   int constant{};            //a variable to save the number of constants
   for(size_t i{}; i < text.length(); ++i)  //this FOR run on each character of each word
   {
     if( std::isalpha(text[i]))  //finds the alphabet characters 
     {      
       switch(std::tolower(text[i])) //finds the small alphabet characters
       {
         case 'a' : case 'e' : case 'i' : case 'o' : case 'u': //if the character is one of vowels
	   
	   constant = 0;    //zero the constant value
	   break;          //exit the switch-case
	     
         default:           //if the character is not one of vowels
	   constant +=1;
	   save += text[i];
	    break;
	  
       }
     }
     else            //if the character is not an alphabet
       break;       //exit the switch-case
  
     }

   if(constant >= 5 )                   //if the word has 5 continous constants
   {
     std::cout << save << std::endl;  //show the wrong word
	     
   }

 }

 
  return 0;

}
