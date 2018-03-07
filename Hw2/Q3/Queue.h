#include<iostream>
#include<iomanip>
#include<string>
#include"sstream"

class Queue
{
 public:

  Queue(std::string n);
  void displayQueue();
  void enQueue(double t);
  double deQueue(); 
  ~Queue();



 private:

  int length{};         //length of queue
  std::string name{};  //name of file
  double* p{};        //an array of numbres of the queue 
  int r{};           //place of read
  int w{};          //place of write

};

