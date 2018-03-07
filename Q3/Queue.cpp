#include"Queue.h"
#include<fstream>
#include<string>



Queue::Queue(std::string n)
{
  
  name = n;                              // save the name of the file
  std::ifstream fp;                     //defining an object of fstream  
  fp.open(name.c_str(), std::ios::in); //reading the file
  
  if(!fp)
    std::cout<<"file not found"<<std::endl; //if the file was not exist, tell the user
  
  fp >> length;                            //saving the length of queue
  
  p = new double[length];                 //defining a dynamic array for the numbers of queue

  char chaar{};                          //a variable to keep the semicolones ',' in it
  int i{};                              //the itteration

  while(!fp.eof())                     //this WHILE will be run till the file is done
  { 
    fp >> p[i];                       //writing the numbers of queue in p
    fp >> chaar;                     //writing the ',' in chaar
    if (p[i] == 0)                  //when the file is ended, dont save the 0 point 
      break;
    else                
    {
      i++;                      //incrimenting the itteration
      w++;                     //incrimenting the place of writing in queue 
      if(w == length)     //if 'w' arrived the end of queue, start from the first
	w = 0;              
    }
  }

  std::cout << "Constracture was called " << std::endl;     
}



void Queue::displayQueue()
{
  std::cout << "Im display" <<std::endl;
  for(int i{r}; i < w; i++)
    std::cout<< p[i] << std::endl;        //displaying the elements of queue
}


void Queue::enQueue(double t)                    //geting new elements
{
  if(w == r)                                    //if the queue is full
    std::cout << "No free space" << std::endl;
  else 
 {
   p[w] = t;                          //writing the new element
   w++;                              //incriment the the place of writing in the queue
   if (w == length)                 //if 'w' arrived the end of queue, start from the first place
    {
    w = 0;
    }
  std::cout<< "the entered number was set" << std::endl; 
 }
}

double Queue::deQueue()      //deleting the element which is ready to read 
{
  if(r == w && r == 0)
    std::cout << "the Queue is empty" << std::endl;
  double save{};           //middle variable 
  save = p[r];
  p[r] = 0;
  r++;
  if(r == length)      //if you delete all the elements, go to first place
    r = 0;
  return save;

}

Queue::~Queue() //Destracture
{
  std::cout << "Destracture was called" << std::endl;
  delete[] p;


}
