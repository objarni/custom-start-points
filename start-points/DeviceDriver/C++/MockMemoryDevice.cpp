

#include "MockMemoryDevice.hpp"

#include <cstdlib>
#include <time.h>

MockMemoryDevice::MockMemoryDevice()
{}

char MockMemoryDevice::read(long address)
{
    // this code is here to prevent compiler errors due to unused variables.
    // TODO: write a proper implementation 
    return (char)address;
}

void MockMemoryDevice::write(long address, char data)
{
	// this code is here to prevent compiler errors due to unused variables.
    // TODO: write a proper implementation 
    int a = (int)data;
    int b = (int)address;
    if (a == b)
        a = b;

}
