#include "TeleCommColorCoder.h"
using namespace TeleCommColorCoder;

void testNumberToPair(int pairNumber,
    MajorColor expectedMajor,
    MinorColor expectedMinor)
{
    ColorPair colorPair =
        GetColorFromPairNumber(pairNumber);
    std::cout << "Got pair " << colorPair.ToString() << std::endl;
    assert(colorPair.getMajor() == expectedMajor);
    assert(colorPair.getMinor() == expectedMinor);
}

void testPairToNumber(
    MajorColor major,
    MinorColor minor,
    int expectedPairNumber)
{
    int pairNumber = GetPairNumberFromColor(major, minor);
    std::cout << "Got pair number " << pairNumber << std::endl;
    assert(pairNumber == expectedPairNumber);
}

void displayColorCode(){
    std::cout << std::endl << "***+++---Color Code Manual---+++***" << std::endl;
    std::cout << "Pair number" << "\t" << "Color Code" << std::endl;
    for (int pairNumber = 1; pairNumber < numberOfMajorColors * numberOfMinorColors + 1 ; pairNumber++)
    {
        ColorPair colorPair = GetColorFromPairNumber(pairNumber);
        std::cout << pairNumber << "\t\t" << colorPair.ToString() << std::endl;
    }
}
