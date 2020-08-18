#pragma once

#include "LoggerInterface.h"
#include <stdio.h>

namespace reanimated {

class IOSLogger : public LoggerInterface {
  public:
    void log(const char* str) override;
    void log(double d) override;
    void log(int i) override;
    void log(bool b) override;
    virtual ~IOSLogger() {}
};

}
