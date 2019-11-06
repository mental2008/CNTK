#include "ConvolutionalNodes.h"

namespace Microsoft { namespace MSR { namespace CNTK {

const bool printInfo = false;
const bool weightInit = true;
bool isFirstForward = true;
size_t nodeCount = 0;
size_t iterCount = 0;
const size_t iterPrint = 1;

}}};