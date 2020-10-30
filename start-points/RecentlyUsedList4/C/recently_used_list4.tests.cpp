#include <gtest/gtest.h>

extern "C"
{
#include "recently_used_list.h"
}

using namespace ::testing;

TEST(JiraTicket98743245, example)
{
    int length = 4;
    Queue* q = createQueue(length);
    Hash* hash = createHash(10);
    
    LookupPage(q, hash, 1); 
    LookupPage(q, hash, 2); 
    LookupPage(q, hash, 3); 
    LookupPage(q, hash, 1); 
    LookupPage(q, hash, 4); 
    LookupPage(q, hash, 5);
    
    int actual_pages[4]; 
    currentPageOrder(q, actual_pages, length);
    int expected_pages[] = {5, 4, 1, 3};
    for (int i = 0; i < length ; i ++) 
    {
        EXPECT_EQ(expected_pages[i], actual_pages[i]);
    }
}

