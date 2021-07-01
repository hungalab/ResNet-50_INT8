#include "dataflow_in_loop_Con.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void dataflow_in_loop_Con::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_0_V = ap_sync_channel_write_weight_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_1000_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_1000_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_1000_V = ap_sync_channel_write_weight_1000_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_1001_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_1001_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_1001_V = ap_sync_channel_write_weight_1001_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_1002_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_1002_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_1002_V = ap_sync_channel_write_weight_1002_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_1003_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_1003_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_1003_V = ap_sync_channel_write_weight_1003_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_1004_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_1004_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_1004_V = ap_sync_channel_write_weight_1004_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_1005_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_1005_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_1005_V = ap_sync_channel_write_weight_1005_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_1006_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_1006_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_1006_V = ap_sync_channel_write_weight_1006_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_1007_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_1007_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_1007_V = ap_sync_channel_write_weight_1007_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_1008_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_1008_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_1008_V = ap_sync_channel_write_weight_1008_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_1009_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_1009_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_1009_V = ap_sync_channel_write_weight_1009_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_100_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_100_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_100_V = ap_sync_channel_write_weight_100_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_1010_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_1010_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_1010_V = ap_sync_channel_write_weight_1010_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_1011_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_1011_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_1011_V = ap_sync_channel_write_weight_1011_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_1012_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_1012_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_1012_V = ap_sync_channel_write_weight_1012_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_1013_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_1013_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_1013_V = ap_sync_channel_write_weight_1013_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_1014_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_1014_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_1014_V = ap_sync_channel_write_weight_1014_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_1015_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_1015_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_1015_V = ap_sync_channel_write_weight_1015_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_1016_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_1016_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_1016_V = ap_sync_channel_write_weight_1016_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_1017_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_1017_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_1017_V = ap_sync_channel_write_weight_1017_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_1018_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_1018_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_1018_V = ap_sync_channel_write_weight_1018_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_1019_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_1019_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_1019_V = ap_sync_channel_write_weight_1019_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_101_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_101_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_101_V = ap_sync_channel_write_weight_101_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_1020_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_1020_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_1020_V = ap_sync_channel_write_weight_1020_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_1021_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_1021_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_1021_V = ap_sync_channel_write_weight_1021_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_1022_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_1022_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_1022_V = ap_sync_channel_write_weight_1022_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_1023_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_1023_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_1023_V = ap_sync_channel_write_weight_1023_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_102_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_102_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_102_V = ap_sync_channel_write_weight_102_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_103_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_103_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_103_V = ap_sync_channel_write_weight_103_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_104_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_104_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_104_V = ap_sync_channel_write_weight_104_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_105_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_105_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_105_V = ap_sync_channel_write_weight_105_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_106_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_106_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_106_V = ap_sync_channel_write_weight_106_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_107_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_107_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_107_V = ap_sync_channel_write_weight_107_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_108_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_108_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_108_V = ap_sync_channel_write_weight_108_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_109_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_109_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_109_V = ap_sync_channel_write_weight_109_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_10_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_10_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_10_V = ap_sync_channel_write_weight_10_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_110_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_110_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_110_V = ap_sync_channel_write_weight_110_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_111_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_111_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_111_V = ap_sync_channel_write_weight_111_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_112_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_112_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_112_V = ap_sync_channel_write_weight_112_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_113_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_113_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_113_V = ap_sync_channel_write_weight_113_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_114_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_114_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_114_V = ap_sync_channel_write_weight_114_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_115_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_115_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_115_V = ap_sync_channel_write_weight_115_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_116_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_116_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_116_V = ap_sync_channel_write_weight_116_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_117_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_117_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_117_V = ap_sync_channel_write_weight_117_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_118_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_118_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_118_V = ap_sync_channel_write_weight_118_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_119_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_119_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_119_V = ap_sync_channel_write_weight_119_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_11_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_11_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_11_V = ap_sync_channel_write_weight_11_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_120_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_120_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_120_V = ap_sync_channel_write_weight_120_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_121_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_121_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_121_V = ap_sync_channel_write_weight_121_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_122_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_122_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_122_V = ap_sync_channel_write_weight_122_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_123_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_123_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_123_V = ap_sync_channel_write_weight_123_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_124_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_124_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_124_V = ap_sync_channel_write_weight_124_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_125_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_125_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_125_V = ap_sync_channel_write_weight_125_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_126_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_126_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_126_V = ap_sync_channel_write_weight_126_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_127_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_127_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_127_V = ap_sync_channel_write_weight_127_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_128_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_128_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_128_V = ap_sync_channel_write_weight_128_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_129_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_129_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_129_V = ap_sync_channel_write_weight_129_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_12_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_12_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_12_V = ap_sync_channel_write_weight_12_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_130_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_130_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_130_V = ap_sync_channel_write_weight_130_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_131_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_131_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_131_V = ap_sync_channel_write_weight_131_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_132_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_132_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_132_V = ap_sync_channel_write_weight_132_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_133_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_133_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_133_V = ap_sync_channel_write_weight_133_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_134_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_134_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_134_V = ap_sync_channel_write_weight_134_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_135_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_135_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_135_V = ap_sync_channel_write_weight_135_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_136_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_136_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_136_V = ap_sync_channel_write_weight_136_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_137_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_137_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_137_V = ap_sync_channel_write_weight_137_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_138_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_138_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_138_V = ap_sync_channel_write_weight_138_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_139_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_139_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_139_V = ap_sync_channel_write_weight_139_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_13_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_13_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_13_V = ap_sync_channel_write_weight_13_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_140_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_140_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_140_V = ap_sync_channel_write_weight_140_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_141_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_141_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_141_V = ap_sync_channel_write_weight_141_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_142_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_142_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_142_V = ap_sync_channel_write_weight_142_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_143_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_143_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_143_V = ap_sync_channel_write_weight_143_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_144_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_144_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_144_V = ap_sync_channel_write_weight_144_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_145_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_145_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_145_V = ap_sync_channel_write_weight_145_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_146_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_146_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_146_V = ap_sync_channel_write_weight_146_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_147_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_147_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_147_V = ap_sync_channel_write_weight_147_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_148_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_148_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_148_V = ap_sync_channel_write_weight_148_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_149_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_149_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_149_V = ap_sync_channel_write_weight_149_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_14_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_14_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_14_V = ap_sync_channel_write_weight_14_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_150_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_150_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_150_V = ap_sync_channel_write_weight_150_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_151_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_151_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_151_V = ap_sync_channel_write_weight_151_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_152_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_152_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_152_V = ap_sync_channel_write_weight_152_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_153_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_153_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_153_V = ap_sync_channel_write_weight_153_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_154_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_154_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_154_V = ap_sync_channel_write_weight_154_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_155_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_155_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_155_V = ap_sync_channel_write_weight_155_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_156_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_156_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_156_V = ap_sync_channel_write_weight_156_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_157_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_157_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_157_V = ap_sync_channel_write_weight_157_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_158_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_158_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_158_V = ap_sync_channel_write_weight_158_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_159_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_159_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_159_V = ap_sync_channel_write_weight_159_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_15_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_15_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_15_V = ap_sync_channel_write_weight_15_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_160_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_160_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_160_V = ap_sync_channel_write_weight_160_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_161_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_161_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_161_V = ap_sync_channel_write_weight_161_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_162_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_162_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_162_V = ap_sync_channel_write_weight_162_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_163_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_163_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_163_V = ap_sync_channel_write_weight_163_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_164_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_164_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_164_V = ap_sync_channel_write_weight_164_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_165_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_165_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_165_V = ap_sync_channel_write_weight_165_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_166_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_166_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_166_V = ap_sync_channel_write_weight_166_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_167_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_167_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_167_V = ap_sync_channel_write_weight_167_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_168_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_168_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_168_V = ap_sync_channel_write_weight_168_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_169_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_169_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_169_V = ap_sync_channel_write_weight_169_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_16_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_16_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_16_V = ap_sync_channel_write_weight_16_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_170_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_170_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_170_V = ap_sync_channel_write_weight_170_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_171_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_171_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_171_V = ap_sync_channel_write_weight_171_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_172_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_172_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_172_V = ap_sync_channel_write_weight_172_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_173_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_173_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_173_V = ap_sync_channel_write_weight_173_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_174_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_174_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_174_V = ap_sync_channel_write_weight_174_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_175_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_175_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_175_V = ap_sync_channel_write_weight_175_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_176_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_176_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_176_V = ap_sync_channel_write_weight_176_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_177_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_177_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_177_V = ap_sync_channel_write_weight_177_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_178_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_178_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_178_V = ap_sync_channel_write_weight_178_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_179_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_179_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_179_V = ap_sync_channel_write_weight_179_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_17_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_17_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_17_V = ap_sync_channel_write_weight_17_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_180_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_180_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_180_V = ap_sync_channel_write_weight_180_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_181_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_181_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_181_V = ap_sync_channel_write_weight_181_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_182_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_182_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_182_V = ap_sync_channel_write_weight_182_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_183_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_183_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_183_V = ap_sync_channel_write_weight_183_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_184_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_184_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_184_V = ap_sync_channel_write_weight_184_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_185_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_185_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_185_V = ap_sync_channel_write_weight_185_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_186_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_186_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_186_V = ap_sync_channel_write_weight_186_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_187_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_187_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_187_V = ap_sync_channel_write_weight_187_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_188_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_188_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_188_V = ap_sync_channel_write_weight_188_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_189_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_189_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_189_V = ap_sync_channel_write_weight_189_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_18_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_18_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_18_V = ap_sync_channel_write_weight_18_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_190_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_190_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_190_V = ap_sync_channel_write_weight_190_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_191_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_191_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_191_V = ap_sync_channel_write_weight_191_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_192_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_192_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_192_V = ap_sync_channel_write_weight_192_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_193_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_193_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_193_V = ap_sync_channel_write_weight_193_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_194_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_194_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_194_V = ap_sync_channel_write_weight_194_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_195_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_195_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_195_V = ap_sync_channel_write_weight_195_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_196_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_196_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_196_V = ap_sync_channel_write_weight_196_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_197_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_197_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_197_V = ap_sync_channel_write_weight_197_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_198_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_198_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_198_V = ap_sync_channel_write_weight_198_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_199_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_199_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_199_V = ap_sync_channel_write_weight_199_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_19_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_19_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_19_V = ap_sync_channel_write_weight_19_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_1_V = ap_sync_channel_write_weight_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_200_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_200_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_200_V = ap_sync_channel_write_weight_200_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_201_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_201_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_201_V = ap_sync_channel_write_weight_201_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_202_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_202_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_202_V = ap_sync_channel_write_weight_202_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_203_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_203_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_203_V = ap_sync_channel_write_weight_203_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_204_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_204_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_204_V = ap_sync_channel_write_weight_204_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_205_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_205_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_205_V = ap_sync_channel_write_weight_205_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_206_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_206_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_206_V = ap_sync_channel_write_weight_206_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_207_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_207_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_207_V = ap_sync_channel_write_weight_207_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_208_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_208_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_208_V = ap_sync_channel_write_weight_208_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_209_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_209_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_209_V = ap_sync_channel_write_weight_209_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_20_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_20_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_20_V = ap_sync_channel_write_weight_20_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_210_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_210_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_210_V = ap_sync_channel_write_weight_210_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_211_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_211_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_211_V = ap_sync_channel_write_weight_211_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_212_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_212_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_212_V = ap_sync_channel_write_weight_212_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_213_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_213_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_213_V = ap_sync_channel_write_weight_213_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_214_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_214_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_214_V = ap_sync_channel_write_weight_214_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_215_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_215_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_215_V = ap_sync_channel_write_weight_215_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_216_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_216_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_216_V = ap_sync_channel_write_weight_216_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_217_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_217_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_217_V = ap_sync_channel_write_weight_217_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_218_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_218_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_218_V = ap_sync_channel_write_weight_218_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_219_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_219_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_219_V = ap_sync_channel_write_weight_219_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_21_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_21_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_21_V = ap_sync_channel_write_weight_21_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_220_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_220_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_220_V = ap_sync_channel_write_weight_220_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_221_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_221_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_221_V = ap_sync_channel_write_weight_221_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_222_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_222_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_222_V = ap_sync_channel_write_weight_222_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_223_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_223_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_223_V = ap_sync_channel_write_weight_223_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_224_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_224_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_224_V = ap_sync_channel_write_weight_224_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_225_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_225_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_225_V = ap_sync_channel_write_weight_225_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_226_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_226_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_226_V = ap_sync_channel_write_weight_226_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_227_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_227_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_227_V = ap_sync_channel_write_weight_227_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_228_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_228_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_228_V = ap_sync_channel_write_weight_228_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_229_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_229_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_229_V = ap_sync_channel_write_weight_229_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_22_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_22_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_22_V = ap_sync_channel_write_weight_22_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_230_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_230_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_230_V = ap_sync_channel_write_weight_230_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_231_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_231_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_231_V = ap_sync_channel_write_weight_231_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_232_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_232_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_232_V = ap_sync_channel_write_weight_232_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_233_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_233_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_233_V = ap_sync_channel_write_weight_233_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_234_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_234_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_234_V = ap_sync_channel_write_weight_234_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_235_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_235_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_235_V = ap_sync_channel_write_weight_235_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_236_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_236_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_236_V = ap_sync_channel_write_weight_236_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_237_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_237_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_237_V = ap_sync_channel_write_weight_237_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_238_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_238_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_238_V = ap_sync_channel_write_weight_238_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_239_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_239_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_239_V = ap_sync_channel_write_weight_239_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_23_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_23_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_23_V = ap_sync_channel_write_weight_23_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_240_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_240_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_240_V = ap_sync_channel_write_weight_240_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_241_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_241_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_241_V = ap_sync_channel_write_weight_241_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_242_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_242_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_242_V = ap_sync_channel_write_weight_242_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_243_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_243_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_243_V = ap_sync_channel_write_weight_243_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_244_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_244_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_244_V = ap_sync_channel_write_weight_244_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_245_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_245_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_245_V = ap_sync_channel_write_weight_245_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_246_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_246_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_246_V = ap_sync_channel_write_weight_246_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_247_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_247_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_247_V = ap_sync_channel_write_weight_247_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_248_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_248_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_248_V = ap_sync_channel_write_weight_248_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_249_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_249_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_249_V = ap_sync_channel_write_weight_249_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_24_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_24_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_24_V = ap_sync_channel_write_weight_24_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_250_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_250_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_250_V = ap_sync_channel_write_weight_250_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_251_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_251_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_251_V = ap_sync_channel_write_weight_251_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_252_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_252_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_252_V = ap_sync_channel_write_weight_252_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_253_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_253_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_253_V = ap_sync_channel_write_weight_253_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_254_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_254_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_254_V = ap_sync_channel_write_weight_254_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_255_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_255_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_255_V = ap_sync_channel_write_weight_255_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_256_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_256_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_256_V = ap_sync_channel_write_weight_256_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_257_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_257_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_257_V = ap_sync_channel_write_weight_257_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_258_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_258_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_258_V = ap_sync_channel_write_weight_258_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_259_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_259_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_259_V = ap_sync_channel_write_weight_259_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_25_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_25_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_25_V = ap_sync_channel_write_weight_25_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_260_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_260_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_260_V = ap_sync_channel_write_weight_260_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_261_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_261_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_261_V = ap_sync_channel_write_weight_261_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_262_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_262_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_262_V = ap_sync_channel_write_weight_262_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_263_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_263_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_263_V = ap_sync_channel_write_weight_263_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_264_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_264_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_264_V = ap_sync_channel_write_weight_264_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_265_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_265_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_265_V = ap_sync_channel_write_weight_265_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_266_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_266_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_266_V = ap_sync_channel_write_weight_266_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_267_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_267_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_267_V = ap_sync_channel_write_weight_267_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_268_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_268_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_268_V = ap_sync_channel_write_weight_268_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_269_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_269_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_269_V = ap_sync_channel_write_weight_269_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_26_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_26_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_26_V = ap_sync_channel_write_weight_26_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_270_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_270_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_270_V = ap_sync_channel_write_weight_270_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_271_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_271_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_271_V = ap_sync_channel_write_weight_271_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_272_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_272_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_272_V = ap_sync_channel_write_weight_272_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_273_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_273_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_273_V = ap_sync_channel_write_weight_273_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_274_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_274_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_274_V = ap_sync_channel_write_weight_274_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_275_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_275_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_275_V = ap_sync_channel_write_weight_275_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_276_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_276_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_276_V = ap_sync_channel_write_weight_276_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_277_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_277_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_277_V = ap_sync_channel_write_weight_277_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_278_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_278_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_278_V = ap_sync_channel_write_weight_278_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_279_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_279_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_279_V = ap_sync_channel_write_weight_279_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_27_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_27_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_27_V = ap_sync_channel_write_weight_27_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_280_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_280_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_280_V = ap_sync_channel_write_weight_280_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_281_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_281_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_281_V = ap_sync_channel_write_weight_281_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_282_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_282_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_282_V = ap_sync_channel_write_weight_282_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_283_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_283_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_283_V = ap_sync_channel_write_weight_283_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_284_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_284_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_284_V = ap_sync_channel_write_weight_284_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_285_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_285_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_285_V = ap_sync_channel_write_weight_285_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_286_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_286_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_286_V = ap_sync_channel_write_weight_286_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_287_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_287_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_287_V = ap_sync_channel_write_weight_287_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_288_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_288_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_288_V = ap_sync_channel_write_weight_288_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_289_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_289_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_289_V = ap_sync_channel_write_weight_289_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_28_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_28_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_28_V = ap_sync_channel_write_weight_28_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_290_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_290_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_290_V = ap_sync_channel_write_weight_290_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_291_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_291_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_291_V = ap_sync_channel_write_weight_291_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_292_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_292_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_292_V = ap_sync_channel_write_weight_292_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_293_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_293_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_293_V = ap_sync_channel_write_weight_293_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_294_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_294_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_294_V = ap_sync_channel_write_weight_294_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_295_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_295_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_295_V = ap_sync_channel_write_weight_295_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_296_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_296_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_296_V = ap_sync_channel_write_weight_296_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_297_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_297_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_297_V = ap_sync_channel_write_weight_297_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_298_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_298_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_298_V = ap_sync_channel_write_weight_298_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_299_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_299_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_299_V = ap_sync_channel_write_weight_299_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_29_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_29_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_29_V = ap_sync_channel_write_weight_29_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_2_V = ap_sync_channel_write_weight_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_300_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_300_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_300_V = ap_sync_channel_write_weight_300_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_301_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_301_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_301_V = ap_sync_channel_write_weight_301_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_302_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_302_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_302_V = ap_sync_channel_write_weight_302_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_303_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_303_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_303_V = ap_sync_channel_write_weight_303_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_304_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_304_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_304_V = ap_sync_channel_write_weight_304_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_305_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_305_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_305_V = ap_sync_channel_write_weight_305_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_306_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_306_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_306_V = ap_sync_channel_write_weight_306_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_307_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_307_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_307_V = ap_sync_channel_write_weight_307_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_308_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_308_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_308_V = ap_sync_channel_write_weight_308_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_309_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_309_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_309_V = ap_sync_channel_write_weight_309_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_30_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_30_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_30_V = ap_sync_channel_write_weight_30_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_310_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_310_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_310_V = ap_sync_channel_write_weight_310_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_311_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_311_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_311_V = ap_sync_channel_write_weight_311_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_312_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_312_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_312_V = ap_sync_channel_write_weight_312_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_313_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_313_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_313_V = ap_sync_channel_write_weight_313_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_314_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_314_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_314_V = ap_sync_channel_write_weight_314_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_315_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_315_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_315_V = ap_sync_channel_write_weight_315_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_316_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_316_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_316_V = ap_sync_channel_write_weight_316_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_317_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_317_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_317_V = ap_sync_channel_write_weight_317_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_318_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_318_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_318_V = ap_sync_channel_write_weight_318_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_319_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_319_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_319_V = ap_sync_channel_write_weight_319_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_31_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_31_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_31_V = ap_sync_channel_write_weight_31_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_320_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_320_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_320_V = ap_sync_channel_write_weight_320_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_321_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_321_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_321_V = ap_sync_channel_write_weight_321_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_322_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_322_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_322_V = ap_sync_channel_write_weight_322_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_323_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_323_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_323_V = ap_sync_channel_write_weight_323_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_324_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_324_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_324_V = ap_sync_channel_write_weight_324_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_325_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_325_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_325_V = ap_sync_channel_write_weight_325_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_326_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_326_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_326_V = ap_sync_channel_write_weight_326_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_327_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_327_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_327_V = ap_sync_channel_write_weight_327_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_328_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_328_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_328_V = ap_sync_channel_write_weight_328_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_329_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_329_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_329_V = ap_sync_channel_write_weight_329_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_32_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_32_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_32_V = ap_sync_channel_write_weight_32_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_330_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_330_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_330_V = ap_sync_channel_write_weight_330_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_331_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_331_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_331_V = ap_sync_channel_write_weight_331_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_332_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_332_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_332_V = ap_sync_channel_write_weight_332_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_333_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_333_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_333_V = ap_sync_channel_write_weight_333_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_334_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_334_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_334_V = ap_sync_channel_write_weight_334_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_335_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_335_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_335_V = ap_sync_channel_write_weight_335_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_336_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_336_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_336_V = ap_sync_channel_write_weight_336_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_337_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_337_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_337_V = ap_sync_channel_write_weight_337_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_338_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_338_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_338_V = ap_sync_channel_write_weight_338_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_339_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_339_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_339_V = ap_sync_channel_write_weight_339_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_33_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_33_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_33_V = ap_sync_channel_write_weight_33_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_340_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_340_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_340_V = ap_sync_channel_write_weight_340_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_341_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_341_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_341_V = ap_sync_channel_write_weight_341_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_342_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_342_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_342_V = ap_sync_channel_write_weight_342_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_343_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_343_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_343_V = ap_sync_channel_write_weight_343_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_344_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_344_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_344_V = ap_sync_channel_write_weight_344_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_345_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_345_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_345_V = ap_sync_channel_write_weight_345_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_346_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_346_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_346_V = ap_sync_channel_write_weight_346_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_347_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_347_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_347_V = ap_sync_channel_write_weight_347_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_348_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_348_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_348_V = ap_sync_channel_write_weight_348_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_349_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_349_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_349_V = ap_sync_channel_write_weight_349_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_34_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_34_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_34_V = ap_sync_channel_write_weight_34_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_350_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_350_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_350_V = ap_sync_channel_write_weight_350_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_351_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_351_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_351_V = ap_sync_channel_write_weight_351_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_352_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_352_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_352_V = ap_sync_channel_write_weight_352_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_353_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_353_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_353_V = ap_sync_channel_write_weight_353_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_354_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_354_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_354_V = ap_sync_channel_write_weight_354_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_355_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_355_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_355_V = ap_sync_channel_write_weight_355_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_356_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_356_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_356_V = ap_sync_channel_write_weight_356_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_357_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_357_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_357_V = ap_sync_channel_write_weight_357_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_358_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_358_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_358_V = ap_sync_channel_write_weight_358_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_359_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_359_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_359_V = ap_sync_channel_write_weight_359_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_35_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_35_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_35_V = ap_sync_channel_write_weight_35_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_360_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_360_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_360_V = ap_sync_channel_write_weight_360_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_361_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_361_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_361_V = ap_sync_channel_write_weight_361_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_362_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_362_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_362_V = ap_sync_channel_write_weight_362_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_363_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_363_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_363_V = ap_sync_channel_write_weight_363_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_364_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_364_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_364_V = ap_sync_channel_write_weight_364_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_365_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_365_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_365_V = ap_sync_channel_write_weight_365_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_366_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_366_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_366_V = ap_sync_channel_write_weight_366_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_367_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_367_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_367_V = ap_sync_channel_write_weight_367_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_368_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_368_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_368_V = ap_sync_channel_write_weight_368_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_369_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_369_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_369_V = ap_sync_channel_write_weight_369_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_36_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_36_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_36_V = ap_sync_channel_write_weight_36_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_370_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_370_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_370_V = ap_sync_channel_write_weight_370_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_371_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_371_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_371_V = ap_sync_channel_write_weight_371_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_372_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_372_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_372_V = ap_sync_channel_write_weight_372_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_373_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_373_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_373_V = ap_sync_channel_write_weight_373_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_374_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_374_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_374_V = ap_sync_channel_write_weight_374_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_375_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_375_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_375_V = ap_sync_channel_write_weight_375_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_376_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_376_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_376_V = ap_sync_channel_write_weight_376_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_377_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_377_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_377_V = ap_sync_channel_write_weight_377_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_378_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_378_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_378_V = ap_sync_channel_write_weight_378_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_379_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_379_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_379_V = ap_sync_channel_write_weight_379_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_37_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_37_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_37_V = ap_sync_channel_write_weight_37_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_380_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_380_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_380_V = ap_sync_channel_write_weight_380_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_381_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_381_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_381_V = ap_sync_channel_write_weight_381_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_382_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_382_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_382_V = ap_sync_channel_write_weight_382_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_383_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_383_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_383_V = ap_sync_channel_write_weight_383_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_384_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_384_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_384_V = ap_sync_channel_write_weight_384_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_385_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_385_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_385_V = ap_sync_channel_write_weight_385_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_386_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_386_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_386_V = ap_sync_channel_write_weight_386_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_387_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_387_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_387_V = ap_sync_channel_write_weight_387_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_388_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_388_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_388_V = ap_sync_channel_write_weight_388_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_389_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_389_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_389_V = ap_sync_channel_write_weight_389_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_38_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_38_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_38_V = ap_sync_channel_write_weight_38_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_390_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_390_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_390_V = ap_sync_channel_write_weight_390_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_391_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_391_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_391_V = ap_sync_channel_write_weight_391_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_392_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_392_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_392_V = ap_sync_channel_write_weight_392_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_393_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_393_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_393_V = ap_sync_channel_write_weight_393_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_394_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_394_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_394_V = ap_sync_channel_write_weight_394_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_395_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_395_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_395_V = ap_sync_channel_write_weight_395_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_396_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_396_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_396_V = ap_sync_channel_write_weight_396_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_397_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_397_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_397_V = ap_sync_channel_write_weight_397_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_398_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_398_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_398_V = ap_sync_channel_write_weight_398_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_399_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_399_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_399_V = ap_sync_channel_write_weight_399_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_39_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_39_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_39_V = ap_sync_channel_write_weight_39_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_3_V = ap_sync_channel_write_weight_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_400_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_400_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_400_V = ap_sync_channel_write_weight_400_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_401_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_401_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_401_V = ap_sync_channel_write_weight_401_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_402_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_402_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_402_V = ap_sync_channel_write_weight_402_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_403_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_403_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_403_V = ap_sync_channel_write_weight_403_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_404_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_404_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_404_V = ap_sync_channel_write_weight_404_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_405_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_405_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_405_V = ap_sync_channel_write_weight_405_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_406_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_406_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_406_V = ap_sync_channel_write_weight_406_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_407_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_407_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_407_V = ap_sync_channel_write_weight_407_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_408_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_408_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_408_V = ap_sync_channel_write_weight_408_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_409_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_409_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_409_V = ap_sync_channel_write_weight_409_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_40_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_40_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_40_V = ap_sync_channel_write_weight_40_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_410_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_410_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_410_V = ap_sync_channel_write_weight_410_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_411_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_411_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_411_V = ap_sync_channel_write_weight_411_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_412_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_412_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_412_V = ap_sync_channel_write_weight_412_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_413_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_413_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_413_V = ap_sync_channel_write_weight_413_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_414_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_414_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_414_V = ap_sync_channel_write_weight_414_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_415_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_415_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_415_V = ap_sync_channel_write_weight_415_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_416_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_416_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_416_V = ap_sync_channel_write_weight_416_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_417_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_417_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_417_V = ap_sync_channel_write_weight_417_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_418_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_418_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_418_V = ap_sync_channel_write_weight_418_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_419_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_419_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_419_V = ap_sync_channel_write_weight_419_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_41_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_41_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_41_V = ap_sync_channel_write_weight_41_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_420_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_420_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_420_V = ap_sync_channel_write_weight_420_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_421_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_421_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_421_V = ap_sync_channel_write_weight_421_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_422_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_422_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_422_V = ap_sync_channel_write_weight_422_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_423_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_423_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_423_V = ap_sync_channel_write_weight_423_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_424_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_424_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_424_V = ap_sync_channel_write_weight_424_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_425_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_425_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_425_V = ap_sync_channel_write_weight_425_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_426_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_426_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_426_V = ap_sync_channel_write_weight_426_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_427_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_427_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_427_V = ap_sync_channel_write_weight_427_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_428_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_428_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_428_V = ap_sync_channel_write_weight_428_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_429_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_429_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_429_V = ap_sync_channel_write_weight_429_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_42_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_42_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_42_V = ap_sync_channel_write_weight_42_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_430_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_430_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_430_V = ap_sync_channel_write_weight_430_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_431_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_431_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_431_V = ap_sync_channel_write_weight_431_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_432_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_432_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_432_V = ap_sync_channel_write_weight_432_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_433_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_433_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_433_V = ap_sync_channel_write_weight_433_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_434_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_434_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_434_V = ap_sync_channel_write_weight_434_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_435_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_435_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_435_V = ap_sync_channel_write_weight_435_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_436_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_436_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_436_V = ap_sync_channel_write_weight_436_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_437_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_437_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_437_V = ap_sync_channel_write_weight_437_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_438_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_438_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_438_V = ap_sync_channel_write_weight_438_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_439_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_439_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_439_V = ap_sync_channel_write_weight_439_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_43_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_43_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_43_V = ap_sync_channel_write_weight_43_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_440_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_440_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_440_V = ap_sync_channel_write_weight_440_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_441_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_441_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_441_V = ap_sync_channel_write_weight_441_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_442_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_442_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_442_V = ap_sync_channel_write_weight_442_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_443_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_443_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_443_V = ap_sync_channel_write_weight_443_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_444_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_444_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_444_V = ap_sync_channel_write_weight_444_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_445_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_445_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_445_V = ap_sync_channel_write_weight_445_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_446_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_446_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_446_V = ap_sync_channel_write_weight_446_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_447_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_447_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_447_V = ap_sync_channel_write_weight_447_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_448_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_448_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_448_V = ap_sync_channel_write_weight_448_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_449_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_449_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_449_V = ap_sync_channel_write_weight_449_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_44_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_44_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_44_V = ap_sync_channel_write_weight_44_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_450_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_450_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_450_V = ap_sync_channel_write_weight_450_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_451_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_451_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_451_V = ap_sync_channel_write_weight_451_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_452_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_452_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_452_V = ap_sync_channel_write_weight_452_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_453_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_453_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_453_V = ap_sync_channel_write_weight_453_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_454_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_454_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_454_V = ap_sync_channel_write_weight_454_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_455_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_455_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_455_V = ap_sync_channel_write_weight_455_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_456_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_456_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_456_V = ap_sync_channel_write_weight_456_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_457_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_457_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_457_V = ap_sync_channel_write_weight_457_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_458_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_458_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_458_V = ap_sync_channel_write_weight_458_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_459_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_459_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_459_V = ap_sync_channel_write_weight_459_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_45_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_45_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_45_V = ap_sync_channel_write_weight_45_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_460_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_460_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_460_V = ap_sync_channel_write_weight_460_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_461_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_461_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_461_V = ap_sync_channel_write_weight_461_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_462_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_462_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_462_V = ap_sync_channel_write_weight_462_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_463_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_463_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_463_V = ap_sync_channel_write_weight_463_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_464_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_464_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_464_V = ap_sync_channel_write_weight_464_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_465_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_465_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_465_V = ap_sync_channel_write_weight_465_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_466_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_466_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_466_V = ap_sync_channel_write_weight_466_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_467_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_467_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_467_V = ap_sync_channel_write_weight_467_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_468_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_468_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_468_V = ap_sync_channel_write_weight_468_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_469_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_469_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_469_V = ap_sync_channel_write_weight_469_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_46_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_46_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_46_V = ap_sync_channel_write_weight_46_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_470_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_470_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_470_V = ap_sync_channel_write_weight_470_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_471_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_471_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_471_V = ap_sync_channel_write_weight_471_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_472_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_472_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_472_V = ap_sync_channel_write_weight_472_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_473_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_473_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_473_V = ap_sync_channel_write_weight_473_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_474_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_474_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_474_V = ap_sync_channel_write_weight_474_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_475_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_475_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_475_V = ap_sync_channel_write_weight_475_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_476_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_476_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_476_V = ap_sync_channel_write_weight_476_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_477_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_477_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_477_V = ap_sync_channel_write_weight_477_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_478_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_478_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_478_V = ap_sync_channel_write_weight_478_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_479_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_479_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_479_V = ap_sync_channel_write_weight_479_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_47_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_47_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_47_V = ap_sync_channel_write_weight_47_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_480_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_480_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_480_V = ap_sync_channel_write_weight_480_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_481_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_481_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_481_V = ap_sync_channel_write_weight_481_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_482_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_482_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_482_V = ap_sync_channel_write_weight_482_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_483_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_483_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_483_V = ap_sync_channel_write_weight_483_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_484_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_484_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_484_V = ap_sync_channel_write_weight_484_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_485_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_485_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_485_V = ap_sync_channel_write_weight_485_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_486_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_486_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_486_V = ap_sync_channel_write_weight_486_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_487_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_487_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_487_V = ap_sync_channel_write_weight_487_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_488_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_488_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_488_V = ap_sync_channel_write_weight_488_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_489_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_489_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_489_V = ap_sync_channel_write_weight_489_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_48_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_48_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_48_V = ap_sync_channel_write_weight_48_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_490_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_490_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_490_V = ap_sync_channel_write_weight_490_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_491_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_491_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_491_V = ap_sync_channel_write_weight_491_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_492_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_492_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_492_V = ap_sync_channel_write_weight_492_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_493_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_493_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_493_V = ap_sync_channel_write_weight_493_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_494_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_494_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_494_V = ap_sync_channel_write_weight_494_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_495_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_495_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_495_V = ap_sync_channel_write_weight_495_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_496_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_496_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_496_V = ap_sync_channel_write_weight_496_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_497_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_497_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_497_V = ap_sync_channel_write_weight_497_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_498_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_498_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_498_V = ap_sync_channel_write_weight_498_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_499_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_499_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_499_V = ap_sync_channel_write_weight_499_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_49_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_49_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_49_V = ap_sync_channel_write_weight_49_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_4_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_4_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_4_V = ap_sync_channel_write_weight_4_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_500_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_500_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_500_V = ap_sync_channel_write_weight_500_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_501_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_501_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_501_V = ap_sync_channel_write_weight_501_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_502_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_502_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_502_V = ap_sync_channel_write_weight_502_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_503_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_503_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_503_V = ap_sync_channel_write_weight_503_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_504_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_504_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_504_V = ap_sync_channel_write_weight_504_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_505_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_505_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_505_V = ap_sync_channel_write_weight_505_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_506_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_506_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_506_V = ap_sync_channel_write_weight_506_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_507_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_507_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_507_V = ap_sync_channel_write_weight_507_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_508_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_508_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_508_V = ap_sync_channel_write_weight_508_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_509_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_509_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_509_V = ap_sync_channel_write_weight_509_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_50_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_50_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_50_V = ap_sync_channel_write_weight_50_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_510_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_510_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_510_V = ap_sync_channel_write_weight_510_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_511_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_511_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_511_V = ap_sync_channel_write_weight_511_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_512_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_512_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_512_V = ap_sync_channel_write_weight_512_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_513_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_513_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_513_V = ap_sync_channel_write_weight_513_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_514_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_514_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_514_V = ap_sync_channel_write_weight_514_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_515_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_515_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_515_V = ap_sync_channel_write_weight_515_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_516_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_516_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_516_V = ap_sync_channel_write_weight_516_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_517_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_517_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_517_V = ap_sync_channel_write_weight_517_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_518_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_518_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_518_V = ap_sync_channel_write_weight_518_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_519_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_519_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_519_V = ap_sync_channel_write_weight_519_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_51_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_51_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_51_V = ap_sync_channel_write_weight_51_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_520_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_520_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_520_V = ap_sync_channel_write_weight_520_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_521_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_521_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_521_V = ap_sync_channel_write_weight_521_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_522_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_522_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_522_V = ap_sync_channel_write_weight_522_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_523_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_523_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_523_V = ap_sync_channel_write_weight_523_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_524_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_524_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_524_V = ap_sync_channel_write_weight_524_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_525_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_525_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_525_V = ap_sync_channel_write_weight_525_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_526_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_526_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_526_V = ap_sync_channel_write_weight_526_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_527_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_527_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_527_V = ap_sync_channel_write_weight_527_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_528_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_528_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_528_V = ap_sync_channel_write_weight_528_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_529_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_529_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_529_V = ap_sync_channel_write_weight_529_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_52_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_52_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_52_V = ap_sync_channel_write_weight_52_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_530_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_530_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_530_V = ap_sync_channel_write_weight_530_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_531_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_531_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_531_V = ap_sync_channel_write_weight_531_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_532_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_532_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_532_V = ap_sync_channel_write_weight_532_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_533_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_533_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_533_V = ap_sync_channel_write_weight_533_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_534_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_534_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_534_V = ap_sync_channel_write_weight_534_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_535_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_535_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_535_V = ap_sync_channel_write_weight_535_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_536_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_536_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_536_V = ap_sync_channel_write_weight_536_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_537_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_537_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_537_V = ap_sync_channel_write_weight_537_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_538_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_538_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_538_V = ap_sync_channel_write_weight_538_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_539_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_539_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_539_V = ap_sync_channel_write_weight_539_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_53_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_53_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_53_V = ap_sync_channel_write_weight_53_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_540_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_540_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_540_V = ap_sync_channel_write_weight_540_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_541_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_541_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_541_V = ap_sync_channel_write_weight_541_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_542_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_542_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_542_V = ap_sync_channel_write_weight_542_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_543_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_543_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_543_V = ap_sync_channel_write_weight_543_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_544_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_544_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_544_V = ap_sync_channel_write_weight_544_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_545_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_545_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_545_V = ap_sync_channel_write_weight_545_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_546_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_546_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_546_V = ap_sync_channel_write_weight_546_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_547_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_547_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_547_V = ap_sync_channel_write_weight_547_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_548_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_548_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_548_V = ap_sync_channel_write_weight_548_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_549_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_549_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_549_V = ap_sync_channel_write_weight_549_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_54_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_54_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_54_V = ap_sync_channel_write_weight_54_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_550_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_550_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_550_V = ap_sync_channel_write_weight_550_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_551_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_551_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_551_V = ap_sync_channel_write_weight_551_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_552_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_552_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_552_V = ap_sync_channel_write_weight_552_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_553_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_553_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_553_V = ap_sync_channel_write_weight_553_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_554_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_554_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_554_V = ap_sync_channel_write_weight_554_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_555_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_555_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_555_V = ap_sync_channel_write_weight_555_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_556_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_556_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_556_V = ap_sync_channel_write_weight_556_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_557_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_557_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_557_V = ap_sync_channel_write_weight_557_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_558_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_558_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_558_V = ap_sync_channel_write_weight_558_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_559_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_559_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_559_V = ap_sync_channel_write_weight_559_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_55_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_55_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_55_V = ap_sync_channel_write_weight_55_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_560_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_560_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_560_V = ap_sync_channel_write_weight_560_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_561_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_561_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_561_V = ap_sync_channel_write_weight_561_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_562_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_562_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_562_V = ap_sync_channel_write_weight_562_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_563_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_563_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_563_V = ap_sync_channel_write_weight_563_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_564_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_564_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_564_V = ap_sync_channel_write_weight_564_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_565_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_565_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_565_V = ap_sync_channel_write_weight_565_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_566_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_566_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_566_V = ap_sync_channel_write_weight_566_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_567_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_567_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_567_V = ap_sync_channel_write_weight_567_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_568_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_568_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_568_V = ap_sync_channel_write_weight_568_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_569_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_569_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_569_V = ap_sync_channel_write_weight_569_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_56_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_56_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_56_V = ap_sync_channel_write_weight_56_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_570_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_570_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_570_V = ap_sync_channel_write_weight_570_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_571_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_571_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_571_V = ap_sync_channel_write_weight_571_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_572_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_572_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_572_V = ap_sync_channel_write_weight_572_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_573_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_573_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_573_V = ap_sync_channel_write_weight_573_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_574_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_574_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_574_V = ap_sync_channel_write_weight_574_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_575_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_575_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_575_V = ap_sync_channel_write_weight_575_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_576_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_576_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_576_V = ap_sync_channel_write_weight_576_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_577_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_577_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_577_V = ap_sync_channel_write_weight_577_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_578_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_578_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_578_V = ap_sync_channel_write_weight_578_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_579_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_579_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_579_V = ap_sync_channel_write_weight_579_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_57_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_57_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_57_V = ap_sync_channel_write_weight_57_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_580_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_580_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_580_V = ap_sync_channel_write_weight_580_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_581_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_581_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_581_V = ap_sync_channel_write_weight_581_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_582_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_582_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_582_V = ap_sync_channel_write_weight_582_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_583_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_583_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_583_V = ap_sync_channel_write_weight_583_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_584_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_584_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_584_V = ap_sync_channel_write_weight_584_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_585_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_585_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_585_V = ap_sync_channel_write_weight_585_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_586_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_586_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_586_V = ap_sync_channel_write_weight_586_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_587_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_587_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_587_V = ap_sync_channel_write_weight_587_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_588_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_588_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_588_V = ap_sync_channel_write_weight_588_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_589_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_589_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_589_V = ap_sync_channel_write_weight_589_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_58_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_58_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_58_V = ap_sync_channel_write_weight_58_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_590_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_590_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_590_V = ap_sync_channel_write_weight_590_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_591_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_591_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_591_V = ap_sync_channel_write_weight_591_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_592_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_592_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_592_V = ap_sync_channel_write_weight_592_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_593_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_593_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_593_V = ap_sync_channel_write_weight_593_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_594_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_594_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_594_V = ap_sync_channel_write_weight_594_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_595_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_595_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_595_V = ap_sync_channel_write_weight_595_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_596_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_596_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_596_V = ap_sync_channel_write_weight_596_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_597_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_597_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_597_V = ap_sync_channel_write_weight_597_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_598_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_598_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_598_V = ap_sync_channel_write_weight_598_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_599_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_599_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_599_V = ap_sync_channel_write_weight_599_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_59_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_59_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_59_V = ap_sync_channel_write_weight_59_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_5_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_5_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_5_V = ap_sync_channel_write_weight_5_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_600_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_600_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_600_V = ap_sync_channel_write_weight_600_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_601_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_601_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_601_V = ap_sync_channel_write_weight_601_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_602_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_602_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_602_V = ap_sync_channel_write_weight_602_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_603_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_603_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_603_V = ap_sync_channel_write_weight_603_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_604_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_604_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_604_V = ap_sync_channel_write_weight_604_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_605_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_605_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_605_V = ap_sync_channel_write_weight_605_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_606_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_606_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_606_V = ap_sync_channel_write_weight_606_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_607_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_607_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_607_V = ap_sync_channel_write_weight_607_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_608_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_608_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_608_V = ap_sync_channel_write_weight_608_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_609_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_609_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_609_V = ap_sync_channel_write_weight_609_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_60_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_60_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_60_V = ap_sync_channel_write_weight_60_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_610_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_610_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_610_V = ap_sync_channel_write_weight_610_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_611_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_611_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_611_V = ap_sync_channel_write_weight_611_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_612_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_612_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_612_V = ap_sync_channel_write_weight_612_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_613_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_613_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_613_V = ap_sync_channel_write_weight_613_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_614_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_614_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_614_V = ap_sync_channel_write_weight_614_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_615_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_615_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_615_V = ap_sync_channel_write_weight_615_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_616_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_616_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_616_V = ap_sync_channel_write_weight_616_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_617_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_617_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_617_V = ap_sync_channel_write_weight_617_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_618_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_618_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_618_V = ap_sync_channel_write_weight_618_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_619_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_619_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_619_V = ap_sync_channel_write_weight_619_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_61_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_61_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_61_V = ap_sync_channel_write_weight_61_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_620_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_620_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_620_V = ap_sync_channel_write_weight_620_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_621_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_621_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_621_V = ap_sync_channel_write_weight_621_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_622_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_622_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_622_V = ap_sync_channel_write_weight_622_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_623_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_623_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_623_V = ap_sync_channel_write_weight_623_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_624_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_624_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_624_V = ap_sync_channel_write_weight_624_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_625_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_625_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_625_V = ap_sync_channel_write_weight_625_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_626_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_626_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_626_V = ap_sync_channel_write_weight_626_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_627_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_627_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_627_V = ap_sync_channel_write_weight_627_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_628_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_628_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_628_V = ap_sync_channel_write_weight_628_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_629_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_629_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_629_V = ap_sync_channel_write_weight_629_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_62_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_62_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_62_V = ap_sync_channel_write_weight_62_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_630_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_630_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_630_V = ap_sync_channel_write_weight_630_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_631_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_631_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_631_V = ap_sync_channel_write_weight_631_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_632_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_632_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_632_V = ap_sync_channel_write_weight_632_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_633_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_633_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_633_V = ap_sync_channel_write_weight_633_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_634_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_634_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_634_V = ap_sync_channel_write_weight_634_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_635_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_635_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_635_V = ap_sync_channel_write_weight_635_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_636_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_636_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_636_V = ap_sync_channel_write_weight_636_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_637_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_637_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_637_V = ap_sync_channel_write_weight_637_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_638_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_638_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_638_V = ap_sync_channel_write_weight_638_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_639_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_639_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_639_V = ap_sync_channel_write_weight_639_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_63_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_63_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_63_V = ap_sync_channel_write_weight_63_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_640_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_640_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_640_V = ap_sync_channel_write_weight_640_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_641_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_641_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_641_V = ap_sync_channel_write_weight_641_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_642_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_642_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_642_V = ap_sync_channel_write_weight_642_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_643_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_643_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_643_V = ap_sync_channel_write_weight_643_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_644_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_644_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_644_V = ap_sync_channel_write_weight_644_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_645_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_645_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_645_V = ap_sync_channel_write_weight_645_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_646_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_646_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_646_V = ap_sync_channel_write_weight_646_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_647_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_647_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_647_V = ap_sync_channel_write_weight_647_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_648_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_648_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_648_V = ap_sync_channel_write_weight_648_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_649_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_649_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_649_V = ap_sync_channel_write_weight_649_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_64_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_64_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_64_V = ap_sync_channel_write_weight_64_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_650_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_650_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_650_V = ap_sync_channel_write_weight_650_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_651_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_651_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_651_V = ap_sync_channel_write_weight_651_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_652_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_652_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_652_V = ap_sync_channel_write_weight_652_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_653_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_653_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_653_V = ap_sync_channel_write_weight_653_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_654_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_654_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_654_V = ap_sync_channel_write_weight_654_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_655_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_655_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_655_V = ap_sync_channel_write_weight_655_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_656_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_656_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_656_V = ap_sync_channel_write_weight_656_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_657_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_657_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_657_V = ap_sync_channel_write_weight_657_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_658_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_658_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_658_V = ap_sync_channel_write_weight_658_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_659_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_659_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_659_V = ap_sync_channel_write_weight_659_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_65_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_65_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_65_V = ap_sync_channel_write_weight_65_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_660_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_660_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_660_V = ap_sync_channel_write_weight_660_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_661_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_661_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_661_V = ap_sync_channel_write_weight_661_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_662_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_662_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_662_V = ap_sync_channel_write_weight_662_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_663_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_663_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_663_V = ap_sync_channel_write_weight_663_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_664_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_664_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_664_V = ap_sync_channel_write_weight_664_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_665_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_665_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_665_V = ap_sync_channel_write_weight_665_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_666_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_666_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_666_V = ap_sync_channel_write_weight_666_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_667_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_667_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_667_V = ap_sync_channel_write_weight_667_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_668_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_668_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_668_V = ap_sync_channel_write_weight_668_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_669_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_669_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_669_V = ap_sync_channel_write_weight_669_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_66_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_66_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_66_V = ap_sync_channel_write_weight_66_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_670_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_670_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_670_V = ap_sync_channel_write_weight_670_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_671_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_671_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_671_V = ap_sync_channel_write_weight_671_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_672_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_672_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_672_V = ap_sync_channel_write_weight_672_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_673_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_673_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_673_V = ap_sync_channel_write_weight_673_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_674_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_674_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_674_V = ap_sync_channel_write_weight_674_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_675_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_675_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_675_V = ap_sync_channel_write_weight_675_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_676_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_676_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_676_V = ap_sync_channel_write_weight_676_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_677_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_677_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_677_V = ap_sync_channel_write_weight_677_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_678_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_678_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_678_V = ap_sync_channel_write_weight_678_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_679_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_679_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_679_V = ap_sync_channel_write_weight_679_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_67_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_67_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_67_V = ap_sync_channel_write_weight_67_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_680_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_680_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_680_V = ap_sync_channel_write_weight_680_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_681_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_681_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_681_V = ap_sync_channel_write_weight_681_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_682_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_682_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_682_V = ap_sync_channel_write_weight_682_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_683_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_683_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_683_V = ap_sync_channel_write_weight_683_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_684_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_684_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_684_V = ap_sync_channel_write_weight_684_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_685_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_685_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_685_V = ap_sync_channel_write_weight_685_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_686_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_686_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_686_V = ap_sync_channel_write_weight_686_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_687_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_687_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_687_V = ap_sync_channel_write_weight_687_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_688_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_688_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_688_V = ap_sync_channel_write_weight_688_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_689_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_689_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_689_V = ap_sync_channel_write_weight_689_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_68_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_68_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_68_V = ap_sync_channel_write_weight_68_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_690_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_690_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_690_V = ap_sync_channel_write_weight_690_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_691_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_691_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_691_V = ap_sync_channel_write_weight_691_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_692_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_692_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_692_V = ap_sync_channel_write_weight_692_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_693_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_693_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_693_V = ap_sync_channel_write_weight_693_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_694_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_694_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_694_V = ap_sync_channel_write_weight_694_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_695_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_695_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_695_V = ap_sync_channel_write_weight_695_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_696_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_696_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_696_V = ap_sync_channel_write_weight_696_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_697_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_697_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_697_V = ap_sync_channel_write_weight_697_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_698_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_698_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_698_V = ap_sync_channel_write_weight_698_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_699_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_699_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_699_V = ap_sync_channel_write_weight_699_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_69_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_69_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_69_V = ap_sync_channel_write_weight_69_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_6_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_6_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_6_V = ap_sync_channel_write_weight_6_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_700_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_700_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_700_V = ap_sync_channel_write_weight_700_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_701_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_701_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_701_V = ap_sync_channel_write_weight_701_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_702_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_702_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_702_V = ap_sync_channel_write_weight_702_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_703_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_703_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_703_V = ap_sync_channel_write_weight_703_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_704_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_704_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_704_V = ap_sync_channel_write_weight_704_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_705_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_705_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_705_V = ap_sync_channel_write_weight_705_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_706_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_706_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_706_V = ap_sync_channel_write_weight_706_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_707_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_707_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_707_V = ap_sync_channel_write_weight_707_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_708_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_708_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_708_V = ap_sync_channel_write_weight_708_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_709_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_709_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_709_V = ap_sync_channel_write_weight_709_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_70_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_70_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_70_V = ap_sync_channel_write_weight_70_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_710_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_710_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_710_V = ap_sync_channel_write_weight_710_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_711_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_711_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_711_V = ap_sync_channel_write_weight_711_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_712_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_712_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_712_V = ap_sync_channel_write_weight_712_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_713_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_713_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_713_V = ap_sync_channel_write_weight_713_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_714_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_714_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_714_V = ap_sync_channel_write_weight_714_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_715_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_715_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_715_V = ap_sync_channel_write_weight_715_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_716_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_716_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_716_V = ap_sync_channel_write_weight_716_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_717_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_717_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_717_V = ap_sync_channel_write_weight_717_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_718_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_718_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_718_V = ap_sync_channel_write_weight_718_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_719_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_719_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_719_V = ap_sync_channel_write_weight_719_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_71_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_71_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_71_V = ap_sync_channel_write_weight_71_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_720_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_720_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_720_V = ap_sync_channel_write_weight_720_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_721_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_721_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_721_V = ap_sync_channel_write_weight_721_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_722_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_722_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_722_V = ap_sync_channel_write_weight_722_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_723_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_723_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_723_V = ap_sync_channel_write_weight_723_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_724_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_724_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_724_V = ap_sync_channel_write_weight_724_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_725_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_725_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_725_V = ap_sync_channel_write_weight_725_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_726_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_726_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_726_V = ap_sync_channel_write_weight_726_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_727_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_727_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_727_V = ap_sync_channel_write_weight_727_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_728_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_728_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_728_V = ap_sync_channel_write_weight_728_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_729_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_729_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_729_V = ap_sync_channel_write_weight_729_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_72_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_72_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_72_V = ap_sync_channel_write_weight_72_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_730_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_730_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_730_V = ap_sync_channel_write_weight_730_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_731_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_731_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_731_V = ap_sync_channel_write_weight_731_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_732_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_732_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_732_V = ap_sync_channel_write_weight_732_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_733_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_733_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_733_V = ap_sync_channel_write_weight_733_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_734_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_734_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_734_V = ap_sync_channel_write_weight_734_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_735_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_735_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_735_V = ap_sync_channel_write_weight_735_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_736_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_736_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_736_V = ap_sync_channel_write_weight_736_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_737_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_737_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_737_V = ap_sync_channel_write_weight_737_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_738_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_738_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_738_V = ap_sync_channel_write_weight_738_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_739_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_739_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_739_V = ap_sync_channel_write_weight_739_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_73_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_73_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_73_V = ap_sync_channel_write_weight_73_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_740_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_740_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_740_V = ap_sync_channel_write_weight_740_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_741_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_741_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_741_V = ap_sync_channel_write_weight_741_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_742_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_742_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_742_V = ap_sync_channel_write_weight_742_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_743_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_743_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_743_V = ap_sync_channel_write_weight_743_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_744_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_744_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_744_V = ap_sync_channel_write_weight_744_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_745_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_745_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_745_V = ap_sync_channel_write_weight_745_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_746_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_746_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_746_V = ap_sync_channel_write_weight_746_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_747_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_747_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_747_V = ap_sync_channel_write_weight_747_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_748_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_748_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_748_V = ap_sync_channel_write_weight_748_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_749_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_749_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_749_V = ap_sync_channel_write_weight_749_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_74_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_74_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_74_V = ap_sync_channel_write_weight_74_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_750_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_750_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_750_V = ap_sync_channel_write_weight_750_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_751_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_751_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_751_V = ap_sync_channel_write_weight_751_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_752_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_752_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_752_V = ap_sync_channel_write_weight_752_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_753_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_753_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_753_V = ap_sync_channel_write_weight_753_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_754_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_754_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_754_V = ap_sync_channel_write_weight_754_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_755_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_755_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_755_V = ap_sync_channel_write_weight_755_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_756_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_756_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_756_V = ap_sync_channel_write_weight_756_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_757_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_757_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_757_V = ap_sync_channel_write_weight_757_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_758_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_758_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_758_V = ap_sync_channel_write_weight_758_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_759_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_759_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_759_V = ap_sync_channel_write_weight_759_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_75_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_75_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_75_V = ap_sync_channel_write_weight_75_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_760_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_760_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_760_V = ap_sync_channel_write_weight_760_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_761_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_761_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_761_V = ap_sync_channel_write_weight_761_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_762_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_762_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_762_V = ap_sync_channel_write_weight_762_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_763_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_763_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_763_V = ap_sync_channel_write_weight_763_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_764_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_764_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_764_V = ap_sync_channel_write_weight_764_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_765_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_765_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_765_V = ap_sync_channel_write_weight_765_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_766_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_766_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_766_V = ap_sync_channel_write_weight_766_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_767_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_767_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_767_V = ap_sync_channel_write_weight_767_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_768_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_768_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_768_V = ap_sync_channel_write_weight_768_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_769_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_769_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_769_V = ap_sync_channel_write_weight_769_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_76_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_76_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_76_V = ap_sync_channel_write_weight_76_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_770_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_770_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_770_V = ap_sync_channel_write_weight_770_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_771_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_771_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_771_V = ap_sync_channel_write_weight_771_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_772_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_772_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_772_V = ap_sync_channel_write_weight_772_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_773_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_773_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_773_V = ap_sync_channel_write_weight_773_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_774_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_774_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_774_V = ap_sync_channel_write_weight_774_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_775_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_775_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_775_V = ap_sync_channel_write_weight_775_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_776_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_776_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_776_V = ap_sync_channel_write_weight_776_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_777_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_777_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_777_V = ap_sync_channel_write_weight_777_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_778_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_778_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_778_V = ap_sync_channel_write_weight_778_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_779_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_779_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_779_V = ap_sync_channel_write_weight_779_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_77_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_77_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_77_V = ap_sync_channel_write_weight_77_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_780_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_780_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_780_V = ap_sync_channel_write_weight_780_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_781_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_781_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_781_V = ap_sync_channel_write_weight_781_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_782_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_782_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_782_V = ap_sync_channel_write_weight_782_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_783_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_783_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_783_V = ap_sync_channel_write_weight_783_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_784_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_784_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_784_V = ap_sync_channel_write_weight_784_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_785_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_785_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_785_V = ap_sync_channel_write_weight_785_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_786_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_786_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_786_V = ap_sync_channel_write_weight_786_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_787_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_787_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_787_V = ap_sync_channel_write_weight_787_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_788_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_788_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_788_V = ap_sync_channel_write_weight_788_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_789_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_789_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_789_V = ap_sync_channel_write_weight_789_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_78_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_78_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_78_V = ap_sync_channel_write_weight_78_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_790_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_790_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_790_V = ap_sync_channel_write_weight_790_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_791_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_791_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_791_V = ap_sync_channel_write_weight_791_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_792_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_792_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_792_V = ap_sync_channel_write_weight_792_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_793_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_793_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_793_V = ap_sync_channel_write_weight_793_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_794_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_794_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_794_V = ap_sync_channel_write_weight_794_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_795_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_795_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_795_V = ap_sync_channel_write_weight_795_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_796_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_796_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_796_V = ap_sync_channel_write_weight_796_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_797_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_797_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_797_V = ap_sync_channel_write_weight_797_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_798_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_798_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_798_V = ap_sync_channel_write_weight_798_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_799_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_799_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_799_V = ap_sync_channel_write_weight_799_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_79_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_79_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_79_V = ap_sync_channel_write_weight_79_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_7_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_7_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_7_V = ap_sync_channel_write_weight_7_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_800_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_800_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_800_V = ap_sync_channel_write_weight_800_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_801_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_801_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_801_V = ap_sync_channel_write_weight_801_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_802_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_802_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_802_V = ap_sync_channel_write_weight_802_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_803_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_803_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_803_V = ap_sync_channel_write_weight_803_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_804_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_804_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_804_V = ap_sync_channel_write_weight_804_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_805_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_805_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_805_V = ap_sync_channel_write_weight_805_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_806_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_806_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_806_V = ap_sync_channel_write_weight_806_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_807_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_807_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_807_V = ap_sync_channel_write_weight_807_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_808_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_808_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_808_V = ap_sync_channel_write_weight_808_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_809_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_809_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_809_V = ap_sync_channel_write_weight_809_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_80_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_80_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_80_V = ap_sync_channel_write_weight_80_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_810_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_810_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_810_V = ap_sync_channel_write_weight_810_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_811_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_811_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_811_V = ap_sync_channel_write_weight_811_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_812_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_812_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_812_V = ap_sync_channel_write_weight_812_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_813_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_813_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_813_V = ap_sync_channel_write_weight_813_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_814_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_814_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_814_V = ap_sync_channel_write_weight_814_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_815_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_815_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_815_V = ap_sync_channel_write_weight_815_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_816_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_816_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_816_V = ap_sync_channel_write_weight_816_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_817_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_817_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_817_V = ap_sync_channel_write_weight_817_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_818_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_818_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_818_V = ap_sync_channel_write_weight_818_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_819_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_819_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_819_V = ap_sync_channel_write_weight_819_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_81_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_81_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_81_V = ap_sync_channel_write_weight_81_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_820_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_820_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_820_V = ap_sync_channel_write_weight_820_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_821_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_821_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_821_V = ap_sync_channel_write_weight_821_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_822_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_822_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_822_V = ap_sync_channel_write_weight_822_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_823_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_823_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_823_V = ap_sync_channel_write_weight_823_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_824_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_824_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_824_V = ap_sync_channel_write_weight_824_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_825_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_825_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_825_V = ap_sync_channel_write_weight_825_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_826_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_826_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_826_V = ap_sync_channel_write_weight_826_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_827_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_827_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_827_V = ap_sync_channel_write_weight_827_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_828_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_828_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_828_V = ap_sync_channel_write_weight_828_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_829_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_829_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_829_V = ap_sync_channel_write_weight_829_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_82_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_82_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_82_V = ap_sync_channel_write_weight_82_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_830_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_830_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_830_V = ap_sync_channel_write_weight_830_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_831_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_831_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_831_V = ap_sync_channel_write_weight_831_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_832_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_832_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_832_V = ap_sync_channel_write_weight_832_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_833_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_833_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_833_V = ap_sync_channel_write_weight_833_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_834_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_834_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_834_V = ap_sync_channel_write_weight_834_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_835_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_835_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_835_V = ap_sync_channel_write_weight_835_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_836_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_836_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_836_V = ap_sync_channel_write_weight_836_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_837_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_837_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_837_V = ap_sync_channel_write_weight_837_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_838_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_838_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_838_V = ap_sync_channel_write_weight_838_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_839_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_839_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_839_V = ap_sync_channel_write_weight_839_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_83_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_83_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_83_V = ap_sync_channel_write_weight_83_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_840_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_840_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_840_V = ap_sync_channel_write_weight_840_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_841_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_841_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_841_V = ap_sync_channel_write_weight_841_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_842_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_842_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_842_V = ap_sync_channel_write_weight_842_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_843_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_843_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_843_V = ap_sync_channel_write_weight_843_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_844_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_844_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_844_V = ap_sync_channel_write_weight_844_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_845_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_845_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_845_V = ap_sync_channel_write_weight_845_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_846_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_846_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_846_V = ap_sync_channel_write_weight_846_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_847_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_847_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_847_V = ap_sync_channel_write_weight_847_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_848_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_848_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_848_V = ap_sync_channel_write_weight_848_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_849_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_849_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_849_V = ap_sync_channel_write_weight_849_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_84_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_84_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_84_V = ap_sync_channel_write_weight_84_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_850_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_850_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_850_V = ap_sync_channel_write_weight_850_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_851_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_851_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_851_V = ap_sync_channel_write_weight_851_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_852_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_852_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_852_V = ap_sync_channel_write_weight_852_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_853_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_853_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_853_V = ap_sync_channel_write_weight_853_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_854_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_854_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_854_V = ap_sync_channel_write_weight_854_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_855_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_855_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_855_V = ap_sync_channel_write_weight_855_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_856_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_856_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_856_V = ap_sync_channel_write_weight_856_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_857_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_857_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_857_V = ap_sync_channel_write_weight_857_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_858_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_858_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_858_V = ap_sync_channel_write_weight_858_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_859_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_859_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_859_V = ap_sync_channel_write_weight_859_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_85_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_85_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_85_V = ap_sync_channel_write_weight_85_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_860_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_860_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_860_V = ap_sync_channel_write_weight_860_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_861_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_861_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_861_V = ap_sync_channel_write_weight_861_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_862_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_862_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_862_V = ap_sync_channel_write_weight_862_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_863_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_863_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_863_V = ap_sync_channel_write_weight_863_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_864_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_864_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_864_V = ap_sync_channel_write_weight_864_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_865_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_865_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_865_V = ap_sync_channel_write_weight_865_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_866_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_866_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_866_V = ap_sync_channel_write_weight_866_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_867_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_867_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_867_V = ap_sync_channel_write_weight_867_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_868_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_868_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_868_V = ap_sync_channel_write_weight_868_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_869_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_869_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_869_V = ap_sync_channel_write_weight_869_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_86_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_86_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_86_V = ap_sync_channel_write_weight_86_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_870_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_870_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_870_V = ap_sync_channel_write_weight_870_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_871_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_871_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_871_V = ap_sync_channel_write_weight_871_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_872_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_872_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_872_V = ap_sync_channel_write_weight_872_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_873_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_873_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_873_V = ap_sync_channel_write_weight_873_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_874_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_874_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_874_V = ap_sync_channel_write_weight_874_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_875_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_875_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_875_V = ap_sync_channel_write_weight_875_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_876_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_876_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_876_V = ap_sync_channel_write_weight_876_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_877_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_877_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_877_V = ap_sync_channel_write_weight_877_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_878_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_878_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_878_V = ap_sync_channel_write_weight_878_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_879_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_879_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_879_V = ap_sync_channel_write_weight_879_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_87_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_87_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_87_V = ap_sync_channel_write_weight_87_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_880_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_880_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_880_V = ap_sync_channel_write_weight_880_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_881_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_881_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_881_V = ap_sync_channel_write_weight_881_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_882_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_882_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_882_V = ap_sync_channel_write_weight_882_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_883_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_883_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_883_V = ap_sync_channel_write_weight_883_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_884_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_884_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_884_V = ap_sync_channel_write_weight_884_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_885_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_885_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_885_V = ap_sync_channel_write_weight_885_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_886_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_886_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_886_V = ap_sync_channel_write_weight_886_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_887_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_887_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_887_V = ap_sync_channel_write_weight_887_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_888_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_888_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_888_V = ap_sync_channel_write_weight_888_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_889_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_889_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_889_V = ap_sync_channel_write_weight_889_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_88_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_88_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_88_V = ap_sync_channel_write_weight_88_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_890_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_890_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_890_V = ap_sync_channel_write_weight_890_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_891_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_891_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_891_V = ap_sync_channel_write_weight_891_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_892_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_892_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_892_V = ap_sync_channel_write_weight_892_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_893_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_893_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_893_V = ap_sync_channel_write_weight_893_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_894_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_894_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_894_V = ap_sync_channel_write_weight_894_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_895_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_895_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_895_V = ap_sync_channel_write_weight_895_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_896_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_896_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_896_V = ap_sync_channel_write_weight_896_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_897_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_897_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_897_V = ap_sync_channel_write_weight_897_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_898_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_898_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_898_V = ap_sync_channel_write_weight_898_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_899_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_899_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_899_V = ap_sync_channel_write_weight_899_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_89_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_89_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_89_V = ap_sync_channel_write_weight_89_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_8_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_8_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_8_V = ap_sync_channel_write_weight_8_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_900_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_900_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_900_V = ap_sync_channel_write_weight_900_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_901_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_901_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_901_V = ap_sync_channel_write_weight_901_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_902_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_902_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_902_V = ap_sync_channel_write_weight_902_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_903_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_903_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_903_V = ap_sync_channel_write_weight_903_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_904_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_904_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_904_V = ap_sync_channel_write_weight_904_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_905_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_905_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_905_V = ap_sync_channel_write_weight_905_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_906_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_906_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_906_V = ap_sync_channel_write_weight_906_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_907_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_907_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_907_V = ap_sync_channel_write_weight_907_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_908_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_908_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_908_V = ap_sync_channel_write_weight_908_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_909_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_909_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_909_V = ap_sync_channel_write_weight_909_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_90_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_90_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_90_V = ap_sync_channel_write_weight_90_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_910_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_910_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_910_V = ap_sync_channel_write_weight_910_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_911_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_911_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_911_V = ap_sync_channel_write_weight_911_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_912_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_912_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_912_V = ap_sync_channel_write_weight_912_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_913_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_913_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_913_V = ap_sync_channel_write_weight_913_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_914_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_914_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_914_V = ap_sync_channel_write_weight_914_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_915_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_915_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_915_V = ap_sync_channel_write_weight_915_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_916_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_916_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_916_V = ap_sync_channel_write_weight_916_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_917_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_917_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_917_V = ap_sync_channel_write_weight_917_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_918_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_918_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_918_V = ap_sync_channel_write_weight_918_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_919_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_919_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_919_V = ap_sync_channel_write_weight_919_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_91_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_91_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_91_V = ap_sync_channel_write_weight_91_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_920_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_920_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_920_V = ap_sync_channel_write_weight_920_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_921_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_921_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_921_V = ap_sync_channel_write_weight_921_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_922_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_922_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_922_V = ap_sync_channel_write_weight_922_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_923_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_923_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_923_V = ap_sync_channel_write_weight_923_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_924_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_924_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_924_V = ap_sync_channel_write_weight_924_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_925_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_925_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_925_V = ap_sync_channel_write_weight_925_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_926_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_926_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_926_V = ap_sync_channel_write_weight_926_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_927_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_927_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_927_V = ap_sync_channel_write_weight_927_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_928_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_928_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_928_V = ap_sync_channel_write_weight_928_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_929_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_929_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_929_V = ap_sync_channel_write_weight_929_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_92_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_92_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_92_V = ap_sync_channel_write_weight_92_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_930_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_930_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_930_V = ap_sync_channel_write_weight_930_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_931_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_931_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_931_V = ap_sync_channel_write_weight_931_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_932_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_932_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_932_V = ap_sync_channel_write_weight_932_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_933_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_933_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_933_V = ap_sync_channel_write_weight_933_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_934_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_934_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_934_V = ap_sync_channel_write_weight_934_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_935_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_935_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_935_V = ap_sync_channel_write_weight_935_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_936_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_936_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_936_V = ap_sync_channel_write_weight_936_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_937_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_937_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_937_V = ap_sync_channel_write_weight_937_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_938_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_938_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_938_V = ap_sync_channel_write_weight_938_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_939_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_939_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_939_V = ap_sync_channel_write_weight_939_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_93_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_93_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_93_V = ap_sync_channel_write_weight_93_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_940_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_940_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_940_V = ap_sync_channel_write_weight_940_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_941_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_941_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_941_V = ap_sync_channel_write_weight_941_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_942_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_942_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_942_V = ap_sync_channel_write_weight_942_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_943_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_943_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_943_V = ap_sync_channel_write_weight_943_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_944_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_944_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_944_V = ap_sync_channel_write_weight_944_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_945_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_945_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_945_V = ap_sync_channel_write_weight_945_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_946_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_946_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_946_V = ap_sync_channel_write_weight_946_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_947_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_947_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_947_V = ap_sync_channel_write_weight_947_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_948_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_948_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_948_V = ap_sync_channel_write_weight_948_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_949_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_949_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_949_V = ap_sync_channel_write_weight_949_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_94_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_94_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_94_V = ap_sync_channel_write_weight_94_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_950_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_950_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_950_V = ap_sync_channel_write_weight_950_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_951_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_951_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_951_V = ap_sync_channel_write_weight_951_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_952_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_952_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_952_V = ap_sync_channel_write_weight_952_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_953_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_953_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_953_V = ap_sync_channel_write_weight_953_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_954_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_954_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_954_V = ap_sync_channel_write_weight_954_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_955_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_955_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_955_V = ap_sync_channel_write_weight_955_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_956_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_956_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_956_V = ap_sync_channel_write_weight_956_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_957_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_957_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_957_V = ap_sync_channel_write_weight_957_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_958_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_958_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_958_V = ap_sync_channel_write_weight_958_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_959_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_959_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_959_V = ap_sync_channel_write_weight_959_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_95_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_95_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_95_V = ap_sync_channel_write_weight_95_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_960_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_960_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_960_V = ap_sync_channel_write_weight_960_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_961_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_961_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_961_V = ap_sync_channel_write_weight_961_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_962_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_962_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_962_V = ap_sync_channel_write_weight_962_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_963_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_963_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_963_V = ap_sync_channel_write_weight_963_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_964_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_964_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_964_V = ap_sync_channel_write_weight_964_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_965_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_965_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_965_V = ap_sync_channel_write_weight_965_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_966_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_966_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_966_V = ap_sync_channel_write_weight_966_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_967_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_967_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_967_V = ap_sync_channel_write_weight_967_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_968_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_968_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_968_V = ap_sync_channel_write_weight_968_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_969_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_969_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_969_V = ap_sync_channel_write_weight_969_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_96_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_96_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_96_V = ap_sync_channel_write_weight_96_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_970_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_970_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_970_V = ap_sync_channel_write_weight_970_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_971_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_971_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_971_V = ap_sync_channel_write_weight_971_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_972_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_972_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_972_V = ap_sync_channel_write_weight_972_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_973_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_973_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_973_V = ap_sync_channel_write_weight_973_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_974_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_974_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_974_V = ap_sync_channel_write_weight_974_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_975_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_975_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_975_V = ap_sync_channel_write_weight_975_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_976_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_976_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_976_V = ap_sync_channel_write_weight_976_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_977_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_977_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_977_V = ap_sync_channel_write_weight_977_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_978_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_978_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_978_V = ap_sync_channel_write_weight_978_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_979_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_979_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_979_V = ap_sync_channel_write_weight_979_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_97_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_97_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_97_V = ap_sync_channel_write_weight_97_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_980_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_980_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_980_V = ap_sync_channel_write_weight_980_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_981_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_981_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_981_V = ap_sync_channel_write_weight_981_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_982_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_982_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_982_V = ap_sync_channel_write_weight_982_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_983_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_983_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_983_V = ap_sync_channel_write_weight_983_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_984_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_984_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_984_V = ap_sync_channel_write_weight_984_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_985_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_985_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_985_V = ap_sync_channel_write_weight_985_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_986_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_986_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_986_V = ap_sync_channel_write_weight_986_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_987_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_987_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_987_V = ap_sync_channel_write_weight_987_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_988_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_988_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_988_V = ap_sync_channel_write_weight_988_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_989_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_989_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_989_V = ap_sync_channel_write_weight_989_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_98_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_98_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_98_V = ap_sync_channel_write_weight_98_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_990_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_990_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_990_V = ap_sync_channel_write_weight_990_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_991_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_991_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_991_V = ap_sync_channel_write_weight_991_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_992_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_992_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_992_V = ap_sync_channel_write_weight_992_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_993_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_993_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_993_V = ap_sync_channel_write_weight_993_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_994_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_994_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_994_V = ap_sync_channel_write_weight_994_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_995_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_995_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_995_V = ap_sync_channel_write_weight_995_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_996_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_996_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_996_V = ap_sync_channel_write_weight_996_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_997_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_997_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_997_V = ap_sync_channel_write_weight_997_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_998_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_998_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_998_V = ap_sync_channel_write_weight_998_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_999_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_999_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_999_V = ap_sync_channel_write_weight_999_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_99_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_99_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_99_V = ap_sync_channel_write_weight_99_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_weight_9_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (load_weight101_U0_ap_done.read() & 
             load_weight101_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_weight_9_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_weight_9_V = ap_sync_channel_write_weight_9_V.read();
        }
    }
}

}

