/**** This file is auto generated by IDesignSpec (http://www.agnisys.com) . Please do not edit this file. ***
** created by        :
** generated by      : Agnisys
** generated from    : D:\AgnisysProjects\git_test\Allegro_test\Test\test5.idsng
** IDesignSpec rev   : idsbatch v4.16.26.2

***** This code is generated with following settings ***
**---------------------------------------------------------------------------------------------------------------*/



#include "Access.h"
#include "test5.h"

namespace DUOLOG
{
    
    /**
    * test5 class constructor.
    * This creates instances of all objects required to represent the registers
    * and memories within the test5 component.
    */
    test5::test5()
    {
        // Create register objects
        createRegisters();
        // Create memory objects
        createMemories();
        // Locate registers
        locateRegisters();
        // Locate memories
        locateMemories();
    }
    /**
    * Creates register objects
    */
    void test5::createRegisters()
    {
        // Create a new instance of the regname class to represent regname register
        m_regregname = new regname;
        return;
    }
    
    /**
    * Creates memory objects
    */
    void test5::createMemories()
    {
        return;
    }
    /**
    * Locates register objects
    */
    void test5::locateRegisters()
    {
        // Create a new instance of the LocatedRegister object to represent regname register
        // at address 0x000
        m_loctest5_intfregname = new LocatedRegister<U32T> (
        m_regregname->getRegister(),
        TEST5_INTF_REGNAME_ADDRESS,
        WRITE, READ);
        return;
    }
    
    /**
    * Locates memory objects
    */
    void test5::locateMemories()
    {
        return;
    }
    /**
    * Initialises all registers within component to power-on-reset state.
    */
    void test5::initialise()
    {
        m_regregname->getRegister()->initialise();
        return;
    }
    
    /**
    * Returns a pointer to the regname object representing regname
    * @return Pointer to the  regname object representing regname (regname *).
    */
    regname * test5::getregname()
    {
        return  m_regregname;
    }
    
    /**
    * Returns pointer to LocatedRegister object representing regname at address 0x000
    * @return Pointer to LocatedRegister object representing regname at address 0x000
    *         (LocatedRegister *).
    */
    LocatedRegister<U32T> * test5::gettest5_intfregname()
    {
        return  m_loctest5_intfregname;
    }
    
    /**
    * Write access function for regname at address 0x000
    * @param Register data value (U32T).
    * @param Register data mask (U32T).
    */
    void test5::writetest5_intfregname(U32T data, U32T dataMask)
    {
        m_loctest5_intfregname->write(data, dataMask);
    }
    
    /**
    * Write access function for test5 component test5_intf transaction target.
    * @param Register address value (U32T).
    * @param Register data value (U32T).
    * @param Register data mask (U32T).
    */
    void test5::writetest5_intf(U32T address, U32T data, U32T dataMask)
    {
        
        switch (address)
        {
            // test5_intfregname
            case TEST5_INTF_REGNAME_ADDRESS:
            writetest5_intfregname((U32T)data, (U32T)dataMask);
            break;
            // Default
            default:
            break;
        }
        return;
    }
    
    /**
    * Write byte lanes access function for test5 component test5_intf transaction target.
    * @param Register address value (U32T).
    * @param Byte lane enable (U8T).
    * @param Register data value (U32T).
    */
    void test5::writeByteLanestest5_intf(U32T address, U8T BE, U32T data)
    {
        // Determine data mask
        U32T dataMask = 0;
        for (int i = 0; i < 4; i++)
        {
            if (((BE >> i) % 2) == 1)
            {
                dataMask |= (U32T)0xff << (i * 8);
            }
        }
        
        // test5_intfregname (in byte lanes 0 to 3)
        if ((address == (TEST5_INTF_REGNAME_ADDRESS & 0xfffffffc)) &&
        (((BE % 2) == 1) ||
        (((BE >> 1) % 2) == 1) ||
        (((BE >> 2) % 2) == 1) ||
        (((BE >> 3) % 2) == 1)))
        {
            writetest5_intfregname((U32T)data, (U32T)dataMask);
        }
        
        return;
    }
    
    /**
    * Write access function for test5 component.
    * @param Register address value (U32T).
    * @param Transaction port (transactionPortType).
    * @param Register data value (U32T).
    * @param Register data mask (U32T).
    */
    void test5::write(transactionPortType transactionPort, U32T address, U32T data, U32T dataMask)
    {
        switch (transactionPort)
        {
            // test5_intf
            case test5_INTF_TRANSACTION_PORT:
            writetest5_intf(address, (U32T)data, (U32T)dataMask);
            break;
            // Default
            default:
            break;
        }
        return;
    }
    
    /**
    * Read access function for regname at address 0x000
    * @return Register data value (U32T).
    */
    U32T test5::readtest5_intfregname()
    {
        return  m_loctest5_intfregname->read();
    }
    
    /**
    * Read access function for test5_intf component test5_intf transaction target.
    * @param Register address value (U32T).
    * @retrun Register data value (U32T).
    */
    U32T test5::readtest5_intf(U32T address )
    {
        // Initialise return value
        U32T retVal = 0;
        switch (address)
        {
            // test5_intfregname
            case TEST5_INTF_REGNAME_ADDRESS:
            retVal = readtest5_intfregname();
            break;
            // Default
            default:
            break;
        }
        return retVal;
    }
    
    /**
    * Read byte lanes access function for test5 component test5_intf transaction target.
    * @param Register address value (U32T).
    * @param Byte lane enable (U8T).
    * @param Register data value (U32T).
    */
    U32T test5::readByteLanestest5_intf(U32T address, U8T BE)
    {
        // Initialise return value
        U32T retVal = 0;
        
        // Determine data mask
        U32T dataMask = 0;
        for (int i = 0; i < 4; i++)
        {
            if (((BE >> i) % 2) == 1)
            {
                dataMask |= (U32T)0xff << (i * 8);
            }
        }
        
        // test5_intfregname (in byte lanes 0 to 3)
        if ((address == (TEST5_INTF_REGNAME_ADDRESS & 0xfffffffc)) &&
        (((BE % 2) == 1) ||
        (((BE >> 1) % 2) == 1) ||
        (((BE >> 2) % 2) == 1) ||
        (((BE >> 3) % 2) == 1)))
        {
            retVal |= (U32T)(readtest5_intfregname() & (U32T)dataMask);
        }
        
        return retVal;
    }
    
    /**
    * Read access function for test5 component.
    * @param Register address value (U32T).
    * @param Transaction port (transactionPortType).
    * @param Register data value (U32T).
    */
    U32T test5::read(transactionPortType transactionPort, U32T address)
    {
        // Initialise return value
        U32T retVal = 0;
        switch (transactionPort)
        {
            // test5_intf
            case test5_INTF_TRANSACTION_PORT:
            retVal = readtest5_intf(address);
            break;
            // Default
            default:
            break;
        }
        return retVal;
    }
    
} // namespace DUOLOG