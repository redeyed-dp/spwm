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

/*
 * K = 255 * Utr * 1.41 / Ubat
 *
 * where
 * Utr - effective voltage of primary winding of the transformer
 * Ubat - battery voltage
 *
 * for example:
 * we have thansformer with winging 2*18V (for push-pull topology),
 * 6s Li-ion battery 4.2V * 6 = 25.2V
 * K = 255 * 18 * 1.41 / 25.2 = 257
 * this is no good transformer, we can not get 220V with low battery
 */

#define DEFAULT_K 0xFF

#endif
