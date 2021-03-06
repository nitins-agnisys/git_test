//Agnisys, Inc. ***** Copyright 2018 All Rights Reserved. *****
//
//*** This file is auto generated by IDesignSpec (http://www.agnisys.com) . Please do not edit this file. ***
// created by        :
// generated by      : Saurabh
// generated from    : C:\Users\Anupam\Documents\GitHub\git_test\Allegro_test\debug\top.idsng
// IDesignSpec rev   : idsbatch v 6.16.4.7

//*** This code is generated with following settings ***
// Reg Width                  : 32
// Address Unit               : 32
// C++ Types int              : hwint
// Bus Type                   : PROPRIETARY
// BigEndian                  : false
// LittleEndian               : false
// Dist. Decode and Readback  : false
//---------------------------------------------------------------------------------------------------------------
/*----------------------------------------------------------------------
Class       : top_reg_name
-----------------------------------------------------------------------*/

`ifndef CLASS_top_reg_name
`define CLASS_top_reg_name
class top_reg_name extends uvm_reg;
    `uvm_object_utils(top_reg_name)

    rand uvm_reg_field f;

    // Function : new
    function new(string name = "top_reg_name");
        super.new(name, 32, build_coverage(UVM_NO_COVERAGE));
        add_coverage(build_coverage(UVM_NO_COVERAGE));            //Added because build coverage in the line above doesn’t work due to a bug in UVM 1.1 library

    endfunction

    // Function : build
    virtual function void build();
        this.f = uvm_reg_field::type_id::create("f");

        this.f.configure(this, 32,  0, "RW", 0, 32'd0, 1, 1, 0);

    endfunction
endclass
`endif

/*----------------------------------------------------------------------
Class      : top_block
-----------------------------------------------------------------------*/
`ifndef CLASS_top_block
`define CLASS_top_block
class top_block extends uvm_reg_block;
    `uvm_object_utils(top_block)

    rand top_reg_name reg_name;

    // Function : new
    function new(string name = "top_block");
        super.new(name, UVM_NO_COVERAGE);
    endfunction

    // Function : build
    virtual function void build();
        //REG_NAME
        reg_name   =   top_reg_name::type_id::create("reg_name");
        reg_name.configure(this, null, "reg_name");
        reg_name.build();

        //define default map and add reg/regfiles
        default_map= create_map("default_map", 'h0, 4, UVM_LITTLE_ENDIAN, 0);
        default_map.add_reg( reg_name, 'h0, "RW");

        lock_model();
    endfunction

endclass : top_block
`endif
