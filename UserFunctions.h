
unsigned int getAverage(unsigned int *,int );				//bir dizi ve o dizin ka� eleman aldigi bilgisini alir ve
																										//tum elemanlarin ortalamasini d�nd�r�r.
																																		
void ADC_ConvertOneTime(unsigned char* triggerValue);							//ADC yi tek tur d�nd�rmek i�in ADC1_CR2 bitini set eder

void ADC_ConvertSampleTime(unsigned char triggerValue, unsigned int BufferCounter);							

short valueComparator(unsigned int, unsigned int);	//ADC den gelen digital degeri istenen degerle kars1lastirir	

unsigned int sensorFilterRoutine(unsigned int sampleNumber, unsigned int maxAverageValue, unsigned int* sampleBuffer,unsigned int *BufferCounter);
