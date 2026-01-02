#pragma once

#define EE_HANDS // Store which side I am in EEPROM
#define BOOTMAGIC_ROW 0
#define BOOTMAGIC_COLUMN 0
/* Keyboard matrix assignments */

#define MATRIX_COL_PINS { GP12, GP11, GP10, GP9, GP8, GP7, GP6} 
#define MATRIX_ROW_PINS {GP0, GP2, GP3, GP4, GP5} //{ GP2, GP3, GP4, GP5, GP6, GP7, GP8 }

#define MATRIX_COL_PINS_RIGHT { GP6, GP7, GP8, GP9, GP10, GP11, GP12 }
#define MATRIX_ROW_PINS_RIGHT {GP0, GP2, GP3, GP4, GP5}
