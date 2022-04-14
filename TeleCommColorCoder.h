#include <iostream>
#include <assert.h>

namespace TeleCommColorCoder
{
    enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
    enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

    static const char* MajorColorNames[] = {
        "White", "Red", "Black", "Yellow", "Violet"
    };
    static int numberOfMajorColors =
        sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
    static const char* MinorColorNames[] = {
        "Blue", "Orange", "Green", "Brown", "Slate"
    };
    static int numberOfMinorColors =
        sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

    class ColorPair {
    private:
        MajorColor majorColor;
        MinorColor minorColor;
    public:
        ColorPair(MajorColor major, MinorColor minor):
            majorColor(major), minorColor(minor)
        {}
        MajorColor getMajor();
        MinorColor getMinor();
        std::string ToString();
    };

    ColorPair GetColorFromPairNumber(int );
    int GetPairNumberFromColor(MajorColor major, MinorColor minor);
}
