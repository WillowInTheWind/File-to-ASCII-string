#include <iostream>
using namespace std;

class image
{
private:
    int pixelWidth;
    int pixelLength;

public:
    float getAspectRatio()
    {
        return pixelWidth / pixelLength;
    }
    float getPixelWidth()
    {
        return pixelWidth;
    }

    float getPixelLength()
    {
        return pixelLength;
    }

    void procesImage()
    {
    }
};
