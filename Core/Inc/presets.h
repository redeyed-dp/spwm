#ifndef PRESETS_H
#define PRESETS_H

/*
 * Battery settings
 * undervoltage protection 19.0V * 107 = 2031
 * undervoltage recovery   20.1V * 107 = 2151
 * overvoltage recovery    25.5V * 107 = 2728
 * overvoltage protection  26.5V * 107 = 2836
 */

#define UVP 2000
#define UVR 2151
#define OVR 2728
#define OVP 2836

/* Feedback
 * 210V * 6.5909 = 1380
 * 220V * 6.5909 = 1450
 */
#define FB_MIN 1380
#define FB_MAX 1450

#endif
