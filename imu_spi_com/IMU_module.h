/*
 * spi_com.h
 *
 *  Created on: 20. feb. 2016
 *      Author: olafurjonthoroddsen
 */

#ifndef IMU_MODULE_H_
#define IMU_MODULE_H_

#include <avr/io.h>
#include <avr/interrupt.h>

void IMU_init();
void accInit();
void gyroInit();
char whoami(void);

void readAcc(int *dataBuff,char smoothness);
void readGyro(int *dataBuff,char smoothness);

#endif /* IMU_MODULE_H_ */
