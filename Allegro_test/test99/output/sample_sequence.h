/**************Agnisys**************** fadfasdfsdfsd*/
/**/
/**** This file is auto generated by IDesignSpec (http://www.agnisys.com) . Please do not edit this file. ****/
/* created by        : */
/* generated by      : Saurabh*/
/* generated from    : C:\Users\Anupam\Documents\GitHub\git_test\Allegro_test\test99\sample_sequence.idsng*/
/* IDesignSpec rev   : idsbatch v 6.16.4.7 */

/**** This code is generated with following settings ****/
/* Reg Width                  : 32*/
/* Address Unit               : 16*/
/* C++ Types int              : hwint*/
/* Bus Type                   : WISHBONE*/
/* BigEndian                  : false*/
/* LittleEndian               : false*/
/* Dist. Decode and Readback  : false*/
/*--------------------------------------------------------------------------------------------------------------- */

/*//////////////////  Chip : TopC ///////////////////*/

#ifndef _TOPC_REGS_H_
#define _TOPC_REGS_H_

/*block : PCIe_LINK0 */


/*section : SSHD */

typedef union {
    struct {
        hwint SSHD : 64;           /* 0:63 SW=ro HW=rw 0x0 */
    } bf;
    hwint  qw;
    
    
} TopC_PCIe_LINK0_SSHD;

typedef union {
    struct {
        hwint boot_rom_mem2 : 8;           /* 31:24 SW=rw HW=rw 0x0 */
        hwint boot_rom_mem1 : 8;           /* 23:16 SW=rw HW=rw 0x0 */
        hwint boot_rom_mem0 : 16;           /* 15:0 SW=rw HW=rw 0x1 */
    } bf;
    hwint  dw;
    
    
} TopC_PCIe_LINK0_boot_rom;

typedef struct {
    
    union {
        TopC_PCIe_LINK0_SSHD s;
        hwint16 filler[0x4];
    } SSHD[0x32];
    TopC_PCIe_LINK0_boot_rom  boot_rom;
    
    
    
} TopC_PCIe_LINK0_s;


/*block : PCIe_LINK0_CORE */


/*  FLASH_MEM DESCRIPTION : */
typedef union {
    struct {
        hwint flash_mem1 : 16;           /* 31:16 SW=rw HW=rw 0x0 */
        hwint flash_mem0 : 16;           /* 15:0 SW=rw HW=rw 0x0 */
    } bf;
    hwint  dw;
    
    
} TopC_PCIe_LINK0_CORE_flash_mem;

/*section : rx_mem */
/*  RX_MEM DESCRIPTION :*/

typedef union {
    struct {
        hwint es_rx_buffer1 : 16;           /* 31:16 SW=rw HW=rw 0x0 */
        hwint es_rx_buffer0 : 16;           /* 15:0 SW=rw HW=rw 0x1 */
    } bf;
    hwint  dw;
    
    
} TopC_PCIe_LINK0_CORE_rx_buffer0;

typedef union {
    struct {
        hwint es_rx_buffer1 : 16;           /* 31:16 SW=rw HW=rw 0x0 */
        hwint es_rx_buffer0 : 16;           /* 15:0 SW=rw HW=rw 0x0 */
    } bf;
    hwint  dw;
    
    
} TopC_PCIe_LINK0_CORE_rx_buffer1;

typedef struct {
    TopC_PCIe_LINK0_CORE_rx_buffer0  rx_buffer0;
    TopC_PCIe_LINK0_CORE_rx_buffer1  rx_buffer1;
    
    
    
} TopC_PCIe_LINK0_CORE_rx_mem;


typedef struct {
    TopC_PCIe_LINK0_CORE_flash_mem  flash_mem[0x7];
    
    union {
        TopC_PCIe_LINK0_CORE_rx_mem s;
        hwint16 filler[0x4];
    } rx_mem[0x2];
    
    
    
} TopC_PCIe_LINK0_CORE_s;


/*block : PCIe_LINK1_CORE */


/*section : flash_memory */

typedef union {
    struct {
        hwint flash_recycle : 4;           /* 31:28 SW=wo HW=ro 0x2 */
        
        hwint resv24 : 4;
        hwint flash_forward0 : 8;           /* 23:16 SW=ro HW=ro 0xA */
        hwint flash1 : 8;           /* 15:8 SW=rw HW=rw 0x1 */
        hwint flash0 : 8;           /* 7:0 SW=rw HW=rw 0x0 */
    } bf;
    hwint  dw;
    
    
} TopC_PCIe_LINK1_CORE_boot_flash0;

typedef union {
    struct {
        hwint flash_field3 : 2;           /* 31:30 SW=ro HW=wo 0x0 */
        
        hwint resv26 : 4;
        hwint flash_field2 : 7;           /* 25:19 SW=rw HW=wo 0x1 */
        
        hwint resv16 : 3;
        hwint flash_field1 : 6;           /* 15:10 SW=ro HW=ro 0x19 */
        
        hwint resv8 : 2;
        hwint flash_field0 : 8;           /* 7:0 SW=rw HW=rw 0x16 */
    } bf;
    hwint  dw;
    
    
} TopC_PCIe_LINK1_CORE_boot_flash1;

typedef struct {
    TopC_PCIe_LINK1_CORE_boot_flash0  boot_flash0;
    TopC_PCIe_LINK1_CORE_boot_flash1  boot_flash1;
    
    
    
} TopC_PCIe_LINK1_CORE_flash_memory;


typedef struct {
    
    union {
        TopC_PCIe_LINK1_CORE_flash_memory s;
        hwint16 filler[0x4];
    } flash_memory;
    
    
    
} TopC_PCIe_LINK1_CORE_s;


/* chip : TopC */








typedef struct {
    
    union {
        TopC_PCIe_LINK0_s s;
        hwint16 filler[0xCA];
    } PCIe_LINK0;
    
    
    union {
        TopC_PCIe_LINK0_CORE_s s;
        hwint16 filler[0x16];
    } PCIe_LINK0_CORE;
    
    
    union {
        TopC_PCIe_LINK1_CORE_s s;
        hwint16 filler[0x4];
    } PCIe_LINK1_CORE;
    
    
} TopC_s;


#define TopC_s_SIZE 0x1C8
#define TopC_PCIe_LINK0_s_SIZE 0x194
#define TopC_PCIe_LINK0_SSHD_SIZE 0x190
#define TopC_PCIe_LINK0_boot_rom_SIZE 0x4
#define TopC_PCIe_LINK0_CORE_s_SIZE 0x2C
#define TopC_PCIe_LINK0_CORE_flash_mem_SIZE 0x1C
#define TopC_PCIe_LINK0_CORE_rx_mem_SIZE 0x10
#define TopC_PCIe_LINK0_CORE_rx_buffer0_SIZE 0x4
#define TopC_PCIe_LINK0_CORE_rx_buffer1_SIZE 0x4
#define TopC_PCIe_LINK1_CORE_s_SIZE 0x8
#define TopC_PCIe_LINK1_CORE_flash_memory_SIZE 0x8
#define TopC_PCIe_LINK1_CORE_boot_flash0_SIZE 0x4
#define TopC_PCIe_LINK1_CORE_boot_flash1_SIZE 0x4

#define TopC_s_OFFSET 0x0
#define TopC_PCIe_LINK0_s_OFFSET 0x0
#define TopC_PCIe_LINK0_SSHD_OFFSET 0x0
#define TopC_PCIe_LINK0_boot_rom_OFFSET 0x190
#define TopC_PCIe_LINK0_CORE_s_OFFSET 0x194
#define TopC_PCIe_LINK0_CORE_flash_mem_OFFSET 0x0
#define TopC_PCIe_LINK0_CORE_rx_mem_OFFSET 0x1C
#define TopC_PCIe_LINK0_CORE_rx_buffer0_OFFSET 0x0
#define TopC_PCIe_LINK0_CORE_rx_buffer1_OFFSET 0x4
#define TopC_PCIe_LINK1_CORE_s_OFFSET 0x1C0
#define TopC_PCIe_LINK1_CORE_flash_memory_OFFSET 0x0
#define TopC_PCIe_LINK1_CORE_boot_flash0_OFFSET 0x0
#define TopC_PCIe_LINK1_CORE_boot_flash1_OFFSET 0x4

#define TopC_s_ADDRESS 0x000
#define TopC_PCIe_LINK0_s_ADDRESS 0x000
#define TopC_PCIe_LINK0_SSHD_ADDRESS 0x000
#define TopC_PCIe_LINK0_boot_rom_ADDRESS 0x190
#define TopC_PCIe_LINK0_CORE_s_ADDRESS 0x194
#define TopC_PCIe_LINK0_CORE_flash_mem_ADDRESS 0x194
#define TopC_PCIe_LINK0_CORE_rx_mem_ADDRESS 0x1B0
#define TopC_PCIe_LINK0_CORE_rx_buffer0_ADDRESS 0x1B0
#define TopC_PCIe_LINK0_CORE_rx_buffer1_ADDRESS 0x1B4
#define TopC_PCIe_LINK1_CORE_s_ADDRESS 0x1C0
#define TopC_PCIe_LINK1_CORE_flash_memory_ADDRESS 0x1C0
#define TopC_PCIe_LINK1_CORE_boot_flash0_ADDRESS 0x1C0
#define TopC_PCIe_LINK1_CORE_boot_flash1_ADDRESS 0x1C4

#define TOPC_PCIE_LINK0_SSHD_MEM_OFFSET 0
#define TOPC_PCIE_LINK0_SSHD_MEM_MASK 0xFFFFFFFFFFFFFFFF
#define TOPC_PCIE_LINK0_BOOT_ROM_BOOT_ROM_MEM2_OFFSET 24
#define TOPC_PCIE_LINK0_BOOT_ROM_BOOT_ROM_MEM2_MASK 0xFF000000
#define TOPC_PCIE_LINK0_BOOT_ROM_BOOT_ROM_MEM1_OFFSET 16
#define TOPC_PCIE_LINK0_BOOT_ROM_BOOT_ROM_MEM1_MASK 0xFF0000
#define TOPC_PCIE_LINK0_BOOT_ROM_BOOT_ROM_MEM0_OFFSET 0
#define TOPC_PCIE_LINK0_BOOT_ROM_BOOT_ROM_MEM0_MASK 0xFFFF
#define TOPC_PCIE_LINK0_CORE_FLASH_MEM_FLASH_MEM1_OFFSET 16
#define TOPC_PCIE_LINK0_CORE_FLASH_MEM_FLASH_MEM1_MASK 0xFFFF0000
#define TOPC_PCIE_LINK0_CORE_FLASH_MEM_FLASH_MEM0_OFFSET 0
#define TOPC_PCIE_LINK0_CORE_FLASH_MEM_FLASH_MEM0_MASK 0xFFFF
#define TOPC_PCIE_LINK0_CORE_RX_MEM_RX_BUFFER0_ES_RX_BUFFER1_OFFSET 16
#define TOPC_PCIE_LINK0_CORE_RX_MEM_RX_BUFFER0_ES_RX_BUFFER1_MASK 0xFFFF0000
#define TOPC_PCIE_LINK0_CORE_RX_MEM_RX_BUFFER0_ES_RX_BUFFER0_OFFSET 0
#define TOPC_PCIE_LINK0_CORE_RX_MEM_RX_BUFFER0_ES_RX_BUFFER0_MASK 0xFFFF
#define TOPC_PCIE_LINK0_CORE_RX_MEM_RX_BUFFER1_ES_RX_BUFFER1_OFFSET 16
#define TOPC_PCIE_LINK0_CORE_RX_MEM_RX_BUFFER1_ES_RX_BUFFER1_MASK 0xFFFF0000
#define TOPC_PCIE_LINK0_CORE_RX_MEM_RX_BUFFER1_ES_RX_BUFFER0_OFFSET 0
#define TOPC_PCIE_LINK0_CORE_RX_MEM_RX_BUFFER1_ES_RX_BUFFER0_MASK 0xFFFF
#define TOPC_PCIE_LINK1_CORE_FLASH_MEMORY_BOOT_FLASH0_FLASH_RECYCLE_OFFSET 28
#define TOPC_PCIE_LINK1_CORE_FLASH_MEMORY_BOOT_FLASH0_FLASH_RECYCLE_MASK 0xF0000000
#define TOPC_PCIE_LINK1_CORE_FLASH_MEMORY_BOOT_FLASH0_FLASH_FORWARD0_OFFSET 16
#define TOPC_PCIE_LINK1_CORE_FLASH_MEMORY_BOOT_FLASH0_FLASH_FORWARD0_MASK 0xFF0000
#define TOPC_PCIE_LINK1_CORE_FLASH_MEMORY_BOOT_FLASH0_FLASH1_OFFSET 8
#define TOPC_PCIE_LINK1_CORE_FLASH_MEMORY_BOOT_FLASH0_FLASH1_MASK 0xFF00
#define TOPC_PCIE_LINK1_CORE_FLASH_MEMORY_BOOT_FLASH0_FLASH0_OFFSET 0
#define TOPC_PCIE_LINK1_CORE_FLASH_MEMORY_BOOT_FLASH0_FLASH0_MASK 0xFF
#define TOPC_PCIE_LINK1_CORE_FLASH_MEMORY_BOOT_FLASH1_FLASH_FIELD3_OFFSET 30
#define TOPC_PCIE_LINK1_CORE_FLASH_MEMORY_BOOT_FLASH1_FLASH_FIELD3_MASK 0xC0000000
#define TOPC_PCIE_LINK1_CORE_FLASH_MEMORY_BOOT_FLASH1_FLASH_FIELD2_OFFSET 19
#define TOPC_PCIE_LINK1_CORE_FLASH_MEMORY_BOOT_FLASH1_FLASH_FIELD2_MASK 0x3F80000
#define TOPC_PCIE_LINK1_CORE_FLASH_MEMORY_BOOT_FLASH1_FLASH_FIELD1_OFFSET 10
#define TOPC_PCIE_LINK1_CORE_FLASH_MEMORY_BOOT_FLASH1_FLASH_FIELD1_MASK 0xFC00
#define TOPC_PCIE_LINK1_CORE_FLASH_MEMORY_BOOT_FLASH1_FLASH_FIELD0_OFFSET 0
#define TOPC_PCIE_LINK1_CORE_FLASH_MEMORY_BOOT_FLASH1_FLASH_FIELD0_MASK 0xFF
#endif /* _TOPC_REGS_H_ */
/* end */