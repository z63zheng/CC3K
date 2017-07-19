#ifndef SUBJECT_H
#define SUBJECT_H
#include <vector>
#include "Observer.h"

class Subject {
 std::vector<Observer *> observers;
 
 public:
  bool attach(Observer *observer);
  bool detach(Observer *observer);
  virtual void notifyObserver()=0;
};

#endif
