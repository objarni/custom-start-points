#ifndef MOCK_CLOUD_INCLUDED
#define MOCK_CLOUD_INCLUDED

#include "cloud_storage.hpp"
#include <gmock/gmock.h>

class MockCloudStorage : public CloudStorage
{
public:
    MOCK_METHOD4(putObject, void(std::string bucket, 
                                 std::string key, 
                                 std::string data, 
                                 int length));
    MOCK_METHOD1(addListener, void(CloudStorageListener& listener));
};

#endif
