#ifndef NVTRS485_H
#define NVTRS485_H
 
#include "mbed.h"

class NvtRS485 : public Serial {
public:
    NvtRS485(PinName tx, PinName rx, PinName dir);
    virtual ~NvtRS485(void);
    int set_rs485_mode(PinName dir);
};

#endif //NVTRS485_H