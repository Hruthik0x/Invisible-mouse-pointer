#include <Windows.h>

int main() {
    HCURSOR hCursor;
    hCursor = LoadCursorFromFile("C:\\Windows\\Cursors\\aero_arrow.cur");
    SetSystemCursor(hCursor, OCR_NORMAL);
    return 0;
}