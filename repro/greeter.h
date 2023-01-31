#ifndef GREETER_H_
#define GREETER_H_

#include "absl/strings/string_view.h"

namespace repro {

class Greeter {
 public:
  Greeter();
  ~Greeter();

  void Greet(absl::string_view name);
};

}  // namespace repro

#endif  // GREETER_H_
