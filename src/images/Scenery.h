#pragma once

namespace Images {

  const uint8_t PROGMEM Ground_Left[] = {
  11, 56,
  0x1e, 0x1e, 0x0c, 0x0c, 0x0c, 0x0c, 0xac, 0x4c, 0xa8, 0xe8, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xa0, 0x55, 0xfa, 0xfd, 0xff, 0xff, 0x00, 
  0x00, 0x00, 0xa0, 0x50, 0xaa, 0xfd, 0xff, 0xff, 0x1f, 0x00, 0x00, 
  0xaa, 0x55, 0xaa, 0xfd, 0xff, 0xff, 0xff, 0xff, 0xff, 0x38, 0x00, 
  0xea, 0x7d, 0x3f, 0x7f, 0x3f, 0x7f, 0xff, 0x7f, 0xc3, 0x80, 0x00, 
  0x20, 0x01, 0x80, 0x04, 0x0a, 0x01, 0x20, 0x44, 0x82, 0xd3, 0xf8, 
  0x01, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x01, 0x01, 0x01, 
  };

  const uint8_t PROGMEM Ground_Left_Mask[] = {
  0xff, 0xff, 0xff, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfc, 0xfc, 0xf8, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x1f, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x38, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc3, 0x80, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  };

  const uint8_t PROGMEM Ground_Right[] = {
  11, 56,
  0x00, 0xe8, 0xa8, 0x4c, 0xac, 0x0c, 0x0c, 0x0c, 0x0c, 0x1e, 0x1e, 
  0x00, 0xff, 0xff, 0xfd, 0xfa, 0x55, 0xa0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x1f, 0xff, 0xff, 0xfd, 0xaa, 0x50, 0xa0, 0x00, 0x00, 
  0x00, 0x38, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xaa, 0x55, 0xaa, 
  0x00, 0x80, 0xc3, 0x7f, 0xff, 0x7f, 0x3f, 0x7f, 0x3f, 0x7d, 0xea, 
  0xf8, 0xd3, 0x82, 0x44, 0x20, 0x01, 0x0a, 0x04, 0x80, 0x01, 0x20, 
  0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x01, 
  };

  const uint8_t PROGMEM Ground_Right_Mask[] = {
  0xf8, 0xfc, 0xfc, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x38, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x80, 0xc3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
  };

  const uint8_t PROGMEM Ground_Bottom[] = {
  106, 16,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xfe, 0xfe, 0xfc, 0xfc, 0xfc, 0xf8, 0xf0, 0xf0, 0xf0, 0xe0, 0xe0, 0xe0, 0xf0, 0xe0, 0xf0, 0xe8, 0xd0, 0xe8, 0xd4, 0xf8, 0xfe, 0xff, 0xfe, 0xfc, 0xf8, 0xe8, 0xf0, 0xe8, 0xf0, 0xe8, 0xd4, 0xe8, 0xd4, 0xec, 0xf8, 0xf8, 0xf8, 0xfc, 0xfc, 0xfc, 0xfc, 0xf8, 0x54, 0xa8, 0x54, 0xa8, 0xd0, 0xa8, 0xd0, 0xe0, 0xf0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xc0, 0xc0, 0xc0, 0x80, 0x40, 0xa0, 0xf0, 0xfc, 0xfe, 0xfc, 0xf4, 0xe8, 0x54, 0xa8, 0x54, 0xa8, 0x54, 0xa8, 0xd0, 0xe0, 0xf0, 0xf8, 0xfc, 0xd8, 0xb8, 0xd8, 0xb0, 0xf0, 0xf0, 0xf0, 0xf8, 0xe0, 0xd0, 0xe8, 0xd0, 0xa8, 0xe0, 0xf0, 0xe0, 0xe0, 0xe0, 0xf0, 0xf0, 0xf0, 0xf8, 0xfc, 0xfc, 0xfc, 0xfe, 0xfe, 
  };

  const uint8_t PROGMEM Ground_Bottom_Mask[] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xfe, 0xfe, 0xfe, 0xfc, 0xf8, 0xf8, 0xf8, 0xf0, 0xf0, 0xf0, 0xf8, 0xf0, 0xf8, 0xfc, 0xf8, 0xfc, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0xfe, 0xfc, 0xfc, 0xf8, 0xfc, 0xf8, 0xfc, 0xfe, 0xfc, 0xfe, 0xfe, 0xfc, 0xfc, 0xfc, 0xfe, 0xfe, 0xfe, 0xfe, 0xfc, 0xfe, 0xfc, 0xfe, 0xfc, 0xf8, 0xfc, 0xf8, 0xf0, 0xf8, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xe0, 0xe0, 0xe0, 0xc0, 0xe0, 0xf0, 0xfc, 0xfe, 0xff, 0xfe, 0xfe, 0xfc, 0xfe, 0xfc, 0xfe, 0xfc, 0xfe, 0xfc, 0xf8, 0xf0, 0xf8, 0xfc, 0xfe, 0xfc, 0xfc, 0xfc, 0xf8, 0xf8, 0xf8, 0xf8, 0xfc, 0xf8, 0xf8, 0xfc, 0xf8, 0xfc, 0xf8, 0xf8, 0xf0, 0xf0, 0xf0, 0xf8, 0xf8, 0xf8, 0xfc, 0xfe, 0xfe, 0xfe, 0xff, 0xff, 
  };

  const uint8_t PROGMEM SkyBackground[] = {
  128, 40,
  0xa0, 0x55, 0xa0, 0x55, 0xa0, 0x55, 0xa0, 0x55, 0xa0, 0x55, 0xa0, 0x55, 0xa0, 0x55, 0xa0, 0x55, 0xa0, 0x55, 0xa0, 0x55, 0xa3, 0x57, 0xa7, 0x57, 0xaf, 0x5f, 0xbf, 0x7f, 0xbf, 0x7f, 0xbf, 0x7f, 0xbf, 0x5f, 0xaf, 0x57, 0xaf, 0x5f, 0xaf, 0x5f, 0xaf, 0x57, 0xa3, 0x57, 0xa3, 0x55, 0xa0, 0x55, 0xa0, 0x55, 0xa0, 0xd5, 0xe0, 0xd5, 0xe0, 0xf5, 0xf8, 0xfd, 0xf8, 0xfd, 0xf8, 0xf5, 0xe0, 0xd5, 0xe0, 0xf5, 0xf0, 0xfd, 0xf8, 0xfd, 0xfc, 0xfd, 0xf8, 0xf5, 0xe0, 0xf5, 0xe0, 0xd5, 0xa0, 0x55, 0xa3, 0x57, 0xa7, 0x5f, 0xbf, 0x7f, 0xbf, 0x7f, 0xbf, 0x5f, 0xbf, 0x7f, 0xff, 0x7f, 0xff, 0x7f, 0xbf, 0x5f, 0xaf, 0x5f, 0xbf, 0x5f, 0xa7, 0x57, 0xa3, 0x55, 0xa0, 0x55, 0xa0, 0x55, 0xa0, 0x55, 0xa0, 0x55, 0xa0, 0x55, 0xa0, 0x55, 0xa0, 0x55, 0xa0, 0x55, 0xa0, 0x55, 0xa0, 0x55, 0xa0, 0x55, 
  0xff, 0xd5, 0xff, 0x75, 0xff, 0xd5, 0xff, 0x75, 0xff, 0xd5, 0xff, 0x75, 0xff, 0xd5, 0xff, 0x75, 0xff, 0xd5, 0xff, 0x75, 0xff, 0xd5, 0xff, 0x75, 0xff, 0xd5, 0xff, 0x75, 0xff, 0xd5, 0xff, 0x75, 0xff, 0xd5, 0xff, 0x75, 0xff, 0xd5, 0xff, 0x75, 0xff, 0xd5, 0xff, 0x75, 0xff, 0xd5, 0xff, 0x75, 0xff, 0xd5, 0xff, 0x77, 0xff, 0xdf, 0xff, 0x7f, 0xff, 0xff, 0xff, 0x7f, 0xff, 0xdf, 0xff, 0x7f, 0xff, 0xff, 0xff, 0x7f, 0xff, 0xff, 0xff, 0x7f, 0xff, 0xdf, 0xff, 0x7f, 0xff, 0xd7, 0xff, 0x75, 0xff, 0xd5, 0xff, 0x75, 0xff, 0xd5, 0xff, 0x75, 0xff, 0xd5, 0xff, 0x75, 0xff, 0xd5, 0xff, 0x75, 0xff, 0xd5, 0xff, 0x75, 0xff, 0xd5, 0xff, 0x75, 0xff, 0xd5, 0xff, 0x75, 0xff, 0xd5, 0xff, 0x75, 0xff, 0xd5, 0xff, 0x75, 0xff, 0xd5, 0xff, 0x75, 0xff, 0xd5, 0xff, 0x75, 0xff, 0xd5, 0xff, 0xd5, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
  };

  const uint8_t PROGMEM Seaweed[] = {
  4, 10,
  0xb2, 0x4d, 0xb2, 0x4d, 
  0x01, 0x02, 0x01, 0x02, 

  0x74, 0x8b, 0x74, 0x8b, 
  0x03, 0x00, 0x03, 0x00, 
  };

  const uint8_t PROGMEM Seaweed_Mask[] = {
  0xff, 0xff, 0xff, 0xff, 
  0x03, 0x03, 0x03, 0x03, 
  };

  const unsigned char PROGMEM Water_01[] = {
  43, 2,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
  };

  const unsigned char PROGMEM Water_01_Mask[] = {
  0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
  };

  const unsigned char PROGMEM Water_02[] = {
  42, 2,
  0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
  };

  const unsigned char PROGMEM Water_02_Mask[] = {
  0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
  };

  const unsigned char PROGMEM Water_03[] = {
  43, 2,
  0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  };

  const unsigned char PROGMEM Water_03_Mask[] = {
  0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 
  };

}