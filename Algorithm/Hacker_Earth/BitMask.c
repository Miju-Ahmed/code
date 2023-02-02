#include <stdio.h>
#include <assert.h>

/* Finish initializing the flags */

const short FLAG_ON          = 1 << 0; // 1  (0x01)
const short FLAG_MOVEMENT    = 1 << 1; // 2  (0x02)
const short FLAG_TRANSPARENT = 1 << 2; // 4  (0x04)
const short FLAG_ALIVE       = 1 << 3; // 8  (0x08)
const short FLAG_BROKEN      = 1 << 4; // 16 (0x10)
const short FLAG_EDIBLE      = 1 << 5; // 32 (0x20)

int main() {
  short attributes = 0;

  /* Set the attributes ON, TRANSPARENT, and BROKEN */
  attributes |= FLAG_ON;
  attributes |= FLAG_TRANSPARENT;
  attributes |= FLAG_BROKEN;
  // possible solution(s):
  // attributes |= FLAG_ON | FLAG_TRANSPARENT | FLAG_BROKEN;
  // attributes = FLAG_ON | FLAG_TRANSPARENT | FLAG_BROKEN;

  assert(attributes == (FLAG_ON | FLAG_TRANSPARENT | FLAG_BROKEN));

  /* Modify (set/clear/toggle) so the only attributes are ON and ALIVE */
  attributes &= ~FLAG_TRANSPARENT;
  // possible: attributes ^= FLAG_TRANSPARENT;
  attributes ^= FLAG_BROKEN;
  // possible: attributes &= ~FLAG_BROKEN;
  attributes |= FLAG_ALIVE;

  assert(attributes == (FLAG_ON | FLAG_ALIVE));

  /* Check if the ALIVE flag is set */
  assert(attributes & FLAG_ALIVE);

  /* Check if the BROKEN flag is not set */
  assert(!(attributes & FLAG_BROKEN));

  /* Modify so only the EDIBLE attribute is set */
  attributes = FLAG_EDIBLE;

  assert(attributes == FLAG_EDIBLE);

  printf("Done!");
}