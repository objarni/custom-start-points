#ifndef OUTPUTFILE_H
#define OUTPUTFILE_H

#include <string>

class Outputfile
{
public:
    virtual void write(std::string data, int length) = 0;
};


#endif //OUTPUTFILE_H
