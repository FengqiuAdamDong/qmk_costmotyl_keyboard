#pragma once

#define EE_HANDS // Store which side I am in EEPROM
#define BOOTMAGIC_ROW 0
#define BOOTMAGIC_COLUMN 0
/* Keyboard matrix assignments */

#define MATRIX_ROW_PINS { GP27, GP26, GP22, GP21, GP20, GP19}
#define MATRIX_COL_PINS {GP8, GP7, GP6, GP5, GP4, GP3, GP2} //{ GP2, GP3, GP4, GP5, GP6, GP7, GP8 }

#define MATRIX_ROW_PINS_RIGHT { GP27, GP26, GP22, GP21, GP20, GP19 }
#define MATRIX_COL_PINS_RIGHT { GP2, GP3, GP4, GP5, GP6, GP7, GP8 }
