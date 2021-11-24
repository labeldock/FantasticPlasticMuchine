## installation
```
sudo apt update
```
### menuconfig

- Enable extra low-level configuration options
  - Micro-controller Architecture : STMicroelectonics STM32
  - Processor model : STM32F103
  - Bootloader architecture : 28Kib bootloader
  - Clock Reference : 8 MHz Crystal
  - Communication interface : USB
  - GPIO pins to set at micro-controller startup : !PA14
  - <s>USB ids: `lsusb -v` exam => idVendor, idProduct = 0x1eaf, 0x0004</s>
  - "q"(quit) "y"(save)

```
make clean
make
```

### flash
Copy to memory card
```
~/klipper/out/klipper.bin
SDCard => /firmware.bin
```

### service

```
sudo service klipper stop
sudo service klipper start
```