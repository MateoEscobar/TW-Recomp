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

// Function: sub_001A0D28
// Address: 0x1a0d28 - 0x1a0fd0
void sub_001A0D28_0x1a0d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A0D28_0x1a0d28");
#endif

    switch (ctx->pc) {
        case 0x1a0d28u: goto label_1a0d28;
        case 0x1a0d2cu: goto label_1a0d2c;
        case 0x1a0d30u: goto label_1a0d30;
        case 0x1a0d34u: goto label_1a0d34;
        case 0x1a0d38u: goto label_1a0d38;
        case 0x1a0d3cu: goto label_1a0d3c;
        case 0x1a0d40u: goto label_1a0d40;
        case 0x1a0d44u: goto label_1a0d44;
        case 0x1a0d48u: goto label_1a0d48;
        case 0x1a0d4cu: goto label_1a0d4c;
        case 0x1a0d50u: goto label_1a0d50;
        case 0x1a0d54u: goto label_1a0d54;
        case 0x1a0d58u: goto label_1a0d58;
        case 0x1a0d5cu: goto label_1a0d5c;
        case 0x1a0d60u: goto label_1a0d60;
        case 0x1a0d64u: goto label_1a0d64;
        case 0x1a0d68u: goto label_1a0d68;
        case 0x1a0d6cu: goto label_1a0d6c;
        case 0x1a0d70u: goto label_1a0d70;
        case 0x1a0d74u: goto label_1a0d74;
        case 0x1a0d78u: goto label_1a0d78;
        case 0x1a0d7cu: goto label_1a0d7c;
        case 0x1a0d80u: goto label_1a0d80;
        case 0x1a0d84u: goto label_1a0d84;
        case 0x1a0d88u: goto label_1a0d88;
        case 0x1a0d8cu: goto label_1a0d8c;
        case 0x1a0d90u: goto label_1a0d90;
        case 0x1a0d94u: goto label_1a0d94;
        case 0x1a0d98u: goto label_1a0d98;
        case 0x1a0d9cu: goto label_1a0d9c;
        case 0x1a0da0u: goto label_1a0da0;
        case 0x1a0da4u: goto label_1a0da4;
        case 0x1a0da8u: goto label_1a0da8;
        case 0x1a0dacu: goto label_1a0dac;
        case 0x1a0db0u: goto label_1a0db0;
        case 0x1a0db4u: goto label_1a0db4;
        case 0x1a0db8u: goto label_1a0db8;
        case 0x1a0dbcu: goto label_1a0dbc;
        case 0x1a0dc0u: goto label_1a0dc0;
        case 0x1a0dc4u: goto label_1a0dc4;
        case 0x1a0dc8u: goto label_1a0dc8;
        case 0x1a0dccu: goto label_1a0dcc;
        case 0x1a0dd0u: goto label_1a0dd0;
        case 0x1a0dd4u: goto label_1a0dd4;
        case 0x1a0dd8u: goto label_1a0dd8;
        case 0x1a0ddcu: goto label_1a0ddc;
        case 0x1a0de0u: goto label_1a0de0;
        case 0x1a0de4u: goto label_1a0de4;
        case 0x1a0de8u: goto label_1a0de8;
        case 0x1a0decu: goto label_1a0dec;
        case 0x1a0df0u: goto label_1a0df0;
        case 0x1a0df4u: goto label_1a0df4;
        case 0x1a0df8u: goto label_1a0df8;
        case 0x1a0dfcu: goto label_1a0dfc;
        case 0x1a0e00u: goto label_1a0e00;
        case 0x1a0e04u: goto label_1a0e04;
        case 0x1a0e08u: goto label_1a0e08;
        case 0x1a0e0cu: goto label_1a0e0c;
        case 0x1a0e10u: goto label_1a0e10;
        case 0x1a0e14u: goto label_1a0e14;
        case 0x1a0e18u: goto label_1a0e18;
        case 0x1a0e1cu: goto label_1a0e1c;
        case 0x1a0e20u: goto label_1a0e20;
        case 0x1a0e24u: goto label_1a0e24;
        case 0x1a0e28u: goto label_1a0e28;
        case 0x1a0e2cu: goto label_1a0e2c;
        case 0x1a0e30u: goto label_1a0e30;
        case 0x1a0e34u: goto label_1a0e34;
        case 0x1a0e38u: goto label_1a0e38;
        case 0x1a0e3cu: goto label_1a0e3c;
        case 0x1a0e40u: goto label_1a0e40;
        case 0x1a0e44u: goto label_1a0e44;
        case 0x1a0e48u: goto label_1a0e48;
        case 0x1a0e4cu: goto label_1a0e4c;
        case 0x1a0e50u: goto label_1a0e50;
        case 0x1a0e54u: goto label_1a0e54;
        case 0x1a0e58u: goto label_1a0e58;
        case 0x1a0e5cu: goto label_1a0e5c;
        case 0x1a0e60u: goto label_1a0e60;
        case 0x1a0e64u: goto label_1a0e64;
        case 0x1a0e68u: goto label_1a0e68;
        case 0x1a0e6cu: goto label_1a0e6c;
        case 0x1a0e70u: goto label_1a0e70;
        case 0x1a0e74u: goto label_1a0e74;
        case 0x1a0e78u: goto label_1a0e78;
        case 0x1a0e7cu: goto label_1a0e7c;
        case 0x1a0e80u: goto label_1a0e80;
        case 0x1a0e84u: goto label_1a0e84;
        case 0x1a0e88u: goto label_1a0e88;
        case 0x1a0e8cu: goto label_1a0e8c;
        case 0x1a0e90u: goto label_1a0e90;
        case 0x1a0e94u: goto label_1a0e94;
        case 0x1a0e98u: goto label_1a0e98;
        case 0x1a0e9cu: goto label_1a0e9c;
        case 0x1a0ea0u: goto label_1a0ea0;
        case 0x1a0ea4u: goto label_1a0ea4;
        case 0x1a0ea8u: goto label_1a0ea8;
        case 0x1a0eacu: goto label_1a0eac;
        case 0x1a0eb0u: goto label_1a0eb0;
        case 0x1a0eb4u: goto label_1a0eb4;
        case 0x1a0eb8u: goto label_1a0eb8;
        case 0x1a0ebcu: goto label_1a0ebc;
        case 0x1a0ec0u: goto label_1a0ec0;
        case 0x1a0ec4u: goto label_1a0ec4;
        case 0x1a0ec8u: goto label_1a0ec8;
        case 0x1a0eccu: goto label_1a0ecc;
        case 0x1a0ed0u: goto label_1a0ed0;
        case 0x1a0ed4u: goto label_1a0ed4;
        case 0x1a0ed8u: goto label_1a0ed8;
        case 0x1a0edcu: goto label_1a0edc;
        case 0x1a0ee0u: goto label_1a0ee0;
        case 0x1a0ee4u: goto label_1a0ee4;
        case 0x1a0ee8u: goto label_1a0ee8;
        case 0x1a0eecu: goto label_1a0eec;
        case 0x1a0ef0u: goto label_1a0ef0;
        case 0x1a0ef4u: goto label_1a0ef4;
        case 0x1a0ef8u: goto label_1a0ef8;
        case 0x1a0efcu: goto label_1a0efc;
        case 0x1a0f00u: goto label_1a0f00;
        case 0x1a0f04u: goto label_1a0f04;
        case 0x1a0f08u: goto label_1a0f08;
        case 0x1a0f0cu: goto label_1a0f0c;
        case 0x1a0f10u: goto label_1a0f10;
        case 0x1a0f14u: goto label_1a0f14;
        case 0x1a0f18u: goto label_1a0f18;
        case 0x1a0f1cu: goto label_1a0f1c;
        case 0x1a0f20u: goto label_1a0f20;
        case 0x1a0f24u: goto label_1a0f24;
        case 0x1a0f28u: goto label_1a0f28;
        case 0x1a0f2cu: goto label_1a0f2c;
        case 0x1a0f30u: goto label_1a0f30;
        case 0x1a0f34u: goto label_1a0f34;
        case 0x1a0f38u: goto label_1a0f38;
        case 0x1a0f3cu: goto label_1a0f3c;
        case 0x1a0f40u: goto label_1a0f40;
        case 0x1a0f44u: goto label_1a0f44;
        case 0x1a0f48u: goto label_1a0f48;
        case 0x1a0f4cu: goto label_1a0f4c;
        case 0x1a0f50u: goto label_1a0f50;
        case 0x1a0f54u: goto label_1a0f54;
        case 0x1a0f58u: goto label_1a0f58;
        case 0x1a0f5cu: goto label_1a0f5c;
        case 0x1a0f60u: goto label_1a0f60;
        case 0x1a0f64u: goto label_1a0f64;
        case 0x1a0f68u: goto label_1a0f68;
        case 0x1a0f6cu: goto label_1a0f6c;
        case 0x1a0f70u: goto label_1a0f70;
        case 0x1a0f74u: goto label_1a0f74;
        case 0x1a0f78u: goto label_1a0f78;
        case 0x1a0f7cu: goto label_1a0f7c;
        case 0x1a0f80u: goto label_1a0f80;
        case 0x1a0f84u: goto label_1a0f84;
        case 0x1a0f88u: goto label_1a0f88;
        case 0x1a0f8cu: goto label_1a0f8c;
        case 0x1a0f90u: goto label_1a0f90;
        case 0x1a0f94u: goto label_1a0f94;
        case 0x1a0f98u: goto label_1a0f98;
        case 0x1a0f9cu: goto label_1a0f9c;
        case 0x1a0fa0u: goto label_1a0fa0;
        case 0x1a0fa4u: goto label_1a0fa4;
        case 0x1a0fa8u: goto label_1a0fa8;
        case 0x1a0facu: goto label_1a0fac;
        case 0x1a0fb0u: goto label_1a0fb0;
        case 0x1a0fb4u: goto label_1a0fb4;
        case 0x1a0fb8u: goto label_1a0fb8;
        case 0x1a0fbcu: goto label_1a0fbc;
        case 0x1a0fc0u: goto label_1a0fc0;
        case 0x1a0fc4u: goto label_1a0fc4;
        case 0x1a0fc8u: goto label_1a0fc8;
        case 0x1a0fccu: goto label_1a0fcc;
        default: break;
    }

    ctx->pc = 0x1a0d28u;

label_1a0d28:
    // 0x1a0d28: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1a0d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1a0d2c:
    // 0x1a0d2c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1a0d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_1a0d30:
    // 0x1a0d30: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1a0d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_1a0d34:
    // 0x1a0d34: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1a0d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1a0d38:
    // 0x1a0d38: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a0d38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a0d3c:
    // 0x1a0d3c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a0d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1a0d40:
    // 0x1a0d40: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1a0d40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a0d44:
    // 0x1a0d44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a0d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1a0d48:
    // 0x1a0d48: 0x8e220240  lw          $v0, 0x240($s1)
    ctx->pc = 0x1a0d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 576)));
label_1a0d4c:
    // 0x1a0d4c: 0xc0e409a  jal         func_390268
label_1a0d50:
    if (ctx->pc == 0x1A0D50u) {
        ctx->pc = 0x1A0D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0D4Cu;
        // 0x1a0d50: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0D54u;
        goto label_1a0d54;
    }
    ctx->pc = 0x1A0D4Cu;
    SET_GPR_U32(ctx, 31, 0x1A0D54u);
    ctx->pc = 0x1A0D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0D4Cu;
    // 0x1a0d50: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1A0D4Cu, 0x1A0D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0D54u;
label_1a0d54:
    // 0x1a0d54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a0d54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a0d58:
    // 0x1a0d58: 0x1200002e  beqz        $s0, . + 4 + (0x2E << 2)
label_1a0d5c:
    if (ctx->pc == 0x1A0D5Cu) {
        ctx->pc = 0x1A0D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0D58u;
        // 0x1a0d5c: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0D60u;
        goto label_1a0d60;
    }
    ctx->pc = 0x1A0D58u;
    {
        const bool branch_taken_0x1a0d58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0D58u;
        // 0x1a0d5c: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0d58) {
            ctx->pc = 0x1A0E14u;
            goto label_1a0e14;
        }
    }
    ctx->pc = 0x1A0D60u;
label_1a0d60:
    // 0x1a0d60: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1a0d60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a0d64:
    // 0x1a0d64: 0x8e44489c  lw          $a0, 0x489C($s2)
    ctx->pc = 0x1a0d64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
label_1a0d68:
    // 0x1a0d68: 0xc0e409a  jal         func_390268
label_1a0d6c:
    if (ctx->pc == 0x1A0D6Cu) {
        ctx->pc = 0x1A0D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0D68u;
        // 0x1a0d6c: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0D70u;
        goto label_1a0d70;
    }
    ctx->pc = 0x1A0D68u;
    SET_GPR_U32(ctx, 31, 0x1A0D70u);
    ctx->pc = 0x1A0D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0D68u;
    // 0x1a0d6c: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1A0D68u, 0x1A0D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0D70u;
label_1a0d70:
    // 0x1a0d70: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1a0d74:
    if (ctx->pc == 0x1A0D74u) {
        ctx->pc = 0x1A0D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0D70u;
        // 0x1a0d74: 0x8e44489c  lw          $a0, 0x489C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0D78u;
        goto label_1a0d78;
    }
    ctx->pc = 0x1A0D70u;
    {
        const bool branch_taken_0x1a0d70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0D70u;
        // 0x1a0d74: 0x8e44489c  lw          $a0, 0x489C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0d70) {
            ctx->pc = 0x1A0D8Cu;
            goto label_1a0d8c;
        }
    }
    ctx->pc = 0x1A0D78u;
label_1a0d78:
    // 0x1a0d78: 0xc0e409a  jal         func_390268
label_1a0d7c:
    if (ctx->pc == 0x1A0D7Cu) {
        ctx->pc = 0x1A0D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0D78u;
        // 0x1a0d7c: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0D80u;
        goto label_1a0d80;
    }
    ctx->pc = 0x1A0D78u;
    SET_GPR_U32(ctx, 31, 0x1A0D80u);
    ctx->pc = 0x1A0D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0D78u;
    // 0x1a0d7c: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1A0D78u, 0x1A0D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0D80u;
label_1a0d80:
    // 0x1a0d80: 0xc087502  jal         func_21D408
label_1a0d84:
    if (ctx->pc == 0x1A0D84u) {
        ctx->pc = 0x1A0D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0D80u;
        // 0x1a0d84: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0D88u;
        goto label_1a0d88;
    }
    ctx->pc = 0x1A0D80u;
    SET_GPR_U32(ctx, 31, 0x1A0D88u);
    ctx->pc = 0x1A0D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0D80u;
    // 0x1a0d84: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x1A0D80u, 0x1A0D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0D88u;
label_1a0d88:
    // 0x1a0d88: 0x8c53020c  lw          $s3, 0x20C($v0)
    ctx->pc = 0x1a0d88u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_1a0d8c:
    // 0x1a0d8c: 0xc087502  jal         func_21D408
label_1a0d90:
    if (ctx->pc == 0x1A0D90u) {
        ctx->pc = 0x1A0D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0D8Cu;
        // 0x1a0d90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0D94u;
        goto label_1a0d94;
    }
    ctx->pc = 0x1A0D8Cu;
    SET_GPR_U32(ctx, 31, 0x1A0D94u);
    ctx->pc = 0x1A0D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0D8Cu;
    // 0x1a0d90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x1A0D8Cu, 0x1A0D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0D94u;
label_1a0d94:
    // 0x1a0d94: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x1a0d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_1a0d98:
    // 0x1a0d98: 0x5473001f  bnel        $v1, $s3, . + 4 + (0x1F << 2)
label_1a0d9c:
    if (ctx->pc == 0x1A0D9Cu) {
        ctx->pc = 0x1A0D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0D98u;
        // 0x1a0d9c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0DA0u;
        goto label_1a0da0;
    }
    ctx->pc = 0x1A0D98u;
    {
        const bool branch_taken_0x1a0d98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        if (branch_taken_0x1a0d98) {
            ctx->pc = 0x1A0D9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0D98u;
            // 0x1a0d9c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0E18u;
            goto label_1a0e18;
        }
    }
    ctx->pc = 0x1A0DA0u;
label_1a0da0:
    // 0x1a0da0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a0da4:
    // 0x1a0da4: 0xc087502  jal         func_21D408
label_1a0da8:
    if (ctx->pc == 0x1A0DA8u) {
        ctx->pc = 0x1A0DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0DA4u;
        // 0x1a0da8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0DACu;
        goto label_1a0dac;
    }
    ctx->pc = 0x1A0DA4u;
    SET_GPR_U32(ctx, 31, 0x1A0DACu);
    ctx->pc = 0x1A0DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0DA4u;
    // 0x1a0da8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x1A0DA4u, 0x1A0DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0DACu;
label_1a0dac:
    // 0x1a0dac: 0x90430152  lbu         $v1, 0x152($v0)
    ctx->pc = 0x1a0dacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 338)));
label_1a0db0:
    // 0x1a0db0: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_1a0db4:
    if (ctx->pc == 0x1A0DB4u) {
        ctx->pc = 0x1A0DB8u;
        goto label_1a0db8;
    }
    ctx->pc = 0x1A0DB0u;
    {
        const bool branch_taken_0x1a0db0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0db0) {
            ctx->pc = 0x1A0DECu;
            goto label_1a0dec;
        }
    }
    ctx->pc = 0x1A0DB8u;
label_1a0db8:
    // 0x1a0db8: 0xc087502  jal         func_21D408
label_1a0dbc:
    if (ctx->pc == 0x1A0DBCu) {
        ctx->pc = 0x1A0DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0DB8u;
        // 0x1a0dbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0DC0u;
        goto label_1a0dc0;
    }
    ctx->pc = 0x1A0DB8u;
    SET_GPR_U32(ctx, 31, 0x1A0DC0u);
    ctx->pc = 0x1A0DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0DB8u;
    // 0x1a0dbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x1A0DB8u, 0x1A0DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0DC0u;
label_1a0dc0:
    // 0x1a0dc0: 0xc136b80  jal         func_4DAE00
label_1a0dc4:
    if (ctx->pc == 0x1A0DC4u) {
        ctx->pc = 0x1A0DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0DC0u;
        // 0x1a0dc4: 0x244401a4  addiu       $a0, $v0, 0x1A4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 420));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0DC8u;
        goto label_1a0dc8;
    }
    ctx->pc = 0x1A0DC0u;
    SET_GPR_U32(ctx, 31, 0x1A0DC8u);
    ctx->pc = 0x1A0DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0DC0u;
    // 0x1a0dc4: 0x244401a4  addiu       $a0, $v0, 0x1A4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 420));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAE00u, 0x1A0DC0u, 0x1A0DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0DC8u;
label_1a0dc8:
    // 0x1a0dc8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1a0dcc:
    if (ctx->pc == 0x1A0DCCu) {
        ctx->pc = 0x1A0DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0DC8u;
        // 0x1a0dcc: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0DD0u;
        goto label_1a0dd0;
    }
    ctx->pc = 0x1A0DC8u;
    {
        const bool branch_taken_0x1a0dc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0DC8u;
        // 0x1a0dcc: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0dc8) {
            ctx->pc = 0x1A0DECu;
            goto label_1a0dec;
        }
    }
    ctx->pc = 0x1A0DD0u;
label_1a0dd0:
    // 0x1a0dd0: 0xc6000334  lwc1        $f0, 0x334($s0)
    ctx->pc = 0x1a0dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a0dd4:
    // 0x1a0dd4: 0xc441ad88  lwc1        $f1, -0x5278($v0)
    ctx->pc = 0x1a0dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294946184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a0dd8:
    // 0x1a0dd8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1a0dd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_1a0ddc:
    // 0x1a0ddc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a0ddcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a0de0:
    // 0x1a0de0: 0x0  nop
    ctx->pc = 0x1a0de0u;
    // NOP
label_1a0de4:
    // 0x1a0de4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_1a0de8:
    if (ctx->pc == 0x1A0DE8u) {
        ctx->pc = 0x1A0DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0DE4u;
        // 0x1a0de8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0DECu;
        goto label_1a0dec;
    }
    ctx->pc = 0x1A0DE4u;
    {
        const bool branch_taken_0x1a0de4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a0de4) {
            ctx->pc = 0x1A0DE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0DE4u;
            // 0x1a0de8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0DECu;
            goto label_1a0dec;
        }
    }
    ctx->pc = 0x1A0DECu;
label_1a0dec:
    // 0x1a0dec: 0xc089f76  jal         func_227DD8
label_1a0df0:
    if (ctx->pc == 0x1A0DF0u) {
        ctx->pc = 0x1A0DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0DECu;
        // 0x1a0df0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0DF4u;
        goto label_1a0df4;
    }
    ctx->pc = 0x1A0DECu;
    SET_GPR_U32(ctx, 31, 0x1A0DF4u);
    ctx->pc = 0x1A0DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0DECu;
    // 0x1a0df0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x1A0DECu, 0x1A0DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0DF4u;
label_1a0df4:
    // 0x1a0df4: 0x54400025  bnel        $v0, $zero, . + 4 + (0x25 << 2)
label_1a0df8:
    if (ctx->pc == 0x1A0DF8u) {
        ctx->pc = 0x1A0DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0DF4u;
        // 0x1a0df8: 0x26300140  addiu       $s0, $s1, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0DFCu;
        goto label_1a0dfc;
    }
    ctx->pc = 0x1A0DF4u;
    {
        const bool branch_taken_0x1a0df4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a0df4) {
            ctx->pc = 0x1A0DF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0DF4u;
            // 0x1a0df8: 0x26300140  addiu       $s0, $s1, 0x140 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 320));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0E8Cu;
            goto label_1a0e8c;
        }
    }
    ctx->pc = 0x1A0DFCu;
label_1a0dfc:
    // 0x1a0dfc: 0xc088edc  jal         func_223B70
label_1a0e00:
    if (ctx->pc == 0x1A0E00u) {
        ctx->pc = 0x1A0E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0DFCu;
        // 0x1a0e00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0E04u;
        goto label_1a0e04;
    }
    ctx->pc = 0x1A0DFCu;
    SET_GPR_U32(ctx, 31, 0x1A0E04u);
    ctx->pc = 0x1A0E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0DFCu;
    // 0x1a0e00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x1A0DFCu, 0x1A0E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0E04u;
label_1a0e04:
    // 0x1a0e04: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_1a0e08:
    if (ctx->pc == 0x1A0E08u) {
        ctx->pc = 0x1A0E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0E04u;
        // 0x1a0e08: 0x26300140  addiu       $s0, $s1, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0E0Cu;
        goto label_1a0e0c;
    }
    ctx->pc = 0x1A0E04u;
    {
        const bool branch_taken_0x1a0e04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0E04u;
        // 0x1a0e08: 0x26300140  addiu       $s0, $s1, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0e04) {
            ctx->pc = 0x1A0E50u;
            goto label_1a0e50;
        }
    }
    ctx->pc = 0x1A0E0Cu;
label_1a0e0c:
    // 0x1a0e0c: 0x16400009  bnez        $s2, . + 4 + (0x9 << 2)
label_1a0e10:
    if (ctx->pc == 0x1A0E10u) {
        ctx->pc = 0x1A0E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0E0Cu;
        // 0x1a0e10: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0E14u;
        goto label_1a0e14;
    }
    ctx->pc = 0x1A0E0Cu;
    {
        const bool branch_taken_0x1a0e0c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0E0Cu;
        // 0x1a0e10: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0e0c) {
            ctx->pc = 0x1A0E34u;
            goto label_1a0e34;
        }
    }
    ctx->pc = 0x1A0E14u;
label_1a0e14:
    // 0x1a0e14: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1a0e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1a0e18:
    // 0x1a0e18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a0e18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a0e1c:
    // 0x1a0e1c: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1a0e1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1a0e20:
    // 0x1a0e20: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1a0e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1a0e24:
    // 0x1a0e24: 0x60f809  jalr        $v1
label_1a0e28:
    if (ctx->pc == 0x1A0E28u) {
        ctx->pc = 0x1A0E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0E24u;
        // 0x1a0e28: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0E2Cu;
        goto label_1a0e2c;
    }
    ctx->pc = 0x1A0E24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A0E2Cu);
        ctx->pc = 0x1A0E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0E24u;
        // 0x1a0e28: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0E24u, 0x1A0E2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A0E2Cu;
label_1a0e2c:
    // 0x1a0e2c: 0x10000062  b           . + 4 + (0x62 << 2)
label_1a0e30:
    if (ctx->pc == 0x1A0E30u) {
        ctx->pc = 0x1A0E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0E2Cu;
        // 0x1a0e30: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0E34u;
        goto label_1a0e34;
    }
    ctx->pc = 0x1A0E2Cu;
    {
        const bool branch_taken_0x1a0e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0E2Cu;
        // 0x1a0e30: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0e2c) {
            ctx->pc = 0x1A0FB8u;
            goto label_1a0fb8;
        }
    }
    ctx->pc = 0x1A0E34u;
label_1a0e34:
    // 0x1a0e34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a0e38:
    // 0x1a0e38: 0xc068a44  jal         func_1A2910
label_1a0e3c:
    if (ctx->pc == 0x1A0E3Cu) {
        ctx->pc = 0x1A0E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0E38u;
        // 0x1a0e3c: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0E40u;
        goto label_1a0e40;
    }
    ctx->pc = 0x1A0E38u;
    SET_GPR_U32(ctx, 31, 0x1A0E40u);
    ctx->pc = 0x1A0E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0E38u;
    // 0x1a0e3c: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2910u, 0x1A0E38u, 0x1A0E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0E40u;
label_1a0e40:
    // 0x1a0e40: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1a0e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1a0e44:
    // 0x1a0e44: 0x27a20004  addiu       $v0, $sp, 0x4
    ctx->pc = 0x1a0e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_1a0e48:
    // 0x1a0e48: 0x10000008  b           . + 4 + (0x8 << 2)
label_1a0e4c:
    if (ctx->pc == 0x1A0E4Cu) {
        ctx->pc = 0x1A0E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0E48u;
        // 0x1a0e4c: 0xa3a30004  sb          $v1, 0x4($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 4), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0E50u;
        goto label_1a0e50;
    }
    ctx->pc = 0x1A0E48u;
    {
        const bool branch_taken_0x1a0e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0E48u;
        // 0x1a0e4c: 0xa3a30004  sb          $v1, 0x4($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 4), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0e48) {
            ctx->pc = 0x1A0E6Cu;
            goto label_1a0e6c;
        }
    }
    ctx->pc = 0x1A0E50u;
label_1a0e50:
    // 0x1a0e50: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x1a0e50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_1a0e54:
    // 0x1a0e54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a0e58:
    // 0x1a0e58: 0xc068a44  jal         func_1A2910
label_1a0e5c:
    if (ctx->pc == 0x1A0E5Cu) {
        ctx->pc = 0x1A0E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0E58u;
        // 0x1a0e5c: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0E60u;
        goto label_1a0e60;
    }
    ctx->pc = 0x1A0E58u;
    SET_GPR_U32(ctx, 31, 0x1A0E60u);
    ctx->pc = 0x1A0E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0E58u;
    // 0x1a0e5c: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2910u, 0x1A0E58u, 0x1A0E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0E60u;
label_1a0e60:
    // 0x1a0e60: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1a0e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1a0e64:
    // 0x1a0e64: 0x27a20008  addiu       $v0, $sp, 0x8
    ctx->pc = 0x1a0e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
label_1a0e68:
    // 0x1a0e68: 0xa3a30008  sb          $v1, 0x8($sp)
    ctx->pc = 0x1a0e68u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 8), (uint8_t)GPR_U32(ctx, 3));
label_1a0e6c:
    // 0x1a0e6c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a0e6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a0e70:
    // 0x1a0e70: 0xa0430003  sb          $v1, 0x3($v0)
    ctx->pc = 0x1a0e70u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 3));
label_1a0e74:
    // 0x1a0e74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a0e78:
    // 0x1a0e78: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1a0e78u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
label_1a0e7c:
    // 0x1a0e7c: 0xc068992  jal         func_1A2648
label_1a0e80:
    if (ctx->pc == 0x1A0E80u) {
        ctx->pc = 0x1A0E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0E7Cu;
        // 0x1a0e80: 0xa0430002  sb          $v1, 0x2($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0E84u;
        goto label_1a0e84;
    }
    ctx->pc = 0x1A0E7Cu;
    SET_GPR_U32(ctx, 31, 0x1A0E84u);
    ctx->pc = 0x1A0E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0E7Cu;
    // 0x1a0e80: 0xa0430002  sb          $v1, 0x2($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2648u, 0x1A0E7Cu, 0x1A0E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0E84u;
label_1a0e84:
    // 0x1a0e84: 0x1000000e  b           . + 4 + (0xE << 2)
label_1a0e88:
    if (ctx->pc == 0x1A0E88u) {
        ctx->pc = 0x1A0E8Cu;
        goto label_1a0e8c;
    }
    ctx->pc = 0x1A0E84u;
    {
        const bool branch_taken_0x1a0e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0e84) {
            ctx->pc = 0x1A0EC0u;
            goto label_1a0ec0;
        }
    }
    ctx->pc = 0x1A0E8Cu;
label_1a0e8c:
    // 0x1a0e8c: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x1a0e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_1a0e90:
    // 0x1a0e90: 0xc068a44  jal         func_1A2910
label_1a0e94:
    if (ctx->pc == 0x1A0E94u) {
        ctx->pc = 0x1A0E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0E90u;
        // 0x1a0e94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0E98u;
        goto label_1a0e98;
    }
    ctx->pc = 0x1A0E90u;
    SET_GPR_U32(ctx, 31, 0x1A0E98u);
    ctx->pc = 0x1A0E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0E90u;
    // 0x1a0e94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2910u, 0x1A0E90u, 0x1A0E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0E98u;
label_1a0e98:
    // 0x1a0e98: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1a0e98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a0e9c:
    // 0x1a0e9c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1a0e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1a0ea0:
    // 0x1a0ea0: 0x27a2000c  addiu       $v0, $sp, 0xC
    ctx->pc = 0x1a0ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
label_1a0ea4:
    // 0x1a0ea4: 0xa3a3000c  sb          $v1, 0xC($sp)
    ctx->pc = 0x1a0ea4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 12), (uint8_t)GPR_U32(ctx, 3));
label_1a0ea8:
    // 0x1a0ea8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a0ea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a0eac:
    // 0x1a0eac: 0xa0430003  sb          $v1, 0x3($v0)
    ctx->pc = 0x1a0eacu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 3));
label_1a0eb0:
    // 0x1a0eb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a0eb4:
    // 0x1a0eb4: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1a0eb4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
label_1a0eb8:
    // 0x1a0eb8: 0xc068992  jal         func_1A2648
label_1a0ebc:
    if (ctx->pc == 0x1A0EBCu) {
        ctx->pc = 0x1A0EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0EB8u;
        // 0x1a0ebc: 0xa0430002  sb          $v1, 0x2($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0EC0u;
        goto label_1a0ec0;
    }
    ctx->pc = 0x1A0EB8u;
    SET_GPR_U32(ctx, 31, 0x1A0EC0u);
    ctx->pc = 0x1A0EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0EB8u;
    // 0x1a0ebc: 0xa0430002  sb          $v1, 0x2($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2648u, 0x1A0EB8u, 0x1A0EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0EC0u;
label_1a0ec0:
    // 0x1a0ec0: 0xc06886e  jal         func_1A21B8
label_1a0ec4:
    if (ctx->pc == 0x1A0EC4u) {
        ctx->pc = 0x1A0EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0EC0u;
        // 0x1a0ec4: 0x26240040  addiu       $a0, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0EC8u;
        goto label_1a0ec8;
    }
    ctx->pc = 0x1A0EC0u;
    SET_GPR_U32(ctx, 31, 0x1A0EC8u);
    ctx->pc = 0x1A0EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0EC0u;
    // 0x1a0ec4: 0x26240040  addiu       $a0, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A21B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A21B8u, 0x1A0EC0u, 0x1A0EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0EC8u;
label_1a0ec8:
    // 0x1a0ec8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1a0ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1a0ecc:
    // 0x1a0ecc: 0x24030320  addiu       $v1, $zero, 0x320
    ctx->pc = 0x1a0eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 800));
label_1a0ed0:
    // 0x1a0ed0: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x1a0ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_1a0ed4:
    // 0x1a0ed4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_1a0ed8:
    if (ctx->pc == 0x1A0ED8u) {
        ctx->pc = 0x1A0ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0ED4u;
        // 0x1a0ed8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0EDCu;
        goto label_1a0edc;
    }
    ctx->pc = 0x1A0ED4u;
    {
        const bool branch_taken_0x1a0ed4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0ed4) {
            ctx->pc = 0x1A0ED8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0ED4u;
            // 0x1a0ed8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0EDCu;
            goto label_1a0edc;
        }
    }
    ctx->pc = 0x1A0EDCu;
label_1a0edc:
    // 0x1a0edc: 0x24060190  addiu       $a2, $zero, 0x190
    ctx->pc = 0x1a0edcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
label_1a0ee0:
    // 0x1a0ee0: 0x8c850048  lw          $a1, 0x48($a0)
    ctx->pc = 0x1a0ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_1a0ee4:
    // 0x1a0ee4: 0xa3001b  divu        $zero, $a1, $v1
    ctx->pc = 0x1a0ee4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
label_1a0ee8:
    // 0x1a0ee8: 0x1010  mfhi        $v0
    ctx->pc = 0x1a0ee8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1a0eec:
    // 0x1a0eec: 0x46001b  divu        $zero, $v0, $a2
    ctx->pc = 0x1a0eecu;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a0ef0:
    // 0x1a0ef0: 0x2012  mflo        $a0
    ctx->pc = 0x1a0ef0u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_1a0ef4:
    // 0x1a0ef4: 0x2810  mfhi        $a1
    ctx->pc = 0x1a0ef4u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_1a0ef8:
    // 0x1a0ef8: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_1a0efc:
    if (ctx->pc == 0x1A0EFCu) {
        ctx->pc = 0x1A0EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0EF8u;
        // 0x1a0efc: 0x24020190  addiu       $v0, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0F00u;
        goto label_1a0f00;
    }
    ctx->pc = 0x1A0EF8u;
    {
        const bool branch_taken_0x1a0ef8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0EF8u;
        // 0x1a0efc: 0x24020190  addiu       $v0, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0ef8) {
            ctx->pc = 0x1A0F2Cu;
            goto label_1a0f2c;
        }
    }
    ctx->pc = 0x1A0F00u;
label_1a0f00:
    // 0x1a0f00: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_1a0f04:
    if (ctx->pc == 0x1A0F04u) {
        ctx->pc = 0x1A0F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0F00u;
        // 0x1a0f04: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0F08u;
        goto label_1a0f08;
    }
    ctx->pc = 0x1A0F00u;
    {
        const bool branch_taken_0x1a0f00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0f00) {
            ctx->pc = 0x1A0F04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0F00u;
            // 0x1a0f04: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0F08u;
            goto label_1a0f08;
        }
    }
    ctx->pc = 0x1A0F08u;
label_1a0f08:
    // 0x1a0f08: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_1a0f0c:
    if (ctx->pc == 0x1A0F0Cu) {
        ctx->pc = 0x1A0F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0F08u;
        // 0x1a0f0c: 0x51842  srl         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0F10u;
        goto label_1a0f10;
    }
    ctx->pc = 0x1A0F08u;
    {
        const bool branch_taken_0x1a0f08 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1A0F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0F08u;
        // 0x1a0f0c: 0x51842  srl         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0f08) {
            ctx->pc = 0x1A0F24u;
            goto label_1a0f24;
        }
    }
    ctx->pc = 0x1A0F10u;
label_1a0f10:
    // 0x1a0f10: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1a0f10u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a0f14:
    // 0x1a0f14: 0x0  nop
    ctx->pc = 0x1a0f14u;
    // NOP
label_1a0f18:
    // 0x1a0f18: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a0f18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1a0f1c:
    // 0x1a0f1c: 0x10000013  b           . + 4 + (0x13 << 2)
label_1a0f20:
    if (ctx->pc == 0x1A0F20u) {
        ctx->pc = 0x1A0F24u;
        goto label_1a0f24;
    }
    ctx->pc = 0x1A0F1Cu;
    {
        const bool branch_taken_0x1a0f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0f1c) {
            ctx->pc = 0x1A0F6Cu;
            goto label_1a0f6c;
        }
    }
    ctx->pc = 0x1A0F24u;
label_1a0f24:
    // 0x1a0f24: 0x1000000c  b           . + 4 + (0xC << 2)
label_1a0f28:
    if (ctx->pc == 0x1A0F28u) {
        ctx->pc = 0x1A0F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0F24u;
        // 0x1a0f28: 0x30a20001  andi        $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0F2Cu;
        goto label_1a0f2c;
    }
    ctx->pc = 0x1A0F24u;
    {
        const bool branch_taken_0x1a0f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0F24u;
        // 0x1a0f28: 0x30a20001  andi        $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0f24) {
            ctx->pc = 0x1A0F58u;
            goto label_1a0f58;
        }
    }
    ctx->pc = 0x1A0F2Cu;
label_1a0f2c:
    // 0x1a0f2c: 0xc52023  subu        $a0, $a2, $a1
    ctx->pc = 0x1a0f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_1a0f30:
    // 0x1a0f30: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_1a0f34:
    if (ctx->pc == 0x1A0F34u) {
        ctx->pc = 0x1A0F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0F30u;
        // 0x1a0f34: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0F38u;
        goto label_1a0f38;
    }
    ctx->pc = 0x1A0F30u;
    {
        const bool branch_taken_0x1a0f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0f30) {
            ctx->pc = 0x1A0F34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0F30u;
            // 0x1a0f34: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0F38u;
            goto label_1a0f38;
        }
    }
    ctx->pc = 0x1A0F38u;
label_1a0f38:
    // 0x1a0f38: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
label_1a0f3c:
    if (ctx->pc == 0x1A0F3Cu) {
        ctx->pc = 0x1A0F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0F38u;
        // 0x1a0f3c: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0F40u;
        goto label_1a0f40;
    }
    ctx->pc = 0x1A0F38u;
    {
        const bool branch_taken_0x1a0f38 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1A0F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0F38u;
        // 0x1a0f3c: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0f38) {
            ctx->pc = 0x1A0F54u;
            goto label_1a0f54;
        }
    }
    ctx->pc = 0x1A0F40u;
label_1a0f40:
    // 0x1a0f40: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1a0f40u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a0f44:
    // 0x1a0f44: 0x0  nop
    ctx->pc = 0x1a0f44u;
    // NOP
label_1a0f48:
    // 0x1a0f48: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a0f48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1a0f4c:
    // 0x1a0f4c: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a0f50:
    if (ctx->pc == 0x1A0F50u) {
        ctx->pc = 0x1A0F54u;
        goto label_1a0f54;
    }
    ctx->pc = 0x1A0F4Cu;
    {
        const bool branch_taken_0x1a0f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0f4c) {
            ctx->pc = 0x1A0F6Cu;
            goto label_1a0f6c;
        }
    }
    ctx->pc = 0x1A0F54u;
label_1a0f54:
    // 0x1a0f54: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x1a0f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_1a0f58:
    // 0x1a0f58: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a0f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1a0f5c:
    // 0x1a0f5c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a0f5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a0f60:
    // 0x1a0f60: 0x0  nop
    ctx->pc = 0x1a0f60u;
    // NOP
label_1a0f64:
    // 0x1a0f64: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a0f64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1a0f68:
    // 0x1a0f68: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1a0f68u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1a0f6c:
    // 0x1a0f6c: 0x3c013b23  lui         $at, 0x3B23
    ctx->pc = 0x1a0f6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15139 << 16));
label_1a0f70:
    // 0x1a0f70: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1a0f70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1a0f74:
    // 0x1a0f74: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a0f74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a0f78:
    // 0x1a0f78: 0x8e4200b4  lw          $v0, 0xB4($s2)
    ctx->pc = 0x1a0f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
label_1a0f7c:
    // 0x1a0f7c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1a0f7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1a0f80:
    // 0x1a0f80: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1a0f80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_1a0f84:
    // 0x1a0f84: 0xa3a00013  sb          $zero, 0x13($sp)
    ctx->pc = 0x1a0f84u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 19), (uint8_t)GPR_U32(ctx, 0));
label_1a0f88:
    // 0x1a0f88: 0x46010b02  mul.s       $f12, $f1, $f1
    ctx->pc = 0x1a0f88u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_1a0f8c:
    // 0x1a0f8c: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x1a0f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1a0f90:
    // 0x1a0f90: 0x8e4400b4  lw          $a0, 0xB4($s2)
    ctx->pc = 0x1a0f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
label_1a0f94:
    // 0x1a0f94: 0xc05e896  jal         func_17A258
label_1a0f98:
    if (ctx->pc == 0x1A0F98u) {
        ctx->pc = 0x1A0F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0F94u;
        // 0x1a0f98: 0x460c0b02  mul.s       $f12, $f1, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0F9Cu;
        goto label_1a0f9c;
    }
    ctx->pc = 0x1A0F94u;
    SET_GPR_U32(ctx, 31, 0x1A0F9Cu);
    ctx->pc = 0x1A0F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0F94u;
    // 0x1a0f98: 0x460c0b02  mul.s       $f12, $f1, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A258u, 0x1A0F94u, 0x1A0F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0F9Cu;
label_1a0f9c:
    // 0x1a0f9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a0f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a0fa0:
    // 0x1a0fa0: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1a0fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_1a0fa4:
    // 0x1a0fa4: 0xc068992  jal         func_1A2648
label_1a0fa8:
    if (ctx->pc == 0x1A0FA8u) {
        ctx->pc = 0x1A0FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0FA4u;
        // 0x1a0fa8: 0x27a50014  addiu       $a1, $sp, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0FACu;
        goto label_1a0fac;
    }
    ctx->pc = 0x1A0FA4u;
    SET_GPR_U32(ctx, 31, 0x1A0FACu);
    ctx->pc = 0x1A0FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0FA4u;
    // 0x1a0fa8: 0x27a50014  addiu       $a1, $sp, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2648u, 0x1A0FA4u, 0x1A0FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0FACu;
label_1a0fac:
    // 0x1a0fac: 0xc06886e  jal         func_1A21B8
label_1a0fb0:
    if (ctx->pc == 0x1A0FB0u) {
        ctx->pc = 0x1A0FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0FACu;
        // 0x1a0fb0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0FB4u;
        goto label_1a0fb4;
    }
    ctx->pc = 0x1A0FACu;
    SET_GPR_U32(ctx, 31, 0x1A0FB4u);
    ctx->pc = 0x1A0FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0FACu;
    // 0x1a0fb0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A21B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A21B8u, 0x1A0FACu, 0x1A0FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0FB4u;
label_1a0fb4:
    // 0x1a0fb4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1a0fb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1a0fb8:
    // 0x1a0fb8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1a0fb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1a0fbc:
    // 0x1a0fbc: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1a0fbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1a0fc0:
    // 0x1a0fc0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a0fc0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1a0fc4:
    // 0x1a0fc4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a0fc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a0fc8:
    // 0x1a0fc8: 0x3e00008  jr          $ra
label_1a0fcc:
    if (ctx->pc == 0x1A0FCCu) {
        ctx->pc = 0x1A0FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0FC8u;
        // 0x1a0fcc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0FD0u;
        goto label_fallthrough_0x1a0fc8;
    }
    ctx->pc = 0x1A0FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0FC8u;
        // 0x1a0fcc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0FC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a0fc8:
    ctx->pc = 0x1A0FD0u;
}
