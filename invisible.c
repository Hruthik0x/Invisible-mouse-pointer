#include <Windows.h>

int main() {
    HCURSOR hCursor;
    hCursor = LoadCursorFromFile("t.cur");
    SetSystemCursor(hCursor, OCR_NORMAL);
    return 0;
}