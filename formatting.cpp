#include <iostream>
#include <string>
<format.h>
<fmt.h>


int main(){


fmt::print("{:x} {:.4f} {:s}\n", 255, 3.14, "hello");
// prints "hello 3.1400 ff" instead of "ff 3.1400 hello".
// {0} is the 1st argument, {1} is the 2nd, and so on.
fmt::print("{2:s} {1:.4f} {0:x}\n", 255, 3.14, "hello");

    return 0;
}