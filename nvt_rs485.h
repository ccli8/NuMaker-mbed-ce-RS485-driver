#ifndef NVTRS485_H
#define NVTRS485_H
 
#include "mbed.h"

class NvtRS485 : public Serial {

public:
    enum E_PFM {
        NUC472,
        CNT
    };

    E_PFM m_ePFMID;
    NvtRS485(PinName tx, PinName rx, PinName dir, E_PFM pfm=NUC472);
    virtual ~NvtRS485(void);
    int set_rs485_mode(PinName dir);
};

#endif //NVTRS485_H