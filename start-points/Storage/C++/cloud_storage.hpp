#ifndef CLOUD_STORAGE_H
#define CLOUD_STORAGE_H

#include <string>


class CloudStorageListener  // interface
{
public:
    virtual ~CloudStorageListener() = default;
    virtual void onPutObjectSuccess(std::string filePath) = 0;
    virtual void onPutObjectFail(std::string filePath) = 0;
                              
};

class CloudStorage  // interface
{
public:
    virtual void putObject(std::string bucket, 
                           std::string key, 
                           std::string data) = 0;
    virtual void addListener(CloudStorageListener& listener) = 0;
};


#endif //CLOUD_STORAGE_H
