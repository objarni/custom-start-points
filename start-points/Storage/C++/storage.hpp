#ifndef STORAGE_ISTORAGE_H
#define STORAGE_ISTORAGE_H

#include "outputfile.hpp"
#include <string>

class StorageCallback  // interface
{
public:
    virtual ~StorageCallback() {}

    virtual void onFinalizeSuccess(unsigned int id) = 0;
    virtual void onFinalizeFail(unsigned int id) = 0;
};

class Storage  // interface
{
public:
    virtual Outputfile* createOutputfile(std::string path) = 0;
    virtual void finalizeFile(Outputfile &file) = 0;
    virtual void finalizeFile(Outputfile &file, unsigned int id) = 0;
    virtual void setCallback(StorageCallback& callback) =0;
};


#endif //STORAGE_ISTORAGE_H
