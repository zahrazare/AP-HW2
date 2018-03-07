#include<iostream>
#include<cmath>
#include<iomanip>

void selectsort(int*& , int ); //prototype of function that sort the numbers

int main()
{
  int n{1};                    //variable which contains the length of array
  int save{};                 //the interface variable
  int* arr{new int[n]};      //a dynamic array of nubers

  std::cout << "please enter your numbers (enter 0 to end):" << std::endl;
  while(1)
  { 
      std::cout << "enter " << n << "th number:" << std::endl;
      std::cin >> save;       //taking the numbers from user
      if(save != 0)          //if the entered number is not 0
      {
	arr[n-1] = save;    //the number saves in the array
	n++;               //increment the size of array

        //these 4 lines do the increment size of array
	int* tmp = new int [n] ;    //creating a dynamic array of size n, any time the WHILE run   
	for (int j{}; j < n-1; j++)    
	{
	  tmp[j] = arr[j];
	}
	arr = tmp;         //we put the arr equal to the created array
      }


      else      //if the entered number is 0
	break;

    }
 

  
  std::cout << "the n is " << n-1 << std::endl; //not necesarry
  
  
  selectsort(arr , n-1);//run the selectsort function on the array of numbers with length of n-1 

  std::cout << "the sorted numbers:" << std::endl; //showing the sorted numbers
  
  for(int i{}; i<n-1; i++)
    std::cout<< arr[i] << std::endl;


  delete[] arr;


  return 0;

}



void selectsort(int*& arr , int n)
{
  int min{};
  int num{};
  int save{};
  for (int i{}; i<n; i++)
  {
      min = arr[i];
      num = i;
      for (int j{i+1}; j < n; j++)
      {
	if( min > arr[j] )
	{
	  min = arr[j];
	  num = j;
	}
      }
      
      save = arr[i];
      arr[i] = arr[num];
      arr[num] = save;
  }
}
