#ifndef _ADC_H_
#define _ADC_H_

#include "ch.h"

void adc_init(void);
void adc_update(void);
uint16_t adc_charger_input_voltage(void);
uint16_t adc_thermistor(void);
uint16_t adc_discharge_voltage(void);

#endif /* _ADC_H_ */