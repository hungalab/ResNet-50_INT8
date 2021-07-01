#include "resnet50_0.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void resnet50_0::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"ap_rst_n\" :  \"" << ap_rst_n.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_V_TDATA\" :  \"" << input_V_TDATA.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_V_TVALID\" :  \"" << input_V_TVALID.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"input_V_TREADY\" :  \"" << input_V_TREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"sw0out_V_TDATA\" :  \"" << sw0out_V_TDATA.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"sw0out_V_TVALID\" :  \"" << sw0out_V_TVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"sw0out_V_TREADY\" :  \"" << sw0out_V_TREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"startt_V_TDATA\" :  \"" << startt_V_TDATA.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"startt_V_TVALID\" :  \"" << startt_V_TVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"startt_V_TREADY\" :  \"" << startt_V_TREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"stopt_V_TDATA\" :  \"" << stopt_V_TDATA.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"stopt_V_TVALID\" :  \"" << stopt_V_TVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"stopt_V_TREADY\" :  \"" << stopt_V_TREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_ddr_V_AWVALID\" :  \"" << m_axi_ddr_V_AWVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_ddr_V_AWREADY\" :  \"" << m_axi_ddr_V_AWREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_ddr_V_AWADDR\" :  \"" << m_axi_ddr_V_AWADDR.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_ddr_V_AWID\" :  \"" << m_axi_ddr_V_AWID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_ddr_V_AWLEN\" :  \"" << m_axi_ddr_V_AWLEN.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_ddr_V_AWSIZE\" :  \"" << m_axi_ddr_V_AWSIZE.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_ddr_V_AWBURST\" :  \"" << m_axi_ddr_V_AWBURST.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_ddr_V_AWLOCK\" :  \"" << m_axi_ddr_V_AWLOCK.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_ddr_V_AWCACHE\" :  \"" << m_axi_ddr_V_AWCACHE.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_ddr_V_AWPROT\" :  \"" << m_axi_ddr_V_AWPROT.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_ddr_V_AWQOS\" :  \"" << m_axi_ddr_V_AWQOS.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_ddr_V_AWREGION\" :  \"" << m_axi_ddr_V_AWREGION.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_ddr_V_AWUSER\" :  \"" << m_axi_ddr_V_AWUSER.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_ddr_V_WVALID\" :  \"" << m_axi_ddr_V_WVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_ddr_V_WREADY\" :  \"" << m_axi_ddr_V_WREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_ddr_V_WDATA\" :  \"" << m_axi_ddr_V_WDATA.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_ddr_V_WSTRB\" :  \"" << m_axi_ddr_V_WSTRB.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_ddr_V_WLAST\" :  \"" << m_axi_ddr_V_WLAST.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_ddr_V_WID\" :  \"" << m_axi_ddr_V_WID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_ddr_V_WUSER\" :  \"" << m_axi_ddr_V_WUSER.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_ddr_V_ARVALID\" :  \"" << m_axi_ddr_V_ARVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_ddr_V_ARREADY\" :  \"" << m_axi_ddr_V_ARREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_ddr_V_ARADDR\" :  \"" << m_axi_ddr_V_ARADDR.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_ddr_V_ARID\" :  \"" << m_axi_ddr_V_ARID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_ddr_V_ARLEN\" :  \"" << m_axi_ddr_V_ARLEN.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_ddr_V_ARSIZE\" :  \"" << m_axi_ddr_V_ARSIZE.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_ddr_V_ARBURST\" :  \"" << m_axi_ddr_V_ARBURST.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_ddr_V_ARLOCK\" :  \"" << m_axi_ddr_V_ARLOCK.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_ddr_V_ARCACHE\" :  \"" << m_axi_ddr_V_ARCACHE.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_ddr_V_ARPROT\" :  \"" << m_axi_ddr_V_ARPROT.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_ddr_V_ARQOS\" :  \"" << m_axi_ddr_V_ARQOS.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_ddr_V_ARREGION\" :  \"" << m_axi_ddr_V_ARREGION.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_ddr_V_ARUSER\" :  \"" << m_axi_ddr_V_ARUSER.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_ddr_V_RVALID\" :  \"" << m_axi_ddr_V_RVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_ddr_V_RREADY\" :  \"" << m_axi_ddr_V_RREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_ddr_V_RDATA\" :  \"" << m_axi_ddr_V_RDATA.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_ddr_V_RLAST\" :  \"" << m_axi_ddr_V_RLAST.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_ddr_V_RID\" :  \"" << m_axi_ddr_V_RID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_ddr_V_RUSER\" :  \"" << m_axi_ddr_V_RUSER.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_ddr_V_RRESP\" :  \"" << m_axi_ddr_V_RRESP.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_ddr_V_BVALID\" :  \"" << m_axi_ddr_V_BVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_ddr_V_BREADY\" :  \"" << m_axi_ddr_V_BREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_ddr_V_BRESP\" :  \"" << m_axi_ddr_V_BRESP.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_ddr_V_BID\" :  \"" << m_axi_ddr_V_BID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_ddr_V_BUSER\" :  \"" << m_axi_ddr_V_BUSER.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_AXILiteS_AWVALID\" :  \"" << s_axi_AXILiteS_AWVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_AXILiteS_AWREADY\" :  \"" << s_axi_AXILiteS_AWREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_AXILiteS_AWADDR\" :  \"" << s_axi_AXILiteS_AWADDR.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_AXILiteS_WVALID\" :  \"" << s_axi_AXILiteS_WVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_AXILiteS_WREADY\" :  \"" << s_axi_AXILiteS_WREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_AXILiteS_WDATA\" :  \"" << s_axi_AXILiteS_WDATA.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_AXILiteS_WSTRB\" :  \"" << s_axi_AXILiteS_WSTRB.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_AXILiteS_ARVALID\" :  \"" << s_axi_AXILiteS_ARVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_AXILiteS_ARREADY\" :  \"" << s_axi_AXILiteS_ARREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_AXILiteS_ARADDR\" :  \"" << s_axi_AXILiteS_ARADDR.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_AXILiteS_RVALID\" :  \"" << s_axi_AXILiteS_RVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_AXILiteS_RREADY\" :  \"" << s_axi_AXILiteS_RREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_AXILiteS_RDATA\" :  \"" << s_axi_AXILiteS_RDATA.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_AXILiteS_RRESP\" :  \"" << s_axi_AXILiteS_RRESP.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_AXILiteS_BVALID\" :  \"" << s_axi_AXILiteS_BVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_AXILiteS_BREADY\" :  \"" << s_axi_AXILiteS_BREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_AXILiteS_BRESP\" :  \"" << s_axi_AXILiteS_BRESP.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"interrupt\" :  \"" << interrupt.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

