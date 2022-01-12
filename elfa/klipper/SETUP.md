[REF](https://gall.dcinside.com/mgallery/board/view?id=3dprinting&no=22529)
```
menuconfig
STM32F103
bootloader - 28KiB
USART3
!PC6,!PD13
```

```
make clean
make
./scripts/update_mks_robin.py out/klipper.bin out/Robin_nano35.bin
```