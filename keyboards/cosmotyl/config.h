#pragma once

#define EE_HANDS // Store which side I am in EEPROM
#define BOOTMAGIC_ROW 1
#define BOOTMAGIC_COLUMN 0
/* Keyboard matrix assignments */
#define MATRIX_ROW_PINS { GP29, GP28, GP27, GP26, GP18, GP20 }
#define MATRIX_COL_PINS { GP2, GP3, GP4, GP5,  GP7, GP8, GP6}

#define MATRIX_ROW_PINS_RIGHT { GP29, GP28, GP27, GP26, GP18, GP20 }
#define MATRIX_COL_PINS_RIGHT { GP2, GP3, GP4, GP5, GP6, GP7, GP8  }
