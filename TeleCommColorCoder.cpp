#include "TeleCommColorCoder.h"

using namespace TeleCommColorCoder;

ColorPair TeleCommColorCoder::GetColorFromPairNumber(int pairNumber) {
        int zeroBasedPairNumber = pairNumber - 1;
        MajorColor majorColor =
            (MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
        MinorColor minorColor =
            (MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
        return ColorPair(majorColor, minorColor);
    }
int TeleCommColorCoder::GetPairNumberFromColor(MajorColor major, MinorColor minor) {
        return major * numberOfMinorColors + minor + 1;
    }
MajorColor ColorPair::getMajor() {
    return majorColor;
}
MinorColor ColorPair::getMinor() {
    return minorColor;
}
std::string ColorPair::ToString() {
    std::string colorPairStr = MajorColorNames[majorColor];
    colorPairStr += " ";
    colorPairStr += MinorColorNames[minorColor];
    return colorPairStr;
}
