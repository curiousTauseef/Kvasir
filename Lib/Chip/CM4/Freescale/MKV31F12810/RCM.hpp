#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Reset Control Module
    namespace RcmSrs0{    ///<System Reset Status Register 0
        using Addr = Register::Address<0x4007f000,0xffffff18,0x00000000,unsigned char>;
        ///Low Leakage Wakeup Reset
        enum class WakeupVal {
            v0=0x00000000,     ///<Reset not caused by LLWU module wakeup source
            v1=0x00000001,     ///<Reset caused by LLWU module wakeup source
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,WakeupVal> wakeup{}; 
        namespace WakeupValC{
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::v0> v0{};
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::v1> v1{};
        }
        ///Low-Voltage Detect Reset
        enum class LvdVal {
            v0=0x00000000,     ///<Reset not caused by LVD trip or POR
            v1=0x00000001,     ///<Reset caused by LVD trip or POR
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,LvdVal> lvd{}; 
        namespace LvdValC{
            constexpr Register::FieldValue<decltype(lvd)::Type,LvdVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lvd)::Type,LvdVal::v1> v1{};
        }
        ///Loss-of-Clock Reset
        enum class LocVal {
            v0=0x00000000,     ///<Reset not caused by a loss of external clock.
            v1=0x00000001,     ///<Reset caused by a loss of external clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,LocVal> loc{}; 
        namespace LocValC{
            constexpr Register::FieldValue<decltype(loc)::Type,LocVal::v0> v0{};
            constexpr Register::FieldValue<decltype(loc)::Type,LocVal::v1> v1{};
        }
        ///Watchdog
        enum class WdogVal {
            v0=0x00000000,     ///<Reset not caused by watchdog timeout
            v1=0x00000001,     ///<Reset caused by watchdog timeout
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,WdogVal> wdog{}; 
        namespace WdogValC{
            constexpr Register::FieldValue<decltype(wdog)::Type,WdogVal::v0> v0{};
            constexpr Register::FieldValue<decltype(wdog)::Type,WdogVal::v1> v1{};
        }
        ///External Reset Pin
        enum class PinVal {
            v0=0x00000000,     ///<Reset not caused by external reset pin
            v1=0x00000001,     ///<Reset caused by external reset pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,PinVal> pin{}; 
        namespace PinValC{
            constexpr Register::FieldValue<decltype(pin)::Type,PinVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pin)::Type,PinVal::v1> v1{};
        }
        ///Power-On Reset
        enum class PorVal {
            v0=0x00000000,     ///<Reset not caused by POR
            v1=0x00000001,     ///<Reset caused by POR
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,PorVal> por{}; 
        namespace PorValC{
            constexpr Register::FieldValue<decltype(por)::Type,PorVal::v0> v0{};
            constexpr Register::FieldValue<decltype(por)::Type,PorVal::v1> v1{};
        }
    }
    namespace RcmSrs1{    ///<System Reset Status Register 1
        using Addr = Register::Address<0x4007f001,0xffffffc0,0x00000000,unsigned char>;
        ///JTAG Generated Reset
        enum class JtagVal {
            v0=0x00000000,     ///<Reset not caused by JTAG
            v1=0x00000001,     ///<Reset caused by JTAG
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,JtagVal> jtag{}; 
        namespace JtagValC{
            constexpr Register::FieldValue<decltype(jtag)::Type,JtagVal::v0> v0{};
            constexpr Register::FieldValue<decltype(jtag)::Type,JtagVal::v1> v1{};
        }
        ///Core Lockup
        enum class LockupVal {
            v0=0x00000000,     ///<Reset not caused by core LOCKUP event
            v1=0x00000001,     ///<Reset caused by core LOCKUP event
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,LockupVal> lockup{}; 
        namespace LockupValC{
            constexpr Register::FieldValue<decltype(lockup)::Type,LockupVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lockup)::Type,LockupVal::v1> v1{};
        }
        ///Software
        enum class SwVal {
            v0=0x00000000,     ///<Reset not caused by software setting of SYSRESETREQ bit
            v1=0x00000001,     ///<Reset caused by software setting of SYSRESETREQ bit
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,SwVal> sw{}; 
        namespace SwValC{
            constexpr Register::FieldValue<decltype(sw)::Type,SwVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sw)::Type,SwVal::v1> v1{};
        }
        ///MDM-AP System Reset Request
        enum class MdmapVal {
            v0=0x00000000,     ///<Reset not caused by host debugger system setting of the System Reset Request bit
            v1=0x00000001,     ///<Reset caused by host debugger system setting of the System Reset Request bit
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,MdmapVal> mdmAp{}; 
        namespace MdmapValC{
            constexpr Register::FieldValue<decltype(mdmAp)::Type,MdmapVal::v0> v0{};
            constexpr Register::FieldValue<decltype(mdmAp)::Type,MdmapVal::v1> v1{};
        }
        ///EzPort Reset
        enum class EzptVal {
            v0=0x00000000,     ///<Reset not caused by EzPort receiving the RESET command while the device is in EzPort mode
            v1=0x00000001,     ///<Reset caused by EzPort receiving the RESET command while the device is in EzPort mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,EzptVal> ezpt{}; 
        namespace EzptValC{
            constexpr Register::FieldValue<decltype(ezpt)::Type,EzptVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ezpt)::Type,EzptVal::v1> v1{};
        }
        ///Stop Mode Acknowledge Error Reset
        enum class SackerrVal {
            v0=0x00000000,     ///<Reset not caused by peripheral failure to acknowledge attempt to enter stop mode
            v1=0x00000001,     ///<Reset caused by peripheral failure to acknowledge attempt to enter stop mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,SackerrVal> sackerr{}; 
        namespace SackerrValC{
            constexpr Register::FieldValue<decltype(sackerr)::Type,SackerrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sackerr)::Type,SackerrVal::v1> v1{};
        }
    }
    namespace RcmRpfc{    ///<Reset Pin Filter Control register
        using Addr = Register::Address<0x4007f004,0xfffffff8,0x00000000,unsigned char>;
        ///Reset Pin Filter Select in Run and Wait Modes
        enum class RstfltsrwVal {
            v00=0x00000000,     ///<All filtering disabled
            v01=0x00000001,     ///<Bus clock filter enabled for normal operation
            v10=0x00000002,     ///<LPO clock filter enabled for normal operation
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,RstfltsrwVal> rstfltsrw{}; 
        namespace RstfltsrwValC{
            constexpr Register::FieldValue<decltype(rstfltsrw)::Type,RstfltsrwVal::v00> v00{};
            constexpr Register::FieldValue<decltype(rstfltsrw)::Type,RstfltsrwVal::v01> v01{};
            constexpr Register::FieldValue<decltype(rstfltsrw)::Type,RstfltsrwVal::v10> v10{};
        }
        ///Reset Pin Filter Select in Stop Mode
        enum class RstfltssVal {
            v0=0x00000000,     ///<All filtering disabled
            v1=0x00000001,     ///<LPO clock filter enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,RstfltssVal> rstfltss{}; 
        namespace RstfltssValC{
            constexpr Register::FieldValue<decltype(rstfltss)::Type,RstfltssVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rstfltss)::Type,RstfltssVal::v1> v1{};
        }
    }
    namespace RcmRpfw{    ///<Reset Pin Filter Width register
        using Addr = Register::Address<0x4007f005,0xffffffe0,0x00000000,unsigned char>;
        ///Reset Pin Filter Bus Clock Select
        enum class RstfltselVal {
            v00000=0x00000000,     ///<Bus clock filter count is 1
            v00001=0x00000001,     ///<Bus clock filter count is 2
            v00010=0x00000002,     ///<Bus clock filter count is 3
            v00011=0x00000003,     ///<Bus clock filter count is 4
            v00100=0x00000004,     ///<Bus clock filter count is 5
            v00101=0x00000005,     ///<Bus clock filter count is 6
            v00110=0x00000006,     ///<Bus clock filter count is 7
            v00111=0x00000007,     ///<Bus clock filter count is 8
            v01000=0x00000008,     ///<Bus clock filter count is 9
            v01001=0x00000009,     ///<Bus clock filter count is 10
            v01010=0x0000000a,     ///<Bus clock filter count is 11
            v01011=0x0000000b,     ///<Bus clock filter count is 12
            v01100=0x0000000c,     ///<Bus clock filter count is 13
            v01101=0x0000000d,     ///<Bus clock filter count is 14
            v01110=0x0000000e,     ///<Bus clock filter count is 15
            v01111=0x0000000f,     ///<Bus clock filter count is 16
            v10000=0x00000010,     ///<Bus clock filter count is 17
            v10001=0x00000011,     ///<Bus clock filter count is 18
            v10010=0x00000012,     ///<Bus clock filter count is 19
            v10011=0x00000013,     ///<Bus clock filter count is 20
            v10100=0x00000014,     ///<Bus clock filter count is 21
            v10101=0x00000015,     ///<Bus clock filter count is 22
            v10110=0x00000016,     ///<Bus clock filter count is 23
            v10111=0x00000017,     ///<Bus clock filter count is 24
            v11000=0x00000018,     ///<Bus clock filter count is 25
            v11001=0x00000019,     ///<Bus clock filter count is 26
            v11010=0x0000001a,     ///<Bus clock filter count is 27
            v11011=0x0000001b,     ///<Bus clock filter count is 28
            v11100=0x0000001c,     ///<Bus clock filter count is 29
            v11101=0x0000001d,     ///<Bus clock filter count is 30
            v11110=0x0000001e,     ///<Bus clock filter count is 31
            v11111=0x0000001f,     ///<Bus clock filter count is 32
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,RstfltselVal> rstfltsel{}; 
        namespace RstfltselValC{
            constexpr Register::FieldValue<decltype(rstfltsel)::Type,RstfltselVal::v00000> v00000{};
            constexpr Register::FieldValue<decltype(rstfltsel)::Type,RstfltselVal::v00001> v00001{};
            constexpr Register::FieldValue<decltype(rstfltsel)::Type,RstfltselVal::v00010> v00010{};
            constexpr Register::FieldValue<decltype(rstfltsel)::Type,RstfltselVal::v00011> v00011{};
            constexpr Register::FieldValue<decltype(rstfltsel)::Type,RstfltselVal::v00100> v00100{};
            constexpr Register::FieldValue<decltype(rstfltsel)::Type,RstfltselVal::v00101> v00101{};
            constexpr Register::FieldValue<decltype(rstfltsel)::Type,RstfltselVal::v00110> v00110{};
            constexpr Register::FieldValue<decltype(rstfltsel)::Type,RstfltselVal::v00111> v00111{};
            constexpr Register::FieldValue<decltype(rstfltsel)::Type,RstfltselVal::v01000> v01000{};
            constexpr Register::FieldValue<decltype(rstfltsel)::Type,RstfltselVal::v01001> v01001{};
            constexpr Register::FieldValue<decltype(rstfltsel)::Type,RstfltselVal::v01010> v01010{};
            constexpr Register::FieldValue<decltype(rstfltsel)::Type,RstfltselVal::v01011> v01011{};
            constexpr Register::FieldValue<decltype(rstfltsel)::Type,RstfltselVal::v01100> v01100{};
            constexpr Register::FieldValue<decltype(rstfltsel)::Type,RstfltselVal::v01101> v01101{};
            constexpr Register::FieldValue<decltype(rstfltsel)::Type,RstfltselVal::v01110> v01110{};
            constexpr Register::FieldValue<decltype(rstfltsel)::Type,RstfltselVal::v01111> v01111{};
            constexpr Register::FieldValue<decltype(rstfltsel)::Type,RstfltselVal::v10000> v10000{};
            constexpr Register::FieldValue<decltype(rstfltsel)::Type,RstfltselVal::v10001> v10001{};
            constexpr Register::FieldValue<decltype(rstfltsel)::Type,RstfltselVal::v10010> v10010{};
            constexpr Register::FieldValue<decltype(rstfltsel)::Type,RstfltselVal::v10011> v10011{};
            constexpr Register::FieldValue<decltype(rstfltsel)::Type,RstfltselVal::v10100> v10100{};
            constexpr Register::FieldValue<decltype(rstfltsel)::Type,RstfltselVal::v10101> v10101{};
            constexpr Register::FieldValue<decltype(rstfltsel)::Type,RstfltselVal::v10110> v10110{};
            constexpr Register::FieldValue<decltype(rstfltsel)::Type,RstfltselVal::v10111> v10111{};
            constexpr Register::FieldValue<decltype(rstfltsel)::Type,RstfltselVal::v11000> v11000{};
            constexpr Register::FieldValue<decltype(rstfltsel)::Type,RstfltselVal::v11001> v11001{};
            constexpr Register::FieldValue<decltype(rstfltsel)::Type,RstfltselVal::v11010> v11010{};
            constexpr Register::FieldValue<decltype(rstfltsel)::Type,RstfltselVal::v11011> v11011{};
            constexpr Register::FieldValue<decltype(rstfltsel)::Type,RstfltselVal::v11100> v11100{};
            constexpr Register::FieldValue<decltype(rstfltsel)::Type,RstfltselVal::v11101> v11101{};
            constexpr Register::FieldValue<decltype(rstfltsel)::Type,RstfltselVal::v11110> v11110{};
            constexpr Register::FieldValue<decltype(rstfltsel)::Type,RstfltselVal::v11111> v11111{};
        }
    }
    namespace RcmMr{    ///<Mode Register
        using Addr = Register::Address<0x4007f007,0xfffffffd,0x00000000,unsigned char>;
        ///EZP_MS_B pin state
        enum class EzpmsVal {
            v0=0x00000000,     ///<Pin deasserted (logic 1)
            v1=0x00000001,     ///<Pin asserted (logic 0)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,EzpmsVal> ezpMs{}; 
        namespace EzpmsValC{
            constexpr Register::FieldValue<decltype(ezpMs)::Type,EzpmsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ezpMs)::Type,EzpmsVal::v1> v1{};
        }
    }
    namespace RcmSsrs0{    ///<Sticky System Reset Status Register 0
        using Addr = Register::Address<0x4007f008,0xffffff18,0x00000000,unsigned char>;
        ///Sticky Low Leakage Wakeup Reset
        enum class SwakeupVal {
            v0=0x00000000,     ///<Reset not caused by LLWU module wakeup source
            v1=0x00000001,     ///<Reset caused by LLWU module wakeup source
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,SwakeupVal> swakeup{}; 
        namespace SwakeupValC{
            constexpr Register::FieldValue<decltype(swakeup)::Type,SwakeupVal::v0> v0{};
            constexpr Register::FieldValue<decltype(swakeup)::Type,SwakeupVal::v1> v1{};
        }
        ///Sticky Low-Voltage Detect Reset
        enum class SlvdVal {
            v0=0x00000000,     ///<Reset not caused by LVD trip or POR
            v1=0x00000001,     ///<Reset caused by LVD trip or POR
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,SlvdVal> slvd{}; 
        namespace SlvdValC{
            constexpr Register::FieldValue<decltype(slvd)::Type,SlvdVal::v0> v0{};
            constexpr Register::FieldValue<decltype(slvd)::Type,SlvdVal::v1> v1{};
        }
        ///Sticky Loss-of-Clock Reset
        enum class SlocVal {
            v0=0x00000000,     ///<Reset not caused by a loss of external clock.
            v1=0x00000001,     ///<Reset caused by a loss of external clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SlocVal> sloc{}; 
        namespace SlocValC{
            constexpr Register::FieldValue<decltype(sloc)::Type,SlocVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sloc)::Type,SlocVal::v1> v1{};
        }
        ///Sticky Watchdog
        enum class SwdogVal {
            v0=0x00000000,     ///<Reset not caused by watchdog timeout
            v1=0x00000001,     ///<Reset caused by watchdog timeout
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SwdogVal> swdog{}; 
        namespace SwdogValC{
            constexpr Register::FieldValue<decltype(swdog)::Type,SwdogVal::v0> v0{};
            constexpr Register::FieldValue<decltype(swdog)::Type,SwdogVal::v1> v1{};
        }
        ///Sticky External Reset Pin
        enum class SpinVal {
            v0=0x00000000,     ///<Reset not caused by external reset pin
            v1=0x00000001,     ///<Reset caused by external reset pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,SpinVal> spin{}; 
        namespace SpinValC{
            constexpr Register::FieldValue<decltype(spin)::Type,SpinVal::v0> v0{};
            constexpr Register::FieldValue<decltype(spin)::Type,SpinVal::v1> v1{};
        }
        ///Sticky Power-On Reset
        enum class SporVal {
            v0=0x00000000,     ///<Reset not caused by POR
            v1=0x00000001,     ///<Reset caused by POR
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,SporVal> spor{}; 
        namespace SporValC{
            constexpr Register::FieldValue<decltype(spor)::Type,SporVal::v0> v0{};
            constexpr Register::FieldValue<decltype(spor)::Type,SporVal::v1> v1{};
        }
    }
    namespace RcmSsrs1{    ///<Sticky System Reset Status Register 1
        using Addr = Register::Address<0x4007f009,0xffffffc0,0x00000000,unsigned char>;
        ///Sticky JTAG Generated Reset
        enum class SjtagVal {
            v0=0x00000000,     ///<Reset not caused by JTAG
            v1=0x00000001,     ///<Reset caused by JTAG
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,SjtagVal> sjtag{}; 
        namespace SjtagValC{
            constexpr Register::FieldValue<decltype(sjtag)::Type,SjtagVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sjtag)::Type,SjtagVal::v1> v1{};
        }
        ///Sticky Core Lockup
        enum class SlockupVal {
            v0=0x00000000,     ///<Reset not caused by core LOCKUP event
            v1=0x00000001,     ///<Reset caused by core LOCKUP event
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,SlockupVal> slockup{}; 
        namespace SlockupValC{
            constexpr Register::FieldValue<decltype(slockup)::Type,SlockupVal::v0> v0{};
            constexpr Register::FieldValue<decltype(slockup)::Type,SlockupVal::v1> v1{};
        }
        ///Sticky Software
        enum class SswVal {
            v0=0x00000000,     ///<Reset not caused by software setting of SYSRESETREQ bit
            v1=0x00000001,     ///<Reset caused by software setting of SYSRESETREQ bit
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SswVal> ssw{}; 
        namespace SswValC{
            constexpr Register::FieldValue<decltype(ssw)::Type,SswVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ssw)::Type,SswVal::v1> v1{};
        }
        ///Sticky MDM-AP System Reset Request
        enum class SmdmapVal {
            v0=0x00000000,     ///<Reset not caused by host debugger system setting of the System Reset Request bit
            v1=0x00000001,     ///<Reset caused by host debugger system setting of the System Reset Request bit
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,SmdmapVal> smdmAp{}; 
        namespace SmdmapValC{
            constexpr Register::FieldValue<decltype(smdmAp)::Type,SmdmapVal::v0> v0{};
            constexpr Register::FieldValue<decltype(smdmAp)::Type,SmdmapVal::v1> v1{};
        }
        ///Sticky EzPort Reset
        enum class SezptVal {
            v0=0x00000000,     ///<Reset not caused by EzPort receiving the RESET command while the device is in EzPort mode
            v1=0x00000001,     ///<Reset caused by EzPort receiving the RESET command while the device is in EzPort mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SezptVal> sezpt{}; 
        namespace SezptValC{
            constexpr Register::FieldValue<decltype(sezpt)::Type,SezptVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sezpt)::Type,SezptVal::v1> v1{};
        }
        ///Sticky Stop Mode Acknowledge Error Reset
        enum class SsackerrVal {
            v0=0x00000000,     ///<Reset not caused by peripheral failure to acknowledge attempt to enter stop mode
            v1=0x00000001,     ///<Reset caused by peripheral failure to acknowledge attempt to enter stop mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SsackerrVal> ssackerr{}; 
        namespace SsackerrValC{
            constexpr Register::FieldValue<decltype(ssackerr)::Type,SsackerrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ssackerr)::Type,SsackerrVal::v1> v1{};
        }
    }
}
