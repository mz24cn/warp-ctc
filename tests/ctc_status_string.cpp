#include <ctc.h>

#ifdef _MSC_VER
extern "C" {
const char* ctcGetStatusString(ctcStatus_t status) {
    switch (status) {
    case CTC_STATUS_SUCCESS:
        return "no error";
    case CTC_STATUS_MEMOPS_FAILED:
        return "cuda memcpy or memset failed";
    case CTC_STATUS_INVALID_VALUE:
        return "invalid value";
    case CTC_STATUS_EXECUTION_FAILED:
        return "execution failed";

    case CTC_STATUS_UNKNOWN_ERROR:
    default:
        return "unknown error";

    }

}
}
#endif