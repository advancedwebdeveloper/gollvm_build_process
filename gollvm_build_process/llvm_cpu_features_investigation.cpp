#include "llvm/ADT/StringRef.h"
#include "llvm/ADT/StringMap.h"
#include "llvm/MC/SubtargetFeature.h"
#include "llvm/Support/Host.h"

using namespace llvm;
SubtargetFeatures Features1;

int main (int argc, char **argv)
{
sys::getHostCPUName();
StringMap<bool> HostFeatures;
if (sys::getHostCPUFeatures(HostFeatures))
       for (auto &F : HostFeatures)
         Features1.AddFeature(F.first(), F.second);
   
 
 printf("test %s", Features1.getString().c_str());
printf("\nsomething else\n");
return 0;
}
