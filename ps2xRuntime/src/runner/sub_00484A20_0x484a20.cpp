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

// Function: sub_00484A20
// Address: 0x484a20 - 0x484ee0
void sub_00484A20_0x484a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00484A20_0x484a20");
#endif

    switch (ctx->pc) {
        case 0x484a20u: goto label_484a20;
        case 0x484a24u: goto label_484a24;
        case 0x484a28u: goto label_484a28;
        case 0x484a2cu: goto label_484a2c;
        case 0x484a30u: goto label_484a30;
        case 0x484a34u: goto label_484a34;
        case 0x484a38u: goto label_484a38;
        case 0x484a3cu: goto label_484a3c;
        case 0x484a40u: goto label_484a40;
        case 0x484a44u: goto label_484a44;
        case 0x484a48u: goto label_484a48;
        case 0x484a4cu: goto label_484a4c;
        case 0x484a50u: goto label_484a50;
        case 0x484a54u: goto label_484a54;
        case 0x484a58u: goto label_484a58;
        case 0x484a5cu: goto label_484a5c;
        case 0x484a60u: goto label_484a60;
        case 0x484a64u: goto label_484a64;
        case 0x484a68u: goto label_484a68;
        case 0x484a6cu: goto label_484a6c;
        case 0x484a70u: goto label_484a70;
        case 0x484a74u: goto label_484a74;
        case 0x484a78u: goto label_484a78;
        case 0x484a7cu: goto label_484a7c;
        case 0x484a80u: goto label_484a80;
        case 0x484a84u: goto label_484a84;
        case 0x484a88u: goto label_484a88;
        case 0x484a8cu: goto label_484a8c;
        case 0x484a90u: goto label_484a90;
        case 0x484a94u: goto label_484a94;
        case 0x484a98u: goto label_484a98;
        case 0x484a9cu: goto label_484a9c;
        case 0x484aa0u: goto label_484aa0;
        case 0x484aa4u: goto label_484aa4;
        case 0x484aa8u: goto label_484aa8;
        case 0x484aacu: goto label_484aac;
        case 0x484ab0u: goto label_484ab0;
        case 0x484ab4u: goto label_484ab4;
        case 0x484ab8u: goto label_484ab8;
        case 0x484abcu: goto label_484abc;
        case 0x484ac0u: goto label_484ac0;
        case 0x484ac4u: goto label_484ac4;
        case 0x484ac8u: goto label_484ac8;
        case 0x484accu: goto label_484acc;
        case 0x484ad0u: goto label_484ad0;
        case 0x484ad4u: goto label_484ad4;
        case 0x484ad8u: goto label_484ad8;
        case 0x484adcu: goto label_484adc;
        case 0x484ae0u: goto label_484ae0;
        case 0x484ae4u: goto label_484ae4;
        case 0x484ae8u: goto label_484ae8;
        case 0x484aecu: goto label_484aec;
        case 0x484af0u: goto label_484af0;
        case 0x484af4u: goto label_484af4;
        case 0x484af8u: goto label_484af8;
        case 0x484afcu: goto label_484afc;
        case 0x484b00u: goto label_484b00;
        case 0x484b04u: goto label_484b04;
        case 0x484b08u: goto label_484b08;
        case 0x484b0cu: goto label_484b0c;
        case 0x484b10u: goto label_484b10;
        case 0x484b14u: goto label_484b14;
        case 0x484b18u: goto label_484b18;
        case 0x484b1cu: goto label_484b1c;
        case 0x484b20u: goto label_484b20;
        case 0x484b24u: goto label_484b24;
        case 0x484b28u: goto label_484b28;
        case 0x484b2cu: goto label_484b2c;
        case 0x484b30u: goto label_484b30;
        case 0x484b34u: goto label_484b34;
        case 0x484b38u: goto label_484b38;
        case 0x484b3cu: goto label_484b3c;
        case 0x484b40u: goto label_484b40;
        case 0x484b44u: goto label_484b44;
        case 0x484b48u: goto label_484b48;
        case 0x484b4cu: goto label_484b4c;
        case 0x484b50u: goto label_484b50;
        case 0x484b54u: goto label_484b54;
        case 0x484b58u: goto label_484b58;
        case 0x484b5cu: goto label_484b5c;
        case 0x484b60u: goto label_484b60;
        case 0x484b64u: goto label_484b64;
        case 0x484b68u: goto label_484b68;
        case 0x484b6cu: goto label_484b6c;
        case 0x484b70u: goto label_484b70;
        case 0x484b74u: goto label_484b74;
        case 0x484b78u: goto label_484b78;
        case 0x484b7cu: goto label_484b7c;
        case 0x484b80u: goto label_484b80;
        case 0x484b84u: goto label_484b84;
        case 0x484b88u: goto label_484b88;
        case 0x484b8cu: goto label_484b8c;
        case 0x484b90u: goto label_484b90;
        case 0x484b94u: goto label_484b94;
        case 0x484b98u: goto label_484b98;
        case 0x484b9cu: goto label_484b9c;
        case 0x484ba0u: goto label_484ba0;
        case 0x484ba4u: goto label_484ba4;
        case 0x484ba8u: goto label_484ba8;
        case 0x484bacu: goto label_484bac;
        case 0x484bb0u: goto label_484bb0;
        case 0x484bb4u: goto label_484bb4;
        case 0x484bb8u: goto label_484bb8;
        case 0x484bbcu: goto label_484bbc;
        case 0x484bc0u: goto label_484bc0;
        case 0x484bc4u: goto label_484bc4;
        case 0x484bc8u: goto label_484bc8;
        case 0x484bccu: goto label_484bcc;
        case 0x484bd0u: goto label_484bd0;
        case 0x484bd4u: goto label_484bd4;
        case 0x484bd8u: goto label_484bd8;
        case 0x484bdcu: goto label_484bdc;
        case 0x484be0u: goto label_484be0;
        case 0x484be4u: goto label_484be4;
        case 0x484be8u: goto label_484be8;
        case 0x484becu: goto label_484bec;
        case 0x484bf0u: goto label_484bf0;
        case 0x484bf4u: goto label_484bf4;
        case 0x484bf8u: goto label_484bf8;
        case 0x484bfcu: goto label_484bfc;
        case 0x484c00u: goto label_484c00;
        case 0x484c04u: goto label_484c04;
        case 0x484c08u: goto label_484c08;
        case 0x484c0cu: goto label_484c0c;
        case 0x484c10u: goto label_484c10;
        case 0x484c14u: goto label_484c14;
        case 0x484c18u: goto label_484c18;
        case 0x484c1cu: goto label_484c1c;
        case 0x484c20u: goto label_484c20;
        case 0x484c24u: goto label_484c24;
        case 0x484c28u: goto label_484c28;
        case 0x484c2cu: goto label_484c2c;
        case 0x484c30u: goto label_484c30;
        case 0x484c34u: goto label_484c34;
        case 0x484c38u: goto label_484c38;
        case 0x484c3cu: goto label_484c3c;
        case 0x484c40u: goto label_484c40;
        case 0x484c44u: goto label_484c44;
        case 0x484c48u: goto label_484c48;
        case 0x484c4cu: goto label_484c4c;
        case 0x484c50u: goto label_484c50;
        case 0x484c54u: goto label_484c54;
        case 0x484c58u: goto label_484c58;
        case 0x484c5cu: goto label_484c5c;
        case 0x484c60u: goto label_484c60;
        case 0x484c64u: goto label_484c64;
        case 0x484c68u: goto label_484c68;
        case 0x484c6cu: goto label_484c6c;
        case 0x484c70u: goto label_484c70;
        case 0x484c74u: goto label_484c74;
        case 0x484c78u: goto label_484c78;
        case 0x484c7cu: goto label_484c7c;
        case 0x484c80u: goto label_484c80;
        case 0x484c84u: goto label_484c84;
        case 0x484c88u: goto label_484c88;
        case 0x484c8cu: goto label_484c8c;
        case 0x484c90u: goto label_484c90;
        case 0x484c94u: goto label_484c94;
        case 0x484c98u: goto label_484c98;
        case 0x484c9cu: goto label_484c9c;
        case 0x484ca0u: goto label_484ca0;
        case 0x484ca4u: goto label_484ca4;
        case 0x484ca8u: goto label_484ca8;
        case 0x484cacu: goto label_484cac;
        case 0x484cb0u: goto label_484cb0;
        case 0x484cb4u: goto label_484cb4;
        case 0x484cb8u: goto label_484cb8;
        case 0x484cbcu: goto label_484cbc;
        case 0x484cc0u: goto label_484cc0;
        case 0x484cc4u: goto label_484cc4;
        case 0x484cc8u: goto label_484cc8;
        case 0x484cccu: goto label_484ccc;
        case 0x484cd0u: goto label_484cd0;
        case 0x484cd4u: goto label_484cd4;
        case 0x484cd8u: goto label_484cd8;
        case 0x484cdcu: goto label_484cdc;
        case 0x484ce0u: goto label_484ce0;
        case 0x484ce4u: goto label_484ce4;
        case 0x484ce8u: goto label_484ce8;
        case 0x484cecu: goto label_484cec;
        case 0x484cf0u: goto label_484cf0;
        case 0x484cf4u: goto label_484cf4;
        case 0x484cf8u: goto label_484cf8;
        case 0x484cfcu: goto label_484cfc;
        case 0x484d00u: goto label_484d00;
        case 0x484d04u: goto label_484d04;
        case 0x484d08u: goto label_484d08;
        case 0x484d0cu: goto label_484d0c;
        case 0x484d10u: goto label_484d10;
        case 0x484d14u: goto label_484d14;
        case 0x484d18u: goto label_484d18;
        case 0x484d1cu: goto label_484d1c;
        case 0x484d20u: goto label_484d20;
        case 0x484d24u: goto label_484d24;
        case 0x484d28u: goto label_484d28;
        case 0x484d2cu: goto label_484d2c;
        case 0x484d30u: goto label_484d30;
        case 0x484d34u: goto label_484d34;
        case 0x484d38u: goto label_484d38;
        case 0x484d3cu: goto label_484d3c;
        case 0x484d40u: goto label_484d40;
        case 0x484d44u: goto label_484d44;
        case 0x484d48u: goto label_484d48;
        case 0x484d4cu: goto label_484d4c;
        case 0x484d50u: goto label_484d50;
        case 0x484d54u: goto label_484d54;
        case 0x484d58u: goto label_484d58;
        case 0x484d5cu: goto label_484d5c;
        case 0x484d60u: goto label_484d60;
        case 0x484d64u: goto label_484d64;
        case 0x484d68u: goto label_484d68;
        case 0x484d6cu: goto label_484d6c;
        case 0x484d70u: goto label_484d70;
        case 0x484d74u: goto label_484d74;
        case 0x484d78u: goto label_484d78;
        case 0x484d7cu: goto label_484d7c;
        case 0x484d80u: goto label_484d80;
        case 0x484d84u: goto label_484d84;
        case 0x484d88u: goto label_484d88;
        case 0x484d8cu: goto label_484d8c;
        case 0x484d90u: goto label_484d90;
        case 0x484d94u: goto label_484d94;
        case 0x484d98u: goto label_484d98;
        case 0x484d9cu: goto label_484d9c;
        case 0x484da0u: goto label_484da0;
        case 0x484da4u: goto label_484da4;
        case 0x484da8u: goto label_484da8;
        case 0x484dacu: goto label_484dac;
        case 0x484db0u: goto label_484db0;
        case 0x484db4u: goto label_484db4;
        case 0x484db8u: goto label_484db8;
        case 0x484dbcu: goto label_484dbc;
        case 0x484dc0u: goto label_484dc0;
        case 0x484dc4u: goto label_484dc4;
        case 0x484dc8u: goto label_484dc8;
        case 0x484dccu: goto label_484dcc;
        case 0x484dd0u: goto label_484dd0;
        case 0x484dd4u: goto label_484dd4;
        case 0x484dd8u: goto label_484dd8;
        case 0x484ddcu: goto label_484ddc;
        case 0x484de0u: goto label_484de0;
        case 0x484de4u: goto label_484de4;
        case 0x484de8u: goto label_484de8;
        case 0x484decu: goto label_484dec;
        case 0x484df0u: goto label_484df0;
        case 0x484df4u: goto label_484df4;
        case 0x484df8u: goto label_484df8;
        case 0x484dfcu: goto label_484dfc;
        case 0x484e00u: goto label_484e00;
        case 0x484e04u: goto label_484e04;
        case 0x484e08u: goto label_484e08;
        case 0x484e0cu: goto label_484e0c;
        case 0x484e10u: goto label_484e10;
        case 0x484e14u: goto label_484e14;
        case 0x484e18u: goto label_484e18;
        case 0x484e1cu: goto label_484e1c;
        case 0x484e20u: goto label_484e20;
        case 0x484e24u: goto label_484e24;
        case 0x484e28u: goto label_484e28;
        case 0x484e2cu: goto label_484e2c;
        case 0x484e30u: goto label_484e30;
        case 0x484e34u: goto label_484e34;
        case 0x484e38u: goto label_484e38;
        case 0x484e3cu: goto label_484e3c;
        case 0x484e40u: goto label_484e40;
        case 0x484e44u: goto label_484e44;
        case 0x484e48u: goto label_484e48;
        case 0x484e4cu: goto label_484e4c;
        case 0x484e50u: goto label_484e50;
        case 0x484e54u: goto label_484e54;
        case 0x484e58u: goto label_484e58;
        case 0x484e5cu: goto label_484e5c;
        case 0x484e60u: goto label_484e60;
        case 0x484e64u: goto label_484e64;
        case 0x484e68u: goto label_484e68;
        case 0x484e6cu: goto label_484e6c;
        case 0x484e70u: goto label_484e70;
        case 0x484e74u: goto label_484e74;
        case 0x484e78u: goto label_484e78;
        case 0x484e7cu: goto label_484e7c;
        case 0x484e80u: goto label_484e80;
        case 0x484e84u: goto label_484e84;
        case 0x484e88u: goto label_484e88;
        case 0x484e8cu: goto label_484e8c;
        case 0x484e90u: goto label_484e90;
        case 0x484e94u: goto label_484e94;
        case 0x484e98u: goto label_484e98;
        case 0x484e9cu: goto label_484e9c;
        case 0x484ea0u: goto label_484ea0;
        case 0x484ea4u: goto label_484ea4;
        case 0x484ea8u: goto label_484ea8;
        case 0x484eacu: goto label_484eac;
        case 0x484eb0u: goto label_484eb0;
        case 0x484eb4u: goto label_484eb4;
        case 0x484eb8u: goto label_484eb8;
        case 0x484ebcu: goto label_484ebc;
        case 0x484ec0u: goto label_484ec0;
        case 0x484ec4u: goto label_484ec4;
        case 0x484ec8u: goto label_484ec8;
        case 0x484eccu: goto label_484ecc;
        case 0x484ed0u: goto label_484ed0;
        case 0x484ed4u: goto label_484ed4;
        case 0x484ed8u: goto label_484ed8;
        case 0x484edcu: goto label_484edc;
        default: break;
    }

    ctx->pc = 0x484a20u;

label_484a20:
    // 0x484a20: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x484a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_484a24:
    // 0x484a24: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x484a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_484a28:
    // 0x484a28: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x484a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_484a2c:
    // 0x484a2c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x484a2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_484a30:
    // 0x484a30: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x484a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_484a34:
    // 0x484a34: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x484a34u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_484a38:
    // 0x484a38: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x484a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_484a3c:
    // 0x484a3c: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x484a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_484a40:
    // 0x484a40: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x484a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_484a44:
    // 0x484a44: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x484a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_484a48:
    // 0x484a48: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x484a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_484a4c:
    // 0x484a4c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x484a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_484a50:
    // 0x484a50: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x484a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_484a54:
    // 0x484a54: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x484a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_484a58:
    // 0x484a58: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_484a5c:
    if (ctx->pc == 0x484A5Cu) {
        ctx->pc = 0x484A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484A58u;
        // 0x484a5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x484A60u;
        goto label_484a60;
    }
    ctx->pc = 0x484A58u;
    {
        const bool branch_taken_0x484a58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x484A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484A58u;
        // 0x484a5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x484a58) {
            ctx->pc = 0x484A70u;
            goto label_484a70;
        }
    }
    ctx->pc = 0x484A60u;
label_484a60:
    // 0x484a60: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x484a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_484a64:
    // 0x484a64: 0x8e340008  lw          $s4, 0x8($s1)
    ctx->pc = 0x484a64u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_484a68:
    // 0x484a68: 0x12820005  beq         $s4, $v0, . + 4 + (0x5 << 2)
label_484a6c:
    if (ctx->pc == 0x484A6Cu) {
        ctx->pc = 0x484A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484A68u;
        // 0x484a6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x484A70u;
        goto label_484a70;
    }
    ctx->pc = 0x484A68u;
    {
        const bool branch_taken_0x484a68 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x484A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484A68u;
        // 0x484a6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x484a68) {
            ctx->pc = 0x484A80u;
            goto label_484a80;
        }
    }
    ctx->pc = 0x484A70u;
label_484a70:
    // 0x484a70: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x484a70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_484a74:
    // 0x484a74: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x484a74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_484a78:
    // 0x484a78: 0x10000106  b           . + 4 + (0x106 << 2)
label_484a7c:
    if (ctx->pc == 0x484A7Cu) {
        ctx->pc = 0x484A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484A78u;
        // 0x484a7c: 0x3484000a  ori         $a0, $a0, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)10);
        ctx->in_delay_slot = false;
        ctx->pc = 0x484A80u;
        goto label_484a80;
    }
    ctx->pc = 0x484A78u;
    {
        const bool branch_taken_0x484a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x484A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484A78u;
        // 0x484a7c: 0x3484000a  ori         $a0, $a0, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)10);
        ctx->in_delay_slot = false;
        if (branch_taken_0x484a78) {
            ctx->pc = 0x484E94u;
            goto label_484e94;
        }
    }
    ctx->pc = 0x484A80u;
label_484a80:
    // 0x484a80: 0x8e32000c  lw          $s2, 0xC($s1)
    ctx->pc = 0x484a80u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_484a84:
    // 0x484a84: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x484a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_484a88:
    // 0x484a88: 0x1242000c  beq         $s2, $v0, . + 4 + (0xC << 2)
label_484a8c:
    if (ctx->pc == 0x484A8Cu) {
        ctx->pc = 0x484A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484A88u;
        // 0x484a8c: 0x2a420009  slti        $v0, $s2, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x484A90u;
        goto label_484a90;
    }
    ctx->pc = 0x484A88u;
    {
        const bool branch_taken_0x484a88 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x484A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484A88u;
        // 0x484a8c: 0x2a420009  slti        $v0, $s2, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x484a88) {
            ctx->pc = 0x484ABCu;
            goto label_484abc;
        }
    }
    ctx->pc = 0x484A90u;
label_484a90:
    // 0x484a90: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_484a94:
    if (ctx->pc == 0x484A94u) {
        ctx->pc = 0x484A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484A90u;
        // 0x484a94: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x484A98u;
        goto label_484a98;
    }
    ctx->pc = 0x484A90u;
    {
        const bool branch_taken_0x484a90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x484A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484A90u;
        // 0x484a94: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x484a90) {
            ctx->pc = 0x484AA8u;
            goto label_484aa8;
        }
    }
    ctx->pc = 0x484A98u;
label_484a98:
    // 0x484a98: 0x12420008  beq         $s2, $v0, . + 4 + (0x8 << 2)
label_484a9c:
    if (ctx->pc == 0x484A9Cu) {
        ctx->pc = 0x484A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484A98u;
        // 0x484a9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x484AA0u;
        goto label_484aa0;
    }
    ctx->pc = 0x484A98u;
    {
        const bool branch_taken_0x484a98 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x484A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484A98u;
        // 0x484a9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x484a98) {
            ctx->pc = 0x484ABCu;
            goto label_484abc;
        }
    }
    ctx->pc = 0x484AA0u;
label_484aa0:
    // 0x484aa0: 0x100000f9  b           . + 4 + (0xF9 << 2)
label_484aa4:
    if (ctx->pc == 0x484AA4u) {
        ctx->pc = 0x484AA8u;
        goto label_484aa8;
    }
    ctx->pc = 0x484AA0u;
    {
        const bool branch_taken_0x484aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x484aa0) {
            ctx->pc = 0x484E88u;
            goto label_484e88;
        }
    }
    ctx->pc = 0x484AA8u;
label_484aa8:
    // 0x484aa8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x484aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_484aac:
    // 0x484aac: 0x124200b5  beq         $s2, $v0, . + 4 + (0xB5 << 2)
label_484ab0:
    if (ctx->pc == 0x484AB0u) {
        ctx->pc = 0x484AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484AACu;
        // 0x484ab0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x484AB4u;
        goto label_484ab4;
    }
    ctx->pc = 0x484AACu;
    {
        const bool branch_taken_0x484aac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x484AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484AACu;
        // 0x484ab0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x484aac) {
            ctx->pc = 0x484D84u;
            goto label_484d84;
        }
    }
    ctx->pc = 0x484AB4u;
label_484ab4:
    // 0x484ab4: 0x100000f4  b           . + 4 + (0xF4 << 2)
label_484ab8:
    if (ctx->pc == 0x484AB8u) {
        ctx->pc = 0x484ABCu;
        goto label_484abc;
    }
    ctx->pc = 0x484AB4u;
    {
        const bool branch_taken_0x484ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x484ab4) {
            ctx->pc = 0x484E88u;
            goto label_484e88;
        }
    }
    ctx->pc = 0x484ABCu;
label_484abc:
    // 0x484abc: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x484abcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_484ac0:
    // 0x484ac0: 0x8f858968  lw          $a1, -0x7698($gp)
    ctx->pc = 0x484ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936936)));
label_484ac4:
    // 0x484ac4: 0x60b82d  daddu       $s7, $v1, $zero
    ctx->pc = 0x484ac4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_484ac8:
    // 0x484ac8: 0x8e330004  lw          $s3, 0x4($s1)
    ctx->pc = 0x484ac8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_484acc:
    // 0x484acc: 0x2463ad18  addiu       $v1, $v1, -0x52E8
    ctx->pc = 0x484accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946072));
label_484ad0:
    // 0x484ad0: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x484ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_484ad4:
    // 0x484ad4: 0x8c620118  lw          $v0, 0x118($v1)
    ctx->pc = 0x484ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 280)));
label_484ad8:
    // 0x484ad8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x484ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_484adc:
    // 0x484adc: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x484adcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_484ae0:
    // 0x484ae0: 0x40f809  jalr        $v0
label_484ae4:
    if (ctx->pc == 0x484AE4u) {
        ctx->pc = 0x484AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484AE0u;
        // 0x484ae4: 0x34a50018  ori         $a1, $a1, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)24);
        ctx->in_delay_slot = false;
        ctx->pc = 0x484AE8u;
        goto label_484ae8;
    }
    ctx->pc = 0x484AE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x484AE8u);
        ctx->pc = 0x484AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484AE0u;
        // 0x484ae4: 0x34a50018  ori         $a1, $a1, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)24);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x484AE0u, 0x484AE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x484AE8u;
label_484ae8:
    // 0x484ae8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x484ae8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_484aec:
    // 0x484aec: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_484af0:
    if (ctx->pc == 0x484AF0u) {
        ctx->pc = 0x484AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484AECu;
        // 0x484af0: 0x3c040053  lui         $a0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x484AF4u;
        goto label_484af4;
    }
    ctx->pc = 0x484AECu;
    {
        const bool branch_taken_0x484aec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x484AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484AECu;
        // 0x484af0: 0x3c040053  lui         $a0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x484aec) {
            ctx->pc = 0x484AFCu;
            goto label_484afc;
        }
    }
    ctx->pc = 0x484AF4u;
label_484af4:
    // 0x484af4: 0x1000000b  b           . + 4 + (0xB << 2)
label_484af8:
    if (ctx->pc == 0x484AF8u) {
        ctx->pc = 0x484AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484AF4u;
        // 0x484af8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x484AFCu;
        goto label_484afc;
    }
    ctx->pc = 0x484AF4u;
    {
        const bool branch_taken_0x484af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x484AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484AF4u;
        // 0x484af8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x484af4) {
            ctx->pc = 0x484B24u;
            goto label_484b24;
        }
    }
    ctx->pc = 0x484AFCu;
label_484afc:
    // 0x484afc: 0xae12000c  sw          $s2, 0xC($s0)
    ctx->pc = 0x484afcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 18));
label_484b00:
    // 0x484b00: 0xae130004  sw          $s3, 0x4($s0)
    ctx->pc = 0x484b00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
label_484b04:
    // 0x484b04: 0x2484ebd8  addiu       $a0, $a0, -0x1428
    ctx->pc = 0x484b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962136));
label_484b08:
    // 0x484b08: 0xae140008  sw          $s4, 0x8($s0)
    ctx->pc = 0x484b08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 20));
label_484b0c:
    // 0x484b0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x484b0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_484b10:
    // 0x484b10: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x484b10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_484b14:
    // 0x484b14: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x484b14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_484b18:
    // 0x484b18: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x484b18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_484b1c:
    // 0x484b1c: 0xc11ff8e  jal         func_47FE38
label_484b20:
    if (ctx->pc == 0x484B20u) {
        ctx->pc = 0x484B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484B1Cu;
        // 0x484b20: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x484B24u;
        goto label_484b24;
    }
    ctx->pc = 0x484B1Cu;
    SET_GPR_U32(ctx, 31, 0x484B24u);
    ctx->pc = 0x484B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x484B1Cu;
    // 0x484b20: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47FE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47FE38u, 0x484B1Cu, 0x484B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x484B24u;
label_484b24:
    // 0x484b24: 0x56400003  bnel        $s2, $zero, . + 4 + (0x3 << 2)
label_484b28:
    if (ctx->pc == 0x484B28u) {
        ctx->pc = 0x484B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484B24u;
        // 0x484b28: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x484B2Cu;
        goto label_484b2c;
    }
    ctx->pc = 0x484B24u;
    {
        const bool branch_taken_0x484b24 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x484b24) {
            ctx->pc = 0x484B28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x484B24u;
            // 0x484b28: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x484B34u;
            goto label_484b34;
        }
    }
    ctx->pc = 0x484B2Cu;
label_484b2c:
    // 0x484b2c: 0x100000e1  b           . + 4 + (0xE1 << 2)
label_484b30:
    if (ctx->pc == 0x484B30u) {
        ctx->pc = 0x484B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484B2Cu;
        // 0x484b30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x484B34u;
        goto label_484b34;
    }
    ctx->pc = 0x484B2Cu;
    {
        const bool branch_taken_0x484b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x484B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484B2Cu;
        // 0x484b30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x484b2c) {
            ctx->pc = 0x484EB4u;
            goto label_484eb4;
        }
    }
    ctx->pc = 0x484B34u;
label_484b34:
    // 0x484b34: 0x27b60010  addiu       $s6, $sp, 0x10
    ctx->pc = 0x484b34u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_484b38:
    // 0x484b38: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x484b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_484b3c:
    // 0x484b3c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x484b3cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_484b40:
    // 0x484b40: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_484b44:
    if (ctx->pc == 0x484B44u) {
        ctx->pc = 0x484B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484B40u;
        // 0x484b44: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x484B48u;
        goto label_484b48;
    }
    ctx->pc = 0x484B40u;
    {
        const bool branch_taken_0x484b40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x484B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484B40u;
        // 0x484b44: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x484b40) {
            ctx->pc = 0x484B54u;
            goto label_484b54;
        }
    }
    ctx->pc = 0x484B48u;
label_484b48:
    // 0x484b48: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x484b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_484b4c:
    // 0x484b4c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_484b50:
    if (ctx->pc == 0x484B50u) {
        ctx->pc = 0x484B54u;
        goto label_484b54;
    }
    ctx->pc = 0x484B4Cu;
    {
        const bool branch_taken_0x484b4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x484b4c) {
            ctx->pc = 0x484B58u;
            goto label_484b58;
        }
    }
    ctx->pc = 0x484B54u;
label_484b54:
    // 0x484b54: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x484b54u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_484b58:
    // 0x484b58: 0x12800006  beqz        $s4, . + 4 + (0x6 << 2)
label_484b5c:
    if (ctx->pc == 0x484B5Cu) {
        ctx->pc = 0x484B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484B58u;
        // 0x484b5c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x484B60u;
        goto label_484b60;
    }
    ctx->pc = 0x484B58u;
    {
        const bool branch_taken_0x484b58 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x484B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484B58u;
        // 0x484b5c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x484b58) {
            ctx->pc = 0x484B74u;
            goto label_484b74;
        }
    }
    ctx->pc = 0x484B60u;
label_484b60:
    // 0x484b60: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x484b60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
label_484b64:
    // 0x484b64: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x484b64u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
label_484b68:
    // 0x484b68: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x484b68u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
label_484b6c:
    // 0x484b6c: 0x10000003  b           . + 4 + (0x3 << 2)
label_484b70:
    if (ctx->pc == 0x484B70u) {
        ctx->pc = 0x484B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484B6Cu;
        // 0x484b70: 0x24620007  addiu       $v0, $v1, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x484B74u;
        goto label_484b74;
    }
    ctx->pc = 0x484B6Cu;
    {
        const bool branch_taken_0x484b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x484B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484B6Cu;
        // 0x484b70: 0x24620007  addiu       $v0, $v1, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x484b6c) {
            ctx->pc = 0x484B7Cu;
            goto label_484b7c;
        }
    }
    ctx->pc = 0x484B74u;
label_484b74:
    // 0x484b74: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x484b74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_484b78:
    // 0x484b78: 0x24620007  addiu       $v0, $v1, 0x7
    ctx->pc = 0x484b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
label_484b7c:
    // 0x484b7c: 0x8e460008  lw          $a2, 0x8($s2)
    ctx->pc = 0x484b7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_484b80:
    // 0x484b80: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x484b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_484b84:
    // 0x484b84: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x484b84u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_484b88:
    // 0x484b88: 0x2404fffc  addiu       $a0, $zero, -0x4
    ctx->pc = 0x484b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_484b8c:
    // 0x484b8c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x484b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_484b90:
    // 0x484b90: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x484b90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_484b94:
    // 0x484b94: 0x34a50018  ori         $a1, $a1, 0x18
    ctx->pc = 0x484b94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)24);
label_484b98:
    // 0x484b98: 0x26e3ad18  addiu       $v1, $s7, -0x52E8
    ctx->pc = 0x484b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294946072));
label_484b9c:
    // 0x484b9c: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x484b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_484ba0:
    // 0x484ba0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x484ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_484ba4:
    // 0x484ba4: 0x469818  mult        $s3, $v0, $a2
    ctx->pc = 0x484ba4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
label_484ba8:
    // 0x484ba8: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x484ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
label_484bac:
    // 0x484bac: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x484bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_484bb0:
    // 0x484bb0: 0x2678021  addu        $s0, $s3, $a3
    ctx->pc = 0x484bb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
label_484bb4:
    // 0x484bb4: 0x40f809  jalr        $v0
label_484bb8:
    if (ctx->pc == 0x484BB8u) {
        ctx->pc = 0x484BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484BB4u;
        // 0x484bb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x484BBCu;
        goto label_484bbc;
    }
    ctx->pc = 0x484BB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x484BBCu);
        ctx->pc = 0x484BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484BB4u;
        // 0x484bb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x484BB4u, 0x484BBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x484BBCu;
label_484bbc:
    // 0x484bbc: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_484bc0:
    if (ctx->pc == 0x484BC0u) {
        ctx->pc = 0x484BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484BBCu;
        // 0x484bc0: 0xae420014  sw          $v0, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x484BC4u;
        goto label_484bc4;
    }
    ctx->pc = 0x484BBCu;
    {
        const bool branch_taken_0x484bbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x484BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484BBCu;
        // 0x484bc0: 0xae420014  sw          $v0, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x484bbc) {
            ctx->pc = 0x484BF0u;
            goto label_484bf0;
        }
    }
    ctx->pc = 0x484BC4u;
label_484bc4:
    // 0x484bc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x484bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_484bc8:
    // 0x484bc8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x484bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_484bcc:
    // 0x484bcc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x484bccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_484bd0:
    // 0x484bd0: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x484bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
label_484bd4:
    // 0x484bd4: 0xc11eff2  jal         func_47BFC8
label_484bd8:
    if (ctx->pc == 0x484BD8u) {
        ctx->pc = 0x484BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484BD4u;
        // 0x484bd8: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x484BDCu;
        goto label_484bdc;
    }
    ctx->pc = 0x484BD4u;
    SET_GPR_U32(ctx, 31, 0x484BDCu);
    ctx->pc = 0x484BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x484BD4u;
    // 0x484bd8: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x484BD4u, 0x484BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x484BDCu;
label_484bdc:
    // 0x484bdc: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x484bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_484be0:
    // 0x484be0: 0xc11f024  jal         func_47C090
label_484be4:
    if (ctx->pc == 0x484BE4u) {
        ctx->pc = 0x484BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484BE0u;
        // 0x484be4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x484BE8u;
        goto label_484be8;
    }
    ctx->pc = 0x484BE0u;
    SET_GPR_U32(ctx, 31, 0x484BE8u);
    ctx->pc = 0x484BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x484BE0u;
    // 0x484be4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x484BE0u, 0x484BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x484BE8u;
label_484be8:
    // 0x484be8: 0x10000008  b           . + 4 + (0x8 << 2)
label_484bec:
    if (ctx->pc == 0x484BECu) {
        ctx->pc = 0x484BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484BE8u;
        // 0x484bec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x484BF0u;
        goto label_484bf0;
    }
    ctx->pc = 0x484BE8u;
    {
        const bool branch_taken_0x484be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x484BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484BE8u;
        // 0x484bec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x484be8) {
            ctx->pc = 0x484C0Cu;
            goto label_484c0c;
        }
    }
    ctx->pc = 0x484BF0u;
label_484bf0:
    // 0x484bf0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x484bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_484bf4:
    // 0x484bf4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x484bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_484bf8:
    // 0x484bf8: 0x14100a  movz        $v0, $zero, $s4
    ctx->pc = 0x484bf8u;
    if (GPR_U64(ctx, 20) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_484bfc:
    // 0x484bfc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x484bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_484c00:
    // 0x484c00: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x484c00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_484c04:
    // 0x484c04: 0xae420018  sw          $v0, 0x18($s2)
    ctx->pc = 0x484c04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
label_484c08:
    // 0x484c08: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x484c08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_484c0c:
    // 0x484c0c: 0x54800014  bnel        $a0, $zero, . + 4 + (0x14 << 2)
label_484c10:
    if (ctx->pc == 0x484C10u) {
        ctx->pc = 0x484C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484C0Cu;
        // 0x484c10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x484C14u;
        goto label_484c14;
    }
    ctx->pc = 0x484C0Cu;
    {
        const bool branch_taken_0x484c0c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x484c0c) {
            ctx->pc = 0x484C10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x484C0Cu;
            // 0x484c10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x484C60u;
            goto label_484c60;
        }
    }
    ctx->pc = 0x484C14u;
label_484c14:
    // 0x484c14: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x484c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_484c18:
    // 0x484c18: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x484c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_484c1c:
    // 0x484c1c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_484c20:
    if (ctx->pc == 0x484C20u) {
        ctx->pc = 0x484C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484C1Cu;
        // 0x484c20: 0x3c040053  lui         $a0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x484C24u;
        goto label_484c24;
    }
    ctx->pc = 0x484C1Cu;
    {
        const bool branch_taken_0x484c1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x484C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484C1Cu;
        // 0x484c20: 0x3c040053  lui         $a0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x484c1c) {
            ctx->pc = 0x484C30u;
            goto label_484c30;
        }
    }
    ctx->pc = 0x484C24u;
label_484c24:
    // 0x484c24: 0xc1216aa  jal         func_485AA8
label_484c28:
    if (ctx->pc == 0x484C28u) {
        ctx->pc = 0x484C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484C24u;
        // 0x484c28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x484C2Cu;
        goto label_484c2c;
    }
    ctx->pc = 0x484C24u;
    SET_GPR_U32(ctx, 31, 0x484C2Cu);
    ctx->pc = 0x484C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x484C24u;
    // 0x484c28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x485AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485AA8u, 0x484C24u, 0x484C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x484C2Cu;
label_484c2c:
    // 0x484c2c: 0x3c040053  lui         $a0, 0x53
    ctx->pc = 0x484c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
label_484c30:
    // 0x484c30: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x484c30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_484c34:
    // 0x484c34: 0xc11ffb4  jal         func_47FED0
label_484c38:
    if (ctx->pc == 0x484C38u) {
        ctx->pc = 0x484C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484C34u;
        // 0x484c38: 0x2484ebd8  addiu       $a0, $a0, -0x1428 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962136));
        ctx->in_delay_slot = false;
        ctx->pc = 0x484C3Cu;
        goto label_484c3c;
    }
    ctx->pc = 0x484C34u;
    SET_GPR_U32(ctx, 31, 0x484C3Cu);
    ctx->pc = 0x484C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x484C34u;
    // 0x484c38: 0x2484ebd8  addiu       $a0, $a0, -0x1428 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47FED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47FED0u, 0x484C34u, 0x484C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x484C3Cu;
label_484c3c:
    // 0x484c3c: 0x8f838968  lw          $v1, -0x7698($gp)
    ctx->pc = 0x484c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936936)));
label_484c40:
    // 0x484c40: 0x26e4ad18  addiu       $a0, $s7, -0x52E8
    ctx->pc = 0x484c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294946072));
label_484c44:
    // 0x484c44: 0x8c82011c  lw          $v0, 0x11C($a0)
    ctx->pc = 0x484c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 284)));
label_484c48:
    // 0x484c48: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x484c48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_484c4c:
    // 0x484c4c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x484c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_484c50:
    // 0x484c50: 0x40f809  jalr        $v0
label_484c54:
    if (ctx->pc == 0x484C54u) {
        ctx->pc = 0x484C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484C50u;
        // 0x484c54: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x484C58u;
        goto label_484c58;
    }
    ctx->pc = 0x484C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x484C58u);
        ctx->pc = 0x484C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484C50u;
        // 0x484c54: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x484C50u, 0x484C58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x484C58u;
label_484c58:
    // 0x484c58: 0x10000096  b           . + 4 + (0x96 << 2)
label_484c5c:
    if (ctx->pc == 0x484C5Cu) {
        ctx->pc = 0x484C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484C58u;
        // 0x484c5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x484C60u;
        goto label_484c60;
    }
    ctx->pc = 0x484C58u;
    {
        const bool branch_taken_0x484c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x484C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484C58u;
        // 0x484c5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x484c58) {
            ctx->pc = 0x484EB4u;
            goto label_484eb4;
        }
    }
    ctx->pc = 0x484C60u;
label_484c60:
    // 0x484c60: 0xc1216be  jal         func_485AF8
label_484c64:
    if (ctx->pc == 0x484C64u) {
        ctx->pc = 0x484C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484C60u;
        // 0x484c64: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x484C68u;
        goto label_484c68;
    }
    ctx->pc = 0x484C60u;
    SET_GPR_U32(ctx, 31, 0x484C68u);
    ctx->pc = 0x484C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x484C60u;
    // 0x484c64: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x485AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485AF8u, 0x484C60u, 0x484C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x484C68u;
label_484c68:
    // 0x484c68: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x484c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_484c6c:
    // 0x484c6c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x484c6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_484c70:
    // 0x484c70: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_484c74:
    if (ctx->pc == 0x484C74u) {
        ctx->pc = 0x484C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484C70u;
        // 0x484c74: 0x26e3ad18  addiu       $v1, $s7, -0x52E8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294946072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x484C78u;
        goto label_484c78;
    }
    ctx->pc = 0x484C70u;
    {
        const bool branch_taken_0x484c70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x484C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484C70u;
        // 0x484c74: 0x26e3ad18  addiu       $v1, $s7, -0x52E8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294946072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x484c70) {
            ctx->pc = 0x484C9Cu;
            goto label_484c9c;
        }
    }
    ctx->pc = 0x484C78u;
label_484c78:
    // 0x484c78: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x484c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_484c7c:
    // 0x484c7c: 0x40f809  jalr        $v0
label_484c80:
    if (ctx->pc == 0x484C80u) {
        ctx->pc = 0x484C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484C7Cu;
        // 0x484c80: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x484C84u;
        goto label_484c84;
    }
    ctx->pc = 0x484C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x484C84u);
        ctx->pc = 0x484C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484C7Cu;
        // 0x484c80: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x484C7Cu, 0x484C84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x484C84u;
label_484c84:
    // 0x484c84: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x484c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_484c88:
    // 0x484c88: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x484c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_484c8c:
    // 0x484c8c: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x484c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_484c90:
    // 0x484c90: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x484c90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_484c94:
    // 0x484c94: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x484c94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
label_484c98:
    // 0x484c98: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x484c98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_484c9c:
    // 0x484c9c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x484c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_484ca0:
    // 0x484ca0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x484ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_484ca4:
    // 0x484ca4: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x484ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_484ca8:
    // 0x484ca8: 0x2404fffc  addiu       $a0, $zero, -0x4
    ctx->pc = 0x484ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_484cac:
    // 0x484cac: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x484cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
label_484cb0:
    // 0x484cb0: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x484cb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_484cb4:
    // 0x484cb4: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x484cb4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_484cb8:
    // 0x484cb8: 0x26e7ad18  addiu       $a3, $s7, -0x52E8
    ctx->pc = 0x484cb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 4294946072));
label_484cbc:
    // 0x484cbc: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x484cbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_484cc0:
    // 0x484cc0: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x484cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_484cc4:
    // 0x484cc4: 0x34a50018  ori         $a1, $a1, 0x18
    ctx->pc = 0x484cc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)24);
label_484cc8:
    // 0x484cc8: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x484cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_484ccc:
    // 0x484ccc: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x484cccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_484cd0:
    // 0x484cd0: 0x468018  mult        $s0, $v0, $a2
    ctx->pc = 0x484cd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_484cd4:
    // 0x484cd4: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x484cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_484cd8:
    // 0x484cd8: 0x8ce20108  lw          $v0, 0x108($a3)
    ctx->pc = 0x484cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 264)));
label_484cdc:
    // 0x484cdc: 0x40f809  jalr        $v0
label_484ce0:
    if (ctx->pc == 0x484CE0u) {
        ctx->pc = 0x484CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484CDCu;
        // 0x484ce0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x484CE4u;
        goto label_484ce4;
    }
    ctx->pc = 0x484CDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x484CE4u);
        ctx->pc = 0x484CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484CDCu;
        // 0x484ce0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x484CDCu, 0x484CE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x484CE4u;
label_484ce4:
    // 0x484ce4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_484ce8:
    if (ctx->pc == 0x484CE8u) {
        ctx->pc = 0x484CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484CE4u;
        // 0x484ce8: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x484CECu;
        goto label_484cec;
    }
    ctx->pc = 0x484CE4u;
    {
        const bool branch_taken_0x484ce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x484CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484CE4u;
        // 0x484ce8: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x484ce4) {
            ctx->pc = 0x484D18u;
            goto label_484d18;
        }
    }
    ctx->pc = 0x484CECu;
label_484cec:
    // 0x484cec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x484cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_484cf0:
    // 0x484cf0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x484cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_484cf4:
    // 0x484cf4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x484cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_484cf8:
    // 0x484cf8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x484cf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_484cfc:
    // 0x484cfc: 0xc11eff2  jal         func_47BFC8
label_484d00:
    if (ctx->pc == 0x484D00u) {
        ctx->pc = 0x484D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484CFCu;
        // 0x484d00: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x484D04u;
        goto label_484d04;
    }
    ctx->pc = 0x484CFCu;
    SET_GPR_U32(ctx, 31, 0x484D04u);
    ctx->pc = 0x484D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x484CFCu;
    // 0x484d00: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x484CFCu, 0x484D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x484D04u;
label_484d04:
    // 0x484d04: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x484d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_484d08:
    // 0x484d08: 0xc11f024  jal         func_47C090
label_484d0c:
    if (ctx->pc == 0x484D0Cu) {
        ctx->pc = 0x484D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484D08u;
        // 0x484d0c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x484D10u;
        goto label_484d10;
    }
    ctx->pc = 0x484D08u;
    SET_GPR_U32(ctx, 31, 0x484D10u);
    ctx->pc = 0x484D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x484D08u;
    // 0x484d0c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x484D08u, 0x484D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x484D10u;
label_484d10:
    // 0x484d10: 0x10000006  b           . + 4 + (0x6 << 2)
label_484d14:
    if (ctx->pc == 0x484D14u) {
        ctx->pc = 0x484D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484D10u;
        // 0x484d14: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x484D18u;
        goto label_484d18;
    }
    ctx->pc = 0x484D10u;
    {
        const bool branch_taken_0x484d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x484D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484D10u;
        // 0x484d14: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x484d10) {
            ctx->pc = 0x484D2Cu;
            goto label_484d2c;
        }
    }
    ctx->pc = 0x484D18u;
label_484d18:
    // 0x484d18: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x484d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_484d1c:
    // 0x484d1c: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x484d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
label_484d20:
    // 0x484d20: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x484d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_484d24:
    // 0x484d24: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x484d24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_484d28:
    // 0x484d28: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x484d28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_484d2c:
    // 0x484d2c: 0xc1216be  jal         func_485AF8
label_484d30:
    if (ctx->pc == 0x484D30u) {
        ctx->pc = 0x484D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484D2Cu;
        // 0x484d30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x484D34u;
        goto label_484d34;
    }
    ctx->pc = 0x484D2Cu;
    SET_GPR_U32(ctx, 31, 0x484D34u);
    ctx->pc = 0x484D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x484D2Cu;
    // 0x484d30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x485AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485AF8u, 0x484D2Cu, 0x484D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x484D34u;
label_484d34:
    // 0x484d34: 0x26f0ad18  addiu       $s0, $s7, -0x52E8
    ctx->pc = 0x484d34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4294946072));
label_484d38:
    // 0x484d38: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x484d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_484d3c:
    // 0x484d3c: 0x40f809  jalr        $v0
label_484d40:
    if (ctx->pc == 0x484D40u) {
        ctx->pc = 0x484D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484D3Cu;
        // 0x484d40: 0x8e440014  lw          $a0, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x484D44u;
        goto label_484d44;
    }
    ctx->pc = 0x484D3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x484D44u);
        ctx->pc = 0x484D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484D3Cu;
        // 0x484d40: 0x8e440014  lw          $a0, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x484D3Cu, 0x484D44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x484D44u;
label_484d44:
    // 0x484d44: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x484d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_484d48:
    // 0x484d48: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x484d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_484d4c:
    // 0x484d4c: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x484d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
label_484d50:
    // 0x484d50: 0x3c040053  lui         $a0, 0x53
    ctx->pc = 0x484d50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
label_484d54:
    // 0x484d54: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x484d54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_484d58:
    // 0x484d58: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x484d58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
label_484d5c:
    // 0x484d5c: 0x2484ebd8  addiu       $a0, $a0, -0x1428
    ctx->pc = 0x484d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962136));
label_484d60:
    // 0x484d60: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x484d60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_484d64:
    // 0x484d64: 0xc11ffb4  jal         func_47FED0
label_484d68:
    if (ctx->pc == 0x484D68u) {
        ctx->pc = 0x484D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484D64u;
        // 0x484d68: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x484D6Cu;
        goto label_484d6c;
    }
    ctx->pc = 0x484D64u;
    SET_GPR_U32(ctx, 31, 0x484D6Cu);
    ctx->pc = 0x484D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x484D64u;
    // 0x484d68: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47FED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47FED0u, 0x484D64u, 0x484D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x484D6Cu;
label_484d6c:
    // 0x484d6c: 0x8f838968  lw          $v1, -0x7698($gp)
    ctx->pc = 0x484d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936936)));
label_484d70:
    // 0x484d70: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x484d70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_484d74:
    // 0x484d74: 0x8e02011c  lw          $v0, 0x11C($s0)
    ctx->pc = 0x484d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
label_484d78:
    // 0x484d78: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x484d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_484d7c:
    // 0x484d7c: 0x40f809  jalr        $v0
label_484d80:
    if (ctx->pc == 0x484D80u) {
        ctx->pc = 0x484D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484D7Cu;
        // 0x484d80: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x484D84u;
        goto label_484d84;
    }
    ctx->pc = 0x484D7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x484D84u);
        ctx->pc = 0x484D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484D7Cu;
        // 0x484d80: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x484D7Cu, 0x484D84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x484D84u;
label_484d84:
    // 0x484d84: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x484d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_484d88:
    // 0x484d88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x484d88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_484d8c:
    // 0x484d8c: 0x8ea80014  lw          $t0, 0x14($s5)
    ctx->pc = 0x484d8cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_484d90:
    // 0x484d90: 0x8eaa0018  lw          $t2, 0x18($s5)
    ctx->pc = 0x484d90u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_484d94:
    // 0x484d94: 0x18400046  blez        $v0, . + 4 + (0x46 << 2)
label_484d98:
    if (ctx->pc == 0x484D98u) {
        ctx->pc = 0x484D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484D94u;
        // 0x484d98: 0x8e290014  lw          $t1, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x484D9Cu;
        goto label_484d9c;
    }
    ctx->pc = 0x484D94u;
    {
        const bool branch_taken_0x484d94 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x484D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484D94u;
        // 0x484d98: 0x8e290014  lw          $t1, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x484d94) {
            ctx->pc = 0x484EB0u;
            goto label_484eb0;
        }
    }
    ctx->pc = 0x484D9Cu;
label_484d9c:
    // 0x484d9c: 0x240d0008  addiu       $t5, $zero, 0x8
    ctx->pc = 0x484d9cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_484da0:
    // 0x484da0: 0x240c0004  addiu       $t4, $zero, 0x4
    ctx->pc = 0x484da0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_484da4:
    // 0x484da4: 0x240b0020  addiu       $t3, $zero, 0x20
    ctx->pc = 0x484da4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_484da8:
    // 0x484da8: 0x8ea3000c  lw          $v1, 0xC($s5)
    ctx->pc = 0x484da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_484dac:
    // 0x484dac: 0x106d000c  beq         $v1, $t5, . + 4 + (0xC << 2)
label_484db0:
    if (ctx->pc == 0x484DB0u) {
        ctx->pc = 0x484DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484DACu;
        // 0x484db0: 0x120302d  daddu       $a2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x484DB4u;
        goto label_484db4;
    }
    ctx->pc = 0x484DACu;
    {
        const bool branch_taken_0x484dac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 13));
        ctx->pc = 0x484DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484DACu;
        // 0x484db0: 0x120302d  daddu       $a2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x484dac) {
            ctx->pc = 0x484DE0u;
            goto label_484de0;
        }
    }
    ctx->pc = 0x484DB4u;
label_484db4:
    // 0x484db4: 0x28620009  slti        $v0, $v1, 0x9
    ctx->pc = 0x484db4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
label_484db8:
    // 0x484db8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_484dbc:
    if (ctx->pc == 0x484DBCu) {
        ctx->pc = 0x484DC0u;
        goto label_484dc0;
    }
    ctx->pc = 0x484DB8u;
    {
        const bool branch_taken_0x484db8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x484db8) {
            ctx->pc = 0x484DD0u;
            goto label_484dd0;
        }
    }
    ctx->pc = 0x484DC0u;
label_484dc0:
    // 0x484dc0: 0x106c0007  beq         $v1, $t4, . + 4 + (0x7 << 2)
label_484dc4:
    if (ctx->pc == 0x484DC4u) {
        ctx->pc = 0x484DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484DC0u;
        // 0x484dc4: 0x24a70001  addiu       $a3, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x484DC8u;
        goto label_484dc8;
    }
    ctx->pc = 0x484DC0u;
    {
        const bool branch_taken_0x484dc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 12));
        ctx->pc = 0x484DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484DC0u;
        // 0x484dc4: 0x24a70001  addiu       $a3, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x484dc0) {
            ctx->pc = 0x484DE0u;
            goto label_484de0;
        }
    }
    ctx->pc = 0x484DC8u;
label_484dc8:
    // 0x484dc8: 0x10000026  b           . + 4 + (0x26 << 2)
label_484dcc:
    if (ctx->pc == 0x484DCCu) {
        ctx->pc = 0x484DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484DC8u;
        // 0x484dcc: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x484DD0u;
        goto label_484dd0;
    }
    ctx->pc = 0x484DC8u;
    {
        const bool branch_taken_0x484dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x484DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484DC8u;
        // 0x484dcc: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x484dc8) {
            ctx->pc = 0x484E64u;
            goto label_484e64;
        }
    }
    ctx->pc = 0x484DD0u;
label_484dd0:
    // 0x484dd0: 0x106b0016  beq         $v1, $t3, . + 4 + (0x16 << 2)
label_484dd4:
    if (ctx->pc == 0x484DD4u) {
        ctx->pc = 0x484DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484DD0u;
        // 0x484dd4: 0x24a70001  addiu       $a3, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x484DD8u;
        goto label_484dd8;
    }
    ctx->pc = 0x484DD0u;
    {
        const bool branch_taken_0x484dd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 11));
        ctx->pc = 0x484DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484DD0u;
        // 0x484dd4: 0x24a70001  addiu       $a3, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x484dd0) {
            ctx->pc = 0x484E2Cu;
            goto label_484e2c;
        }
    }
    ctx->pc = 0x484DD8u;
label_484dd8:
    // 0x484dd8: 0x10000022  b           . + 4 + (0x22 << 2)
label_484ddc:
    if (ctx->pc == 0x484DDCu) {
        ctx->pc = 0x484DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484DD8u;
        // 0x484ddc: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x484DE0u;
        goto label_484de0;
    }
    ctx->pc = 0x484DD8u;
    {
        const bool branch_taken_0x484dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x484DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484DD8u;
        // 0x484ddc: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x484dd8) {
            ctx->pc = 0x484E64u;
            goto label_484e64;
        }
    }
    ctx->pc = 0x484DE0u;
label_484de0:
    // 0x484de0: 0x24a70001  addiu       $a3, $a1, 0x1
    ctx->pc = 0x484de0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_484de4:
    // 0x484de4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x484de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_484de8:
    // 0x484de8: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x484de8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_484dec:
    // 0x484dec: 0x1840001c  blez        $v0, . + 4 + (0x1C << 2)
label_484df0:
    if (ctx->pc == 0x484DF0u) {
        ctx->pc = 0x484DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484DECu;
        // 0x484df0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x484DF4u;
        goto label_484df4;
    }
    ctx->pc = 0x484DECu;
    {
        const bool branch_taken_0x484dec = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x484DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484DECu;
        // 0x484df0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x484dec) {
            ctx->pc = 0x484E60u;
            goto label_484e60;
        }
    }
    ctx->pc = 0x484DF4u;
label_484df4:
    // 0x484df4: 0x0  nop
    ctx->pc = 0x484df4u;
    // NOP
label_484df8:
    // 0x484df8: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x484df8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_484dfc:
    // 0x484dfc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x484dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_484e00:
    // 0x484e00: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x484e00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_484e04:
    // 0x484e04: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x484e04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_484e08:
    // 0x484e08: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x484e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_484e0c:
    // 0x484e0c: 0x90430003  lbu         $v1, 0x3($v0)
    ctx->pc = 0x484e0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_484e10:
    // 0x484e10: 0xa0c30003  sb          $v1, 0x3($a2)
    ctx->pc = 0x484e10u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 3));
label_484e14:
    // 0x484e14: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x484e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_484e18:
    // 0x484e18: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x484e18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_484e1c:
    // 0x484e1c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_484e20:
    if (ctx->pc == 0x484E20u) {
        ctx->pc = 0x484E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484E1Cu;
        // 0x484e20: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x484E24u;
        goto label_484e24;
    }
    ctx->pc = 0x484E1Cu;
    {
        const bool branch_taken_0x484e1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x484E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484E1Cu;
        // 0x484e20: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x484e1c) {
            ctx->pc = 0x484DF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_484df8;
        }
    }
    ctx->pc = 0x484E24u;
label_484e24:
    // 0x484e24: 0x1000000f  b           . + 4 + (0xF << 2)
label_484e28:
    if (ctx->pc == 0x484E28u) {
        ctx->pc = 0x484E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484E24u;
        // 0x484e28: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x484E2Cu;
        goto label_484e2c;
    }
    ctx->pc = 0x484E24u;
    {
        const bool branch_taken_0x484e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x484E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484E24u;
        // 0x484e28: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x484e24) {
            ctx->pc = 0x484E64u;
            goto label_484e64;
        }
    }
    ctx->pc = 0x484E2Cu;
label_484e2c:
    // 0x484e2c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x484e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_484e30:
    // 0x484e30: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x484e30u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_484e34:
    // 0x484e34: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
label_484e38:
    if (ctx->pc == 0x484E38u) {
        ctx->pc = 0x484E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484E34u;
        // 0x484e38: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x484E3Cu;
        goto label_484e3c;
    }
    ctx->pc = 0x484E34u;
    {
        const bool branch_taken_0x484e34 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x484E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484E34u;
        // 0x484e38: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x484e34) {
            ctx->pc = 0x484E60u;
            goto label_484e60;
        }
    }
    ctx->pc = 0x484E3Cu;
label_484e3c:
    // 0x484e3c: 0x0  nop
    ctx->pc = 0x484e3cu;
    // NOP
label_484e40:
    // 0x484e40: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x484e40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
label_484e44:
    // 0x484e44: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x484e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_484e48:
    // 0x484e48: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x484e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_484e4c:
    // 0x484e4c: 0xa0c20003  sb          $v0, 0x3($a2)
    ctx->pc = 0x484e4cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 2));
label_484e50:
    // 0x484e50: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x484e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_484e54:
    // 0x484e54: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x484e54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_484e58:
    // 0x484e58: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_484e5c:
    if (ctx->pc == 0x484E5Cu) {
        ctx->pc = 0x484E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484E58u;
        // 0x484e5c: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x484E60u;
        goto label_484e60;
    }
    ctx->pc = 0x484E58u;
    {
        const bool branch_taken_0x484e58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x484E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484E58u;
        // 0x484e5c: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x484e58) {
            ctx->pc = 0x484E40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_484e40;
        }
    }
    ctx->pc = 0x484E60u;
label_484e60:
    // 0x484e60: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x484e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_484e64:
    // 0x484e64: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x484e64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_484e68:
    // 0x484e68: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x484e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_484e6c:
    // 0x484e6c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x484e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_484e70:
    // 0x484e70: 0x1244821  addu        $t1, $t1, $a0
    ctx->pc = 0x484e70u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_484e74:
    // 0x484e74: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x484e74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_484e78:
    // 0x484e78: 0x1440ffcb  bnez        $v0, . + 4 + (-0x35 << 2)
label_484e7c:
    if (ctx->pc == 0x484E7Cu) {
        ctx->pc = 0x484E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484E78u;
        // 0x484e7c: 0x1034021  addu        $t0, $t0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x484E80u;
        goto label_484e80;
    }
    ctx->pc = 0x484E78u;
    {
        const bool branch_taken_0x484e78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x484E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484E78u;
        // 0x484e7c: 0x1034021  addu        $t0, $t0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x484e78) {
            ctx->pc = 0x484DA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_484da8;
        }
    }
    ctx->pc = 0x484E80u;
label_484e80:
    // 0x484e80: 0x1000000c  b           . + 4 + (0xC << 2)
label_484e84:
    if (ctx->pc == 0x484E84u) {
        ctx->pc = 0x484E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484E80u;
        // 0x484e84: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x484E88u;
        goto label_484e88;
    }
    ctx->pc = 0x484E80u;
    {
        const bool branch_taken_0x484e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x484E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484E80u;
        // 0x484e84: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x484e80) {
            ctx->pc = 0x484EB4u;
            goto label_484eb4;
        }
    }
    ctx->pc = 0x484E88u;
label_484e88:
    // 0x484e88: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x484e88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_484e8c:
    // 0x484e8c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x484e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_484e90:
    // 0x484e90: 0x34840009  ori         $a0, $a0, 0x9
    ctx->pc = 0x484e90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)9);
label_484e94:
    // 0x484e94: 0xc11eff2  jal         func_47BFC8
label_484e98:
    if (ctx->pc == 0x484E98u) {
        ctx->pc = 0x484E9Cu;
        goto label_484e9c;
    }
    ctx->pc = 0x484E94u;
    SET_GPR_U32(ctx, 31, 0x484E9Cu);
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x484E94u, 0x484E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x484E9Cu;
label_484e9c:
    // 0x484e9c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x484e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_484ea0:
    // 0x484ea0: 0xc11f024  jal         func_47C090
label_484ea4:
    if (ctx->pc == 0x484EA4u) {
        ctx->pc = 0x484EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484EA0u;
        // 0x484ea4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x484EA8u;
        goto label_484ea8;
    }
    ctx->pc = 0x484EA0u;
    SET_GPR_U32(ctx, 31, 0x484EA8u);
    ctx->pc = 0x484EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x484EA0u;
    // 0x484ea4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x484EA0u, 0x484EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x484EA8u;
label_484ea8:
    // 0x484ea8: 0x10000002  b           . + 4 + (0x2 << 2)
label_484eac:
    if (ctx->pc == 0x484EACu) {
        ctx->pc = 0x484EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484EA8u;
        // 0x484eac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x484EB0u;
        goto label_484eb0;
    }
    ctx->pc = 0x484EA8u;
    {
        const bool branch_taken_0x484ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x484EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484EA8u;
        // 0x484eac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x484ea8) {
            ctx->pc = 0x484EB4u;
            goto label_484eb4;
        }
    }
    ctx->pc = 0x484EB0u;
label_484eb0:
    // 0x484eb0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x484eb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_484eb4:
    // 0x484eb4: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x484eb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_484eb8:
    // 0x484eb8: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x484eb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_484ebc:
    // 0x484ebc: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x484ebcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_484ec0:
    // 0x484ec0: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x484ec0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_484ec4:
    // 0x484ec4: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x484ec4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_484ec8:
    // 0x484ec8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x484ec8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_484ecc:
    // 0x484ecc: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x484eccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_484ed0:
    // 0x484ed0: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x484ed0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_484ed4:
    // 0x484ed4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x484ed4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_484ed8:
    // 0x484ed8: 0x3e00008  jr          $ra
label_484edc:
    if (ctx->pc == 0x484EDCu) {
        ctx->pc = 0x484EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484ED8u;
        // 0x484edc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x484EE0u;
        goto label_fallthrough_0x484ed8;
    }
    ctx->pc = 0x484ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x484EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484ED8u;
        // 0x484edc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x484ED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x484ed8:
    ctx->pc = 0x484EE0u;
}
