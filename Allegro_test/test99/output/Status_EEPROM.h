//=====================================================================================================================
//All Rights Reserved.*************Agnisys**************** fadfasdfsdfsd
//*** This file is auto generated by ISequenceSpec (http://www.agnisys.com) . Please do not edit this file. ***
//Created by        :
//Generated by      : Saurabh
//Generated from    : C:\Users\Anupam\Documents\GitHub\git_test\Allegro_test\test99\sample_sequence.idsng
//IDesignSpec rev   : idsbatch v 6.16.4.7
//=====================================================================================================================


#include <stdbool.h>


int  status_eeprom( int arg ) {

const int const1 = 3 ;
const int const2 = 4 ;
int flag;
int var1 = 5 ;



FIELD_WRITE(TopC_PCIe_LINK0_boot_rom_ADDRESS,0x00550001,TOPC_PCIE_LINK0_BOOT_ROM_BOOT_ROM_MEM1_MASK,TOPC_PCIE_LINK0_BOOT_ROM_BOOT_ROM_MEM1_OFFSET);

REG_WRITE(TopC_PCIe_LINK0_boot_rom_ADDRESS,const2);

FIELD_WRITE(TopC_PCIe_LINK0_CORE_flash_mem_ADDRESS,var1 << TOPC_PCIE_LINK0_CORE_FLASH_MEM_FLASH_MEM0_OFFSET,TOPC_PCIE_LINK0_CORE_FLASH_MEM_FLASH_MEM0_MASK,TOPC_PCIE_LINK0_CORE_FLASH_MEM_FLASH_MEM0_OFFSET);

FIELD_WRITE(TopC_PCIe_LINK0_CORE_flash_mem_ADDRESS,0x000C0000,TOPC_PCIE_LINK0_CORE_FLASH_MEM_FLASH_MEM1_MASK,TOPC_PCIE_LINK0_CORE_FLASH_MEM_FLASH_MEM1_OFFSET);

REG_WRITE(TopC_PCIe_LINK0_boot_rom_ADDRESS,11);


// Including UDF :: Shadow_EEPROM
extern Shadow_EEPROM();


REG_WRITE(TopC_PCIe_LINK0_boot_rom_ADDRESS,4);
return flag;
}
