#include "hq_emmc_name.h"

#define NUM_EMI_RECORD (2)



EMMC_NAME_STRUCT emmc_names_table[] =
{
	// H9TQ17ABJTMCUR_KUM  16 + 2
	{
		0x0203,		/* TYPE */
		{0x90,0x01,0x4A,0x48,0x41,0x47,0x32,0x65,0x05,0x0,0x0,0x0,0x0,0x0,0x0,0x0},		/* NAND_EMMC_ID */
		{"H9TQ17ABJTMCUR_KUM (Hynix 16+2)"},
		{0,0,0,0,0,0,0,0,0,0},		/* reserved 10 */
	},
	
	// KMQE10013M_B318  16 + 2
	{
		0x0203,		/* TYPE */
		{0x15,0x01,0x00,0x51,0x45,0x31,0x33,0x4D,0x42,0x0,0x0,0x0,0x0,0x0,0x0,0x0},		/* NAND_EMMC_ID */
		{"KMQE10013M_B318 (Samsung 16+2)"},
		{0,0,0,0,0,0,0,0,0,0},		/* reserved 10 */
	},
	
	// H9TQ26ADFTACUR_KUM  32 + 3
	{
		0x0203,		/* TYPE */
		{0x90,0x01,0x4A,0x48,0x42,0x47,0x34,0x61,0x32,0x0,0x0,0x0,0x0,0x0,0x0,0x0},		/* NAND_EMMC_ID */
		{"H9TQ26ADFTACUR_KUM (Hynix 32+3)"},
		{0,0,0,0,0,0,0,0,0,0},		/* reserved 10 */
	},
	 
};
int num_of_emmc_records = sizeof(emmc_names_table)/sizeof(EMMC_NAME_STRUCT) ;