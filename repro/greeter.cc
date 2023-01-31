#include "greeter.h"

#include <iostream>

namespace repro {

Greeter::Greeter() {}
Greeter::~Greeter() {}

void Greeter::Greet(absl::string_view name) {
  std::cout << "Hello " << name << std::endl;
}

}  // namespace repro
