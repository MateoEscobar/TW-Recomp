#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00136A88
// Address: 0x136a88 - 0x136f68
void sub_00136A88_0x136a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00136A88_0x136a88");
#endif

    switch (ctx->pc) {
        case 0x136a88u: goto label_136a88;
        case 0x136a8cu: goto label_136a8c;
        case 0x136a90u: goto label_136a90;
        case 0x136a94u: goto label_136a94;
        case 0x136a98u: goto label_136a98;
        case 0x136a9cu: goto label_136a9c;
        case 0x136aa0u: goto label_136aa0;
        case 0x136aa4u: goto label_136aa4;
        case 0x136aa8u: goto label_136aa8;
        case 0x136aacu: goto label_136aac;
        case 0x136ab0u: goto label_136ab0;
        case 0x136ab4u: goto label_136ab4;
        case 0x136ab8u: goto label_136ab8;
        case 0x136abcu: goto label_136abc;
        case 0x136ac0u: goto label_136ac0;
        case 0x136ac4u: goto label_136ac4;
        case 0x136ac8u: goto label_136ac8;
        case 0x136accu: goto label_136acc;
        case 0x136ad0u: goto label_136ad0;
        case 0x136ad4u: goto label_136ad4;
        case 0x136ad8u: goto label_136ad8;
        case 0x136adcu: goto label_136adc;
        case 0x136ae0u: goto label_136ae0;
        case 0x136ae4u: goto label_136ae4;
        case 0x136ae8u: goto label_136ae8;
        case 0x136aecu: goto label_136aec;
        case 0x136af0u: goto label_136af0;
        case 0x136af4u: goto label_136af4;
        case 0x136af8u: goto label_136af8;
        case 0x136afcu: goto label_136afc;
        case 0x136b00u: goto label_136b00;
        case 0x136b04u: goto label_136b04;
        case 0x136b08u: goto label_136b08;
        case 0x136b0cu: goto label_136b0c;
        case 0x136b10u: goto label_136b10;
        case 0x136b14u: goto label_136b14;
        case 0x136b18u: goto label_136b18;
        case 0x136b1cu: goto label_136b1c;
        case 0x136b20u: goto label_136b20;
        case 0x136b24u: goto label_136b24;
        case 0x136b28u: goto label_136b28;
        case 0x136b2cu: goto label_136b2c;
        case 0x136b30u: goto label_136b30;
        case 0x136b34u: goto label_136b34;
        case 0x136b38u: goto label_136b38;
        case 0x136b3cu: goto label_136b3c;
        case 0x136b40u: goto label_136b40;
        case 0x136b44u: goto label_136b44;
        case 0x136b48u: goto label_136b48;
        case 0x136b4cu: goto label_136b4c;
        case 0x136b50u: goto label_136b50;
        case 0x136b54u: goto label_136b54;
        case 0x136b58u: goto label_136b58;
        case 0x136b5cu: goto label_136b5c;
        case 0x136b60u: goto label_136b60;
        case 0x136b64u: goto label_136b64;
        case 0x136b68u: goto label_136b68;
        case 0x136b6cu: goto label_136b6c;
        case 0x136b70u: goto label_136b70;
        case 0x136b74u: goto label_136b74;
        case 0x136b78u: goto label_136b78;
        case 0x136b7cu: goto label_136b7c;
        case 0x136b80u: goto label_136b80;
        case 0x136b84u: goto label_136b84;
        case 0x136b88u: goto label_136b88;
        case 0x136b8cu: goto label_136b8c;
        case 0x136b90u: goto label_136b90;
        case 0x136b94u: goto label_136b94;
        case 0x136b98u: goto label_136b98;
        case 0x136b9cu: goto label_136b9c;
        case 0x136ba0u: goto label_136ba0;
        case 0x136ba4u: goto label_136ba4;
        case 0x136ba8u: goto label_136ba8;
        case 0x136bacu: goto label_136bac;
        case 0x136bb0u: goto label_136bb0;
        case 0x136bb4u: goto label_136bb4;
        case 0x136bb8u: goto label_136bb8;
        case 0x136bbcu: goto label_136bbc;
        case 0x136bc0u: goto label_136bc0;
        case 0x136bc4u: goto label_136bc4;
        case 0x136bc8u: goto label_136bc8;
        case 0x136bccu: goto label_136bcc;
        case 0x136bd0u: goto label_136bd0;
        case 0x136bd4u: goto label_136bd4;
        case 0x136bd8u: goto label_136bd8;
        case 0x136bdcu: goto label_136bdc;
        case 0x136be0u: goto label_136be0;
        case 0x136be4u: goto label_136be4;
        case 0x136be8u: goto label_136be8;
        case 0x136becu: goto label_136bec;
        case 0x136bf0u: goto label_136bf0;
        case 0x136bf4u: goto label_136bf4;
        case 0x136bf8u: goto label_136bf8;
        case 0x136bfcu: goto label_136bfc;
        case 0x136c00u: goto label_136c00;
        case 0x136c04u: goto label_136c04;
        case 0x136c08u: goto label_136c08;
        case 0x136c0cu: goto label_136c0c;
        case 0x136c10u: goto label_136c10;
        case 0x136c14u: goto label_136c14;
        case 0x136c18u: goto label_136c18;
        case 0x136c1cu: goto label_136c1c;
        case 0x136c20u: goto label_136c20;
        case 0x136c24u: goto label_136c24;
        case 0x136c28u: goto label_136c28;
        case 0x136c2cu: goto label_136c2c;
        case 0x136c30u: goto label_136c30;
        case 0x136c34u: goto label_136c34;
        case 0x136c38u: goto label_136c38;
        case 0x136c3cu: goto label_136c3c;
        case 0x136c40u: goto label_136c40;
        case 0x136c44u: goto label_136c44;
        case 0x136c48u: goto label_136c48;
        case 0x136c4cu: goto label_136c4c;
        case 0x136c50u: goto label_136c50;
        case 0x136c54u: goto label_136c54;
        case 0x136c58u: goto label_136c58;
        case 0x136c5cu: goto label_136c5c;
        case 0x136c60u: goto label_136c60;
        case 0x136c64u: goto label_136c64;
        case 0x136c68u: goto label_136c68;
        case 0x136c6cu: goto label_136c6c;
        case 0x136c70u: goto label_136c70;
        case 0x136c74u: goto label_136c74;
        case 0x136c78u: goto label_136c78;
        case 0x136c7cu: goto label_136c7c;
        case 0x136c80u: goto label_136c80;
        case 0x136c84u: goto label_136c84;
        case 0x136c88u: goto label_136c88;
        case 0x136c8cu: goto label_136c8c;
        case 0x136c90u: goto label_136c90;
        case 0x136c94u: goto label_136c94;
        case 0x136c98u: goto label_136c98;
        case 0x136c9cu: goto label_136c9c;
        case 0x136ca0u: goto label_136ca0;
        case 0x136ca4u: goto label_136ca4;
        case 0x136ca8u: goto label_136ca8;
        case 0x136cacu: goto label_136cac;
        case 0x136cb0u: goto label_136cb0;
        case 0x136cb4u: goto label_136cb4;
        case 0x136cb8u: goto label_136cb8;
        case 0x136cbcu: goto label_136cbc;
        case 0x136cc0u: goto label_136cc0;
        case 0x136cc4u: goto label_136cc4;
        case 0x136cc8u: goto label_136cc8;
        case 0x136cccu: goto label_136ccc;
        case 0x136cd0u: goto label_136cd0;
        case 0x136cd4u: goto label_136cd4;
        case 0x136cd8u: goto label_136cd8;
        case 0x136cdcu: goto label_136cdc;
        case 0x136ce0u: goto label_136ce0;
        case 0x136ce4u: goto label_136ce4;
        case 0x136ce8u: goto label_136ce8;
        case 0x136cecu: goto label_136cec;
        case 0x136cf0u: goto label_136cf0;
        case 0x136cf4u: goto label_136cf4;
        case 0x136cf8u: goto label_136cf8;
        case 0x136cfcu: goto label_136cfc;
        case 0x136d00u: goto label_136d00;
        case 0x136d04u: goto label_136d04;
        case 0x136d08u: goto label_136d08;
        case 0x136d0cu: goto label_136d0c;
        case 0x136d10u: goto label_136d10;
        case 0x136d14u: goto label_136d14;
        case 0x136d18u: goto label_136d18;
        case 0x136d1cu: goto label_136d1c;
        case 0x136d20u: goto label_136d20;
        case 0x136d24u: goto label_136d24;
        case 0x136d28u: goto label_136d28;
        case 0x136d2cu: goto label_136d2c;
        case 0x136d30u: goto label_136d30;
        case 0x136d34u: goto label_136d34;
        case 0x136d38u: goto label_136d38;
        case 0x136d3cu: goto label_136d3c;
        case 0x136d40u: goto label_136d40;
        case 0x136d44u: goto label_136d44;
        case 0x136d48u: goto label_136d48;
        case 0x136d4cu: goto label_136d4c;
        case 0x136d50u: goto label_136d50;
        case 0x136d54u: goto label_136d54;
        case 0x136d58u: goto label_136d58;
        case 0x136d5cu: goto label_136d5c;
        case 0x136d60u: goto label_136d60;
        case 0x136d64u: goto label_136d64;
        case 0x136d68u: goto label_136d68;
        case 0x136d6cu: goto label_136d6c;
        case 0x136d70u: goto label_136d70;
        case 0x136d74u: goto label_136d74;
        case 0x136d78u: goto label_136d78;
        case 0x136d7cu: goto label_136d7c;
        case 0x136d80u: goto label_136d80;
        case 0x136d84u: goto label_136d84;
        case 0x136d88u: goto label_136d88;
        case 0x136d8cu: goto label_136d8c;
        case 0x136d90u: goto label_136d90;
        case 0x136d94u: goto label_136d94;
        case 0x136d98u: goto label_136d98;
        case 0x136d9cu: goto label_136d9c;
        case 0x136da0u: goto label_136da0;
        case 0x136da4u: goto label_136da4;
        case 0x136da8u: goto label_136da8;
        case 0x136dacu: goto label_136dac;
        case 0x136db0u: goto label_136db0;
        case 0x136db4u: goto label_136db4;
        case 0x136db8u: goto label_136db8;
        case 0x136dbcu: goto label_136dbc;
        case 0x136dc0u: goto label_136dc0;
        case 0x136dc4u: goto label_136dc4;
        case 0x136dc8u: goto label_136dc8;
        case 0x136dccu: goto label_136dcc;
        case 0x136dd0u: goto label_136dd0;
        case 0x136dd4u: goto label_136dd4;
        case 0x136dd8u: goto label_136dd8;
        case 0x136ddcu: goto label_136ddc;
        case 0x136de0u: goto label_136de0;
        case 0x136de4u: goto label_136de4;
        case 0x136de8u: goto label_136de8;
        case 0x136decu: goto label_136dec;
        case 0x136df0u: goto label_136df0;
        case 0x136df4u: goto label_136df4;
        case 0x136df8u: goto label_136df8;
        case 0x136dfcu: goto label_136dfc;
        case 0x136e00u: goto label_136e00;
        case 0x136e04u: goto label_136e04;
        case 0x136e08u: goto label_136e08;
        case 0x136e0cu: goto label_136e0c;
        case 0x136e10u: goto label_136e10;
        case 0x136e14u: goto label_136e14;
        case 0x136e18u: goto label_136e18;
        case 0x136e1cu: goto label_136e1c;
        case 0x136e20u: goto label_136e20;
        case 0x136e24u: goto label_136e24;
        case 0x136e28u: goto label_136e28;
        case 0x136e2cu: goto label_136e2c;
        case 0x136e30u: goto label_136e30;
        case 0x136e34u: goto label_136e34;
        case 0x136e38u: goto label_136e38;
        case 0x136e3cu: goto label_136e3c;
        case 0x136e40u: goto label_136e40;
        case 0x136e44u: goto label_136e44;
        case 0x136e48u: goto label_136e48;
        case 0x136e4cu: goto label_136e4c;
        case 0x136e50u: goto label_136e50;
        case 0x136e54u: goto label_136e54;
        case 0x136e58u: goto label_136e58;
        case 0x136e5cu: goto label_136e5c;
        case 0x136e60u: goto label_136e60;
        case 0x136e64u: goto label_136e64;
        case 0x136e68u: goto label_136e68;
        case 0x136e6cu: goto label_136e6c;
        case 0x136e70u: goto label_136e70;
        case 0x136e74u: goto label_136e74;
        case 0x136e78u: goto label_136e78;
        case 0x136e7cu: goto label_136e7c;
        case 0x136e80u: goto label_136e80;
        case 0x136e84u: goto label_136e84;
        case 0x136e88u: goto label_136e88;
        case 0x136e8cu: goto label_136e8c;
        case 0x136e90u: goto label_136e90;
        case 0x136e94u: goto label_136e94;
        case 0x136e98u: goto label_136e98;
        case 0x136e9cu: goto label_136e9c;
        case 0x136ea0u: goto label_136ea0;
        case 0x136ea4u: goto label_136ea4;
        case 0x136ea8u: goto label_136ea8;
        case 0x136eacu: goto label_136eac;
        case 0x136eb0u: goto label_136eb0;
        case 0x136eb4u: goto label_136eb4;
        case 0x136eb8u: goto label_136eb8;
        case 0x136ebcu: goto label_136ebc;
        case 0x136ec0u: goto label_136ec0;
        case 0x136ec4u: goto label_136ec4;
        case 0x136ec8u: goto label_136ec8;
        case 0x136eccu: goto label_136ecc;
        case 0x136ed0u: goto label_136ed0;
        case 0x136ed4u: goto label_136ed4;
        case 0x136ed8u: goto label_136ed8;
        case 0x136edcu: goto label_136edc;
        case 0x136ee0u: goto label_136ee0;
        case 0x136ee4u: goto label_136ee4;
        case 0x136ee8u: goto label_136ee8;
        case 0x136eecu: goto label_136eec;
        case 0x136ef0u: goto label_136ef0;
        case 0x136ef4u: goto label_136ef4;
        case 0x136ef8u: goto label_136ef8;
        case 0x136efcu: goto label_136efc;
        case 0x136f00u: goto label_136f00;
        case 0x136f04u: goto label_136f04;
        case 0x136f08u: goto label_136f08;
        case 0x136f0cu: goto label_136f0c;
        case 0x136f10u: goto label_136f10;
        case 0x136f14u: goto label_136f14;
        case 0x136f18u: goto label_136f18;
        case 0x136f1cu: goto label_136f1c;
        case 0x136f20u: goto label_136f20;
        case 0x136f24u: goto label_136f24;
        case 0x136f28u: goto label_136f28;
        case 0x136f2cu: goto label_136f2c;
        case 0x136f30u: goto label_136f30;
        case 0x136f34u: goto label_136f34;
        case 0x136f38u: goto label_136f38;
        case 0x136f3cu: goto label_136f3c;
        case 0x136f40u: goto label_136f40;
        case 0x136f44u: goto label_136f44;
        case 0x136f48u: goto label_136f48;
        case 0x136f4cu: goto label_136f4c;
        case 0x136f50u: goto label_136f50;
        case 0x136f54u: goto label_136f54;
        case 0x136f58u: goto label_136f58;
        case 0x136f5cu: goto label_136f5c;
        case 0x136f60u: goto label_136f60;
        case 0x136f64u: goto label_136f64;
        default: break;
    }

    ctx->pc = 0x136a88u;

label_136a88:
    // 0x136a88: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x136a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_136a8c:
    // 0x136a8c: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x136a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
label_136a90:
    // 0x136a90: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x136a90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_136a94:
    // 0x136a94: 0x7fb700b0  sq          $s7, 0xB0($sp)
    ctx->pc = 0x136a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 23));
label_136a98:
    // 0x136a98: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x136a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
label_136a9c:
    // 0x136a9c: 0x266401e0  addiu       $a0, $s3, 0x1E0
    ctx->pc = 0x136a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 480));
label_136aa0:
    // 0x136aa0: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x136aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
label_136aa4:
    // 0x136aa4: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x136aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
label_136aa8:
    // 0x136aa8: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x136aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
label_136aac:
    // 0x136aac: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x136aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
label_136ab0:
    // 0x136ab0: 0x7fb500d0  sq          $s5, 0xD0($sp)
    ctx->pc = 0x136ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 21));
label_136ab4:
    // 0x136ab4: 0x7fb600c0  sq          $s6, 0xC0($sp)
    ctx->pc = 0x136ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 22));
label_136ab8:
    // 0x136ab8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x136ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_136abc:
    // 0x136abc: 0xe7b60140  swc1        $f22, 0x140($sp)
    ctx->pc = 0x136abcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_136ac0:
    // 0x136ac0: 0xe7b50138  swc1        $f21, 0x138($sp)
    ctx->pc = 0x136ac0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_136ac4:
    // 0x136ac4: 0xe7b40130  swc1        $f20, 0x130($sp)
    ctx->pc = 0x136ac4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_136ac8:
    // 0x136ac8: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x136ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
label_136acc:
    // 0x136acc: 0xc0e409a  jal         func_390268
label_136ad0:
    if (ctx->pc == 0x136AD0u) {
        ctx->pc = 0x136AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136ACCu;
        // 0x136ad0: 0xafa60084  sw          $a2, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136AD4u;
        goto label_136ad4;
    }
    ctx->pc = 0x136ACCu;
    SET_GPR_U32(ctx, 31, 0x136AD4u);
    ctx->pc = 0x136AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136ACCu;
    // 0x136ad0: 0xafa60084  sw          $a2, 0x84($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x136ACCu, 0x136AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136AD4u;
label_136ad4:
    // 0x136ad4: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x136ad4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_136ad8:
    // 0x136ad8: 0xc0e409a  jal         func_390268
label_136adc:
    if (ctx->pc == 0x136ADCu) {
        ctx->pc = 0x136ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136AD8u;
        // 0x136adc: 0x266401e4  addiu       $a0, $s3, 0x1E4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 484));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136AE0u;
        goto label_136ae0;
    }
    ctx->pc = 0x136AD8u;
    SET_GPR_U32(ctx, 31, 0x136AE0u);
    ctx->pc = 0x136ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136AD8u;
    // 0x136adc: 0x266401e4  addiu       $a0, $s3, 0x1E4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 484));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x136AD8u, 0x136AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136AE0u;
label_136ae0:
    // 0x136ae0: 0x17c00021  bnez        $fp, . + 4 + (0x21 << 2)
label_136ae4:
    if (ctx->pc == 0x136AE4u) {
        ctx->pc = 0x136AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136AE0u;
        // 0x136ae4: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136AE8u;
        goto label_136ae8;
    }
    ctx->pc = 0x136AE0u;
    {
        const bool branch_taken_0x136ae0 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x136AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136AE0u;
        // 0x136ae4: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136ae0) {
            ctx->pc = 0x136B68u;
            goto label_136b68;
        }
    }
    ctx->pc = 0x136AE8u;
label_136ae8:
    // 0x136ae8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x136ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_136aec:
    // 0x136aec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x136aecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_136af0:
    // 0x136af0: 0x1000010e  b           . + 4 + (0x10E << 2)
label_136af4:
    if (ctx->pc == 0x136AF4u) {
        ctx->pc = 0x136AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136AF0u;
        // 0x136af4: 0xae630258  sw          $v1, 0x258($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 600), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136AF8u;
        goto label_136af8;
    }
    ctx->pc = 0x136AF0u;
    {
        const bool branch_taken_0x136af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136AF0u;
        // 0x136af4: 0xae630258  sw          $v1, 0x258($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 600), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136af0) {
            ctx->pc = 0x136F2Cu;
            goto label_136f2c;
        }
    }
    ctx->pc = 0x136AF8u;
label_136af8:
    // 0x136af8: 0xc66c0254  lwc1        $f12, 0x254($s3)
    ctx->pc = 0x136af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_136afc:
    // 0x136afc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x136afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_136b00:
    // 0x136b00: 0xc136b24  jal         func_4DAC90
label_136b04:
    if (ctx->pc == 0x136B04u) {
        ctx->pc = 0x136B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136B00u;
        // 0x136b04: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136B08u;
        goto label_136b08;
    }
    ctx->pc = 0x136B00u;
    SET_GPR_U32(ctx, 31, 0x136B08u);
    ctx->pc = 0x136B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136B00u;
    // 0x136b04: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x136B00u, 0x136B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136B08u;
label_136b08:
    // 0x136b08: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x136b08u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_136b0c:
    // 0x136b0c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x136b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_136b10:
    // 0x136b10: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x136b10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_136b14:
    // 0x136b14: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x136b14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_136b18:
    // 0x136b18: 0xc136b18  jal         func_4DAC60
label_136b1c:
    if (ctx->pc == 0x136B1Cu) {
        ctx->pc = 0x136B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136B18u;
        // 0x136b1c: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136B20u;
        goto label_136b20;
    }
    ctx->pc = 0x136B18u;
    SET_GPR_U32(ctx, 31, 0x136B20u);
    ctx->pc = 0x136B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136B18u;
    // 0x136b1c: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x136B18u, 0x136B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136B20u;
label_136b20:
    // 0x136b20: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x136b20u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_136b24:
    // 0x136b24: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x136b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_136b28:
    // 0x136b28: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x136b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_136b2c:
    // 0x136b2c: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x136b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_136b30:
    // 0x136b30: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x136b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_136b34:
    // 0x136b34: 0x846401b8  lh          $a0, 0x1B8($v1)
    ctx->pc = 0x136b34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 440)));
label_136b38:
    // 0x136b38: 0x8c6201bc  lw          $v0, 0x1BC($v1)
    ctx->pc = 0x136b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 444)));
label_136b3c:
    // 0x136b3c: 0x40f809  jalr        $v0
label_136b40:
    if (ctx->pc == 0x136B40u) {
        ctx->pc = 0x136B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136B3Cu;
        // 0x136b40: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136B44u;
        goto label_136b44;
    }
    ctx->pc = 0x136B3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x136B44u);
        ctx->pc = 0x136B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136B3Cu;
        // 0x136b40: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136B3Cu, 0x136B44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x136B44u;
label_136b44:
    // 0x136b44: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x136b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_136b48:
    // 0x136b48: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x136b48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_136b4c:
    // 0x136b4c: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x136b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_136b50:
    // 0x136b50: 0x40f809  jalr        $v0
label_136b54:
    if (ctx->pc == 0x136B54u) {
        ctx->pc = 0x136B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136B50u;
        // 0x136b54: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136B58u;
        goto label_136b58;
    }
    ctx->pc = 0x136B50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x136B58u);
        ctx->pc = 0x136B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136B50u;
        // 0x136b54: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136B50u, 0x136B58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x136B58u;
label_136b58:
    // 0x136b58: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x136b58u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_136b5c:
    // 0x136b5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x136b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_136b60:
    // 0x136b60: 0x100000f2  b           . + 4 + (0xF2 << 2)
label_136b64:
    if (ctx->pc == 0x136B64u) {
        ctx->pc = 0x136B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136B60u;
        // 0x136b64: 0x7e6301f0  sq          $v1, 0x1F0($s3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 19), 496), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136B68u;
        goto label_136b68;
    }
    ctx->pc = 0x136B60u;
    {
        const bool branch_taken_0x136b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136B60u;
        // 0x136b64: 0x7e6301f0  sq          $v1, 0x1F0($s3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 19), 496), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136b60) {
            ctx->pc = 0x136F2Cu;
            goto label_136f2c;
        }
    }
    ctx->pc = 0x136B68u;
label_136b68:
    // 0x136b68: 0x26f20090  addiu       $s2, $s7, 0x90
    ctx->pc = 0x136b68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 144));
label_136b6c:
    // 0x136b6c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x136b6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_136b70:
    // 0x136b70: 0x86500002  lh          $s0, 0x2($s2)
    ctx->pc = 0x136b70u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_136b74:
    // 0x136b74: 0x3c110071  lui         $s1, 0x71
    ctx->pc = 0x136b74u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)113 << 16));
label_136b78:
    // 0x136b78: 0xc6610208  lwc1        $f1, 0x208($s3)
    ctx->pc = 0x136b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_136b7c:
    // 0x136b7c: 0x26314b00  addiu       $s1, $s1, 0x4B00
    ctx->pc = 0x136b7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 19200));
label_136b80:
    // 0x136b80: 0x46000868  max.s       $f1, $f1, $f0
    ctx->pc = 0x136b80u;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[0]);
label_136b84:
    // 0x136b84: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x136b84u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_136b88:
    // 0x136b88: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x136b88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_136b8c:
    // 0x136b8c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x136b8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_136b90:
    // 0x136b90: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x136b90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_136b94:
    // 0x136b94: 0x0  nop
    ctx->pc = 0x136b94u;
    // NOP
label_136b98:
    // 0x136b98: 0x460c0b29  min.s       $f12, $f1, $f12
    ctx->pc = 0x136b98u;
    ctx->f[12] = std::min(ctx->f[1], ctx->f[12]);
label_136b9c:
    // 0x136b9c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x136b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_136ba0:
    // 0x136ba0: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x136ba0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_136ba4:
    // 0x136ba4: 0xc136b24  jal         func_4DAC90
label_136ba8:
    if (ctx->pc == 0x136BA8u) {
        ctx->pc = 0x136BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136BA4u;
        // 0x136ba8: 0x24a51740  addiu       $a1, $a1, 0x1740 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5952));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136BACu;
        goto label_136bac;
    }
    ctx->pc = 0x136BA4u;
    SET_GPR_U32(ctx, 31, 0x136BACu);
    ctx->pc = 0x136BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136BA4u;
    // 0x136ba8: 0x24a51740  addiu       $a1, $a1, 0x1740 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x136BA4u, 0x136BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136BACu;
label_136bac:
    // 0x136bac: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x136bacu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_136bb0:
    // 0x136bb0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x136bb0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_136bb4:
    // 0x136bb4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x136bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_136bb8:
    // 0x136bb8: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x136bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_136bbc:
    // 0x136bbc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x136bbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_136bc0:
    // 0x136bc0: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x136bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_136bc4:
    // 0x136bc4: 0xc136b18  jal         func_4DAC60
label_136bc8:
    if (ctx->pc == 0x136BC8u) {
        ctx->pc = 0x136BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136BC4u;
        // 0x136bc8: 0x26740220  addiu       $s4, $s3, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136BCCu;
        goto label_136bcc;
    }
    ctx->pc = 0x136BC4u;
    SET_GPR_U32(ctx, 31, 0x136BCCu);
    ctx->pc = 0x136BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136BC4u;
    // 0x136bc8: 0x26740220  addiu       $s4, $s3, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x136BC4u, 0x136BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136BCCu;
label_136bcc:
    // 0x136bcc: 0x26760210  addiu       $s6, $s3, 0x210
    ctx->pc = 0x136bccu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 528));
label_136bd0:
    // 0x136bd0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x136bd0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_136bd4:
    // 0x136bd4: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x136bd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_136bd8:
    // 0x136bd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x136bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_136bdc:
    // 0x136bdc: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x136bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_136be0:
    // 0x136be0: 0x86450002  lh          $a1, 0x2($s2)
    ctx->pc = 0x136be0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_136be4:
    // 0x136be4: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x136be4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_136be8:
    // 0x136be8: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x136be8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_136bec:
    // 0x136bec: 0xc0cd8ec  jal         func_3363B0
label_136bf0:
    if (ctx->pc == 0x136BF0u) {
        ctx->pc = 0x136BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136BECu;
        // 0x136bf0: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136BF4u;
        goto label_136bf4;
    }
    ctx->pc = 0x136BECu;
    SET_GPR_U32(ctx, 31, 0x136BF4u);
    ctx->pc = 0x136BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136BECu;
    // 0x136bf0: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x136BECu, 0x136BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136BF4u;
label_136bf4:
    // 0x136bf4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x136bf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_136bf8:
    // 0x136bf8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x136bf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_136bfc:
    // 0x136bfc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x136bfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_136c00:
    // 0x136c00: 0xc136b24  jal         func_4DAC90
label_136c04:
    if (ctx->pc == 0x136C04u) {
        ctx->pc = 0x136C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136C00u;
        // 0x136c04: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136C08u;
        goto label_136c08;
    }
    ctx->pc = 0x136C00u;
    SET_GPR_U32(ctx, 31, 0x136C08u);
    ctx->pc = 0x136C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136C00u;
    // 0x136c04: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x136C00u, 0x136C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136C08u;
label_136c08:
    // 0x136c08: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x136c08u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_136c0c:
    // 0x136c0c: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x136c0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_136c10:
    // 0x136c10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x136c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_136c14:
    // 0x136c14: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x136c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_136c18:
    // 0x136c18: 0x86450002  lh          $a1, 0x2($s2)
    ctx->pc = 0x136c18u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_136c1c:
    // 0x136c1c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x136c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_136c20:
    // 0x136c20: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x136c20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_136c24:
    // 0x136c24: 0xc0cd8c2  jal         func_336308
label_136c28:
    if (ctx->pc == 0x136C28u) {
        ctx->pc = 0x136C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136C24u;
        // 0x136c28: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136C2Cu;
        goto label_136c2c;
    }
    ctx->pc = 0x136C24u;
    SET_GPR_U32(ctx, 31, 0x136C2Cu);
    ctx->pc = 0x136C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136C24u;
    // 0x136c28: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336308u, 0x136C24u, 0x136C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136C2Cu;
label_136c2c:
    // 0x136c2c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x136c2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_136c30:
    // 0x136c30: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x136c30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_136c34:
    // 0x136c34: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x136c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_136c38:
    // 0x136c38: 0xc136b24  jal         func_4DAC90
label_136c3c:
    if (ctx->pc == 0x136C3Cu) {
        ctx->pc = 0x136C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136C38u;
        // 0x136c3c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136C40u;
        goto label_136c40;
    }
    ctx->pc = 0x136C38u;
    SET_GPR_U32(ctx, 31, 0x136C40u);
    ctx->pc = 0x136C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136C38u;
    // 0x136c3c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x136C38u, 0x136C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136C40u;
label_136c40:
    // 0x136c40: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x136c40u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_136c44:
    // 0x136c44: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x136c44u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_136c48:
    // 0x136c48: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x136c48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_136c4c:
    // 0x136c4c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x136c4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_136c50:
    // 0x136c50: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x136c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_136c54:
    // 0x136c54: 0x7e630210  sq          $v1, 0x210($s3)
    ctx->pc = 0x136c54u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 528), GPR_VEC(ctx, 3));
label_136c58:
    // 0x136c58: 0xe6600254  swc1        $f0, 0x254($s3)
    ctx->pc = 0x136c58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 596), bits); }
label_136c5c:
    // 0x136c5c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x136c5cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_136c60:
    // 0x136c60: 0x2aa30003  slti        $v1, $s5, 0x3
    ctx->pc = 0x136c60u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)3) ? 1 : 0);
label_136c64:
    // 0x136c64: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x136c64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_136c68:
    // 0x136c68: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x136c68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_136c6c:
    // 0x136c6c: 0x7e620220  sq          $v0, 0x220($s3)
    ctx->pc = 0x136c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 544), GPR_VEC(ctx, 2));
label_136c70:
    // 0x136c70: 0x1060004a  beqz        $v1, . + 4 + (0x4A << 2)
label_136c74:
    if (ctx->pc == 0x136C74u) {
        ctx->pc = 0x136C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136C70u;
        // 0x136c74: 0xe6600254  swc1        $f0, 0x254($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 596), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x136C78u;
        goto label_136c78;
    }
    ctx->pc = 0x136C70u;
    {
        const bool branch_taken_0x136c70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x136C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136C70u;
        // 0x136c74: 0xe6600254  swc1        $f0, 0x254($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 596), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x136c70) {
            ctx->pc = 0x136D9Cu;
            goto label_136d9c;
        }
    }
    ctx->pc = 0x136C78u;
label_136c78:
    // 0x136c78: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x136c78u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
label_136c7c:
    // 0x136c7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x136c7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_136c80:
    // 0x136c80: 0x2604b888  addiu       $a0, $s0, -0x4778
    ctx->pc = 0x136c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949000));
label_136c84:
    // 0x136c84: 0xc0cd4fc  jal         func_3353F0
label_136c88:
    if (ctx->pc == 0x136C88u) {
        ctx->pc = 0x136C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136C84u;
        // 0x136c88: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136C8Cu;
        goto label_136c8c;
    }
    ctx->pc = 0x136C84u;
    SET_GPR_U32(ctx, 31, 0x136C8Cu);
    ctx->pc = 0x136C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136C84u;
    // 0x136c88: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x136C84u, 0x136C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136C8Cu;
label_136c8c:
    // 0x136c8c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x136c8cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_136c90:
    // 0x136c90: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x136c90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_136c94:
    // 0x136c94: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_136c98:
    if (ctx->pc == 0x136C98u) {
        ctx->pc = 0x136C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136C94u;
        // 0x136c98: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136C9Cu;
        goto label_136c9c;
    }
    ctx->pc = 0x136C94u;
    {
        const bool branch_taken_0x136c94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x136C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136C94u;
        // 0x136c98: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136c94) {
            ctx->pc = 0x136D0Cu;
            goto label_136d0c;
        }
    }
    ctx->pc = 0x136C9Cu;
label_136c9c:
    // 0x136c9c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x136c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_136ca0:
    // 0x136ca0: 0x24428e40  addiu       $v0, $v0, -0x71C0
    ctx->pc = 0x136ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938176));
label_136ca4:
    // 0x136ca4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x136ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_136ca8:
    // 0x136ca8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x136ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_136cac:
    // 0x136cac: 0x800008  jr          $a0
label_136cb0:
    if (ctx->pc == 0x136CB0u) {
        ctx->pc = 0x136CB4u;
        goto label_136cb4;
    }
    ctx->pc = 0x136CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x136CB4u: goto label_136cb4;
            case 0x136CC8u: goto label_136cc8;
            case 0x136CDCu: goto label_136cdc;
            case 0x136CF0u: goto label_136cf0;
            case 0x136CF8u: goto label_136cf8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136CACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x136CB4u;
label_136cb4:
    // 0x136cb4: 0x3c013e32  lui         $at, 0x3E32
    ctx->pc = 0x136cb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15922 << 16));
label_136cb8:
    // 0x136cb8: 0x3421b8c3  ori         $at, $at, 0xB8C3
    ctx->pc = 0x136cb8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47299);
label_136cbc:
    // 0x136cbc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x136cbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_136cc0:
    // 0x136cc0: 0x10000012  b           . + 4 + (0x12 << 2)
label_136cc4:
    if (ctx->pc == 0x136CC4u) {
        ctx->pc = 0x136CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136CC0u;
        // 0x136cc4: 0xe6600250  swc1        $f0, 0x250($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 592), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x136CC8u;
        goto label_136cc8;
    }
    ctx->pc = 0x136CC0u;
    {
        const bool branch_taken_0x136cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136CC0u;
        // 0x136cc4: 0xe6600250  swc1        $f0, 0x250($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 592), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x136cc0) {
            ctx->pc = 0x136D0Cu;
            goto label_136d0c;
        }
    }
    ctx->pc = 0x136CC8u;
label_136cc8:
    // 0x136cc8: 0x3c013e86  lui         $at, 0x3E86
    ctx->pc = 0x136cc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16006 << 16));
label_136ccc:
    // 0x136ccc: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x136cccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
label_136cd0:
    // 0x136cd0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x136cd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_136cd4:
    // 0x136cd4: 0x1000000d  b           . + 4 + (0xD << 2)
label_136cd8:
    if (ctx->pc == 0x136CD8u) {
        ctx->pc = 0x136CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136CD4u;
        // 0x136cd8: 0xe6600250  swc1        $f0, 0x250($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 592), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x136CDCu;
        goto label_136cdc;
    }
    ctx->pc = 0x136CD4u;
    {
        const bool branch_taken_0x136cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136CD4u;
        // 0x136cd8: 0xe6600250  swc1        $f0, 0x250($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 592), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x136cd4) {
            ctx->pc = 0x136D0Cu;
            goto label_136d0c;
        }
    }
    ctx->pc = 0x136CDCu;
label_136cdc:
    // 0x136cdc: 0x3c013edf  lui         $at, 0x3EDF
    ctx->pc = 0x136cdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16095 << 16));
label_136ce0:
    // 0x136ce0: 0x342166f4  ori         $at, $at, 0x66F4
    ctx->pc = 0x136ce0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26356);
label_136ce4:
    // 0x136ce4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x136ce4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_136ce8:
    // 0x136ce8: 0x10000008  b           . + 4 + (0x8 << 2)
label_136cec:
    if (ctx->pc == 0x136CECu) {
        ctx->pc = 0x136CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136CE8u;
        // 0x136cec: 0xe6600250  swc1        $f0, 0x250($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 592), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x136CF0u;
        goto label_136cf0;
    }
    ctx->pc = 0x136CE8u;
    {
        const bool branch_taken_0x136ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136CE8u;
        // 0x136cec: 0xe6600250  swc1        $f0, 0x250($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 592), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x136ce8) {
            ctx->pc = 0x136D0Cu;
            goto label_136d0c;
        }
    }
    ctx->pc = 0x136CF0u;
label_136cf0:
    // 0x136cf0: 0x10000006  b           . + 4 + (0x6 << 2)
label_136cf4:
    if (ctx->pc == 0x136CF4u) {
        ctx->pc = 0x136CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136CF0u;
        // 0x136cf4: 0xae600250  sw          $zero, 0x250($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 592), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136CF8u;
        goto label_136cf8;
    }
    ctx->pc = 0x136CF0u;
    {
        const bool branch_taken_0x136cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136CF0u;
        // 0x136cf4: 0xae600250  sw          $zero, 0x250($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 592), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136cf0) {
            ctx->pc = 0x136D0Cu;
            goto label_136d0c;
        }
    }
    ctx->pc = 0x136CF8u;
label_136cf8:
    // 0x136cf8: 0x3c013eb2  lui         $at, 0x3EB2
    ctx->pc = 0x136cf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16050 << 16));
label_136cfc:
    // 0x136cfc: 0x3421b8c3  ori         $at, $at, 0xB8C3
    ctx->pc = 0x136cfcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47299);
label_136d00:
    // 0x136d00: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x136d00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_136d04:
    // 0x136d04: 0x0  nop
    ctx->pc = 0x136d04u;
    // NOP
label_136d08:
    // 0x136d08: 0xe6600250  swc1        $f0, 0x250($s3)
    ctx->pc = 0x136d08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 592), bits); }
label_136d0c:
    // 0x136d0c: 0x2604b888  addiu       $a0, $s0, -0x4778
    ctx->pc = 0x136d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949000));
label_136d10:
    // 0x136d10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x136d10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_136d14:
    // 0x136d14: 0xc0cd4fc  jal         func_3353F0
label_136d18:
    if (ctx->pc == 0x136D18u) {
        ctx->pc = 0x136D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136D14u;
        // 0x136d18: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136D1Cu;
        goto label_136d1c;
    }
    ctx->pc = 0x136D14u;
    SET_GPR_U32(ctx, 31, 0x136D1Cu);
    ctx->pc = 0x136D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136D14u;
    // 0x136d18: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x136D14u, 0x136D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136D1Cu;
label_136d1c:
    // 0x136d1c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x136d1cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_136d20:
    // 0x136d20: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x136d20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_136d24:
    // 0x136d24: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_136d28:
    if (ctx->pc == 0x136D28u) {
        ctx->pc = 0x136D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136D24u;
        // 0x136d28: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136D2Cu;
        goto label_136d2c;
    }
    ctx->pc = 0x136D24u;
    {
        const bool branch_taken_0x136d24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x136D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136D24u;
        // 0x136d28: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136d24) {
            ctx->pc = 0x136DB0u;
            goto label_136db0;
        }
    }
    ctx->pc = 0x136D2Cu;
label_136d2c:
    // 0x136d2c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x136d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_136d30:
    // 0x136d30: 0x24428e60  addiu       $v0, $v0, -0x71A0
    ctx->pc = 0x136d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938208));
label_136d34:
    // 0x136d34: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x136d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_136d38:
    // 0x136d38: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x136d38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_136d3c:
    // 0x136d3c: 0x800008  jr          $a0
label_136d40:
    if (ctx->pc == 0x136D40u) {
        ctx->pc = 0x136D44u;
        goto label_136d44;
    }
    ctx->pc = 0x136D3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x136D44u: goto label_136d44;
            case 0x136D58u: goto label_136d58;
            case 0x136D6Cu: goto label_136d6c;
            case 0x136D74u: goto label_136d74;
            case 0x136D88u: goto label_136d88;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136D3Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x136D44u;
label_136d44:
    // 0x136d44: 0x3c01be86  lui         $at, 0xBE86
    ctx->pc = 0x136d44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48774 << 16));
label_136d48:
    // 0x136d48: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x136d48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
label_136d4c:
    // 0x136d4c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x136d4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_136d50:
    // 0x136d50: 0x10000017  b           . + 4 + (0x17 << 2)
label_136d54:
    if (ctx->pc == 0x136D54u) {
        ctx->pc = 0x136D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136D50u;
        // 0x136d54: 0xe660024c  swc1        $f0, 0x24C($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 588), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x136D58u;
        goto label_136d58;
    }
    ctx->pc = 0x136D50u;
    {
        const bool branch_taken_0x136d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136D50u;
        // 0x136d54: 0xe660024c  swc1        $f0, 0x24C($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x136d50) {
            ctx->pc = 0x136DB0u;
            goto label_136db0;
        }
    }
    ctx->pc = 0x136D58u;
label_136d58:
    // 0x136d58: 0x3c013e7a  lui         $at, 0x3E7A
    ctx->pc = 0x136d58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15994 << 16));
label_136d5c:
    // 0x136d5c: 0x342135de  ori         $at, $at, 0x35DE
    ctx->pc = 0x136d5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13790);
label_136d60:
    // 0x136d60: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x136d60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_136d64:
    // 0x136d64: 0x10000012  b           . + 4 + (0x12 << 2)
label_136d68:
    if (ctx->pc == 0x136D68u) {
        ctx->pc = 0x136D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136D64u;
        // 0x136d68: 0xe660024c  swc1        $f0, 0x24C($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 588), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x136D6Cu;
        goto label_136d6c;
    }
    ctx->pc = 0x136D64u;
    {
        const bool branch_taken_0x136d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136D64u;
        // 0x136d68: 0xe660024c  swc1        $f0, 0x24C($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x136d64) {
            ctx->pc = 0x136DB0u;
            goto label_136db0;
        }
    }
    ctx->pc = 0x136D6Cu;
label_136d6c:
    // 0x136d6c: 0x10000010  b           . + 4 + (0x10 << 2)
label_136d70:
    if (ctx->pc == 0x136D70u) {
        ctx->pc = 0x136D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136D6Cu;
        // 0x136d70: 0xae60024c  sw          $zero, 0x24C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 588), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136D74u;
        goto label_136d74;
    }
    ctx->pc = 0x136D6Cu;
    {
        const bool branch_taken_0x136d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136D6Cu;
        // 0x136d70: 0xae60024c  sw          $zero, 0x24C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 588), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136d6c) {
            ctx->pc = 0x136DB0u;
            goto label_136db0;
        }
    }
    ctx->pc = 0x136D74u;
label_136d74:
    // 0x136d74: 0x3c013dfa  lui         $at, 0x3DFA
    ctx->pc = 0x136d74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15866 << 16));
label_136d78:
    // 0x136d78: 0x342135de  ori         $at, $at, 0x35DE
    ctx->pc = 0x136d78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13790);
label_136d7c:
    // 0x136d7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x136d7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_136d80:
    // 0x136d80: 0x1000000b  b           . + 4 + (0xB << 2)
label_136d84:
    if (ctx->pc == 0x136D84u) {
        ctx->pc = 0x136D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136D80u;
        // 0x136d84: 0xe660024c  swc1        $f0, 0x24C($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 588), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x136D88u;
        goto label_136d88;
    }
    ctx->pc = 0x136D80u;
    {
        const bool branch_taken_0x136d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136D80u;
        // 0x136d84: 0xe660024c  swc1        $f0, 0x24C($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x136d80) {
            ctx->pc = 0x136DB0u;
            goto label_136db0;
        }
    }
    ctx->pc = 0x136D88u;
label_136d88:
    // 0x136d88: 0x3c01be0e  lui         $at, 0xBE0E
    ctx->pc = 0x136d88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48654 << 16));
label_136d8c:
    // 0x136d8c: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x136d8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
label_136d90:
    // 0x136d90: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x136d90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_136d94:
    // 0x136d94: 0x10000006  b           . + 4 + (0x6 << 2)
label_136d98:
    if (ctx->pc == 0x136D98u) {
        ctx->pc = 0x136D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136D94u;
        // 0x136d98: 0xe660024c  swc1        $f0, 0x24C($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 588), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x136D9Cu;
        goto label_136d9c;
    }
    ctx->pc = 0x136D94u;
    {
        const bool branch_taken_0x136d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136D94u;
        // 0x136d98: 0xe660024c  swc1        $f0, 0x24C($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x136d94) {
            ctx->pc = 0x136DB0u;
            goto label_136db0;
        }
    }
    ctx->pc = 0x136D9Cu;
label_136d9c:
    // 0x136d9c: 0x3c013f0e  lui         $at, 0x3F0E
    ctx->pc = 0x136d9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16142 << 16));
label_136da0:
    // 0x136da0: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x136da0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
label_136da4:
    // 0x136da4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x136da4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_136da8:
    // 0x136da8: 0xae60024c  sw          $zero, 0x24C($s3)
    ctx->pc = 0x136da8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 588), GPR_U32(ctx, 0));
label_136dac:
    // 0x136dac: 0xe6600250  swc1        $f0, 0x250($s3)
    ctx->pc = 0x136dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 592), bits); }
label_136db0:
    // 0x136db0: 0xc6740250  lwc1        $f20, 0x250($s3)
    ctx->pc = 0x136db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_136db4:
    // 0x136db4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x136db4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_136db8:
    // 0x136db8: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x136db8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_136dbc:
    // 0x136dbc: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x136dbcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_136dc0:
    // 0x136dc0: 0x4616a502  mul.s       $f20, $f20, $f22
    ctx->pc = 0x136dc0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
label_136dc4:
    // 0x136dc4: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x136dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_136dc8:
    // 0x136dc8: 0xc12e310  jal         func_4B8C40
label_136dcc:
    if (ctx->pc == 0x136DCCu) {
        ctx->pc = 0x136DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136DC8u;
        // 0x136dcc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x136DD0u;
        goto label_136dd0;
    }
    ctx->pc = 0x136DC8u;
    SET_GPR_U32(ctx, 31, 0x136DD0u);
    ctx->pc = 0x136DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136DC8u;
    // 0x136dcc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x136DC8u, 0x136DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136DD0u;
label_136dd0:
    // 0x136dd0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x136dd0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_136dd4:
    // 0x136dd4: 0xc12e29c  jal         func_4B8A70
label_136dd8:
    if (ctx->pc == 0x136DD8u) {
        ctx->pc = 0x136DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136DD4u;
        // 0x136dd8: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x136DDCu;
        goto label_136ddc;
    }
    ctx->pc = 0x136DD4u;
    SET_GPR_U32(ctx, 31, 0x136DDCu);
    ctx->pc = 0x136DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136DD4u;
    // 0x136dd8: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x136DD4u, 0x136DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136DDCu;
label_136ddc:
    // 0x136ddc: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x136ddcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_136de0:
    // 0x136de0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x136de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_136de4:
    // 0x136de4: 0x4403a800  mfc1        $v1, $f21
    ctx->pc = 0x136de4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_136de8:
    // 0x136de8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x136de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_136dec:
    // 0x136dec: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x136decu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_136df0:
    // 0x136df0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x136df0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_136df4:
    // 0x136df4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x136df4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_136df8:
    // 0x136df8: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x136df8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_136dfc:
    // 0x136dfc: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x136dfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_136e00:
    // 0x136e00: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x136e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_136e04:
    // 0x136e04: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x136e04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_136e08:
    // 0x136e08: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x136e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_136e0c:
    // 0x136e0c: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x136e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_136e10:
    // 0x136e10: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x136e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_136e14:
    // 0x136e14: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x136e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_136e18:
    // 0x136e18: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x136e18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_136e1c:
    // 0x136e1c: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x136e1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_136e20:
    // 0x136e20: 0xc136b30  jal         func_4DACC0
label_136e24:
    if (ctx->pc == 0x136E24u) {
        ctx->pc = 0x136E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136E20u;
        // 0x136e24: 0xe7a00040  swc1        $f0, 0x40($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x136E28u;
        goto label_136e28;
    }
    ctx->pc = 0x136E20u;
    SET_GPR_U32(ctx, 31, 0x136E28u);
    ctx->pc = 0x136E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136E20u;
    // 0x136e24: 0xe7a00040  swc1        $f0, 0x40($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DACC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DACC0u, 0x136E20u, 0x136E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136E28u;
label_136e28:
    // 0x136e28: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x136e28u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_136e2c:
    // 0x136e2c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x136e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_136e30:
    // 0x136e30: 0xc674024c  lwc1        $f20, 0x24C($s3)
    ctx->pc = 0x136e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_136e34:
    // 0x136e34: 0x24831740  addiu       $v1, $a0, 0x1740
    ctx->pc = 0x136e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 5952));
label_136e38:
    // 0x136e38: 0x7e620220  sq          $v0, 0x220($s3)
    ctx->pc = 0x136e38u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 544), GPR_VEC(ctx, 2));
label_136e3c:
    // 0x136e3c: 0x4616a502  mul.s       $f20, $f20, $f22
    ctx->pc = 0x136e3cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
label_136e40:
    // 0x136e40: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x136e40u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_136e44:
    // 0x136e44: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x136e44u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_136e48:
    // 0x136e48: 0xc12e310  jal         func_4B8C40
label_136e4c:
    if (ctx->pc == 0x136E4Cu) {
        ctx->pc = 0x136E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136E48u;
        // 0x136e4c: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136E50u;
        goto label_136e50;
    }
    ctx->pc = 0x136E48u;
    SET_GPR_U32(ctx, 31, 0x136E50u);
    ctx->pc = 0x136E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136E48u;
    // 0x136e4c: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x136E48u, 0x136E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136E50u;
label_136e50:
    // 0x136e50: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x136e50u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_136e54:
    // 0x136e54: 0xc12e29c  jal         func_4B8A70
label_136e58:
    if (ctx->pc == 0x136E58u) {
        ctx->pc = 0x136E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136E54u;
        // 0x136e58: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x136E5Cu;
        goto label_136e5c;
    }
    ctx->pc = 0x136E54u;
    SET_GPR_U32(ctx, 31, 0x136E5Cu);
    ctx->pc = 0x136E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136E54u;
    // 0x136e58: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x136E54u, 0x136E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136E5Cu;
label_136e5c:
    // 0x136e5c: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x136e5cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_136e60:
    // 0x136e60: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x136e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_136e64:
    // 0x136e64: 0x4403a800  mfc1        $v1, $f21
    ctx->pc = 0x136e64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_136e68:
    // 0x136e68: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x136e68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_136e6c:
    // 0x136e6c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x136e6cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_136e70:
    // 0x136e70: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x136e70u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_136e74:
    // 0x136e74: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x136e74u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_136e78:
    // 0x136e78: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x136e78u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_136e7c:
    // 0x136e7c: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x136e7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_136e80:
    // 0x136e80: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x136e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_136e84:
    // 0x136e84: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x136e84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_136e88:
    // 0x136e88: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x136e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_136e8c:
    // 0x136e8c: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x136e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_136e90:
    // 0x136e90: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x136e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_136e94:
    // 0x136e94: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x136e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_136e98:
    // 0x136e98: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x136e98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_136e9c:
    // 0x136e9c: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x136e9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_136ea0:
    // 0x136ea0: 0xc136b30  jal         func_4DACC0
label_136ea4:
    if (ctx->pc == 0x136EA4u) {
        ctx->pc = 0x136EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136EA0u;
        // 0x136ea4: 0xe7a20048  swc1        $f2, 0x48($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x136EA8u;
        goto label_136ea8;
    }
    ctx->pc = 0x136EA0u;
    SET_GPR_U32(ctx, 31, 0x136EA8u);
    ctx->pc = 0x136EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136EA0u;
    // 0x136ea4: 0xe7a20048  swc1        $f2, 0x48($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DACC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DACC0u, 0x136EA0u, 0x136EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136EA8u;
label_136ea8:
    // 0x136ea8: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x136ea8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_136eac:
    // 0x136eac: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x136eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_136eb0:
    // 0x136eb0: 0xc66c0254  lwc1        $f12, 0x254($s3)
    ctx->pc = 0x136eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_136eb4:
    // 0x136eb4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x136eb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_136eb8:
    // 0x136eb8: 0x7e620220  sq          $v0, 0x220($s3)
    ctx->pc = 0x136eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 544), GPR_VEC(ctx, 2));
label_136ebc:
    // 0x136ebc: 0xc136b24  jal         func_4DAC90
label_136ec0:
    if (ctx->pc == 0x136EC0u) {
        ctx->pc = 0x136EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136EBCu;
        // 0x136ec0: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136EC4u;
        goto label_136ec4;
    }
    ctx->pc = 0x136EBCu;
    SET_GPR_U32(ctx, 31, 0x136EC4u);
    ctx->pc = 0x136EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136EBCu;
    // 0x136ec0: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x136EBCu, 0x136EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136EC4u;
label_136ec4:
    // 0x136ec4: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x136ec4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_136ec8:
    // 0x136ec8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x136ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_136ecc:
    // 0x136ecc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x136eccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_136ed0:
    // 0x136ed0: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x136ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_136ed4:
    // 0x136ed4: 0xc136b18  jal         func_4DAC60
label_136ed8:
    if (ctx->pc == 0x136ED8u) {
        ctx->pc = 0x136ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136ED4u;
        // 0x136ed8: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136EDCu;
        goto label_136edc;
    }
    ctx->pc = 0x136ED4u;
    SET_GPR_U32(ctx, 31, 0x136EDCu);
    ctx->pc = 0x136ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136ED4u;
    // 0x136ed8: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x136ED4u, 0x136EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136EDCu;
label_136edc:
    // 0x136edc: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x136edcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_136ee0:
    // 0x136ee0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x136ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_136ee4:
    // 0x136ee4: 0x3c014013  lui         $at, 0x4013
    ctx->pc = 0x136ee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16403 << 16));
label_136ee8:
    // 0x136ee8: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x136ee8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_136eec:
    // 0x136eec: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x136eecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_136ef0:
    // 0x136ef0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x136ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_136ef4:
    // 0x136ef4: 0x8fa60080  lw          $a2, 0x80($sp)
    ctx->pc = 0x136ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_136ef8:
    // 0x136ef8: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x136ef8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_136efc:
    // 0x136efc: 0x8fa70084  lw          $a3, 0x84($sp)
    ctx->pc = 0x136efcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
label_136f00:
    // 0x136f00: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x136f00u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_136f04:
    // 0x136f04: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x136f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_136f08:
    // 0x136f08: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x136f08u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_136f0c:
    // 0x136f0c: 0xc04dd36  jal         func_1374D8
label_136f10:
    if (ctx->pc == 0x136F10u) {
        ctx->pc = 0x136F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136F0Cu;
        // 0x136f10: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136F14u;
        goto label_136f14;
    }
    ctx->pc = 0x136F0Cu;
    SET_GPR_U32(ctx, 31, 0x136F14u);
    ctx->pc = 0x136F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136F0Cu;
    // 0x136f10: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1374D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1374D8u, 0x136F0Cu, 0x136F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136F14u;
label_136f14:
    // 0x136f14: 0x1440fef8  bnez        $v0, . + 4 + (-0x108 << 2)
label_136f18:
    if (ctx->pc == 0x136F18u) {
        ctx->pc = 0x136F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136F14u;
        // 0x136f18: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136F1Cu;
        goto label_136f1c;
    }
    ctx->pc = 0x136F14u;
    {
        const bool branch_taken_0x136f14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x136F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136F14u;
        // 0x136f18: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136f14) {
            ctx->pc = 0x136AF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_136af8;
        }
    }
    ctx->pc = 0x136F1Cu;
label_136f1c:
    // 0x136f1c: 0x2aa20004  slti        $v0, $s5, 0x4
    ctx->pc = 0x136f1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)4) ? 1 : 0);
label_136f20:
    // 0x136f20: 0x1440ff4f  bnez        $v0, . + 4 + (-0xB1 << 2)
label_136f24:
    if (ctx->pc == 0x136F24u) {
        ctx->pc = 0x136F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136F20u;
        // 0x136f24: 0x7ba20010  lq          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136F28u;
        goto label_136f28;
    }
    ctx->pc = 0x136F20u;
    {
        const bool branch_taken_0x136f20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x136F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136F20u;
        // 0x136f24: 0x7ba20010  lq          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136f20) {
            ctx->pc = 0x136C60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_136c60;
        }
    }
    ctx->pc = 0x136F28u;
label_136f28:
    // 0x136f28: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x136f28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_136f2c:
    // 0x136f2c: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x136f2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_136f30:
    // 0x136f30: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x136f30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_136f34:
    // 0x136f34: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x136f34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_136f38:
    // 0x136f38: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x136f38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_136f3c:
    // 0x136f3c: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x136f3cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_136f40:
    // 0x136f40: 0x7bb500d0  lq          $s5, 0xD0($sp)
    ctx->pc = 0x136f40u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_136f44:
    // 0x136f44: 0x7bb600c0  lq          $s6, 0xC0($sp)
    ctx->pc = 0x136f44u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_136f48:
    // 0x136f48: 0x7bb700b0  lq          $s7, 0xB0($sp)
    ctx->pc = 0x136f48u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_136f4c:
    // 0x136f4c: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x136f4cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_136f50:
    // 0x136f50: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x136f50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_136f54:
    // 0x136f54: 0xc7b60140  lwc1        $f22, 0x140($sp)
    ctx->pc = 0x136f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_136f58:
    // 0x136f58: 0xc7b50138  lwc1        $f21, 0x138($sp)
    ctx->pc = 0x136f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_136f5c:
    // 0x136f5c: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x136f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_136f60:
    // 0x136f60: 0x3e00008  jr          $ra
label_136f64:
    if (ctx->pc == 0x136F64u) {
        ctx->pc = 0x136F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136F60u;
        // 0x136f64: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136F68u;
        goto label_fallthrough_0x136f60;
    }
    ctx->pc = 0x136F60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136F60u;
        // 0x136f64: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136F60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x136f60:
    ctx->pc = 0x136F68u;
}
