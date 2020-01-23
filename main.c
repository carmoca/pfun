#include <stdio.h>
#include <stdint.h>

/**
*/
uint8_t displayArray(uint8_t* d, uint8_t length)
{
	if (!d)
		return 0;
	for (size_t i = 0; i < length; i++)
	{
		printf("0x%x ", *(d + i));
		if ((i + 1) % 4 == 0)
			printf("\n");
	}

	return 1;
}

uint8_t displayDoublePointer(uint8_t** d, uint8_t length)
{
	if (!d )
		return 0;
	else
	{
		for (size_t i = 0; i < length; i++)
		{
			printf("0x%x ", *(*(d + i) ) ) ;
			if ((i + 1) % 4 == 0)
				printf("\n");
		}
	}

	return 1;
}

int main(int argc, char** argv)
{
	uint8_t data[] =
	{
		0x40, 0x30, 0x31, 0x32, 0x33,
		0x34, 0x35, 0x36, 0x37, 0x38
	};

	uint8_t** pData = NULL;

	pData = &data[0];

	displayArray(data, sizeof(data) / sizeof(uint8_t));
	displayDoublePointer(pData, sizeof(data) / sizeof(uint8_t));

	return 0;
}