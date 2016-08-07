void vbus_receive_frame(uint16 frameID, uint8 *data)
{
   switch (frameID)
{

case 0x1b0:
 FRAME_DATA_HANDLE(pdc_0x1b0, Pdc_0x1b0);
break;

case 0x214:
 FRAME_DATA_HANDLE(vbus_vcu_0x214, Vcu_0x214);
break;

case 0x230:
 FRAME_DATA_HANDLE(vbus_mcu_0x230, Mcu_0x230);
break;

case 0x2a0:
 FRAME_DATA_HANDLE(tpms_0x2a0, Tpms_0x2a0);
break;

case 0x479:
 FRAME_DATA_HANDLE(peps_0x479, Peps_0x479);
break;

case 0x4a0:
 FRAME_DATA_HANDLE(bcm_0x4a0, Bcm_0x4a0);
break;

case 0x4c9:
 FRAME_DATA_HANDLE(uec_0x4c9, Uec_0x4c9);
break;

case 0x570:
 FRAME_DATA_HANDLE(peps_0x570, Peps_0x570);
break;

case 0x660:
 FRAME_DATA_HANDLE(bcm_0x660, Bcm_0x660);
break;

case 0x661:
 FRAME_DATA_HANDLE(bcm_0x661, Bcm_0x661);
break;

case 0x6f2:
 FRAME_DATA_HANDLE(tbox_0x6f2, Tbox_0x6f2);
break;
}
}
