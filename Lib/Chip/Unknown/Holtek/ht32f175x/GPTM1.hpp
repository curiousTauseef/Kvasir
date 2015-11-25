#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//GPTM1
    namespace Nonegptm1Cntcfr{    ///<GPTM1_CNTCFR
        using Addr = Register::Address<0x4006f000,0xfefcfcfc,0,unsigned>;
        ///UEVDIS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> uevdis{}; 
        ///UGDIS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ugdis{}; 
        ///CKDIV
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> ckdiv{}; 
        ///CMSEL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> cmsel{}; 
        ///DIR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> dir{}; 
    }
    namespace Nonegptm1Mdcfr{    ///<GPTM1_MDCFR
        using Addr = Register::Address<0x4006f004,0xfef8f8fe,0,unsigned>;
        ///TSE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tse{}; 
        ///SMSEL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> smsel{}; 
        ///MMSEL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> mmsel{}; 
        ///SPMSET
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> spmset{}; 
    }
    namespace Nonegptm1Trcfr{    ///<GPTM1_TRCFR
        using Addr = Register::Address<0x4006f008,0xfefec0f0,0,unsigned>;
        ///TRSEL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> trsel{}; 
        ///ETF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> etf{}; 
        ///ETIPSC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> etipsc{}; 
        ///ETIPOL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> etipol{}; 
        ///ECME
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> ecme{}; 
    }
    namespace Nonegptm1Ctr{    ///<GPTM1_CTR
        using Addr = Register::Address<0x4006f010,0xfffefffc,0,unsigned>;
        ///TME
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tme{}; 
        ///CRBE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> crbe{}; 
        ///CHCCDS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> chccds{}; 
    }
    namespace Nonegptm1Ch0icfr{    ///<GPTM1_CH0ICFR
        using Addr = Register::Address<0x4006f020,0x7ff0fff0,0,unsigned>;
        ///TI0F
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ti0f{}; 
        ///CH0CCS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> ch0ccs{}; 
        ///CH0PSC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> ch0psc{}; 
        ///TI0SRC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> ti0src{}; 
    }
    namespace Nonegptm1Ch1icfr{    ///<GPTM1_CH1ICFR
        using Addr = Register::Address<0x4006f024,0xfff0fff0,0,unsigned>;
        ///TI1F
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ti1f{}; 
        ///CH1CCS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> ch1ccs{}; 
        ///CH1PSC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> ch1psc{}; 
    }
    namespace Nonegptm1Ch2icfr{    ///<GPTM1_CH2ICFR
        using Addr = Register::Address<0x4006f028,0xfff0fff0,0,unsigned>;
        ///TI2F
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ti2f{}; 
        ///CH2CCS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> ch2ccs{}; 
        ///CH2PSC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> ch2psc{}; 
    }
    namespace Nonegptm1Ch3icfr{    ///<GPTM1_CH3ICFR
        using Addr = Register::Address<0x4006f02c,0xfff0fff0,0,unsigned>;
        ///TI3F
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ti3f{}; 
        ///CH3CCS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> ch3ccs{}; 
        ///CH3PSC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> ch3psc{}; 
    }
    namespace Nonegptm1Ch0ocfr{    ///<GPTM1_CH0OCFR
        using Addr = Register::Address<0x4006f040,0xffffffc0,0,unsigned>;
        ///CH0OM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ch0om{}; 
        ///REF0CE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ref0ce{}; 
        ///CH0PRE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ch0pre{}; 
        ///CH0IMAE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ch0imae{}; 
    }
    namespace Nonegptm1Ch1ocfr{    ///<GPTM1_CH1OCFR
        using Addr = Register::Address<0x4006f044,0xffffffc0,0,unsigned>;
        ///CH1OM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ch1om{}; 
        ///REF1CE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ref1ce{}; 
        ///CH1PRE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ch1pre{}; 
        ///CH1IMAE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ch1imae{}; 
    }
    namespace Nonegptm1Ch2ocfr{    ///<GPTM1_CH2OCFR
        using Addr = Register::Address<0x4006f048,0xffffffc0,0,unsigned>;
        ///CH2OM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ch2om{}; 
        ///REF2CE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ref2ce{}; 
        ///CH2PRE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ch2pre{}; 
        ///CH2IMAE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ch2imae{}; 
    }
    namespace Nonegptm1Ch3ocfr{    ///<GPTM1_CH3OCFR
        using Addr = Register::Address<0x4006f04c,0xffffffc0,0,unsigned>;
        ///CH3OM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ch3om{}; 
        ///REF3CE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ref3ce{}; 
        ///CH3PRE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ch3pre{}; 
        ///CH3IMAE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ch3imae{}; 
    }
    namespace Nonegptm1Chctr{    ///<GPTM1_CHCTR
        using Addr = Register::Address<0x4006f050,0xffffffaa,0,unsigned>;
        ///CH0E
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ch0e{}; 
        ///CH1E
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ch1e{}; 
        ///CH2E
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ch2e{}; 
        ///CH3E
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ch3e{}; 
    }
    namespace Nonegptm1Chpolr{    ///<GPTM1_CHPOLR
        using Addr = Register::Address<0x4006f054,0xffffffaa,0,unsigned>;
        ///CH0P
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ch0p{}; 
        ///CH1P
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ch1p{}; 
        ///CH2P
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ch2p{}; 
        ///CH3P
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ch3p{}; 
    }
    namespace Nonegptm1Dictr{    ///<GPTM1_DICTR
        using Addr = Register::Address<0x4006f074,0xfaf0faf0,0,unsigned>;
        ///CH0CCIE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ch0ccie{}; 
        ///CH1CCIE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ch1ccie{}; 
        ///CH2CCIE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ch2ccie{}; 
        ///CH3CCIE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ch3ccie{}; 
        ///UEVIE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> uevie{}; 
        ///TEVIE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> tevie{}; 
        ///CH0CCDE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ch0ccde{}; 
        ///CH1CCDE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ch1ccde{}; 
        ///CH2CCDE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> ch2ccde{}; 
        ///CH3CCDE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ch3ccde{}; 
        ///UEVDE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> uevde{}; 
        ///TEVDE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> tevde{}; 
    }
    namespace Nonegptm1Evgr{    ///<GPTM1_EVGR
        using Addr = Register::Address<0x4006f078,0xfffffaf0,0,unsigned>;
        ///CH0CCG
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ch0ccg{}; 
        ///CH1CCG
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ch1ccg{}; 
        ///CH2CCG
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ch2ccg{}; 
        ///CH3CCG
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ch3ccg{}; 
        ///UEVG
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> uevg{}; 
        ///TEVG
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> tevg{}; 
    }
    namespace Nonegptm1Intsr{    ///<GPTM1_INTSR
        using Addr = Register::Address<0x4006f07c,0xfffffa00,0,unsigned>;
        ///CH0CCIF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ch0ccif{}; 
        ///CH1CCIF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ch1ccif{}; 
        ///CH2CCIF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ch2ccif{}; 
        ///CH3CCIF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ch3ccif{}; 
        ///CH0OCF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ch0ocf{}; 
        ///CH1OCF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ch1ocf{}; 
        ///CH2OCF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ch2ocf{}; 
        ///CH3OCF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ch3ocf{}; 
        ///UEVIF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> uevif{}; 
        ///TEVIF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> tevif{}; 
    }
    namespace Nonegptm1Cntr{    ///<GPTM1_CNTR
        using Addr = Register::Address<0x4006f080,0xffff0000,0,unsigned>;
        ///CNTV
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cntv{}; 
    }
    namespace Nonegptm1Pscr{    ///<GPTM1_PSCR
        using Addr = Register::Address<0x4006f084,0xffff0000,0,unsigned>;
        ///PSCV
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pscv{}; 
    }
    namespace Nonegptm1Crr{    ///<GPTM1_CRR
        using Addr = Register::Address<0x4006f088,0xffff0000,0,unsigned>;
        ///CRV
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> crv{}; 
    }
    namespace Nonegptm1Ch0ccr{    ///<GPTM1_CH0CCR
        using Addr = Register::Address<0x4006f090,0xffff0000,0,unsigned>;
        ///CH0CCV
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ch0ccv{}; 
    }
    namespace Nonegptm1Ch1ccr{    ///<GPTM1_CH1CCR
        using Addr = Register::Address<0x4006f094,0xffff0000,0,unsigned>;
        ///CH1CCV
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ch1ccv{}; 
    }
    namespace Nonegptm1Ch2ccr{    ///<GPTM1_CH2CCR
        using Addr = Register::Address<0x4006f098,0xffff0000,0,unsigned>;
        ///CH2CCV
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ch2ccv{}; 
    }
    namespace Nonegptm1Ch3ccr{    ///<GPTM1_CH3CCR
        using Addr = Register::Address<0x4006f09c,0xffff0000,0,unsigned>;
        ///CH3CCV
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ch3ccv{}; 
    }
}