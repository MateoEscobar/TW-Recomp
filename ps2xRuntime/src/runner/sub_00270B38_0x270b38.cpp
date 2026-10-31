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

// Function: sub_00270B38
// Address: 0x270b38 - 0x270f88
void sub_00270B38_0x270b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00270B38_0x270b38");
#endif

    switch (ctx->pc) {
        case 0x270b38u: goto label_270b38;
        case 0x270b3cu: goto label_270b3c;
        case 0x270b40u: goto label_270b40;
        case 0x270b44u: goto label_270b44;
        case 0x270b48u: goto label_270b48;
        case 0x270b4cu: goto label_270b4c;
        case 0x270b50u: goto label_270b50;
        case 0x270b54u: goto label_270b54;
        case 0x270b58u: goto label_270b58;
        case 0x270b5cu: goto label_270b5c;
        case 0x270b60u: goto label_270b60;
        case 0x270b64u: goto label_270b64;
        case 0x270b68u: goto label_270b68;
        case 0x270b6cu: goto label_270b6c;
        case 0x270b70u: goto label_270b70;
        case 0x270b74u: goto label_270b74;
        case 0x270b78u: goto label_270b78;
        case 0x270b7cu: goto label_270b7c;
        case 0x270b80u: goto label_270b80;
        case 0x270b84u: goto label_270b84;
        case 0x270b88u: goto label_270b88;
        case 0x270b8cu: goto label_270b8c;
        case 0x270b90u: goto label_270b90;
        case 0x270b94u: goto label_270b94;
        case 0x270b98u: goto label_270b98;
        case 0x270b9cu: goto label_270b9c;
        case 0x270ba0u: goto label_270ba0;
        case 0x270ba4u: goto label_270ba4;
        case 0x270ba8u: goto label_270ba8;
        case 0x270bacu: goto label_270bac;
        case 0x270bb0u: goto label_270bb0;
        case 0x270bb4u: goto label_270bb4;
        case 0x270bb8u: goto label_270bb8;
        case 0x270bbcu: goto label_270bbc;
        case 0x270bc0u: goto label_270bc0;
        case 0x270bc4u: goto label_270bc4;
        case 0x270bc8u: goto label_270bc8;
        case 0x270bccu: goto label_270bcc;
        case 0x270bd0u: goto label_270bd0;
        case 0x270bd4u: goto label_270bd4;
        case 0x270bd8u: goto label_270bd8;
        case 0x270bdcu: goto label_270bdc;
        case 0x270be0u: goto label_270be0;
        case 0x270be4u: goto label_270be4;
        case 0x270be8u: goto label_270be8;
        case 0x270becu: goto label_270bec;
        case 0x270bf0u: goto label_270bf0;
        case 0x270bf4u: goto label_270bf4;
        case 0x270bf8u: goto label_270bf8;
        case 0x270bfcu: goto label_270bfc;
        case 0x270c00u: goto label_270c00;
        case 0x270c04u: goto label_270c04;
        case 0x270c08u: goto label_270c08;
        case 0x270c0cu: goto label_270c0c;
        case 0x270c10u: goto label_270c10;
        case 0x270c14u: goto label_270c14;
        case 0x270c18u: goto label_270c18;
        case 0x270c1cu: goto label_270c1c;
        case 0x270c20u: goto label_270c20;
        case 0x270c24u: goto label_270c24;
        case 0x270c28u: goto label_270c28;
        case 0x270c2cu: goto label_270c2c;
        case 0x270c30u: goto label_270c30;
        case 0x270c34u: goto label_270c34;
        case 0x270c38u: goto label_270c38;
        case 0x270c3cu: goto label_270c3c;
        case 0x270c40u: goto label_270c40;
        case 0x270c44u: goto label_270c44;
        case 0x270c48u: goto label_270c48;
        case 0x270c4cu: goto label_270c4c;
        case 0x270c50u: goto label_270c50;
        case 0x270c54u: goto label_270c54;
        case 0x270c58u: goto label_270c58;
        case 0x270c5cu: goto label_270c5c;
        case 0x270c60u: goto label_270c60;
        case 0x270c64u: goto label_270c64;
        case 0x270c68u: goto label_270c68;
        case 0x270c6cu: goto label_270c6c;
        case 0x270c70u: goto label_270c70;
        case 0x270c74u: goto label_270c74;
        case 0x270c78u: goto label_270c78;
        case 0x270c7cu: goto label_270c7c;
        case 0x270c80u: goto label_270c80;
        case 0x270c84u: goto label_270c84;
        case 0x270c88u: goto label_270c88;
        case 0x270c8cu: goto label_270c8c;
        case 0x270c90u: goto label_270c90;
        case 0x270c94u: goto label_270c94;
        case 0x270c98u: goto label_270c98;
        case 0x270c9cu: goto label_270c9c;
        case 0x270ca0u: goto label_270ca0;
        case 0x270ca4u: goto label_270ca4;
        case 0x270ca8u: goto label_270ca8;
        case 0x270cacu: goto label_270cac;
        case 0x270cb0u: goto label_270cb0;
        case 0x270cb4u: goto label_270cb4;
        case 0x270cb8u: goto label_270cb8;
        case 0x270cbcu: goto label_270cbc;
        case 0x270cc0u: goto label_270cc0;
        case 0x270cc4u: goto label_270cc4;
        case 0x270cc8u: goto label_270cc8;
        case 0x270cccu: goto label_270ccc;
        case 0x270cd0u: goto label_270cd0;
        case 0x270cd4u: goto label_270cd4;
        case 0x270cd8u: goto label_270cd8;
        case 0x270cdcu: goto label_270cdc;
        case 0x270ce0u: goto label_270ce0;
        case 0x270ce4u: goto label_270ce4;
        case 0x270ce8u: goto label_270ce8;
        case 0x270cecu: goto label_270cec;
        case 0x270cf0u: goto label_270cf0;
        case 0x270cf4u: goto label_270cf4;
        case 0x270cf8u: goto label_270cf8;
        case 0x270cfcu: goto label_270cfc;
        case 0x270d00u: goto label_270d00;
        case 0x270d04u: goto label_270d04;
        case 0x270d08u: goto label_270d08;
        case 0x270d0cu: goto label_270d0c;
        case 0x270d10u: goto label_270d10;
        case 0x270d14u: goto label_270d14;
        case 0x270d18u: goto label_270d18;
        case 0x270d1cu: goto label_270d1c;
        case 0x270d20u: goto label_270d20;
        case 0x270d24u: goto label_270d24;
        case 0x270d28u: goto label_270d28;
        case 0x270d2cu: goto label_270d2c;
        case 0x270d30u: goto label_270d30;
        case 0x270d34u: goto label_270d34;
        case 0x270d38u: goto label_270d38;
        case 0x270d3cu: goto label_270d3c;
        case 0x270d40u: goto label_270d40;
        case 0x270d44u: goto label_270d44;
        case 0x270d48u: goto label_270d48;
        case 0x270d4cu: goto label_270d4c;
        case 0x270d50u: goto label_270d50;
        case 0x270d54u: goto label_270d54;
        case 0x270d58u: goto label_270d58;
        case 0x270d5cu: goto label_270d5c;
        case 0x270d60u: goto label_270d60;
        case 0x270d64u: goto label_270d64;
        case 0x270d68u: goto label_270d68;
        case 0x270d6cu: goto label_270d6c;
        case 0x270d70u: goto label_270d70;
        case 0x270d74u: goto label_270d74;
        case 0x270d78u: goto label_270d78;
        case 0x270d7cu: goto label_270d7c;
        case 0x270d80u: goto label_270d80;
        case 0x270d84u: goto label_270d84;
        case 0x270d88u: goto label_270d88;
        case 0x270d8cu: goto label_270d8c;
        case 0x270d90u: goto label_270d90;
        case 0x270d94u: goto label_270d94;
        case 0x270d98u: goto label_270d98;
        case 0x270d9cu: goto label_270d9c;
        case 0x270da0u: goto label_270da0;
        case 0x270da4u: goto label_270da4;
        case 0x270da8u: goto label_270da8;
        case 0x270dacu: goto label_270dac;
        case 0x270db0u: goto label_270db0;
        case 0x270db4u: goto label_270db4;
        case 0x270db8u: goto label_270db8;
        case 0x270dbcu: goto label_270dbc;
        case 0x270dc0u: goto label_270dc0;
        case 0x270dc4u: goto label_270dc4;
        case 0x270dc8u: goto label_270dc8;
        case 0x270dccu: goto label_270dcc;
        case 0x270dd0u: goto label_270dd0;
        case 0x270dd4u: goto label_270dd4;
        case 0x270dd8u: goto label_270dd8;
        case 0x270ddcu: goto label_270ddc;
        case 0x270de0u: goto label_270de0;
        case 0x270de4u: goto label_270de4;
        case 0x270de8u: goto label_270de8;
        case 0x270decu: goto label_270dec;
        case 0x270df0u: goto label_270df0;
        case 0x270df4u: goto label_270df4;
        case 0x270df8u: goto label_270df8;
        case 0x270dfcu: goto label_270dfc;
        case 0x270e00u: goto label_270e00;
        case 0x270e04u: goto label_270e04;
        case 0x270e08u: goto label_270e08;
        case 0x270e0cu: goto label_270e0c;
        case 0x270e10u: goto label_270e10;
        case 0x270e14u: goto label_270e14;
        case 0x270e18u: goto label_270e18;
        case 0x270e1cu: goto label_270e1c;
        case 0x270e20u: goto label_270e20;
        case 0x270e24u: goto label_270e24;
        case 0x270e28u: goto label_270e28;
        case 0x270e2cu: goto label_270e2c;
        case 0x270e30u: goto label_270e30;
        case 0x270e34u: goto label_270e34;
        case 0x270e38u: goto label_270e38;
        case 0x270e3cu: goto label_270e3c;
        case 0x270e40u: goto label_270e40;
        case 0x270e44u: goto label_270e44;
        case 0x270e48u: goto label_270e48;
        case 0x270e4cu: goto label_270e4c;
        case 0x270e50u: goto label_270e50;
        case 0x270e54u: goto label_270e54;
        case 0x270e58u: goto label_270e58;
        case 0x270e5cu: goto label_270e5c;
        case 0x270e60u: goto label_270e60;
        case 0x270e64u: goto label_270e64;
        case 0x270e68u: goto label_270e68;
        case 0x270e6cu: goto label_270e6c;
        case 0x270e70u: goto label_270e70;
        case 0x270e74u: goto label_270e74;
        case 0x270e78u: goto label_270e78;
        case 0x270e7cu: goto label_270e7c;
        case 0x270e80u: goto label_270e80;
        case 0x270e84u: goto label_270e84;
        case 0x270e88u: goto label_270e88;
        case 0x270e8cu: goto label_270e8c;
        case 0x270e90u: goto label_270e90;
        case 0x270e94u: goto label_270e94;
        case 0x270e98u: goto label_270e98;
        case 0x270e9cu: goto label_270e9c;
        case 0x270ea0u: goto label_270ea0;
        case 0x270ea4u: goto label_270ea4;
        case 0x270ea8u: goto label_270ea8;
        case 0x270eacu: goto label_270eac;
        case 0x270eb0u: goto label_270eb0;
        case 0x270eb4u: goto label_270eb4;
        case 0x270eb8u: goto label_270eb8;
        case 0x270ebcu: goto label_270ebc;
        case 0x270ec0u: goto label_270ec0;
        case 0x270ec4u: goto label_270ec4;
        case 0x270ec8u: goto label_270ec8;
        case 0x270eccu: goto label_270ecc;
        case 0x270ed0u: goto label_270ed0;
        case 0x270ed4u: goto label_270ed4;
        case 0x270ed8u: goto label_270ed8;
        case 0x270edcu: goto label_270edc;
        case 0x270ee0u: goto label_270ee0;
        case 0x270ee4u: goto label_270ee4;
        case 0x270ee8u: goto label_270ee8;
        case 0x270eecu: goto label_270eec;
        case 0x270ef0u: goto label_270ef0;
        case 0x270ef4u: goto label_270ef4;
        case 0x270ef8u: goto label_270ef8;
        case 0x270efcu: goto label_270efc;
        case 0x270f00u: goto label_270f00;
        case 0x270f04u: goto label_270f04;
        case 0x270f08u: goto label_270f08;
        case 0x270f0cu: goto label_270f0c;
        case 0x270f10u: goto label_270f10;
        case 0x270f14u: goto label_270f14;
        case 0x270f18u: goto label_270f18;
        case 0x270f1cu: goto label_270f1c;
        case 0x270f20u: goto label_270f20;
        case 0x270f24u: goto label_270f24;
        case 0x270f28u: goto label_270f28;
        case 0x270f2cu: goto label_270f2c;
        case 0x270f30u: goto label_270f30;
        case 0x270f34u: goto label_270f34;
        case 0x270f38u: goto label_270f38;
        case 0x270f3cu: goto label_270f3c;
        case 0x270f40u: goto label_270f40;
        case 0x270f44u: goto label_270f44;
        case 0x270f48u: goto label_270f48;
        case 0x270f4cu: goto label_270f4c;
        case 0x270f50u: goto label_270f50;
        case 0x270f54u: goto label_270f54;
        case 0x270f58u: goto label_270f58;
        case 0x270f5cu: goto label_270f5c;
        case 0x270f60u: goto label_270f60;
        case 0x270f64u: goto label_270f64;
        case 0x270f68u: goto label_270f68;
        case 0x270f6cu: goto label_270f6c;
        case 0x270f70u: goto label_270f70;
        case 0x270f74u: goto label_270f74;
        case 0x270f78u: goto label_270f78;
        case 0x270f7cu: goto label_270f7c;
        case 0x270f80u: goto label_270f80;
        case 0x270f84u: goto label_270f84;
        default: break;
    }

    ctx->pc = 0x270b38u;

label_270b38:
    // 0x270b38: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x270b38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_270b3c:
    // 0x270b3c: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x270b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_270b40:
    // 0x270b40: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x270b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_270b44:
    // 0x270b44: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x270b44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_270b48:
    // 0x270b48: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x270b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_270b4c:
    // 0x270b4c: 0x264400c4  addiu       $a0, $s2, 0xC4
    ctx->pc = 0x270b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 196));
label_270b50:
    // 0x270b50: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x270b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_270b54:
    // 0x270b54: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x270b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_270b58:
    // 0x270b58: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x270b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_270b5c:
    // 0x270b5c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x270b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_270b60:
    // 0x270b60: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x270b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_270b64:
    // 0x270b64: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x270b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_270b68:
    // 0x270b68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x270b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_270b6c:
    // 0x270b6c: 0xc0e409a  jal         func_390268
label_270b70:
    if (ctx->pc == 0x270B70u) {
        ctx->pc = 0x270B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270B6Cu;
        // 0x270b70: 0xa0b82d  daddu       $s7, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270B74u;
        goto label_270b74;
    }
    ctx->pc = 0x270B6Cu;
    SET_GPR_U32(ctx, 31, 0x270B74u);
    ctx->pc = 0x270B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270B6Cu;
    // 0x270b70: 0xa0b82d  daddu       $s7, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x270B6Cu, 0x270B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270B74u;
label_270b74:
    // 0x270b74: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x270b74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_270b78:
    // 0x270b78: 0xc088e40  jal         func_223900
label_270b7c:
    if (ctx->pc == 0x270B7Cu) {
        ctx->pc = 0x270B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270B78u;
        // 0x270b7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270B80u;
        goto label_270b80;
    }
    ctx->pc = 0x270B78u;
    SET_GPR_U32(ctx, 31, 0x270B80u);
    ctx->pc = 0x270B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270B78u;
    // 0x270b7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223900u, 0x270B78u, 0x270B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270B80u;
label_270b80:
    // 0x270b80: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_270b84:
    if (ctx->pc == 0x270B84u) {
        ctx->pc = 0x270B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270B80u;
        // 0x270b84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270B88u;
        goto label_270b88;
    }
    ctx->pc = 0x270B80u;
    {
        const bool branch_taken_0x270b80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270B80u;
        // 0x270b84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270b80) {
            ctx->pc = 0x270BE8u;
            goto label_270be8;
        }
    }
    ctx->pc = 0x270B88u;
label_270b88:
    // 0x270b88: 0xc089998  jal         func_226660
label_270b8c:
    if (ctx->pc == 0x270B8Cu) {
        ctx->pc = 0x270B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270B88u;
        // 0x270b8c: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270B90u;
        goto label_270b90;
    }
    ctx->pc = 0x270B88u;
    SET_GPR_U32(ctx, 31, 0x270B90u);
    ctx->pc = 0x270B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270B88u;
    // 0x270b8c: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x270B88u, 0x270B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270B90u;
label_270b90:
    // 0x270b90: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
label_270b94:
    if (ctx->pc == 0x270B94u) {
        ctx->pc = 0x270B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270B90u;
        // 0x270b94: 0x8e4200d4  lw          $v0, 0xD4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270B98u;
        goto label_270b98;
    }
    ctx->pc = 0x270B90u;
    {
        const bool branch_taken_0x270b90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x270b90) {
            ctx->pc = 0x270B94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270B90u;
            // 0x270b94: 0x8e4200d4  lw          $v0, 0xD4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270BECu;
            goto label_270bec;
        }
    }
    ctx->pc = 0x270B98u;
label_270b98:
    // 0x270b98: 0xc088e38  jal         func_2238E0
label_270b9c:
    if (ctx->pc == 0x270B9Cu) {
        ctx->pc = 0x270B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270B98u;
        // 0x270b9c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270BA0u;
        goto label_270ba0;
    }
    ctx->pc = 0x270B98u;
    SET_GPR_U32(ctx, 31, 0x270BA0u);
    ctx->pc = 0x270B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270B98u;
    // 0x270b9c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2238E0u, 0x270B98u, 0x270BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270BA0u;
label_270ba0:
    // 0x270ba0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_270ba4:
    if (ctx->pc == 0x270BA4u) {
        ctx->pc = 0x270BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270BA0u;
        // 0x270ba4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270BA8u;
        goto label_270ba8;
    }
    ctx->pc = 0x270BA0u;
    {
        const bool branch_taken_0x270ba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270BA0u;
        // 0x270ba4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270ba0) {
            ctx->pc = 0x270BE8u;
            goto label_270be8;
        }
    }
    ctx->pc = 0x270BA8u;
label_270ba8:
    // 0x270ba8: 0xc089998  jal         func_226660
label_270bac:
    if (ctx->pc == 0x270BACu) {
        ctx->pc = 0x270BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270BA8u;
        // 0x270bac: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270BB0u;
        goto label_270bb0;
    }
    ctx->pc = 0x270BA8u;
    SET_GPR_U32(ctx, 31, 0x270BB0u);
    ctx->pc = 0x270BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270BA8u;
    // 0x270bac: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x270BA8u, 0x270BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270BB0u;
label_270bb0:
    // 0x270bb0: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_270bb4:
    if (ctx->pc == 0x270BB4u) {
        ctx->pc = 0x270BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270BB0u;
        // 0x270bb4: 0x8e4200d4  lw          $v0, 0xD4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270BB8u;
        goto label_270bb8;
    }
    ctx->pc = 0x270BB0u;
    {
        const bool branch_taken_0x270bb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x270bb0) {
            ctx->pc = 0x270BB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270BB0u;
            // 0x270bb4: 0x8e4200d4  lw          $v0, 0xD4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270BECu;
            goto label_270bec;
        }
    }
    ctx->pc = 0x270BB8u;
label_270bb8:
    // 0x270bb8: 0xc089f86  jal         func_227E18
label_270bbc:
    if (ctx->pc == 0x270BBCu) {
        ctx->pc = 0x270BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270BB8u;
        // 0x270bbc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270BC0u;
        goto label_270bc0;
    }
    ctx->pc = 0x270BB8u;
    SET_GPR_U32(ctx, 31, 0x270BC0u);
    ctx->pc = 0x270BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270BB8u;
    // 0x270bbc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E18u, 0x270BB8u, 0x270BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270BC0u;
label_270bc0:
    // 0x270bc0: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_270bc4:
    if (ctx->pc == 0x270BC4u) {
        ctx->pc = 0x270BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270BC0u;
        // 0x270bc4: 0x8e4200d4  lw          $v0, 0xD4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270BC8u;
        goto label_270bc8;
    }
    ctx->pc = 0x270BC0u;
    {
        const bool branch_taken_0x270bc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x270bc0) {
            ctx->pc = 0x270BC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270BC0u;
            // 0x270bc4: 0x8e4200d4  lw          $v0, 0xD4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270BECu;
            goto label_270bec;
        }
    }
    ctx->pc = 0x270BC8u;
label_270bc8:
    // 0x270bc8: 0xc089fac  jal         func_227EB0
label_270bcc:
    if (ctx->pc == 0x270BCCu) {
        ctx->pc = 0x270BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270BC8u;
        // 0x270bcc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270BD0u;
        goto label_270bd0;
    }
    ctx->pc = 0x270BC8u;
    SET_GPR_U32(ctx, 31, 0x270BD0u);
    ctx->pc = 0x270BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270BC8u;
    // 0x270bcc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EB0u, 0x270BC8u, 0x270BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270BD0u;
label_270bd0:
    // 0x270bd0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_270bd4:
    if (ctx->pc == 0x270BD4u) {
        ctx->pc = 0x270BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270BD0u;
        // 0x270bd4: 0x8e4200d4  lw          $v0, 0xD4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270BD8u;
        goto label_270bd8;
    }
    ctx->pc = 0x270BD0u;
    {
        const bool branch_taken_0x270bd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x270bd0) {
            ctx->pc = 0x270BD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270BD0u;
            // 0x270bd4: 0x8e4200d4  lw          $v0, 0xD4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270BECu;
            goto label_270bec;
        }
    }
    ctx->pc = 0x270BD8u;
label_270bd8:
    // 0x270bd8: 0xc089f76  jal         func_227DD8
label_270bdc:
    if (ctx->pc == 0x270BDCu) {
        ctx->pc = 0x270BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270BD8u;
        // 0x270bdc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270BE0u;
        goto label_270be0;
    }
    ctx->pc = 0x270BD8u;
    SET_GPR_U32(ctx, 31, 0x270BE0u);
    ctx->pc = 0x270BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270BD8u;
    // 0x270bdc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x270BD8u, 0x270BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270BE0u;
label_270be0:
    // 0x270be0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_270be4:
    if (ctx->pc == 0x270BE4u) {
        ctx->pc = 0x270BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270BE0u;
        // 0x270be4: 0x8e6200d8  lw          $v0, 0xD8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270BE8u;
        goto label_270be8;
    }
    ctx->pc = 0x270BE0u;
    {
        const bool branch_taken_0x270be0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x270be0) {
            ctx->pc = 0x270BE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270BE0u;
            // 0x270be4: 0x8e6200d8  lw          $v0, 0xD8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270BFCu;
            goto label_270bfc;
        }
    }
    ctx->pc = 0x270BE8u;
label_270be8:
    // 0x270be8: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x270be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_270bec:
    // 0x270bec: 0xac4000b8  sw          $zero, 0xB8($v0)
    ctx->pc = 0x270becu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 184), GPR_U32(ctx, 0));
label_270bf0:
    // 0x270bf0: 0x8e4300d4  lw          $v1, 0xD4($s2)
    ctx->pc = 0x270bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_270bf4:
    // 0x270bf4: 0x100000d8  b           . + 4 + (0xD8 << 2)
label_270bf8:
    if (ctx->pc == 0x270BF8u) {
        ctx->pc = 0x270BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270BF4u;
        // 0x270bf8: 0xa46000bc  sh          $zero, 0xBC($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 188), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270BFCu;
        goto label_270bfc;
    }
    ctx->pc = 0x270BF4u;
    {
        const bool branch_taken_0x270bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270BF4u;
        // 0x270bf8: 0xa46000bc  sh          $zero, 0xBC($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 188), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270bf4) {
            ctx->pc = 0x270F58u;
            goto label_270f58;
        }
    }
    ctx->pc = 0x270BFCu;
label_270bfc:
    // 0x270bfc: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x270bfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_270c00:
    // 0x270c00: 0x8e5600d8  lw          $s6, 0xD8($s2)
    ctx->pc = 0x270c00u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_270c04:
    // 0x270c04: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x270c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_270c08:
    // 0x270c08: 0xc0950ba  jal         func_2542E8
label_270c0c:
    if (ctx->pc == 0x270C0Cu) {
        ctx->pc = 0x270C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270C08u;
        // 0x270c0c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270C10u;
        goto label_270c10;
    }
    ctx->pc = 0x270C08u;
    SET_GPR_U32(ctx, 31, 0x270C10u);
    ctx->pc = 0x270C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270C08u;
    // 0x270c0c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2542E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2542E8u, 0x270C08u, 0x270C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270C10u;
label_270c10:
    // 0x270c10: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x270c10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_270c14:
    // 0x270c14: 0x44150800  mfc1        $s5, $f1
    ctx->pc = 0x270c14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
label_270c18:
    // 0x270c18: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x270c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_270c1c:
    // 0x270c1c: 0xde4200e0  ld          $v0, 0xE0($s2)
    ctx->pc = 0x270c1cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 224)));
label_270c20:
    // 0x270c20: 0x152840  sll         $a1, $s5, 1
    ctx->pc = 0x270c20u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
label_270c24:
    // 0x270c24: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x270c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
label_270c28:
    // 0x270c28: 0xc09970a  jal         func_265C28
label_270c2c:
    if (ctx->pc == 0x270C2Cu) {
        ctx->pc = 0x270C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270C28u;
        // 0x270c2c: 0x2a2280a  movz        $a1, $s5, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270C30u;
        goto label_270c30;
    }
    ctx->pc = 0x270C28u;
    SET_GPR_U32(ctx, 31, 0x270C30u);
    ctx->pc = 0x270C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270C28u;
    // 0x270c2c: 0x2a2280a  movz        $a1, $s5, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265C28u, 0x270C28u, 0x270C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270C30u;
label_270c30:
    // 0x270c30: 0x10400085  beqz        $v0, . + 4 + (0x85 << 2)
label_270c34:
    if (ctx->pc == 0x270C34u) {
        ctx->pc = 0x270C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270C30u;
        // 0x270c34: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270C38u;
        goto label_270c38;
    }
    ctx->pc = 0x270C30u;
    {
        const bool branch_taken_0x270c30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270C30u;
        // 0x270c34: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270c30) {
            ctx->pc = 0x270E48u;
            goto label_270e48;
        }
    }
    ctx->pc = 0x270C38u;
label_270c38:
    // 0x270c38: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x270c38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_270c3c:
    // 0x270c3c: 0xc08ae58  jal         func_22B960
label_270c40:
    if (ctx->pc == 0x270C40u) {
        ctx->pc = 0x270C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270C3Cu;
        // 0x270c40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270C44u;
        goto label_270c44;
    }
    ctx->pc = 0x270C3Cu;
    SET_GPR_U32(ctx, 31, 0x270C44u);
    ctx->pc = 0x270C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270C3Cu;
    // 0x270c40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B960u, 0x270C3Cu, 0x270C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270C44u;
label_270c44:
    // 0x270c44: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x270c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_270c48:
    // 0x270c48: 0x245ee250  addiu       $fp, $v0, -0x1DB0
    ctx->pc = 0x270c48u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959696));
label_270c4c:
    // 0x270c4c: 0xc041532  jal         func_1054C8
label_270c50:
    if (ctx->pc == 0x270C50u) {
        ctx->pc = 0x270C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270C4Cu;
        // 0x270c50: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270C54u;
        goto label_270c54;
    }
    ctx->pc = 0x270C4Cu;
    SET_GPR_U32(ctx, 31, 0x270C54u);
    ctx->pc = 0x270C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270C4Cu;
    // 0x270c50: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x270C4Cu, 0x270C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270C54u;
label_270c54:
    // 0x270c54: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x270c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_270c58:
    // 0x270c58: 0xc041532  jal         func_1054C8
label_270c5c:
    if (ctx->pc == 0x270C5Cu) {
        ctx->pc = 0x270C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270C58u;
        // 0x270c5c: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270C60u;
        goto label_270c60;
    }
    ctx->pc = 0x270C58u;
    SET_GPR_U32(ctx, 31, 0x270C60u);
    ctx->pc = 0x270C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270C58u;
    // 0x270c5c: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x270C58u, 0x270C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270C60u;
label_270c60:
    // 0x270c60: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x270c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_270c64:
    // 0x270c64: 0xc041532  jal         func_1054C8
label_270c68:
    if (ctx->pc == 0x270C68u) {
        ctx->pc = 0x270C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270C64u;
        // 0x270c68: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270C6Cu;
        goto label_270c6c;
    }
    ctx->pc = 0x270C64u;
    SET_GPR_U32(ctx, 31, 0x270C6Cu);
    ctx->pc = 0x270C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270C64u;
    // 0x270c68: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x270C64u, 0x270C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270C6Cu;
label_270c6c:
    // 0x270c6c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x270c6cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_270c70:
    // 0x270c70: 0xc041532  jal         func_1054C8
label_270c74:
    if (ctx->pc == 0x270C74u) {
        ctx->pc = 0x270C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270C70u;
        // 0x270c74: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270C78u;
        goto label_270c78;
    }
    ctx->pc = 0x270C70u;
    SET_GPR_U32(ctx, 31, 0x270C78u);
    ctx->pc = 0x270C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270C70u;
    // 0x270c74: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x270C70u, 0x270C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270C78u;
label_270c78:
    // 0x270c78: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_270c7c:
    if (ctx->pc == 0x270C7Cu) {
        ctx->pc = 0x270C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270C78u;
        // 0x270c7c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270C80u;
        goto label_270c80;
    }
    ctx->pc = 0x270C78u;
    {
        const bool branch_taken_0x270c78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x270C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270C78u;
        // 0x270c7c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270c78) {
            ctx->pc = 0x270CA0u;
            goto label_270ca0;
        }
    }
    ctx->pc = 0x270C80u;
label_270c80:
    // 0x270c80: 0x8e4300d4  lw          $v1, 0xD4($s2)
    ctx->pc = 0x270c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_270c84:
    // 0x270c84: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x270c84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_270c88:
    // 0x270c88: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x270c88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_270c8c:
    // 0x270c8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x270c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_270c90:
    // 0x270c90: 0x8c660054  lw          $a2, 0x54($v1)
    ctx->pc = 0x270c90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_270c94:
    // 0x270c94: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x270c94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_270c98:
    // 0x270c98: 0xc04159e  jal         func_105678
label_270c9c:
    if (ctx->pc == 0x270C9Cu) {
        ctx->pc = 0x270C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270C98u;
        // 0x270c9c: 0x8e4500d8  lw          $a1, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270CA0u;
        goto label_270ca0;
    }
    ctx->pc = 0x270C98u;
    SET_GPR_U32(ctx, 31, 0x270CA0u);
    ctx->pc = 0x270C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270C98u;
    // 0x270c9c: 0x8e4500d8  lw          $a1, 0xD8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x270C98u, 0x270CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270CA0u;
label_270ca0:
    // 0x270ca0: 0x8e4300d4  lw          $v1, 0xD4($s2)
    ctx->pc = 0x270ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_270ca4:
    // 0x270ca4: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x270ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_270ca8:
    // 0x270ca8: 0x12800011  beqz        $s4, . + 4 + (0x11 << 2)
label_270cac:
    if (ctx->pc == 0x270CACu) {
        ctx->pc = 0x270CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270CA8u;
        // 0x270cac: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270CB0u;
        goto label_270cb0;
    }
    ctx->pc = 0x270CA8u;
    {
        const bool branch_taken_0x270ca8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x270CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270CA8u;
        // 0x270cac: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270ca8) {
            ctx->pc = 0x270CF0u;
            goto label_270cf0;
        }
    }
    ctx->pc = 0x270CB0u;
label_270cb0:
    // 0x270cb0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x270cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_270cb4:
    // 0x270cb4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x270cb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_270cb8:
    // 0x270cb8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x270cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_270cbc:
    // 0x270cbc: 0x40f809  jalr        $v0
label_270cc0:
    if (ctx->pc == 0x270CC0u) {
        ctx->pc = 0x270CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270CBCu;
        // 0x270cc0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270CC4u;
        goto label_270cc4;
    }
    ctx->pc = 0x270CBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x270CC4u);
        ctx->pc = 0x270CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270CBCu;
        // 0x270cc0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270CBCu, 0x270CC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x270CC4u;
label_270cc4:
    // 0x270cc4: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x270cc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_270cc8:
    // 0x270cc8: 0x3421ccce  ori         $at, $at, 0xCCCE
    ctx->pc = 0x270cc8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52430);
label_270ccc:
    // 0x270ccc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x270cccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_270cd0:
    // 0x270cd0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x270cd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_270cd4:
    // 0x270cd4: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x270cd4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_270cd8:
    // 0x270cd8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x270cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_270cdc:
    // 0x270cdc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x270cdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_270ce0:
    // 0x270ce0: 0x240600f4  addiu       $a2, $zero, 0xF4
    ctx->pc = 0x270ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 244));
label_270ce4:
    // 0x270ce4: 0x24082000  addiu       $t0, $zero, 0x2000
    ctx->pc = 0x270ce4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_270ce8:
    // 0x270ce8: 0xc041664  jal         func_105990
label_270cec:
    if (ctx->pc == 0x270CECu) {
        ctx->pc = 0x270CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270CE8u;
        // 0x270cec: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270CF0u;
        goto label_270cf0;
    }
    ctx->pc = 0x270CE8u;
    SET_GPR_U32(ctx, 31, 0x270CF0u);
    ctx->pc = 0x270CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270CE8u;
    // 0x270cec: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x270CE8u, 0x270CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270CF0u;
label_270cf0:
    // 0x270cf0: 0x12a00010  beqz        $s5, . + 4 + (0x10 << 2)
label_270cf4:
    if (ctx->pc == 0x270CF4u) {
        ctx->pc = 0x270CF8u;
        goto label_270cf8;
    }
    ctx->pc = 0x270CF0u;
    {
        const bool branch_taken_0x270cf0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x270cf0) {
            ctx->pc = 0x270D34u;
            goto label_270d34;
        }
    }
    ctx->pc = 0x270CF8u;
label_270cf8:
    // 0x270cf8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x270cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_270cfc:
    // 0x270cfc: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x270cfcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_270d00:
    // 0x270d00: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x270d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_270d04:
    // 0x270d04: 0x40f809  jalr        $v0
label_270d08:
    if (ctx->pc == 0x270D08u) {
        ctx->pc = 0x270D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270D04u;
        // 0x270d08: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270D0Cu;
        goto label_270d0c;
    }
    ctx->pc = 0x270D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x270D0Cu);
        ctx->pc = 0x270D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270D04u;
        // 0x270d08: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270D04u, 0x270D0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x270D0Cu;
label_270d0c:
    // 0x270d0c: 0x3c0a0026  lui         $t2, 0x26
    ctx->pc = 0x270d0cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)38 << 16));
label_270d10:
    // 0x270d10: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x270d10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_270d14:
    // 0x270d14: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x270d14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_270d18:
    // 0x270d18: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x270d18u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_270d1c:
    // 0x270d1c: 0x254a29a8  addiu       $t2, $t2, 0x29A8
    ctx->pc = 0x270d1cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 10664));
label_270d20:
    // 0x270d20: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x270d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_270d24:
    // 0x270d24: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x270d24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_270d28:
    // 0x270d28: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x270d28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_270d2c:
    // 0x270d2c: 0xc041664  jal         func_105990
label_270d30:
    if (ctx->pc == 0x270D30u) {
        ctx->pc = 0x270D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270D2Cu;
        // 0x270d30: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270D34u;
        goto label_270d34;
    }
    ctx->pc = 0x270D2Cu;
    SET_GPR_U32(ctx, 31, 0x270D34u);
    ctx->pc = 0x270D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270D2Cu;
    // 0x270d30: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x270D2Cu, 0x270D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270D34u;
label_270d34:
    // 0x270d34: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
label_270d38:
    if (ctx->pc == 0x270D38u) {
        ctx->pc = 0x270D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270D34u;
        // 0x270d38: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270D3Cu;
        goto label_270d3c;
    }
    ctx->pc = 0x270D34u;
    {
        const bool branch_taken_0x270d34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x270D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270D34u;
        // 0x270d38: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270d34) {
            ctx->pc = 0x270D5Cu;
            goto label_270d5c;
        }
    }
    ctx->pc = 0x270D3Cu;
label_270d3c:
    // 0x270d3c: 0x8e4500d8  lw          $a1, 0xD8($s2)
    ctx->pc = 0x270d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_270d40:
    // 0x270d40: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x270d40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_270d44:
    // 0x270d44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x270d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_270d48:
    // 0x270d48: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x270d48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_270d4c:
    // 0x270d4c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x270d4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_270d50:
    // 0x270d50: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x270d50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_270d54:
    // 0x270d54: 0xc041b20  jal         func_106C80
label_270d58:
    if (ctx->pc == 0x270D58u) {
        ctx->pc = 0x270D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270D54u;
        // 0x270d58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270D5Cu;
        goto label_270d5c;
    }
    ctx->pc = 0x270D54u;
    SET_GPR_U32(ctx, 31, 0x270D5Cu);
    ctx->pc = 0x270D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270D54u;
    // 0x270d58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x270D54u, 0x270D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270D5Cu;
label_270d5c:
    // 0x270d5c: 0xc05d484  jal         func_175210
label_270d60:
    if (ctx->pc == 0x270D60u) {
        ctx->pc = 0x270D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270D5Cu;
        // 0x270d60: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270D64u;
        goto label_270d64;
    }
    ctx->pc = 0x270D5Cu;
    SET_GPR_U32(ctx, 31, 0x270D64u);
    ctx->pc = 0x270D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270D5Cu;
    // 0x270d60: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x270D5Cu, 0x270D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270D64u;
label_270d64:
    // 0x270d64: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x270d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_270d68:
    // 0x270d68: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x270d68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_270d6c:
    // 0x270d6c: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x270d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_270d70:
    // 0x270d70: 0xa0f809  jalr        $a1
label_270d74:
    if (ctx->pc == 0x270D74u) {
        ctx->pc = 0x270D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270D70u;
        // 0x270d74: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270D78u;
        goto label_270d78;
    }
    ctx->pc = 0x270D70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x270D78u);
        ctx->pc = 0x270D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270D70u;
        // 0x270d74: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270D70u, 0x270D78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x270D78u;
label_270d78:
    // 0x270d78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x270d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_270d7c:
    // 0x270d7c: 0xc087016  jal         func_21C058
label_270d80:
    if (ctx->pc == 0x270D80u) {
        ctx->pc = 0x270D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270D7Cu;
        // 0x270d80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270D84u;
        goto label_270d84;
    }
    ctx->pc = 0x270D7Cu;
    SET_GPR_U32(ctx, 31, 0x270D84u);
    ctx->pc = 0x270D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270D7Cu;
    // 0x270d80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x270D7Cu, 0x270D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270D84u;
label_270d84:
    // 0x270d84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x270d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_270d88:
    // 0x270d88: 0xc089990  jal         func_226640
label_270d8c:
    if (ctx->pc == 0x270D8Cu) {
        ctx->pc = 0x270D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270D88u;
        // 0x270d8c: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270D90u;
        goto label_270d90;
    }
    ctx->pc = 0x270D88u;
    SET_GPR_U32(ctx, 31, 0x270D90u);
    ctx->pc = 0x270D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270D88u;
    // 0x270d8c: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x270D88u, 0x270D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270D90u;
label_270d90:
    // 0x270d90: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x270d90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_270d94:
    // 0x270d94: 0xc05d4f6  jal         func_1753D8
label_270d98:
    if (ctx->pc == 0x270D98u) {
        ctx->pc = 0x270D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270D94u;
        // 0x270d98: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270D9Cu;
        goto label_270d9c;
    }
    ctx->pc = 0x270D94u;
    SET_GPR_U32(ctx, 31, 0x270D9Cu);
    ctx->pc = 0x270D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270D94u;
    // 0x270d98: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x270D94u, 0x270D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270D9Cu;
label_270d9c:
    // 0x270d9c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x270d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_270da0:
    // 0x270da0: 0xc05d53a  jal         func_1754E8
label_270da4:
    if (ctx->pc == 0x270DA4u) {
        ctx->pc = 0x270DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270DA0u;
        // 0x270da4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270DA8u;
        goto label_270da8;
    }
    ctx->pc = 0x270DA0u;
    SET_GPR_U32(ctx, 31, 0x270DA8u);
    ctx->pc = 0x270DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270DA0u;
    // 0x270da4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x270DA0u, 0x270DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270DA8u;
label_270da8:
    // 0x270da8: 0xc041532  jal         func_1054C8
label_270dac:
    if (ctx->pc == 0x270DACu) {
        ctx->pc = 0x270DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270DA8u;
        // 0x270dac: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270DB0u;
        goto label_270db0;
    }
    ctx->pc = 0x270DA8u;
    SET_GPR_U32(ctx, 31, 0x270DB0u);
    ctx->pc = 0x270DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270DA8u;
    // 0x270dac: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x270DA8u, 0x270DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270DB0u;
label_270db0:
    // 0x270db0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x270db0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_270db4:
    // 0x270db4: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_270db8:
    if (ctx->pc == 0x270DB8u) {
        ctx->pc = 0x270DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270DB4u;
        // 0x270db8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270DBCu;
        goto label_270dbc;
    }
    ctx->pc = 0x270DB4u;
    {
        const bool branch_taken_0x270db4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x270DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270DB4u;
        // 0x270db8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270db4) {
            ctx->pc = 0x270DDCu;
            goto label_270ddc;
        }
    }
    ctx->pc = 0x270DBCu;
label_270dbc:
    // 0x270dbc: 0x8e6500d8  lw          $a1, 0xD8($s3)
    ctx->pc = 0x270dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
label_270dc0:
    // 0x270dc0: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x270dc0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_270dc4:
    // 0x270dc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x270dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_270dc8:
    // 0x270dc8: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x270dc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_270dcc:
    // 0x270dcc: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x270dccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_270dd0:
    // 0x270dd0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x270dd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_270dd4:
    // 0x270dd4: 0xc041b20  jal         func_106C80
label_270dd8:
    if (ctx->pc == 0x270DD8u) {
        ctx->pc = 0x270DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270DD4u;
        // 0x270dd8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270DDCu;
        goto label_270ddc;
    }
    ctx->pc = 0x270DD4u;
    SET_GPR_U32(ctx, 31, 0x270DDCu);
    ctx->pc = 0x270DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270DD4u;
    // 0x270dd8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x270DD4u, 0x270DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270DDCu;
label_270ddc:
    // 0x270ddc: 0xc05d484  jal         func_175210
label_270de0:
    if (ctx->pc == 0x270DE0u) {
        ctx->pc = 0x270DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270DDCu;
        // 0x270de0: 0x8e6400d8  lw          $a0, 0xD8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270DE4u;
        goto label_270de4;
    }
    ctx->pc = 0x270DDCu;
    SET_GPR_U32(ctx, 31, 0x270DE4u);
    ctx->pc = 0x270DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270DDCu;
    // 0x270de0: 0x8e6400d8  lw          $a0, 0xD8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x270DDCu, 0x270DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270DE4u;
label_270de4:
    // 0x270de4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x270de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_270de8:
    // 0x270de8: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x270de8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_270dec:
    // 0x270dec: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x270decu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_270df0:
    // 0x270df0: 0xa0f809  jalr        $a1
label_270df4:
    if (ctx->pc == 0x270DF4u) {
        ctx->pc = 0x270DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270DF0u;
        // 0x270df4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270DF8u;
        goto label_270df8;
    }
    ctx->pc = 0x270DF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x270DF8u);
        ctx->pc = 0x270DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270DF0u;
        // 0x270df4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270DF0u, 0x270DF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x270DF8u;
label_270df8:
    // 0x270df8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x270df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_270dfc:
    // 0x270dfc: 0xc087016  jal         func_21C058
label_270e00:
    if (ctx->pc == 0x270E00u) {
        ctx->pc = 0x270E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270DFCu;
        // 0x270e00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270E04u;
        goto label_270e04;
    }
    ctx->pc = 0x270DFCu;
    SET_GPR_U32(ctx, 31, 0x270E04u);
    ctx->pc = 0x270E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270DFCu;
    // 0x270e00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x270DFCu, 0x270E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270E04u;
label_270e04:
    // 0x270e04: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x270e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_270e08:
    // 0x270e08: 0xc089990  jal         func_226640
label_270e0c:
    if (ctx->pc == 0x270E0Cu) {
        ctx->pc = 0x270E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270E08u;
        // 0x270e0c: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270E10u;
        goto label_270e10;
    }
    ctx->pc = 0x270E08u;
    SET_GPR_U32(ctx, 31, 0x270E10u);
    ctx->pc = 0x270E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270E08u;
    // 0x270e0c: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x270E08u, 0x270E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270E10u;
label_270e10:
    // 0x270e10: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x270e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_270e14:
    // 0x270e14: 0xc05d4f6  jal         func_1753D8
label_270e18:
    if (ctx->pc == 0x270E18u) {
        ctx->pc = 0x270E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270E14u;
        // 0x270e18: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270E1Cu;
        goto label_270e1c;
    }
    ctx->pc = 0x270E14u;
    SET_GPR_U32(ctx, 31, 0x270E1Cu);
    ctx->pc = 0x270E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270E14u;
    // 0x270e18: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x270E14u, 0x270E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270E1Cu;
label_270e1c:
    // 0x270e1c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x270e1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_270e20:
    // 0x270e20: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x270e20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_270e24:
    // 0x270e24: 0x26e60001  addiu       $a2, $s7, 0x1
    ctx->pc = 0x270e24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_270e28:
    // 0x270e28: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x270e28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_270e2c:
    // 0x270e2c: 0xc099e80  jal         func_267A00
label_270e30:
    if (ctx->pc == 0x270E30u) {
        ctx->pc = 0x270E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270E2Cu;
        // 0x270e30: 0x24082000  addiu       $t0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270E34u;
        goto label_270e34;
    }
    ctx->pc = 0x270E2Cu;
    SET_GPR_U32(ctx, 31, 0x270E34u);
    ctx->pc = 0x270E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270E2Cu;
    // 0x270e30: 0x24082000  addiu       $t0, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267A00u, 0x270E2Cu, 0x270E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270E34u;
label_270e34:
    // 0x270e34: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x270e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_270e38:
    // 0x270e38: 0xc05d53a  jal         func_1754E8
label_270e3c:
    if (ctx->pc == 0x270E3Cu) {
        ctx->pc = 0x270E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270E38u;
        // 0x270e3c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270E40u;
        goto label_270e40;
    }
    ctx->pc = 0x270E38u;
    SET_GPR_U32(ctx, 31, 0x270E40u);
    ctx->pc = 0x270E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270E38u;
    // 0x270e3c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x270E38u, 0x270E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270E40u;
label_270e40:
    // 0x270e40: 0x10000046  b           . + 4 + (0x46 << 2)
label_270e44:
    if (ctx->pc == 0x270E44u) {
        ctx->pc = 0x270E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270E40u;
        // 0x270e44: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270E48u;
        goto label_270e48;
    }
    ctx->pc = 0x270E40u;
    {
        const bool branch_taken_0x270e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270E40u;
        // 0x270e44: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270e40) {
            ctx->pc = 0x270F5Cu;
            goto label_270f5c;
        }
    }
    ctx->pc = 0x270E48u;
label_270e48:
    // 0x270e48: 0x3c040056  lui         $a0, 0x56
    ctx->pc = 0x270e48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)86 << 16));
label_270e4c:
    // 0x270e4c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x270e4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_270e50:
    // 0x270e50: 0xc041532  jal         func_1054C8
label_270e54:
    if (ctx->pc == 0x270E54u) {
        ctx->pc = 0x270E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270E50u;
        // 0x270e54: 0x2484e250  addiu       $a0, $a0, -0x1DB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959696));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270E58u;
        goto label_270e58;
    }
    ctx->pc = 0x270E50u;
    SET_GPR_U32(ctx, 31, 0x270E58u);
    ctx->pc = 0x270E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270E50u;
    // 0x270e54: 0x2484e250  addiu       $a0, $a0, -0x1DB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x270E50u, 0x270E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270E58u;
label_270e58:
    // 0x270e58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x270e58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_270e5c:
    // 0x270e5c: 0x52000014  beql        $s0, $zero, . + 4 + (0x14 << 2)
label_270e60:
    if (ctx->pc == 0x270E60u) {
        ctx->pc = 0x270E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270E5Cu;
        // 0x270e60: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270E64u;
        goto label_270e64;
    }
    ctx->pc = 0x270E5Cu;
    {
        const bool branch_taken_0x270e5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x270e5c) {
            ctx->pc = 0x270E60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270E5Cu;
            // 0x270e60: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270EB0u;
            goto label_270eb0;
        }
    }
    ctx->pc = 0x270E64u;
label_270e64:
    // 0x270e64: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x270e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_270e68:
    // 0x270e68: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x270e68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_270e6c:
    // 0x270e6c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x270e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_270e70:
    // 0x270e70: 0x40f809  jalr        $v0
label_270e74:
    if (ctx->pc == 0x270E74u) {
        ctx->pc = 0x270E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270E70u;
        // 0x270e74: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270E78u;
        goto label_270e78;
    }
    ctx->pc = 0x270E70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x270E78u);
        ctx->pc = 0x270E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270E70u;
        // 0x270e74: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270E70u, 0x270E78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x270E78u;
label_270e78:
    // 0x270e78: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x270e78u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_270e7c:
    // 0x270e7c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x270e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_270e80:
    // 0x270e80: 0x8c43025c  lw          $v1, 0x25C($v0)
    ctx->pc = 0x270e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 604)));
label_270e84:
    // 0x270e84: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_270e88:
    if (ctx->pc == 0x270E88u) {
        ctx->pc = 0x270E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270E84u;
        // 0x270e88: 0x3c020027  lui         $v0, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270E8Cu;
        goto label_270e8c;
    }
    ctx->pc = 0x270E84u;
    {
        const bool branch_taken_0x270e84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x270E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270E84u;
        // 0x270e88: 0x3c020027  lui         $v0, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270e84) {
            ctx->pc = 0x270E94u;
            goto label_270e94;
        }
    }
    ctx->pc = 0x270E8Cu;
label_270e8c:
    // 0x270e8c: 0x10000002  b           . + 4 + (0x2 << 2)
label_270e90:
    if (ctx->pc == 0x270E90u) {
        ctx->pc = 0x270E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270E8Cu;
        // 0x270e90: 0x24490a70  addiu       $t1, $v0, 0xA70 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 2672));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270E94u;
        goto label_270e94;
    }
    ctx->pc = 0x270E8Cu;
    {
        const bool branch_taken_0x270e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270E8Cu;
        // 0x270e90: 0x24490a70  addiu       $t1, $v0, 0xA70 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 2672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270e8c) {
            ctx->pc = 0x270E98u;
            goto label_270e98;
        }
    }
    ctx->pc = 0x270E94u;
label_270e94:
    // 0x270e94: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x270e94u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_270e98:
    // 0x270e98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x270e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_270e9c:
    // 0x270e9c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x270e9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_270ea0:
    // 0x270ea0: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x270ea0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_270ea4:
    // 0x270ea4: 0xc041850  jal         func_106140
label_270ea8:
    if (ctx->pc == 0x270EA8u) {
        ctx->pc = 0x270EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270EA4u;
        // 0x270ea8: 0x24070007  addiu       $a3, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270EACu;
        goto label_270eac;
    }
    ctx->pc = 0x270EA4u;
    SET_GPR_U32(ctx, 31, 0x270EACu);
    ctx->pc = 0x270EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270EA4u;
    // 0x270ea8: 0x24070007  addiu       $a3, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106140u, 0x270EA4u, 0x270EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270EACu;
label_270eac:
    // 0x270eac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x270eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_270eb0:
    // 0x270eb0: 0xc089990  jal         func_226640
label_270eb4:
    if (ctx->pc == 0x270EB4u) {
        ctx->pc = 0x270EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270EB0u;
        // 0x270eb4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270EB8u;
        goto label_270eb8;
    }
    ctx->pc = 0x270EB0u;
    SET_GPR_U32(ctx, 31, 0x270EB8u);
    ctx->pc = 0x270EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270EB0u;
    // 0x270eb4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x270EB0u, 0x270EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270EB8u;
label_270eb8:
    // 0x270eb8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x270eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_270ebc:
    // 0x270ebc: 0xc05d4f6  jal         func_1753D8
label_270ec0:
    if (ctx->pc == 0x270EC0u) {
        ctx->pc = 0x270EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270EBCu;
        // 0x270ec0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270EC4u;
        goto label_270ec4;
    }
    ctx->pc = 0x270EBCu;
    SET_GPR_U32(ctx, 31, 0x270EC4u);
    ctx->pc = 0x270EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270EBCu;
    // 0x270ec0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x270EBCu, 0x270EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270EC4u;
label_270ec4:
    // 0x270ec4: 0xc041532  jal         func_1054C8
label_270ec8:
    if (ctx->pc == 0x270EC8u) {
        ctx->pc = 0x270EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270EC4u;
        // 0x270ec8: 0x2624e250  addiu       $a0, $s1, -0x1DB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294959696));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270ECCu;
        goto label_270ecc;
    }
    ctx->pc = 0x270EC4u;
    SET_GPR_U32(ctx, 31, 0x270ECCu);
    ctx->pc = 0x270EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270EC4u;
    // 0x270ec8: 0x2624e250  addiu       $a0, $s1, -0x1DB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294959696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x270EC4u, 0x270ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270ECCu;
label_270ecc:
    // 0x270ecc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x270eccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_270ed0:
    // 0x270ed0: 0x12800014  beqz        $s4, . + 4 + (0x14 << 2)
label_270ed4:
    if (ctx->pc == 0x270ED4u) {
        ctx->pc = 0x270ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270ED0u;
        // 0x270ed4: 0x26f10001  addiu       $s1, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270ED8u;
        goto label_270ed8;
    }
    ctx->pc = 0x270ED0u;
    {
        const bool branch_taken_0x270ed0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x270ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270ED0u;
        // 0x270ed4: 0x26f10001  addiu       $s1, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270ed0) {
            ctx->pc = 0x270F24u;
            goto label_270f24;
        }
    }
    ctx->pc = 0x270ED8u;
label_270ed8:
    // 0x270ed8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x270ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_270edc:
    // 0x270edc: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x270edcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_270ee0:
    // 0x270ee0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x270ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_270ee4:
    // 0x270ee4: 0x40f809  jalr        $v0
label_270ee8:
    if (ctx->pc == 0x270EE8u) {
        ctx->pc = 0x270EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270EE4u;
        // 0x270ee8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270EECu;
        goto label_270eec;
    }
    ctx->pc = 0x270EE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x270EECu);
        ctx->pc = 0x270EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270EE4u;
        // 0x270ee8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270EE4u, 0x270EECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x270EECu;
label_270eec:
    // 0x270eec: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x270eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_270ef0:
    // 0x270ef0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x270ef0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_270ef4:
    // 0x270ef4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x270ef4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_270ef8:
    // 0x270ef8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x270ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_270efc:
    // 0x270efc: 0x40f809  jalr        $v0
label_270f00:
    if (ctx->pc == 0x270F00u) {
        ctx->pc = 0x270F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270EFCu;
        // 0x270f00: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270F04u;
        goto label_270f04;
    }
    ctx->pc = 0x270EFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x270F04u);
        ctx->pc = 0x270F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270EFCu;
        // 0x270f00: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270EFCu, 0x270F04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x270F04u;
label_270f04:
    // 0x270f04: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x270f04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_270f08:
    // 0x270f08: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x270f08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_270f0c:
    // 0x270f0c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x270f0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_270f10:
    // 0x270f10: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x270f10u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_270f14:
    // 0x270f14: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x270f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_270f18:
    // 0x270f18: 0x24082000  addiu       $t0, $zero, 0x2000
    ctx->pc = 0x270f18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_270f1c:
    // 0x270f1c: 0xc042114  jal         func_108450
label_270f20:
    if (ctx->pc == 0x270F20u) {
        ctx->pc = 0x270F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270F1Cu;
        // 0x270f20: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270F24u;
        goto label_270f24;
    }
    ctx->pc = 0x270F1Cu;
    SET_GPR_U32(ctx, 31, 0x270F24u);
    ctx->pc = 0x270F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270F1Cu;
    // 0x270f20: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108450u, 0x270F1Cu, 0x270F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270F24u;
label_270f24:
    // 0x270f24: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x270f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_270f28:
    // 0x270f28: 0xc05d4f6  jal         func_1753D8
label_270f2c:
    if (ctx->pc == 0x270F2Cu) {
        ctx->pc = 0x270F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270F28u;
        // 0x270f2c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270F30u;
        goto label_270f30;
    }
    ctx->pc = 0x270F28u;
    SET_GPR_U32(ctx, 31, 0x270F30u);
    ctx->pc = 0x270F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270F28u;
    // 0x270f2c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x270F28u, 0x270F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270F30u;
label_270f30:
    // 0x270f30: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x270f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_270f34:
    // 0x270f34: 0xc089990  jal         func_226640
label_270f38:
    if (ctx->pc == 0x270F38u) {
        ctx->pc = 0x270F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270F34u;
        // 0x270f38: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270F3Cu;
        goto label_270f3c;
    }
    ctx->pc = 0x270F34u;
    SET_GPR_U32(ctx, 31, 0x270F3Cu);
    ctx->pc = 0x270F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270F34u;
    // 0x270f38: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x270F34u, 0x270F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270F3Cu;
label_270f3c:
    // 0x270f3c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x270f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_270f40:
    // 0x270f40: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x270f40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_270f44:
    // 0x270f44: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x270f44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_270f48:
    // 0x270f48: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x270f48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_270f4c:
    // 0x270f4c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x270f4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_270f50:
    // 0x270f50: 0xc0875a0  jal         func_21D680
label_270f54:
    if (ctx->pc == 0x270F54u) {
        ctx->pc = 0x270F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270F50u;
        // 0x270f54: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270F58u;
        goto label_270f58;
    }
    ctx->pc = 0x270F50u;
    SET_GPR_U32(ctx, 31, 0x270F58u);
    ctx->pc = 0x270F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270F50u;
    // 0x270f54: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D680u, 0x270F50u, 0x270F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270F58u;
label_270f58:
    // 0x270f58: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x270f58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_270f5c:
    // 0x270f5c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x270f5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_270f60:
    // 0x270f60: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x270f60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_270f64:
    // 0x270f64: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x270f64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_270f68:
    // 0x270f68: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x270f68u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_270f6c:
    // 0x270f6c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x270f6cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_270f70:
    // 0x270f70: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x270f70u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_270f74:
    // 0x270f74: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x270f74u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_270f78:
    // 0x270f78: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x270f78u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_270f7c:
    // 0x270f7c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x270f7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_270f80:
    // 0x270f80: 0x3e00008  jr          $ra
label_270f84:
    if (ctx->pc == 0x270F84u) {
        ctx->pc = 0x270F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270F80u;
        // 0x270f84: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270F88u;
        goto label_fallthrough_0x270f80;
    }
    ctx->pc = 0x270F80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x270F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270F80u;
        // 0x270f84: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270F80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x270f80:
    ctx->pc = 0x270F88u;
}
