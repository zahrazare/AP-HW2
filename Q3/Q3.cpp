#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
#include"Queue.h"
#include"sstream"

int main()
{
  //const char* n{"Queue.txt"};
  std::string n{"Queue.txt"};
  Queue q{n};
  
  //Display elements present in Circular Queue
   q.displayQueue();

  //Inserting elements in Circular Queue
  q.enQueue(15.5);
  q.enQueue(-6);

  q.displayQueue();

  //Deleting elements from Circular Queue
  std::cout << "Deleted Value = " << q.deQueue() << std::endl;
  std::cout << "Deleted value = " << q.deQueue() << std::endl;

  q.displayQueue();

  return 0;
}
