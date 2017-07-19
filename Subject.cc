#include "Subject.h"
#include "Observer.h"
#include <vector>
using namespace std;

bool Subject::attach(Observer *observer) {
 for(int i = 0; i < observers.size(); ++i) {
  if(observers[i] == observer) {
   return false;
  }
 }
 observers.emplace_back(observer);
 return true;
}

bool Subject::detach(Observer *observer) {
 for(int i = 0; i < observers.size(); ++i) {
  if(observers[i] == observer) {
   observers.erase(observers.begin() + i);
   return true;
  }
 }
 return false;

