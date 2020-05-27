#include "tools.h"

//字符串 %02d-%02d %02d:%02d:%02d.%03ld
int MiHoYoSDK::StaticData::STR_timeFormat[30] =
    {31598, 31546, 31538, 31338, 31566, 31598, 31546, 31538, 31338, 31610, 31598, 31546, 31538, 31338, 31506, 31598, 31546, 31538, 31338, 31506, 31598, 31546, 31538, 31338, 31554, 31598, 31546, 31542, 31306, 31338};

//字符串 Honkai3RD
int MiHoYoSDK::StaticData::STR_hk3[9] =
    {31450, 31302, 31298, 31318, 31358, 31326, 31542, 31410, 31466};

//字符串 Arknights
int MiHoYoSDK::StaticData::STR_aks[9] =
    {31486, 31282, 31318, 31298, 31326, 31334, 31322, 31274, 31286};

//字符串 official
int MiHoYoSDK::StaticData::STR_official[8] =
    {31302, 31330, 31330, 31326, 31350, 31326, 31358, 31306};

//字符串 bilibili
int MiHoYoSDK::StaticData::STR_bilibili[8] =
    {31346, 31326, 31306, 31326, 31346, 31326, 31306, 31326};

//字符串 RT Server Start...
int MiHoYoSDK::StaticData::STR_logStart[18] =
    {31410, 31402, 31610, 31414, 31342, 31282, 31266, 31342, 31282, 31610, 31414, 31274, 31358, 31282, 31274, 31554, 31554, 31554};

//字符串 ro.board.platform
int MiHoYoSDK::StaticData::STR_roData01[17] =
    {31282, 31302, 31554, 31346, 31302, 31358, 31282, 31338, 31554, 31290, 31306, 31358, 31274, 31330, 31302, 31282, 31310};

//字符串 ro.product.brand
int MiHoYoSDK::StaticData::STR_roData02[16] =
    {31282, 31302, 31554, 31290, 31282, 31302, 31338, 31278, 31350, 31274, 31554, 31346, 31282, 31358, 31298, 31338};

//字符串 ro.product.cpu.abi
int MiHoYoSDK::StaticData::STR_roData03[18] =
    {31282, 31302, 31554, 31290, 31282, 31302, 31338, 31278, 31350, 31274, 31554, 31350, 31290, 31278, 31554, 31358, 31346, 31326};

//字符串 ro.product.device
int MiHoYoSDK::StaticData::STR_roData04[17] =
    {31282, 31302, 31554, 31290, 31282, 31302, 31338, 31278, 31350, 31274, 31554, 31338, 31342, 31266, 31326, 31350, 31342};

//字符串 ro.build.display.id
int MiHoYoSDK::StaticData::STR_roData05[19] =
    {31282, 31302, 31554, 31346, 31278, 31326, 31306, 31338, 31554, 31338, 31326, 31286, 31290, 31306, 31358, 31262, 31554, 31326, 31338};

//字符串 ro.build.host
int MiHoYoSDK::StaticData::STR_roData06[13] =
    {31282, 31302, 31554, 31346, 31278, 31326, 31306, 31338, 31554, 31322, 31302, 31286, 31274};

//字符串 ro.build.id
int MiHoYoSDK::StaticData::STR_roData07[11] =
    {31282, 31302, 31554, 31346, 31278, 31326, 31306, 31338, 31554, 31326, 31338};

//字符串 ro.product.manufacturer
int MiHoYoSDK::StaticData::STR_roData08[23] =
    {31282, 31302, 31554, 31290, 31282, 31302, 31338, 31278, 31350, 31274, 31554, 31310, 31358, 31298, 31278, 31330, 31358, 31350, 31274, 31278, 31282, 31342, 31282};

//字符串 ro.product.model
int MiHoYoSDK::StaticData::STR_roData09[16] =
    {31282, 31302, 31554, 31290, 31282, 31302, 31338, 31278, 31350, 31274, 31554, 31310, 31302, 31338, 31342, 31306};

//字符串 ro.build.tags
int MiHoYoSDK::StaticData::STR_roData10[13] =
    {31282, 31302, 31554, 31346, 31278, 31326, 31306, 31338, 31554, 31274, 31358, 31334, 31286};

//字符串 ro.build.type
int MiHoYoSDK::StaticData::STR_roData11[13] =
    {31282, 31302, 31554, 31346, 31278, 31326, 31306, 31338, 31554, 31274, 31262, 31290, 31342};

//字符串 ro.build.user
int MiHoYoSDK::StaticData::STR_roData12[13] =
    {31282, 31302, 31554, 31346, 31278, 31326, 31306, 31338, 31554, 31278, 31286, 31342, 31282};

//字符串 ro.build.version.incremental
int MiHoYoSDK::StaticData::STR_roData13[28] =
    {31282, 31302, 31554, 31346, 31278, 31326, 31306, 31338, 31554, 31266, 31342, 31282, 31286, 31326, 31302, 31298, 31554, 31326, 31298, 31350, 31282, 31342, 31310, 31342, 31298, 31274, 31358, 31306};

//字符串 ro.build.version.sdk
int MiHoYoSDK::StaticData::STR_roData14[20] =
    {31282, 31302, 31554, 31346, 31278, 31326, 31306, 31338, 31554, 31266, 31342, 31282, 31286, 31326, 31302, 31298, 31554, 31286, 31338, 31318};

//字符串 ro.build.version.codename
int MiHoYoSDK::StaticData::STR_roData15[25] =
    {31282, 31302, 31554, 31346, 31278, 31326, 31306, 31338, 31554, 31266, 31342, 31282, 31286, 31326, 31302, 31298, 31554, 31350, 31302, 31338, 31342, 31298, 31358, 31310, 31342};

//字符串 ro.build.version.release
int MiHoYoSDK::StaticData::STR_roData16[24] =
    {31282, 31302, 31554, 31346, 31278, 31326, 31306, 31338, 31554, 31266, 31342, 31282, 31286, 31326, 31302, 31298, 31554, 31282, 31342, 31306, 31342, 31358, 31286, 31342};

//字符串 ro.build.date.utc
int MiHoYoSDK::StaticData::STR_roData17[17] =
    {31282, 31302, 31554, 31346, 31278, 31326, 31306, 31338, 31554, 31338, 31358, 31274, 31342, 31554, 31278, 31274, 31350};

//字符串 ro.build.product
int MiHoYoSDK::StaticData::STR_roData18[16] =
    {31282, 31302, 31554, 31346, 31278, 31326, 31306, 31338, 31554, 31290, 31282, 31302, 31338, 31278, 31350, 31274};

//字符串 ro.build.description
int MiHoYoSDK::StaticData::STR_roData19[20] =
    {31282, 31302, 31554, 31346, 31278, 31326, 31306, 31338, 31554, 31338, 31342, 31286, 31350, 31282, 31326, 31290, 31274, 31326, 31302, 31298};

//字符串 ro.build.fingerprint
int MiHoYoSDK::StaticData::STR_roData20[20] =
    {31282, 31302, 31554, 31346, 31278, 31326, 31306, 31338, 31554, 31330, 31326, 31298, 31334, 31342, 31282, 31290, 31282, 31326, 31298, 31274};