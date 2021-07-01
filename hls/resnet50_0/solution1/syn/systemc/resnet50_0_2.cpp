#include "resnet50_0.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void resnet50_0::thread_ap_clk_no_reset_() {
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter0 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp0_exit_iter0_state3.read()))) {
            ap_enable_reg_pp0_iter0 = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                    esl_seteq<1,1,1>(startt_V_1_ack_in.read(), ap_const_logic_1))) {
            ap_enable_reg_pp0_iter0 = ap_const_logic_1;
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            if (esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp0_exit_iter0_state3.read())) {
                ap_enable_reg_pp0_iter1 = (ap_condition_pp0_exit_iter0_state3.read() ^ ap_const_logic_1);
            } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
                ap_enable_reg_pp0_iter1 = ap_enable_reg_pp0_iter0.read();
            }
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter10 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter10 = ap_enable_reg_pp0_iter9.read();
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter11 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter11 = ap_enable_reg_pp0_iter10.read();
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter12 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter12 = ap_enable_reg_pp0_iter11.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                    esl_seteq<1,1,1>(startt_V_1_ack_in.read(), ap_const_logic_1))) {
            ap_enable_reg_pp0_iter12 = ap_const_logic_0;
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter2 = ap_enable_reg_pp0_iter1.read();
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter3 = ap_enable_reg_pp0_iter2.read();
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter4 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter4 = ap_enable_reg_pp0_iter3.read();
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter5 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter5 = ap_enable_reg_pp0_iter4.read();
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter6 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter6 = ap_enable_reg_pp0_iter5.read();
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter7 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter7 = ap_enable_reg_pp0_iter6.read();
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter8 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter8 = ap_enable_reg_pp0_iter7.read();
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter9 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter9 = ap_enable_reg_pp0_iter8.read();
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp1_iter0 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
             esl_seteq<1,1,1>(ap_block_pp1_stage0_subdone.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp1_exit_iter0_state38.read()))) {
            ap_enable_reg_pp1_iter0 = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) && 
                    esl_seteq<1,1,1>(grp_add_fu_891_ap_done.read(), ap_const_logic_1))) {
            ap_enable_reg_pp1_iter0 = ap_const_logic_1;
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp1_iter1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp1_stage0_subdone.read(), ap_const_boolean_0)) {
            if (esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp1_exit_iter0_state38.read())) {
                ap_enable_reg_pp1_iter1 = (ap_condition_pp1_exit_iter0_state38.read() ^ ap_const_logic_1);
            } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
                ap_enable_reg_pp1_iter1 = ap_enable_reg_pp1_iter0.read();
            }
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp1_iter2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp1_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp1_iter2 = ap_enable_reg_pp1_iter1.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) && 
                    esl_seteq<1,1,1>(grp_add_fu_891_ap_done.read(), ap_const_logic_1))) {
            ap_enable_reg_pp1_iter2 = ap_const_logic_0;
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_sync_reg_grp_conv1_fu_914_ap_done = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) && 
             esl_seteq<1,1,1>(ap_block_state17_on_subcall_done.read(), ap_const_boolean_0))) {
            ap_sync_reg_grp_conv1_fu_914_ap_done = ap_const_logic_0;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_conv1_fu_914_ap_done.read())) {
            ap_sync_reg_grp_conv1_fu_914_ap_done = ap_const_logic_1;
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_sync_reg_grp_conv1_fu_914_ap_ready = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) && 
             esl_seteq<1,1,1>(ap_block_state17_on_subcall_done.read(), ap_const_boolean_0))) {
            ap_sync_reg_grp_conv1_fu_914_ap_ready = ap_const_logic_0;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_conv1_fu_914_ap_ready.read())) {
            ap_sync_reg_grp_conv1_fu_914_ap_ready = ap_const_logic_1;
        }
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln395_reg_5513_pp0_iter10_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        ch_0_reg_770 = select_ln399_1_reg_5669.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(startt_V_1_ack_in.read(), ap_const_logic_1))) {
        ch_0_reg_770 = ap_const_lv2_0;
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln395_reg_5513_pp0_iter9_reg.read()))) {
        col_0_reg_806 = col_reg_5659.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(startt_V_1_ack_in.read(), ap_const_logic_1))) {
        col_0_reg_806 = ap_const_lv5_0;
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        grp_add_fu_891_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read()) || 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()))) {
            grp_add_fu_891_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_add_fu_891_ap_ready.read())) {
            grp_add_fu_891_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        grp_conv1_fu_914_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read()) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_0, ap_sync_grp_conv1_fu_914_ap_ready.read())))) {
            grp_conv1_fu_914_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_conv1_fu_914_ap_ready.read())) {
            grp_conv1_fu_914_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        grp_conv_layer_fu_851_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) || 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()))) {
            grp_conv_layer_fu_851_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_conv_layer_fu_851_ap_ready.read())) {
            grp_conv_layer_fu_851_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        grp_maxpool_fu_1304_ap_start_reg = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
            grp_maxpool_fu_1304_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_maxpool_fu_1304_ap_ready.read())) {
            grp_maxpool_fu_1304_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        grp_roundf_fu_1312_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln395_reg_5513_pp0_iter6_reg.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()))) {
            grp_roundf_fu_1312_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_roundf_fu_1312_ap_ready.read())) {
            grp_roundf_fu_1312_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        grp_roundf_fu_1321_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln395_reg_5513_pp0_iter6_reg.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()))) {
            grp_roundf_fu_1321_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_roundf_fu_1321_ap_ready.read())) {
            grp_roundf_fu_1321_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        grp_roundf_fu_1330_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln395_reg_5513_pp0_iter7_reg.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()))) {
            grp_roundf_fu_1330_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_roundf_fu_1330_ap_ready.read())) {
            grp_roundf_fu_1330_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        grp_roundf_fu_1339_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln395_reg_5513_pp0_iter7_reg.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()))) {
            grp_roundf_fu_1339_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_roundf_fu_1339_ap_ready.read())) {
            grp_roundf_fu_1339_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        grp_roundf_fu_1348_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln395_reg_5513_pp0_iter7_reg.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()))) {
            grp_roundf_fu_1348_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_roundf_fu_1348_ap_ready.read())) {
            grp_roundf_fu_1348_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        grp_roundf_fu_1357_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln395_reg_5513_pp0_iter8_reg.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
            grp_roundf_fu_1357_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_roundf_fu_1357_ap_ready.read())) {
            grp_roundf_fu_1357_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        grp_roundf_fu_1366_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln395_reg_5513_pp0_iter8_reg.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
            grp_roundf_fu_1366_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_roundf_fu_1366_ap_ready.read())) {
            grp_roundf_fu_1366_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        grp_roundf_fu_1375_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln395_reg_5513_pp0_iter8_reg.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
            grp_roundf_fu_1375_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_roundf_fu_1375_ap_ready.read())) {
            grp_roundf_fu_1375_ap_start_reg = ap_const_logic_0;
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln425_fu_3988_p2.read()))) {
        i_0_reg_840 = i_fu_4037_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) && 
                esl_seteq<1,1,1>(grp_add_fu_891_ap_done.read(), ap_const_logic_1))) {
        i_0_reg_840 = ap_const_lv2_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln395_fu_1424_p2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        indvar_flatten47_reg_759 = add_ln395_fu_1430_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(startt_V_1_ack_in.read(), ap_const_logic_1))) {
        indvar_flatten47_reg_759 = ap_const_lv15_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln425_fu_3988_p2.read()))) {
        indvar_flatten55_reg_818 = add_ln425_fu_3994_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) && 
                esl_seteq<1,1,1>(grp_add_fu_891_ap_done.read(), ap_const_logic_1))) {
        indvar_flatten55_reg_818 = ap_const_lv16_0;
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln395_reg_5513_pp0_iter9_reg.read()))) {
        indvar_flatten_reg_782 = select_ln396_2_reg_5664.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(startt_V_1_ack_in.read(), ap_const_logic_1))) {
        indvar_flatten_reg_782 = ap_const_lv13_0;
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        input_V_0_sel_rd = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, input_V_0_ack_out.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_1, input_V_0_vld_out.read()))) {
            input_V_0_sel_rd =  (sc_logic) (~input_V_0_sel_rd.read());
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        input_V_0_sel_wr = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, input_V_0_vld_in.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_1, input_V_0_ack_in.read()))) {
            input_V_0_sel_wr =  (sc_logic) (~input_V_0_sel_wr.read());
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        input_V_0_state = ap_const_lv2_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_0, input_V_0_vld_in.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, input_V_0_ack_out.read()) && 
              esl_seteq<1,2,2>(input_V_0_state.read(), ap_const_lv2_3)) || 
             (esl_seteq<1,1,1>(ap_const_logic_0, input_V_0_vld_in.read()) && 
              esl_seteq<1,2,2>(input_V_0_state.read(), ap_const_lv2_2)))) {
            input_V_0_state = ap_const_lv2_2;
        } else if (((esl_seteq<1,1,1>(ap_const_logic_1, input_V_0_vld_in.read()) && 
                     esl_seteq<1,1,1>(ap_const_logic_0, input_V_0_ack_out.read()) && 
                     esl_seteq<1,2,2>(input_V_0_state.read(), ap_const_lv2_3)) || 
                    (esl_seteq<1,1,1>(ap_const_logic_0, input_V_0_ack_out.read()) && 
                     esl_seteq<1,2,2>(input_V_0_state.read(), ap_const_lv2_1)))) {
            input_V_0_state = ap_const_lv2_1;
        } else if (((esl_seteq<1,1,1>(ap_const_logic_1, input_V_0_vld_in.read()) && 
                     esl_seteq<1,2,2>(input_V_0_state.read(), ap_const_lv2_2)) || 
                    (esl_seteq<1,1,1>(ap_const_logic_1, input_V_0_ack_out.read()) && 
                     esl_seteq<1,2,2>(input_V_0_state.read(), ap_const_lv2_1)) || 
                    (esl_seteq<1,2,2>(input_V_0_state.read(), ap_const_lv2_3) && 
                     !(esl_seteq<1,1,1>(ap_const_logic_1, input_V_0_vld_in.read()) && esl_seteq<1,1,1>(ap_const_logic_0, input_V_0_ack_out.read())) && 
                     !(esl_seteq<1,1,1>(ap_const_logic_0, input_V_0_vld_in.read()) && esl_seteq<1,1,1>(ap_const_logic_1, input_V_0_ack_out.read()))))) {
            input_V_0_state = ap_const_lv2_3;
        } else {
            input_V_0_state = ap_const_lv2_2;
        }
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln395_reg_5513_pp0_iter9_reg.read()))) {
        row_0_reg_794 = select_ln396_1_reg_5623.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(startt_V_1_ack_in.read(), ap_const_logic_1))) {
        row_0_reg_794 = ap_const_lv8_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln425_reg_5756.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0))) {
        s_0_reg_829 = select_ln431_1_reg_5765.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) && 
                esl_seteq<1,1,1>(grp_add_fu_891_ap_done.read(), ap_const_logic_1))) {
        s_0_reg_829 = ap_const_lv15_0;
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        startt_V_1_sel_rd = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, startt_V_1_ack_out.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_1, startt_V_1_vld_out.read()))) {
            startt_V_1_sel_rd =  (sc_logic) (~startt_V_1_sel_rd.read());
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        startt_V_1_state = ap_const_lv2_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_0, startt_V_1_vld_in.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, startt_V_1_ack_out.read()) && 
              esl_seteq<1,2,2>(ap_const_lv2_3, startt_V_1_state.read())) || 
             (esl_seteq<1,1,1>(ap_const_logic_0, startt_V_1_vld_in.read()) && 
              esl_seteq<1,2,2>(ap_const_lv2_2, startt_V_1_state.read())))) {
            startt_V_1_state = ap_const_lv2_2;
        } else if (((esl_seteq<1,1,1>(ap_const_logic_1, startt_V_1_vld_in.read()) && 
                     esl_seteq<1,1,1>(ap_const_logic_0, startt_V_TREADY.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_3, startt_V_1_state.read())) || 
                    (esl_seteq<1,1,1>(ap_const_logic_0, startt_V_TREADY.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_1, startt_V_1_state.read())))) {
            startt_V_1_state = ap_const_lv2_1;
        } else if (((esl_seteq<1,1,1>(ap_const_logic_1, startt_V_1_vld_in.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_2, startt_V_1_state.read())) || 
                    (esl_seteq<1,1,1>(ap_const_logic_1, startt_V_1_ack_out.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_1, startt_V_1_state.read())) || 
                    (esl_seteq<1,2,2>(ap_const_lv2_3, startt_V_1_state.read()) && 
                     !(esl_seteq<1,1,1>(ap_const_logic_1, startt_V_1_vld_in.read()) && esl_seteq<1,1,1>(ap_const_logic_0, startt_V_TREADY.read())) && 
                     !(esl_seteq<1,1,1>(ap_const_logic_0, startt_V_1_vld_in.read()) && esl_seteq<1,1,1>(ap_const_logic_1, startt_V_1_ack_out.read()))))) {
            startt_V_1_state = ap_const_lv2_3;
        } else {
            startt_V_1_state = ap_const_lv2_2;
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        stopt_V_1_sel_rd = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, stopt_V_1_ack_out.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_1, stopt_V_1_vld_out.read()))) {
            stopt_V_1_sel_rd =  (sc_logic) (~stopt_V_1_sel_rd.read());
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        stopt_V_1_state = ap_const_lv2_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_0, stopt_V_1_vld_in.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, stopt_V_1_ack_out.read()) && 
              esl_seteq<1,2,2>(ap_const_lv2_3, stopt_V_1_state.read())) || 
             (esl_seteq<1,1,1>(ap_const_logic_0, stopt_V_1_vld_in.read()) && 
              esl_seteq<1,2,2>(ap_const_lv2_2, stopt_V_1_state.read())))) {
            stopt_V_1_state = ap_const_lv2_2;
        } else if (((esl_seteq<1,1,1>(ap_const_logic_1, stopt_V_1_vld_in.read()) && 
                     esl_seteq<1,1,1>(ap_const_logic_0, stopt_V_TREADY.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_3, stopt_V_1_state.read())) || 
                    (esl_seteq<1,1,1>(ap_const_logic_0, stopt_V_TREADY.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_1, stopt_V_1_state.read())))) {
            stopt_V_1_state = ap_const_lv2_1;
        } else if (((esl_seteq<1,1,1>(ap_const_logic_1, stopt_V_1_vld_in.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_2, stopt_V_1_state.read())) || 
                    (esl_seteq<1,1,1>(ap_const_logic_1, stopt_V_1_ack_out.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_1, stopt_V_1_state.read())) || 
                    (esl_seteq<1,2,2>(ap_const_lv2_3, stopt_V_1_state.read()) && 
                     !(esl_seteq<1,1,1>(ap_const_logic_1, stopt_V_1_vld_in.read()) && esl_seteq<1,1,1>(ap_const_logic_0, stopt_V_TREADY.read())) && 
                     !(esl_seteq<1,1,1>(ap_const_logic_0, stopt_V_1_vld_in.read()) && esl_seteq<1,1,1>(ap_const_logic_1, stopt_V_1_ack_out.read()))))) {
            stopt_V_1_state = ap_const_lv2_3;
        } else {
            stopt_V_1_state = ap_const_lv2_2;
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        sw0out_V_1_sel_rd = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, sw0out_V_1_ack_out.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_1, sw0out_V_1_vld_out.read()))) {
            sw0out_V_1_sel_rd =  (sc_logic) (~sw0out_V_1_sel_rd.read());
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        sw0out_V_1_sel_wr = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, sw0out_V_1_vld_in.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_1, sw0out_V_1_ack_in.read()))) {
            sw0out_V_1_sel_wr =  (sc_logic) (~sw0out_V_1_sel_wr.read());
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        sw0out_V_1_state = ap_const_lv2_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_0, sw0out_V_1_vld_in.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, sw0out_V_1_ack_out.read()) && 
              esl_seteq<1,2,2>(ap_const_lv2_3, sw0out_V_1_state.read())) || 
             (esl_seteq<1,1,1>(ap_const_logic_0, sw0out_V_1_vld_in.read()) && 
              esl_seteq<1,2,2>(ap_const_lv2_2, sw0out_V_1_state.read())))) {
            sw0out_V_1_state = ap_const_lv2_2;
        } else if (((esl_seteq<1,1,1>(ap_const_logic_1, sw0out_V_1_vld_in.read()) && 
                     esl_seteq<1,1,1>(ap_const_logic_0, sw0out_V_TREADY.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_3, sw0out_V_1_state.read())) || 
                    (esl_seteq<1,1,1>(ap_const_logic_0, sw0out_V_TREADY.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_1, sw0out_V_1_state.read())))) {
            sw0out_V_1_state = ap_const_lv2_1;
        } else if (((esl_seteq<1,1,1>(ap_const_logic_1, sw0out_V_1_vld_in.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_2, sw0out_V_1_state.read())) || 
                    (esl_seteq<1,1,1>(ap_const_logic_1, sw0out_V_1_ack_out.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_1, sw0out_V_1_state.read())) || 
                    (esl_seteq<1,2,2>(ap_const_lv2_3, sw0out_V_1_state.read()) && 
                     !(esl_seteq<1,1,1>(ap_const_logic_1, sw0out_V_1_vld_in.read()) && esl_seteq<1,1,1>(ap_const_logic_0, sw0out_V_TREADY.read())) && 
                     !(esl_seteq<1,1,1>(ap_const_logic_0, sw0out_V_1_vld_in.read()) && esl_seteq<1,1,1>(ap_const_logic_1, sw0out_V_1_ack_out.read()))))) {
            sw0out_V_1_state = ap_const_lv2_3;
        } else {
            sw0out_V_1_state = ap_const_lv2_2;
        }
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln395_reg_5513_pp0_iter9_reg.read()))) {
        bitcast_ln705_2_reg_5696 = bitcast_ln705_2_fu_2287_p1.read();
        or_ln180_1_reg_5690 = or_ln180_1_fu_2281_p2.read();
        select_ln284_65_reg_5701 = select_ln284_65_fu_2481_p3.read();
        select_ln399_2_reg_5674 = select_ln399_2_fu_1706_p3.read();
        val_assign_3_reg_5707 = grp_roundf_fu_1339_ap_return.read();
        val_assign_4_reg_5712 = grp_roundf_fu_1348_ap_return.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln395_reg_5513_pp0_iter10_reg.read()))) {
        bitcast_ln705_5_reg_5723 = bitcast_ln705_5_fu_3138_p1.read();
        bitcast_ln705_6_reg_5734 = bitcast_ln705_6_fu_3340_p1.read();
        or_ln180_4_reg_5717 = or_ln180_4_fu_3132_p2.read();
        select_ln284_68_reg_5728 = select_ln284_68_fu_3332_p3.read();
        select_ln284_69_reg_5739 = select_ln284_69_fu_3534_p3.read();
        val_assign_7_reg_5745 = grp_roundf_fu_1375_ap_return.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln395_reg_5513_pp0_iter8_reg.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
        col_reg_5659 = col_fu_1649_p2.read();
        select_ln396_1_reg_5623 = select_ln396_1_fu_1596_p3.read();
        select_ln396_2_reg_5664 = select_ln396_2_fu_1661_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        icmp_ln395_reg_5513 = icmp_ln395_fu_1424_p2.read();
        icmp_ln395_reg_5513_pp0_iter1_reg = icmp_ln395_reg_5513.read();
        p_Result_5_reg_5547_pp0_iter1_reg = p_Result_5_reg_5547.read();
        p_Result_6_reg_5552_pp0_iter1_reg = p_Result_6_reg_5552.read();
        p_Result_7_reg_5557_pp0_iter1_reg = p_Result_7_reg_5557.read();
    }
    if (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) {
        icmp_ln395_reg_5513_pp0_iter10_reg = icmp_ln395_reg_5513_pp0_iter9_reg.read();
        icmp_ln395_reg_5513_pp0_iter11_reg = icmp_ln395_reg_5513_pp0_iter10_reg.read();
        icmp_ln395_reg_5513_pp0_iter2_reg = icmp_ln395_reg_5513_pp0_iter1_reg.read();
        icmp_ln395_reg_5513_pp0_iter3_reg = icmp_ln395_reg_5513_pp0_iter2_reg.read();
        icmp_ln395_reg_5513_pp0_iter4_reg = icmp_ln395_reg_5513_pp0_iter3_reg.read();
        icmp_ln395_reg_5513_pp0_iter5_reg = icmp_ln395_reg_5513_pp0_iter4_reg.read();
        icmp_ln395_reg_5513_pp0_iter6_reg = icmp_ln395_reg_5513_pp0_iter5_reg.read();
        icmp_ln395_reg_5513_pp0_iter7_reg = icmp_ln395_reg_5513_pp0_iter6_reg.read();
        icmp_ln395_reg_5513_pp0_iter8_reg = icmp_ln395_reg_5513_pp0_iter7_reg.read();
        icmp_ln395_reg_5513_pp0_iter9_reg = icmp_ln395_reg_5513_pp0_iter8_reg.read();
        inbuf_V_addr_reg_5633_pp0_iter10_reg = inbuf_V_addr_reg_5633.read();
        inbuf_V_addr_reg_5633_pp0_iter11_reg = inbuf_V_addr_reg_5633_pp0_iter10_reg.read();
        select_ln399_2_reg_5674_pp0_iter11_reg = select_ln399_2_reg_5674.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln395_reg_5513_pp0_iter8_reg.read()))) {
        icmp_ln396_reg_5617 = icmp_ln396_fu_1544_p2.read();
        inbuf_V_addr_reg_5633 =  (sc_lv<13>) (zext_ln180_3_fu_1644_p1.read());
        tmp_5_reg_5644 = grp_fu_1409_p2.read();
        tmp_6_reg_5649 = grp_fu_1414_p2.read();
        tmp_7_reg_5654 = grp_fu_1419_p2.read();
        val_assign_1_reg_5639 = grp_roundf_fu_1321_ap_return.read();
        val_assign_reg_5628 = grp_roundf_fu_1312_ap_return.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0))) {
        icmp_ln425_reg_5756 = icmp_ln425_fu_3988_p2.read();
        icmp_ln425_reg_5756_pp1_iter1_reg = icmp_ln425_reg_5756.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, input_V_0_load_A.read())) {
        input_V_0_payload_A = input_V_TDATA.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, input_V_0_load_B.read())) {
        input_V_0_payload_B = input_V_TDATA.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln425_reg_5756.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0))) {
        p_0106_1_fu_696 = p_Result_30_s_fu_5491_p5.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln395_fu_1424_p2.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        p_Result_2_reg_5532 = input_V_0_data_out.read().range(95, 64);
        p_Result_3_reg_5537 = input_V_0_data_out.read().range(127, 96);
        p_Result_4_reg_5542 = input_V_0_data_out.read().range(159, 128);
        p_Result_5_reg_5547 = input_V_0_data_out.read().range(191, 160);
        p_Result_6_reg_5552 = input_V_0_data_out.read().range(223, 192);
        p_Result_7_reg_5557 = input_V_0_data_out.read().range(255, 224);
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln395_reg_5513_pp0_iter9_reg.read()))) {
        select_ln399_1_reg_5669 = select_ln399_1_fu_1675_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln425_fu_3988_p2.read()))) {
        select_ln431_1_reg_5765 = select_ln431_1_fu_4020_p3.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, sw0out_V_1_load_A.read())) {
        sw0out_V_1_payload_A = zext_ln332_fu_5503_p1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, sw0out_V_1_load_B.read())) {
        sw0out_V_1_payload_B = zext_ln332_fu_5503_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln395_reg_5513_pp0_iter6_reg.read()))) {
        tmp345_reg_5592 = grp_fu_1384_p2.read();
        tmp_1_reg_5597 = grp_fu_1389_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln395_reg_5513_pp0_iter7_reg.read()))) {
        tmp_2_reg_5602 = grp_fu_1394_p2.read();
        tmp_3_reg_5607 = grp_fu_1399_p2.read();
        tmp_4_reg_5612 = grp_fu_1404_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln425_fu_3988_p2.read()))) {
        trunc_ln214_reg_5770 = trunc_ln214_fu_4033_p1.read();
    }
}

void resnet50_0::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_const_logic_0, startt_V_1_ack_in.read())))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(startt_V_1_ack_in.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else {
                ap_NS_fsm = ap_ST_fsm_state2;
            }
            break;
        case 4 : 
            if ((!(esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter11.read(), ap_const_logic_0)) && !(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln395_fu_1424_p2.read()) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp0_iter11.read(), ap_const_logic_0)) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln395_fu_1424_p2.read()) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_state16;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            }
            break;
        case 8 : 
            ap_NS_fsm = ap_ST_fsm_state17;
            break;
        case 16 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) && esl_seteq<1,1,1>(ap_block_state17_on_subcall_done.read(), ap_const_boolean_0))) {
                ap_NS_fsm = ap_ST_fsm_state18;
            } else {
                ap_NS_fsm = ap_ST_fsm_state17;
            }
            break;
        case 32 : 
            ap_NS_fsm = ap_ST_fsm_state19;
            break;
        case 64 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) && esl_seteq<1,1,1>(grp_maxpool_fu_1304_ap_done.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state20;
            } else {
                ap_NS_fsm = ap_ST_fsm_state19;
            }
            break;
        case 128 : 
            ap_NS_fsm = ap_ST_fsm_state21;
            break;
        case 256 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) && esl_seteq<1,1,1>(grp_conv_layer_fu_851_ap_done.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state22;
            } else {
                ap_NS_fsm = ap_ST_fsm_state21;
            }
            break;
        case 512 : 
            ap_NS_fsm = ap_ST_fsm_state23;
            break;
        case 1024 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) && esl_seteq<1,1,1>(grp_conv_layer_fu_851_ap_done.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state24;
            } else {
                ap_NS_fsm = ap_ST_fsm_state23;
            }
            break;
        case 2048 : 
            ap_NS_fsm = ap_ST_fsm_state25;
            break;
        case 4096 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) && esl_seteq<1,1,1>(grp_conv_layer_fu_851_ap_done.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state26;
            } else {
                ap_NS_fsm = ap_ST_fsm_state25;
            }
            break;
        case 8192 : 
            ap_NS_fsm = ap_ST_fsm_state27;
            break;
        case 16384 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) && esl_seteq<1,1,1>(grp_conv_layer_fu_851_ap_done.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state28;
            } else {
                ap_NS_fsm = ap_ST_fsm_state27;
            }
            break;
        case 32768 : 
            ap_NS_fsm = ap_ST_fsm_state29;
            break;
        case 65536 : 
            if ((esl_seteq<1,1,1>(grp_add_fu_891_ap_done.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()))) {
                ap_NS_fsm = ap_ST_fsm_state30;
            } else {
                ap_NS_fsm = ap_ST_fsm_state29;
            }
            break;
        case 131072 : 
            ap_NS_fsm = ap_ST_fsm_state31;
            break;
        case 262144 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) && esl_seteq<1,1,1>(grp_conv_layer_fu_851_ap_done.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state32;
            } else {
                ap_NS_fsm = ap_ST_fsm_state31;
            }
            break;
        case 524288 : 
            ap_NS_fsm = ap_ST_fsm_state33;
            break;
        case 1048576 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) && esl_seteq<1,1,1>(grp_conv_layer_fu_851_ap_done.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state34;
            } else {
                ap_NS_fsm = ap_ST_fsm_state33;
            }
            break;
        case 2097152 : 
            ap_NS_fsm = ap_ST_fsm_state35;
            break;
        case 4194304 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) && esl_seteq<1,1,1>(grp_conv_layer_fu_851_ap_done.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state36;
            } else {
                ap_NS_fsm = ap_ST_fsm_state35;
            }
            break;
        case 8388608 : 
            ap_NS_fsm = ap_ST_fsm_state37;
            break;
        case 16777216 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) && esl_seteq<1,1,1>(grp_add_fu_891_ap_done.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_pp1_stage0;
            } else {
                ap_NS_fsm = ap_ST_fsm_state37;
            }
            break;
        case 33554432 : 
            if ((!(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_enable_reg_pp1_iter1.read(), ap_const_logic_0)) && !(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln425_fu_3988_p2.read()) && esl_seteq<1,1,1>(ap_enable_reg_pp1_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_pp1_stage0;
            } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
  esl_seteq<1,1,1>(ap_block_pp1_stage0_subdone.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp1_iter1.read(), ap_const_logic_0)) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
  esl_seteq<1,1,1>(ap_block_pp1_stage0_subdone.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln425_fu_3988_p2.read()) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp1_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_state41;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp1_stage0;
            }
            break;
        case 67108864 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()) && esl_seteq<1,1,1>(stopt_V_1_ack_in.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state42;
            } else {
                ap_NS_fsm = ap_ST_fsm_state41;
            }
            break;
        case 134217728 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) && !(esl_seteq<1,2,2>(ap_const_lv2_1, sw0out_V_1_state.read()) || esl_seteq<1,2,2>(ap_const_lv2_1, startt_V_1_state.read()) || esl_seteq<1,2,2>(ap_const_lv2_1, stopt_V_1_state.read()) || esl_seteq<1,1,1>(ap_const_logic_0, stopt_V_1_ack_in.read()) || (esl_seteq<1,1,1>(ap_const_logic_0, sw0out_V_TREADY.read()) && 
  esl_seteq<1,2,2>(ap_const_lv2_3, sw0out_V_1_state.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, startt_V_TREADY.read()) && 
  esl_seteq<1,2,2>(ap_const_lv2_3, startt_V_1_state.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, stopt_V_TREADY.read()) && 
  esl_seteq<1,2,2>(ap_const_lv2_3, stopt_V_1_state.read()))))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state42;
            }
            break;
        default : 
            ap_NS_fsm =  (sc_lv<28>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXX");
            break;
    }
}

}

