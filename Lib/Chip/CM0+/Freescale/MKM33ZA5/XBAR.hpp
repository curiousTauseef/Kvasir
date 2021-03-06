#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Crossbar Switch
    namespace XbarSel0{    ///<Crossbar Select Register 0
        using Addr = Register::Address<0x40055000,0xffffc0c0,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel0{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel1{}; 
    }
    namespace XbarSel1{    ///<Crossbar Select Register 1
        using Addr = Register::Address<0x40055002,0xffffc0c0,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel2{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel3{}; 
    }
    namespace XbarSel2{    ///<Crossbar Select Register 2
        using Addr = Register::Address<0x40055004,0xffffc0c0,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel4{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel5{}; 
    }
    namespace XbarSel3{    ///<Crossbar Select Register 3
        using Addr = Register::Address<0x40055006,0xffffc0c0,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel6{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel7{}; 
    }
    namespace XbarSel4{    ///<Crossbar Select Register 4
        using Addr = Register::Address<0x40055008,0xffffc0c0,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel8{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel9{}; 
    }
    namespace XbarSel5{    ///<Crossbar Select Register 5
        using Addr = Register::Address<0x4005500a,0xffffc0c0,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel10{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel11{}; 
    }
    namespace XbarSel6{    ///<Crossbar Select Register 6
        using Addr = Register::Address<0x4005500c,0xffffc0c0,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel12{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel13{}; 
    }
    namespace XbarSel7{    ///<Crossbar Select Register 7
        using Addr = Register::Address<0x4005500e,0xffffc0c0,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel14{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel15{}; 
    }
    namespace XbarSel8{    ///<Crossbar Select Register 8
        using Addr = Register::Address<0x40055010,0xffffc0c0,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel16{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel17{}; 
    }
    namespace XbarSel9{    ///<Crossbar Select Register 9
        using Addr = Register::Address<0x40055012,0xffffc0c0,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel18{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel19{}; 
    }
    namespace XbarSel10{    ///<Crossbar Select Register 10
        using Addr = Register::Address<0x40055014,0xffffe0e0,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> sel20{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> sel21{}; 
    }
    namespace XbarSel11{    ///<Crossbar Select Register 11
        using Addr = Register::Address<0x40055016,0xffffc0c0,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel22{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel23{}; 
    }
    namespace XbarSel12{    ///<Crossbar Select Register 12
        using Addr = Register::Address<0x40055018,0xffffe0e0,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> sel24{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> sel25{}; 
    }
    namespace XbarSel13{    ///<Crossbar Select Register 13
        using Addr = Register::Address<0x4005501a,0xffffc0c0,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel26{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel27{}; 
    }
    namespace XbarSel14{    ///<Crossbar Select Register 14
        using Addr = Register::Address<0x4005501c,0xffffc0c0,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel28{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel29{}; 
    }
    namespace XbarSel15{    ///<Crossbar Select Register 15
        using Addr = Register::Address<0x4005501e,0xffffe0e0,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> sel30{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> sel31{}; 
    }
    namespace XbarSel16{    ///<Crossbar Select Register 16
        using Addr = Register::Address<0x40055020,0xffffffc0,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel32{}; 
    }
    namespace XbarCtrl0{    ///<Crossbar Control Register 0
        using Addr = Register::Address<0x40055022,0xffffffe0,0x00000000,unsigned>;
        ///DMA Enable for XBAR_OUT0
        enum class Den0Val {
            v0=0x00000000,     ///<DMA disabled
            v1=0x00000001,     ///<DMA enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Den0Val> den0{}; 
        namespace Den0ValC{
            constexpr Register::FieldValue<decltype(den0)::Type,Den0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(den0)::Type,Den0Val::v1> v1{};
        }
        ///Interrupt Enable for XBAR_OUT0
        enum class Ien0Val {
            v0=0x00000000,     ///<Interrupt disabled
            v1=0x00000001,     ///<Interrupt enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Ien0Val> ien0{}; 
        namespace Ien0ValC{
            constexpr Register::FieldValue<decltype(ien0)::Type,Ien0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ien0)::Type,Ien0Val::v1> v1{};
        }
        ///Active edge for edge detection on XBAR_OUT0
        enum class Edge0Val {
            v00=0x00000000,     ///<STS0 never asserts
            v01=0x00000001,     ///<STS0 asserts on rising edges of XBAR_OUT0
            v10=0x00000002,     ///<STS0 asserts on falling edges of XBAR_OUT0
            v11=0x00000003,     ///<STS0 asserts on rising and falling edges of XBAR_OUT0
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,Edge0Val> edge0{}; 
        namespace Edge0ValC{
            constexpr Register::FieldValue<decltype(edge0)::Type,Edge0Val::v00> v00{};
            constexpr Register::FieldValue<decltype(edge0)::Type,Edge0Val::v01> v01{};
            constexpr Register::FieldValue<decltype(edge0)::Type,Edge0Val::v10> v10{};
            constexpr Register::FieldValue<decltype(edge0)::Type,Edge0Val::v11> v11{};
        }
        ///Edge detection status for XBAR_OUT0
        enum class Sts0Val {
            v0=0x00000000,     ///<Active edge not yet detected on XBAR_OUT0
            v1=0x00000001,     ///<Active edge detected on XBAR_OUT0
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Sts0Val> sts0{}; 
        namespace Sts0ValC{
            constexpr Register::FieldValue<decltype(sts0)::Type,Sts0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sts0)::Type,Sts0Val::v1> v1{};
        }
    }
}
