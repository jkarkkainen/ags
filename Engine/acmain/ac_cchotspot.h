#ifndef __AC_CCHOTSPOT_H
#define __AC_CCHOTSPOT_H

#include "acrun/ac_ccdynamicobject.h"

struct CCHotspot : AGSCCDynamicObject {

    // return the type name of the object
    virtual const char *GetType();

    // serialize the object into BUFFER (which is BUFSIZE bytes)
    // return number of bytes used
    virtual int Serialize(const char *address, char *buffer, int bufsize);

    virtual void Unserialize(int index, const char *serializedData, int dataSize);

};

#endif // __AC_CCHOTSPOT_H