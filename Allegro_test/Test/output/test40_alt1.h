/*Agnisys, Inc. ***** Copyright 2018 All Rights Reserved. ******/
/**/
/**** This file is auto generated by IDesignSpec (http://www.agnisys.com) . Please do not edit this file. ****/
/* created by        : */
/* generated by      : Agnisys*/
/* generated from    : D:\AgnisysProjects\git_test\Allegro_test\Test\test40.idsng*/
/* IDesignSpec rev   : idsbatch v4.16.26.2*/

/**** This code is generated with following settings ****/
/* Reg Width                  : 32*/
/* Address Unit               : 8*/
/* C++ Types int              : hwint*/
/* Bus Type                   : PROPRIETARY*/
/* BigEndian                  : false*/
/* LittleEndian               : false*/
/* Dist. Decode and Readback  : false*/
/*--------------------------------------------------------------------------------------------------------------- */

/*block : blk */

#ifndef _BLK_REGS_H_
#define _BLK_REGS_H_

typedef union {
    struct {
        
        hwint resv8 : 8;
        hwint f1 : 8;           /* 7:0 SW=rw HW=rw 0x0 */
    } bf;
    hwint  w;
} blk_rg1;

typedef struct {
    blk_rg1  rg1;
    
    
    
} blk_s;


#define blk_s_SIZE 0x2
#define blk_rg1_SIZE 0x2

#define blk_s_OFFSET 0x0
#define blk_rg1_OFFSET 0x0

#define blk_s_ADDRESS 0x0
#define blk_rg1_ADDRESS 0x0
#define BLK_RG1_F1_OFFSET 0
#define BLK_RG1_F1_MASK 0xFF
#endif /* _BLK_REGS_H_ */

/* end */