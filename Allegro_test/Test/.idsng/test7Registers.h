/**** This file is auto generated by IDesignSpec (http://www.agnisys.com) . Please do not edit this file. ***
** created by        :
** generated by      : Agnisys
** generated from    : D:\AgnisysProjects\git_test\Allegro_test\Test\test7.idsng
** IDesignSpec rev   : idsbatch v4.16.26.2

***** This code is generated with following settings ***
**---------------------------------------------------------------------------------------------------------------*/


#ifndef __TEST7_REGISTERS_H
#define __TEST7_REGISTERS_H

#include "Access.h"
#include "Bitfield.h"
#include "Register.h"

namespace DUOLOG
{
    
    
    /*****************************************************************************/
    
    /**
    * regname1 class
    * This class represents the regname1 register within the test7 IP Block.
    */
    class regname1
    {
        private:
        // ------------------------------------------------------------------------
        // Private member variables
        // ------------------------------------------------------------------------
        // Pointer to regname1 Register object
        Register<U32T> * m_register;
        // Pointer to f Bitfield object
        Bitfield<U32T> * m_bf f ;
        
        public:
        // ------------------------------------------------------------------------
        // Public member variables
        // ------------------------------------------------------------------------
        // Class constructor
        regname1();
        // Returns pointer to regname1 Register object
        Register<U32T> * getRegister();
        // Returns pointer to f Bitfield object
        Bitfield<U32T> * get f ();
    };
    
    
} //namespace DUOLOG

#endif /* __TEST7_REGISTERS_H */