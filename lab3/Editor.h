#pragma once

#include <string>
#include "ListBuffer.h"

class Editor {
private:
  ListBuffer *buffer;

  void dispatchCmd(const string &cmd);
  //TODO: add any functions you want
  
public:
  Editor();
  ~Editor();
  void run();
};
