#include "REPGreeter.h"

#include "greeter.h"

@implementation REPGreeter {
  repro::Greeter* _greeter;
}

- (instancetype)init {
  self = [super init];
  if (self) {
    _greeter = new repro::Greeter();
  }
  return self;
}

- (void)greet:(NSString*)name {
  _greeter->Greet([name UTF8String]);
}


@end
