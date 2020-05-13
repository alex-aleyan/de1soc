#
TARGET = i2c_switch

#
CROSS_COMPILE = arm-linux-gnueabihf-
CFLAGS = -static -g -Wall  -I${SOCEDS_DEST_ROOT}/ip/altera/hps/altera_hps/hwlib/include 
# -I ../libmpeg2-0.5.1/include -I ../libmad-0.15.1b
LDFLAGS =  -g -Wall  
# -L../libmpeg2-0.5.1/libmpeg2/.libs  -L../libmpeg2-0.5.1/libmpeg2/convert/.libs -L../libmad-0.15.1b/.libs
CC = $(CROSS_COMPILE)gcc
ARCH= arm

build: $(TARGET)

#
$(TARGET): main.o  
	$(CC) $(LDFLAGS)   $^ -o $@  
%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean
clean:
	rm -f $(TARGET) *.a *.o *~ *.bmp
