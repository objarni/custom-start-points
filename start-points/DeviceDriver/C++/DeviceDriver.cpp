#include "DeviceDriver.hpp"

DeviceDriver::DeviceDriver(FlashMemoryDevice &hardware) : m_hardware(hardware)
{}

char DeviceDriver::read(long address)
{
    // TODO: implement this method properly
    return (char)address;
}
/*
void DeviceDriver::write(long address, char data)
{
    // TODO: implement this method

}
*/