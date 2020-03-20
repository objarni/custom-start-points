
#include "FlashMemoryDevice.hpp"

class DeviceDriver
{
public:
    DeviceDriver(FlashMemoryDevice &hardware);
    char read(long address);
    void write(long address, char data);

protected:
    FlashMemoryDevice &m_hardware;
};
