//Agnisys, Inc. ***** Copyright 2018 All Rights Reserved. *****
//
//*** This file is auto generated by IDesignSpec (http://www.agnisys.com) . Please do not edit this file. ***
// created by        :
// generated by      : Agnisys
// generated from    : D:\AgnisysProjects\git_test\Proj2\test\test37.idsng
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
/*----------------------------------------------------------------------
Class       : test37_reg_name
-----------------------------------------------------------------------*/

`ifndef CLASS_test37_reg_name
`define CLASS_test37_reg_name
class test37_reg_name extends uvm_reg;
    `uvm_object_utils(test37_reg_name)

    rand uvm_reg_field f;

    // Function : new
    function new(string name = "test37_reg_name");
        super.new(name, 32, build_coverage(UVM_NO_COVERAGE));
        add_coverage(build_coverage(UVM_NO_COVERAGE));            //Added because build coverage in the line above doesn’t work due to a bug in UVM 1.1 library

    endfunction

    // Function : build
    virtual function void build();
        this.f = uvm_reg_field::type_id::create("f");

        this.f.configure(this, 1,  1, "RW", 0, 'd0, 1, 1, 0);

    endfunction
endclass
`endif

/*----------------------------------------------------------------------
Class      : test37_block
-----------------------------------------------------------------------*/
`ifndef CLASS_test37_block
`define CLASS_test37_block
class test37_block extends uvm_reg_block;
    `uvm_object_utils(test37_block)

    rand test37_reg_name reg_name;

    // Function : new
    function new(string name = "test37_block");
        super.new(name, UVM_NO_COVERAGE);
    endfunction

    // Function : build
    virtual function void build();
        //REG_NAME
        reg_name   =   test37_reg_name::type_id::create("reg_name");
        reg_name.configure(this, null, "reg_name");
        reg_name.build();

        //define default map and add reg/regfiles
        default_map= create_map("default_map", 'h0, 4, UVM_LITTLE_ENDIAN, 1);
        default_map.add_reg( reg_name, 'h0, "RW");

        lock_model();
    endfunction

endclass : test37_block
`endif