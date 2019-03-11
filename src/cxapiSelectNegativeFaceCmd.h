#ifndef _CXAPI_SELECT_NEGATIVE_FACE_CMD_H
#define _CXAPI_SELECT_NEGATIVE_FACE_CMD_H

#include <maya/MPxCommand.h>

class CxApiSelectNegativeFaceCmd : public MPxCommand
{
public:
    CxApiSelectNegativeFaceCmd();
    ~CxApiSelectNegativeFaceCmd();
    static void * creator();
    static const char * kCmdName;

    MStatus doIt(const MArgList &) override;
private:
};

#endif