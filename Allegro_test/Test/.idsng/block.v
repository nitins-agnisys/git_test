//Agnisys, Inc. ***** Copyright 2018 All Rights Reserved. *****
//
//*** This file is auto generated by IDesignSpec (http://www.agnisys.com) . Please do not edit this file. ***
// created by        :
// generated by      : Agnisys
// generated from    : D:\AgnisysProjects\git_test\Allegro_test\Test\block.idsng
// IDesignSpec rev   : idsbatch v4.16.26.2

//*** This code is generated with following settings ***
// Reg Width                  : 32
// Address Unit               : 8
// C++ Types int              : hwint
// Bus Type                   : PROPRIETARY
// BigEndian                  : false
// LittleEndian               : false
// Dist. Decode and Readback  : false
//---------------------------------------------------------------------------------------------------------------

//------------------------------------------------
//  BLOCK : BLOCK_NAME MODULE
//

module block_name_ids(
    
    // REGISTER : REG_NAME PORT SIGNAL
    reg_name_enb,
    reg_name_F_r,
    
    
    
    //CUSTOM signals
    clk,   // Bus clock
    reset_l,   // Reset
    rd_stb,   // Read strobe        : This signal should be HIGH during read operation and LOW during write operation
    rd_wait,   // Read wait
    wr_stb,   // Write strobe       : This signal should be HIGH during write operation and LOW during read operation
    address,   // Address for write/read
    wr_data,   // Write data
    byteenable,   // Specify which bytes are being written or during read which bytes the master is reading
    request,   // Bus request signal : HIGH indicates bus is free and LOW indicates bus is busy
    rd_data_vld,   // Read data valid : Asserted by the slave to indicate that the read data signal contains valid data
    rd_data   // Read data
    );
    //  PARAMETERS
    parameter bus_width   = 32;
    parameter addr_width = 0;
    
    parameter block_offset  = {(addr_width){1'b0}};
    
    
    parameter block_name_address_width = addr_width;
    //-----------------------------------------------------
    // REGISTER : REG_NAME SIGNALS
    
    
    wire    reg_name_decode;         // DECODE
    wire    reg_name_wr_valid;       // WRITE VALID
    wire    [bus_width-1 : 0] reg_name_rd_data;          // READ DATA
    wire    [64-1 : 0] reg_name_offset;  // OFFSET
    output  reg_name_enb;    // REGISTER ENABLE
    
    // BUFFER SIGNAL FOR EACH FIELD
    reg  [7 : 0] reg_name_F_q ;      // FIELD : F
    
    // READ DATA SIGNAL FOR EACH FIELD
    output   [7 : 0] reg_name_F_r ;      // FIELD : F
    
    // HW WRITE DATA SIGNAL FOR EACH FIELD
    
    //-----------------------------------------------------
    
    
    
    //CUSTOM signals
    input clk;
    input reset_l;
    input rd_stb;
    output rd_wait;
    input wr_stb;
    input [addr_width-1 : 0] address;
    input [bus_width-1 : 0] wr_data;
    input [bus_width/8-1 : 0] byteenable;
    output request;
    output rd_data_vld;
    output [bus_width-1 : 0] rd_data;
    
    wire  [bus_width-1:0] rd_data;
    wire [bus_width-1 : 0] reg_enb;
    wire [bus_width/8 -1 : 0] byte_enb;
    
    assign byte_enb = byteenable;
    assign reg_enb =  {
    {8{byte_enb[3]}} ,
    {8{byte_enb[2]}} ,
    {8{byte_enb[1]}} ,
    {8{byte_enb[0]}}};
    
    
    
    
    //----------------------------------------------------------------------------------------------------
    // REGISTER      :  REG_NAME
    // ADDRESS       :  block_offset+'h0                WIDTH : 8
    // HW ACCESS     :  READ-ONLY
    // SW ACCESS     :  READ-WRITE
    //
    // FIELDS   :
    //      7:0 : F  ( SW : Read-Write HW : Read-only )
    
    //-----------------------------------------------------------------------------
    // DESCRIPTION  :  NA
    //
    
    
    assign reg_name_wr_valid = reg_name_decode && wr_stb;
    assign reg_name_enb      = reg_name_wr_valid;
    assign reg_name_offset = block_offset+'h0;
    assign reg_name_decode  = (address[block_name_address_width-1 : 0]    == reg_name_offset[block_name_address_width-1 : 0] ) ? 1'b1 : 1'b0;
    
    
    //----------------------------------------------------------------------------
    // FIELD  : F
    // HW ACCESS  :  READ-ONLY                           WIDTH  :  8
    // SW ACCESS  :  READ-WRITE                          OFFSET :  0
    //-----------------------------------------------------------------
    // DESCRIPTION   :  Hello
    //
    
    always @(posedge clk)
        
        begin
        if (!reset_l)
            begin
                
                reg_name_F_q  <= 8'd1;
            end
        else
            begin
                
            if (reg_name_wr_valid)   // F : SW Write
                begin
                    reg_name_F_q <=  ( wr_data[7 : 0] & reg_enb[7 : 0] ) | (reg_name_F_q & (~reg_enb[7 : 0]));
                end
                
            end
    end // always clk
    
    //----------------------------------------------------------------------------
    
    
    // ===================================================
    // HW OUTPUT READ DATA FOR EACH FIELD
    assign reg_name_F_r  =  reg_name_F_q ;    // Field : F
    
    
    assign reg_name_rd_data = reg_name_decode ? {reg_name_F_q} : 8'b00000000;
    
    
    
    
    assign rd_data = reg_name_rd_data ;
    
    
    
    assign request      =  1'b1;
    assign rd_data_vld   =  rd_stb;
    assign rd_wait       =  1'b1;
    
    
endmodule
