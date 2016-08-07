void abus_receive_frame(uint16 frameID, uint8 *data)
{
   switch (frameID)
{

case 0x212:
 FRAME_DATA_HANDLE(vcu_0x212, Vcu_0x212);
break;

case 0x214:
 FRAME_DATA_HANDLE(vcu_0x214, Vcu_0x214);
break;

case 0x230:
 FRAME_DATA_HANDLE(mcu_0x230, Mcu_0x230);
break;

case 0x318:
 FRAME_DATA_HANDLE(abs_0x318, Abs_0x318);
break;

case 0x430:
 FRAME_DATA_HANDLE(mcu_0x430, Mcu_0x430);
break;

case 0x450:
 FRAME_DATA_HANDLE(bms_0x450, Bms_0x450);
break;

case 0x451:
 FRAME_DATA_HANDLE(bms_0x451, Bms_0x451);
break;

case 0x470:
 FRAME_DATA_HANDLE(eps_0x470, Eps_0x470);
break;

case 0x4c8:
 FRAME_DATA_HANDLE(epb_0x4c8, Epb_0x4c8);
break;

case 0x4e0:
 FRAME_DATA_HANDLE(ecc_0x4e0, Ecc_0x4e0);
break;

case 0x585:
 FRAME_DATA_HANDLE(ehu_0x585, Ehu_0x585);
break;

case 0x611:
 FRAME_DATA_HANDLE(vcu_0x611, Vcu_0x611);
break;

case 0x615:
 FRAME_DATA_HANDLE(vcu_0x615, Vcu_0x615);
break;

case 0x616:
 FRAME_DATA_HANDLE(vcu_0x616, Vcu_0x616);
break;

case 0x617:
 FRAME_DATA_HANDLE(vcu_0x617, Vcu_0x617);
break;

case 0x61d:
 FRAME_DATA_HANDLE(vcu_0x61d, Vcu_0x61d);
break;
}
}
