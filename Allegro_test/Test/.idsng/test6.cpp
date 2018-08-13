/**** This file is auto generated by IDesignSpec (http://www.agnisys.com) . Please do not edit this file. ***
** created by        :
** generated by      : Agnisys
** generated from    : D:\AgnisysProjects\git_test\Allegro_test\Test\test6.idsng
** IDesignSpec rev   : idsbatch v4.16.26.2

***** This code is generated with following settings ***
**---------------------------------------------------------------------------------------------------------------*/



#include "Access.h"
#include "test6.h"

namespace DUOLOG
{
    
    /**
    * test6 class constructor.
    * This creates instances of all objects required to represent the registers
    * and memories within the test6 component.
    */
    test6::test6()
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
    void test6::createRegisters()
    {
        // Create a new instance of the regname class to represent regname register
        m_regregname = new regname;
        return;
    }
    
    /**
    * Creates memory objects
    */
    void test6::createMemories()
    {
        return;
    }
    /**
    * Locates register objects
    */
    void test6::locateRegisters()
    {
        // Create a new instance of the LocatedRegister object to represent regname register
        // at address 0x000
        m_loctest6_intfregname = new LocatedRegister<U32T> (
        m_regregname->getRegister(),
        TEST6_INTF_REGNAME_ADDRESS,
        WRITE, READ);
        return;
    }
    
    /**
    * Locates memory objects
    */
    void test6::locateMemories()
    {
        return;
    }
    /**
    * Initialises all registers within component to power-on-reset state.
    */
    void test6::initialise()
    {
        m_regregname->getRegister()->initialise();
        return;
    }
    
    /**
    * Returns a pointer to the regname object representing regname
    * @return Pointer to the  regname object representing regname (regname *).
    */
    regname * test6::getregname()
    {
        return  m_regregname;
    }
    
    /**
    * Returns pointer to LocatedRegister object representing regname at address 0x000
    * @return Pointer to LocatedRegister object representing regname at address 0x000
    *         (LocatedRegister *).
    */
    LocatedRegister<U32T> * test6::gettest6_intfregname()
    {
        return  m_loctest6_intfregname;
    }
    
    /**
    * Write access function for regname at address 0x000
    * @param Register data value (U32T).
    * @param Register data mask (U32T).
    */
    void test6::writetest6_intfregname(U32T data, U32T dataMask)
    {
        m_loctest6_intfregname->write(data, dataMask);
    }
    
    /**
    * Write access function for test6 component test6_intf transaction target.
    * @param Register address value (U32T).
    * @param Register data value (U32T).
    * @param Register data mask (U32T).
    */
    void test6::writetest6_intf(U32T address, U32T data, U32T dataMask)
    {
        
        switch (address)
        {
            // test6_intfregname
            case TEST6_INTF_REGNAME_ADDRESS:
            writetest6_intfregname((U32T)data, (U32T)dataMask);
            break;
            // Default
            default:
            break;
        }
        return;
    }
    
    /**
    * Write byte lanes access function for test6 component test6_intf transaction target.
    * @param Register address value (U32T).
    * @param Byte lane enable (U8T).
    * @param Register data value (U32T).
    */
    void test6::writeByteLanestest6_intf(U32T address, U8T BE, U32T data)
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
        
        // test6_intfregname (in byte lanes 0 to 3)
        if ((address == (TEST6_INTF_REGNAME_ADDRESS & 0xfffffffc)) &&
        (((BE % 2) == 1) ||
        (((BE >> 1) % 2) == 1) ||
        (((BE >> 2) % 2) == 1) ||
        (((BE >> 3) % 2) == 1)))
        {
            writetest6_intfregname((U32T)data, (U32T)dataMask);
        }
        
        return;
    }
    
    /**
    * Write access function for test6 component.
    * @param Register address value (U32T).
    * @param Transaction port (transactionPortType).
    * @param Register data value (U32T).
    * @param Register data mask (U32T).
    */
    void test6::write(transactionPortType transactionPort, U32T address, U32T data, U32T dataMask)
    {
        switch (transactionPort)
        {
            // test6_intf
            case test6_INTF_TRANSACTION_PORT:
            writetest6_intf(address, (U32T)data, (U32T)dataMask);
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
    U32T test6::readtest6_intfregname()
    {
        return  m_loctest6_intfregname->read();
    }
    
    /**
    * Read access function for test6_intf component test6_intf transaction target.
    * @param Register address value (U32T).
    * @retrun Register data value (U32T).
    */
    U32T test6::readtest6_intf(U32T address )
    {
        // Initialise return value
        U32T retVal = 0;
        switch (address)
        {
            // test6_intfregname
            case TEST6_INTF_REGNAME_ADDRESS:
            retVal = readtest6_intfregname();
            break;
            // Default
            default:
            break;
        }
        return retVal;
    }
    
    /**
    * Read byte lanes access function for test6 component test6_intf transaction target.
    * @param Register address value (U32T).
    * @param Byte lane enable (U8T).
    * @param Register data value (U32T).
    */
    U32T test6::readByteLanestest6_intf(U32T address, U8T BE)
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
        
        // test6_intfregname (in byte lanes 0 to 3)
        if ((address == (TEST6_INTF_REGNAME_ADDRESS & 0xfffffffc)) &&
        (((BE % 2) == 1) ||
        (((BE >> 1) % 2) == 1) ||
        (((BE >> 2) % 2) == 1) ||
        (((BE >> 3) % 2) == 1)))
        {
            retVal |= (U32T)(readtest6_intfregname() & (U32T)dataMask);
        }
        
        return retVal;
    }
    
    /**
    * Read access function for test6 component.
    * @param Register address value (U32T).
    * @param Transaction port (transactionPortType).
    * @param Register data value (U32T).
    */
    U32T test6::read(transactionPortType transactionPort, U32T address)
    {
        // Initialise return value
        U32T retVal = 0;
        switch (transactionPort)
        {
            // test6_intf
            case test6_INTF_TRANSACTION_PORT:
            retVal = readtest6_intf(address);
            break;
            // Default
            default:
            break;
        }
        return retVal;
    }
    
} // namespace DUOLOG
