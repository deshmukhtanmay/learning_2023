#include <stdio.h>


struct Box {
    double length;
    double width;
    double height;
};


double calculateVolume(struct Box *boxPtr) {
    return boxPtr->length * boxPtr->width * boxPtr->height;
}


double calculateSurfaceArea(struct Box *boxPtr) {
    return 2 * (boxPtr->length * boxPtr->width + boxPtr->width * boxPtr->height + boxPtr->height * boxPtr->length);
}

int main() {
    struct Box myBox = { 5.0, 3.0, 2.0 };
    struct Box *boxPtr = &myBox;
    double volume = boxPtr->length * boxPtr->width * boxPtr->height;
    double surfaceArea = 2 * (boxPtr->length * boxPtr->width + boxPtr->width * boxPtr->height + boxPtr->height * boxPtr->length);

    printf("Volume of the box: %.2f\n", volume);
    printf("Surface area of the box: %.2f\n", surfaceArea);

    return 0;
}
