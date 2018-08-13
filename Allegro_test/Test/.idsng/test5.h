/**** This file is auto generated by IDesignSpec (http://www.agnisys.com) . Please do not edit this file. ***
** created by        :
** generated by      : Agnisys
** generated from    : D:\AgnisysProjects\git_test\Allegro_test\Test\test5.idsng
** IDesignSpec rev   : idsbatch v4.16.26.2

***** This code is generated with following settings ***
**---------------------------------------------------------------------------------------------------------------*/


#ifndef __TEST5_H
#define __TEST5_H

#include "Access.h"
#include "test5Registers.h"
#include "LocatedRegister.h"

namespace DUOLOG
{
    
    class test5
    {
        private:
        // ------------------------------------------------------------------------
        // Private member variables
        // ------------------------------------------------------------------------
        regname * m_regregname;
        // Pointer to LocatedRegister object representing regname at address 0x000
        LocatedRegister<U32T> * m_loctest5_intfregname;
        // ------------------------------------------------------------------------
        // Private member variables
        // ------------------------------------------------------------------------
        // Creates register objects
        void createRegisters();
        // Creates memory objects
        void createMemories();
        // Locates registers
        void locateRegisters();
        // Locates memories
        void locateMemories();
        
        public:
        // ------------------------------------------------------------------------
        // Public member variables
        // ------------------------------------------------------------------------
        // regname register offset address definition(s)
        static const U32T TEST5_INTF_REGNAME_ADDRESS = 0x000;
        
        
        
        
        // test5 transaction port enumerations
        enum transactionPortType {
        test5_INTF_TRANSACTION_PORT
    };
    // ------------------------------------------------------------------------
    // Public member functions
    // ------------------------------------------------------------------------
    // Class constructor
    test5();
    // Initialises all registers in the component
    void initialise();
    // Returns a pointer to the regname object representing regname
    regname * getregname();
    // Returns pointer to LocatedRegister object representing regname at address 0x000
    LocatedRegister<U32T> * gettest5_intfregname();
    // Write access function for regname at address 0x000
    void  writetest5_intfregname(U32T  data, U32T dataMask);
    // Write access function for test5 component test5_intf transaction target
    void  writetest5_intf(U32T  address, U32T data, U32T dataMask);
    // Write byte lanes access function for test5 component test5_intf transaction target
    void  writeByteLanestest5_intf(U32T  address, U8T BE, U32T data);
    // Write access function for component
    void  write (transactionPortType transactionPort, U32T  address, U32T data, U32T dataMask);
    // Read access function for regname at address 0x000
    U32T readtest5_intfregname();
    // Read access function for test5 component test5_intf transaction target
    U32T readtest5_intf(U32T  address);
    // Read byte lanes access function for test5 component test5_intf transaction target
    U32T readByteLanestest5_intf(U32T  address, U8T BE);
    // Read access function for component
    U32T read(transactionPortType transactionPort, U32T  address);
};

} // namespace DUOLOG
#endif /* __CTT_H */
