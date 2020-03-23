#include "storage.hpp"
#include "cloud_storage.hpp"
#include "outputfile.hpp"
#include "mock_cloud_storage.hpp"
#include <gmock/gmock.h>

using namespace ::testing;

namespace {

TEST(Storage, scenario_name_goes_here)
{
    // TODO: write your test code here
    // This is example code for setting up a MockCloudStorage with expectations
    MockCloudStorage cloud;
    EXPECT_CALL(cloud, 
                putObject("path", "filename", "data")
               ).Times(Exactly(1));
    
}

}