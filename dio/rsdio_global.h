#ifndef DIO_GLOBAL_H
#define DIO_GLOBAL_H

enum OutputMode
{
    ModeError = 0,
    ModePnp = -1,
    ModeNpn = -2    
};

enum PinMode
{
	ModeInput,
	ModeOutput
};

#endif //DIO_GLOBAL_H