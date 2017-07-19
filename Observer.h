#ifndef OBSERVER_H
#define OBSERVER_H

class Observer {
 public:
  virtual void notify(Character &whonotified)=0;
};

#endif
