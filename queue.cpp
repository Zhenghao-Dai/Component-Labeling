/* 
queue.cpp

Author:Zhenghao Dai 

Short description of this file:
*/

#include "queue.h"

// constructor. maxlen must be as large as the total number
// of Locations that will ever be entered into this Queue.
// this is complete, you don't need to change it.
Queue::Queue(int maxlen) {
   contents = new Location[maxlen];
   head = 0;
   tail = 0;
}

// destructor. releases resources. C++ will call it automatically.
// this is complete, you don't need to change it.
Queue::~Queue() {
   delete[] contents;
}

// insert a new Location at the end/back of our list   
void Queue::push(Location loc) {
   // FILL THIS IN
   contents[tail]=loc;//make the tail be the new loc
   tail++;//tail ++
}

// return and "remove" the oldest Location not already extracted
Location Queue::pop() {
   // FILL THIS IN
   Location current= contents[head];
   head++;
   return current;
}

// is this Queue empty? (did we extract everything added?)
// this is complete, you don't need to change it.
bool Queue::is_empty() {
   return (head==tail);
}

