
#ifndef __BOOGA_H
#define __BOOGA_H

/*
 * example.h -- definitions for the char module
 *
 */
 
#ifndef BOOGA_MAJOR
#define BOOGA_MAJOR 0   /* dynamic major by default */
#endif

#ifndef BOOGA_NR_DEVS
#define BOOGA_NR_DEVS 4    /* example0 through example3 */
#endif
/*
 * Split minors in two parts
 */
#define TYPE(dev)   (MINOR(dev) >> 4)  /* high nibble */
#define NUM(dev)    (MINOR(dev) & 0xf) /* low  nibble */

struct booga_device {
	unsigned int opens;
};
typedef struct booga_device booga_device;

/*
 * The different configurable parameters
 */
struct booga_stats {
	long int bytes_read;
	long int bytes_written;
	booga_device devs[BOOGA_NR_DEVS];	
	struct semaphore sem;
};
typedef struct booga_stats booga_stats;

#endif /* __EXAMPLE_H */
