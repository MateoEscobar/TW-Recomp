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

// Function: sub_002E7C18
// Address: 0x2e7c18 - 0x2e7da8
void sub_002E7C18_0x2e7c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E7C18_0x2e7c18");
#endif

    switch (ctx->pc) {
        case 0x2e7c18u: goto label_2e7c18;
        case 0x2e7c1cu: goto label_2e7c1c;
        case 0x2e7c20u: goto label_2e7c20;
        case 0x2e7c24u: goto label_2e7c24;
        case 0x2e7c28u: goto label_2e7c28;
        case 0x2e7c2cu: goto label_2e7c2c;
        case 0x2e7c30u: goto label_2e7c30;
        case 0x2e7c34u: goto label_2e7c34;
        case 0x2e7c38u: goto label_2e7c38;
        case 0x2e7c3cu: goto label_2e7c3c;
        case 0x2e7c40u: goto label_2e7c40;
        case 0x2e7c44u: goto label_2e7c44;
        case 0x2e7c48u: goto label_2e7c48;
        case 0x2e7c4cu: goto label_2e7c4c;
        case 0x2e7c50u: goto label_2e7c50;
        case 0x2e7c54u: goto label_2e7c54;
        case 0x2e7c58u: goto label_2e7c58;
        case 0x2e7c5cu: goto label_2e7c5c;
        case 0x2e7c60u: goto label_2e7c60;
        case 0x2e7c64u: goto label_2e7c64;
        case 0x2e7c68u: goto label_2e7c68;
        case 0x2e7c6cu: goto label_2e7c6c;
        case 0x2e7c70u: goto label_2e7c70;
        case 0x2e7c74u: goto label_2e7c74;
        case 0x2e7c78u: goto label_2e7c78;
        case 0x2e7c7cu: goto label_2e7c7c;
        case 0x2e7c80u: goto label_2e7c80;
        case 0x2e7c84u: goto label_2e7c84;
        case 0x2e7c88u: goto label_2e7c88;
        case 0x2e7c8cu: goto label_2e7c8c;
        case 0x2e7c90u: goto label_2e7c90;
        case 0x2e7c94u: goto label_2e7c94;
        case 0x2e7c98u: goto label_2e7c98;
        case 0x2e7c9cu: goto label_2e7c9c;
        case 0x2e7ca0u: goto label_2e7ca0;
        case 0x2e7ca4u: goto label_2e7ca4;
        case 0x2e7ca8u: goto label_2e7ca8;
        case 0x2e7cacu: goto label_2e7cac;
        case 0x2e7cb0u: goto label_2e7cb0;
        case 0x2e7cb4u: goto label_2e7cb4;
        case 0x2e7cb8u: goto label_2e7cb8;
        case 0x2e7cbcu: goto label_2e7cbc;
        case 0x2e7cc0u: goto label_2e7cc0;
        case 0x2e7cc4u: goto label_2e7cc4;
        case 0x2e7cc8u: goto label_2e7cc8;
        case 0x2e7cccu: goto label_2e7ccc;
        case 0x2e7cd0u: goto label_2e7cd0;
        case 0x2e7cd4u: goto label_2e7cd4;
        case 0x2e7cd8u: goto label_2e7cd8;
        case 0x2e7cdcu: goto label_2e7cdc;
        case 0x2e7ce0u: goto label_2e7ce0;
        case 0x2e7ce4u: goto label_2e7ce4;
        case 0x2e7ce8u: goto label_2e7ce8;
        case 0x2e7cecu: goto label_2e7cec;
        case 0x2e7cf0u: goto label_2e7cf0;
        case 0x2e7cf4u: goto label_2e7cf4;
        case 0x2e7cf8u: goto label_2e7cf8;
        case 0x2e7cfcu: goto label_2e7cfc;
        case 0x2e7d00u: goto label_2e7d00;
        case 0x2e7d04u: goto label_2e7d04;
        case 0x2e7d08u: goto label_2e7d08;
        case 0x2e7d0cu: goto label_2e7d0c;
        case 0x2e7d10u: goto label_2e7d10;
        case 0x2e7d14u: goto label_2e7d14;
        case 0x2e7d18u: goto label_2e7d18;
        case 0x2e7d1cu: goto label_2e7d1c;
        case 0x2e7d20u: goto label_2e7d20;
        case 0x2e7d24u: goto label_2e7d24;
        case 0x2e7d28u: goto label_2e7d28;
        case 0x2e7d2cu: goto label_2e7d2c;
        case 0x2e7d30u: goto label_2e7d30;
        case 0x2e7d34u: goto label_2e7d34;
        case 0x2e7d38u: goto label_2e7d38;
        case 0x2e7d3cu: goto label_2e7d3c;
        case 0x2e7d40u: goto label_2e7d40;
        case 0x2e7d44u: goto label_2e7d44;
        case 0x2e7d48u: goto label_2e7d48;
        case 0x2e7d4cu: goto label_2e7d4c;
        case 0x2e7d50u: goto label_2e7d50;
        case 0x2e7d54u: goto label_2e7d54;
        case 0x2e7d58u: goto label_2e7d58;
        case 0x2e7d5cu: goto label_2e7d5c;
        case 0x2e7d60u: goto label_2e7d60;
        case 0x2e7d64u: goto label_2e7d64;
        case 0x2e7d68u: goto label_2e7d68;
        case 0x2e7d6cu: goto label_2e7d6c;
        case 0x2e7d70u: goto label_2e7d70;
        case 0x2e7d74u: goto label_2e7d74;
        case 0x2e7d78u: goto label_2e7d78;
        case 0x2e7d7cu: goto label_2e7d7c;
        case 0x2e7d80u: goto label_2e7d80;
        case 0x2e7d84u: goto label_2e7d84;
        case 0x2e7d88u: goto label_2e7d88;
        case 0x2e7d8cu: goto label_2e7d8c;
        case 0x2e7d90u: goto label_2e7d90;
        case 0x2e7d94u: goto label_2e7d94;
        case 0x2e7d98u: goto label_2e7d98;
        case 0x2e7d9cu: goto label_2e7d9c;
        case 0x2e7da0u: goto label_2e7da0;
        case 0x2e7da4u: goto label_2e7da4;
        default: break;
    }

    ctx->pc = 0x2e7c18u;

label_2e7c18:
    // 0x2e7c18: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2e7c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2e7c1c:
    // 0x2e7c1c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e7c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2e7c20:
    // 0x2e7c20: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2e7c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_2e7c24:
    // 0x2e7c24: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2e7c24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e7c28:
    // 0x2e7c28: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2e7c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_2e7c2c:
    // 0x2e7c2c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2e7c2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e7c30:
    // 0x2e7c30: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2e7c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_2e7c34:
    // 0x2e7c34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e7c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2e7c38:
    // 0x2e7c38: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2e7c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2e7c3c:
    // 0x2e7c3c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2e7c3cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2e7c40:
    // 0x2e7c40: 0xc089f98  jal         func_227E60
label_2e7c44:
    if (ctx->pc == 0x2E7C44u) {
        ctx->pc = 0x2E7C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7C40u;
        // 0x2e7c44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7C48u;
        goto label_2e7c48;
    }
    ctx->pc = 0x2E7C40u;
    SET_GPR_U32(ctx, 31, 0x2E7C48u);
    ctx->pc = 0x2E7C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7C40u;
    // 0x2e7c44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x2E7C40u, 0x2E7C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7C48u;
label_2e7c48:
    // 0x2e7c48: 0x10520050  beq         $v0, $s2, . + 4 + (0x50 << 2)
label_2e7c4c:
    if (ctx->pc == 0x2E7C4Cu) {
        ctx->pc = 0x2E7C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7C48u;
        // 0x2e7c4c: 0x3c0501c1  lui         $a1, 0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)449 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7C50u;
        goto label_2e7c50;
    }
    ctx->pc = 0x2E7C48u;
    {
        const bool branch_taken_0x2e7c48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x2E7C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7C48u;
        // 0x2e7c4c: 0x3c0501c1  lui         $a1, 0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)449 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7c48) {
            ctx->pc = 0x2E7D8Cu;
            goto label_2e7d8c;
        }
    }
    ctx->pc = 0x2E7C50u;
label_2e7c50:
    // 0x2e7c50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e7c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e7c54:
    // 0x2e7c54: 0xc089998  jal         func_226660
label_2e7c58:
    if (ctx->pc == 0x2E7C58u) {
        ctx->pc = 0x2E7C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7C54u;
        // 0x2e7c58: 0x34a56a40  ori         $a1, $a1, 0x6A40 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)27200);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7C5Cu;
        goto label_2e7c5c;
    }
    ctx->pc = 0x2E7C54u;
    SET_GPR_U32(ctx, 31, 0x2E7C5Cu);
    ctx->pc = 0x2E7C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7C54u;
    // 0x2e7c58: 0x34a56a40  ori         $a1, $a1, 0x6A40 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)27200);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2E7C54u, 0x2E7C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7C5Cu;
label_2e7c5c:
    // 0x2e7c5c: 0x1052004c  beq         $v0, $s2, . + 4 + (0x4C << 2)
label_2e7c60:
    if (ctx->pc == 0x2E7C60u) {
        ctx->pc = 0x2E7C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7C5Cu;
        // 0x2e7c60: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7C64u;
        goto label_2e7c64;
    }
    ctx->pc = 0x2E7C5Cu;
    {
        const bool branch_taken_0x2e7c5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x2E7C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7C5Cu;
        // 0x2e7c60: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7c5c) {
            ctx->pc = 0x2E7D90u;
            goto label_2e7d90;
        }
    }
    ctx->pc = 0x2E7C64u;
label_2e7c64:
    // 0x2e7c64: 0xc088ef0  jal         func_223BC0
label_2e7c68:
    if (ctx->pc == 0x2E7C68u) {
        ctx->pc = 0x2E7C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7C64u;
        // 0x2e7c68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7C6Cu;
        goto label_2e7c6c;
    }
    ctx->pc = 0x2E7C64u;
    SET_GPR_U32(ctx, 31, 0x2E7C6Cu);
    ctx->pc = 0x2E7C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7C64u;
    // 0x2e7c68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223BC0u, 0x2E7C64u, 0x2E7C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7C6Cu;
label_2e7c6c:
    // 0x2e7c6c: 0x14520003  bne         $v0, $s2, . + 4 + (0x3 << 2)
label_2e7c70:
    if (ctx->pc == 0x2E7C70u) {
        ctx->pc = 0x2E7C74u;
        goto label_2e7c74;
    }
    ctx->pc = 0x2E7C6Cu;
    {
        const bool branch_taken_0x2e7c6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x2e7c6c) {
            ctx->pc = 0x2E7C7Cu;
            goto label_2e7c7c;
        }
    }
    ctx->pc = 0x2E7C74u;
label_2e7c74:
    // 0x2e7c74: 0xc08be36  jal         func_22F8D8
label_2e7c78:
    if (ctx->pc == 0x2E7C78u) {
        ctx->pc = 0x2E7C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7C74u;
        // 0x2e7c78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7C7Cu;
        goto label_2e7c7c;
    }
    ctx->pc = 0x2E7C74u;
    SET_GPR_U32(ctx, 31, 0x2E7C7Cu);
    ctx->pc = 0x2E7C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7C74u;
    // 0x2e7c78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F8D8u, 0x2E7C74u, 0x2E7C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7C7Cu;
label_2e7c7c:
    // 0x2e7c7c: 0xc08bfbc  jal         func_22FEF0
label_2e7c80:
    if (ctx->pc == 0x2E7C80u) {
        ctx->pc = 0x2E7C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7C7Cu;
        // 0x2e7c80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7C84u;
        goto label_2e7c84;
    }
    ctx->pc = 0x2E7C7Cu;
    SET_GPR_U32(ctx, 31, 0x2E7C84u);
    ctx->pc = 0x2E7C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7C7Cu;
    // 0x2e7c80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x2E7C7Cu, 0x2E7C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7C84u;
label_2e7c84:
    // 0x2e7c84: 0xde2200e0  ld          $v0, 0xE0($s1)
    ctx->pc = 0x2e7c84u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
label_2e7c88:
    // 0x2e7c88: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x2e7c88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
label_2e7c8c:
    // 0x2e7c8c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2e7c8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_2e7c90:
    // 0x2e7c90: 0x24060800  addiu       $a2, $zero, 0x800
    ctx->pc = 0x2e7c90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_2e7c94:
    // 0x2e7c94: 0x3c05bfff  lui         $a1, 0xBFFF
    ctx->pc = 0x2e7c94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49151 << 16));
label_2e7c98:
    // 0x2e7c98: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e7c98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2e7c9c:
    // 0x2e7c9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e7c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e7ca0:
    // 0x2e7ca0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x2e7ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_2e7ca4:
    // 0x2e7ca4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x2e7ca4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_2e7ca8:
    // 0x2e7ca8: 0xc089998  jal         func_226660
label_2e7cac:
    if (ctx->pc == 0x2E7CACu) {
        ctx->pc = 0x2E7CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7CA8u;
        // 0x2e7cac: 0xfe2200e0  sd          $v0, 0xE0($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 224), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7CB0u;
        goto label_2e7cb0;
    }
    ctx->pc = 0x2E7CA8u;
    SET_GPR_U32(ctx, 31, 0x2E7CB0u);
    ctx->pc = 0x2E7CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7CA8u;
    // 0x2e7cac: 0xfe2200e0  sd          $v0, 0xE0($s1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 17), 224), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2E7CA8u, 0x2E7CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7CB0u;
label_2e7cb0:
    // 0x2e7cb0: 0x1452000c  bne         $v0, $s2, . + 4 + (0xC << 2)
label_2e7cb4:
    if (ctx->pc == 0x2E7CB4u) {
        ctx->pc = 0x2E7CB8u;
        goto label_2e7cb8;
    }
    ctx->pc = 0x2E7CB0u;
    {
        const bool branch_taken_0x2e7cb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x2e7cb0) {
            ctx->pc = 0x2E7CE4u;
            goto label_2e7ce4;
        }
    }
    ctx->pc = 0x2E7CB8u;
label_2e7cb8:
    // 0x2e7cb8: 0x8e3000d8  lw          $s0, 0xD8($s1)
    ctx->pc = 0x2e7cb8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_2e7cbc:
    // 0x2e7cbc: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2e7cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2e7cc0:
    // 0x2e7cc0: 0xc05dc0e  jal         func_177038
label_2e7cc4:
    if (ctx->pc == 0x2E7CC4u) {
        ctx->pc = 0x2E7CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7CC0u;
        // 0x2e7cc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7CC8u;
        goto label_2e7cc8;
    }
    ctx->pc = 0x2E7CC0u;
    SET_GPR_U32(ctx, 31, 0x2E7CC8u);
    ctx->pc = 0x2E7CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7CC0u;
    // 0x2e7cc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177038u, 0x2E7CC0u, 0x2E7CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7CC8u;
label_2e7cc8:
    // 0x2e7cc8: 0xc05d484  jal         func_175210
label_2e7ccc:
    if (ctx->pc == 0x2E7CCCu) {
        ctx->pc = 0x2E7CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7CC8u;
        // 0x2e7ccc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7CD0u;
        goto label_2e7cd0;
    }
    ctx->pc = 0x2E7CC8u;
    SET_GPR_U32(ctx, 31, 0x2E7CD0u);
    ctx->pc = 0x2E7CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7CC8u;
    // 0x2e7ccc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x2E7CC8u, 0x2E7CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7CD0u;
label_2e7cd0:
    // 0x2e7cd0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2e7cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2e7cd4:
    // 0x2e7cd4: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x2e7cd4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_2e7cd8:
    // 0x2e7cd8: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x2e7cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_2e7cdc:
    // 0x2e7cdc: 0xa0f809  jalr        $a1
label_2e7ce0:
    if (ctx->pc == 0x2E7CE0u) {
        ctx->pc = 0x2E7CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7CDCu;
        // 0x2e7ce0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7CE4u;
        goto label_2e7ce4;
    }
    ctx->pc = 0x2E7CDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2E7CE4u);
        ctx->pc = 0x2E7CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7CDCu;
        // 0x2e7ce0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E7CDCu, 0x2E7CE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E7CE4u;
label_2e7ce4:
    // 0x2e7ce4: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2e7ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_2e7ce8:
    // 0x2e7ce8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e7ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e7cec:
    // 0x2e7cec: 0xc089998  jal         func_226660
label_2e7cf0:
    if (ctx->pc == 0x2E7CF0u) {
        ctx->pc = 0x2E7CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7CECu;
        // 0x2e7cf0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7CF4u;
        goto label_2e7cf4;
    }
    ctx->pc = 0x2E7CECu;
    SET_GPR_U32(ctx, 31, 0x2E7CF4u);
    ctx->pc = 0x2E7CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7CECu;
    // 0x2e7cf0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2E7CECu, 0x2E7CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7CF4u;
label_2e7cf4:
    // 0x2e7cf4: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
label_2e7cf8:
    if (ctx->pc == 0x2E7CF8u) {
        ctx->pc = 0x2E7CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7CF4u;
        // 0x2e7cf8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7CFCu;
        goto label_2e7cfc;
    }
    ctx->pc = 0x2E7CF4u;
    {
        const bool branch_taken_0x2e7cf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7CF4u;
        // 0x2e7cf8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7cf4) {
            ctx->pc = 0x2E7D90u;
            goto label_2e7d90;
        }
    }
    ctx->pc = 0x2E7CFCu;
label_2e7cfc:
    // 0x2e7cfc: 0x3405fc04  ori         $a1, $zero, 0xFC04
    ctx->pc = 0x2e7cfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64516);
label_2e7d00:
    // 0x2e7d00: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x2e7d00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_2e7d04:
    // 0x2e7d04: 0x34a5ba00  ori         $a1, $a1, 0xBA00
    ctx->pc = 0x2e7d04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)47616);
label_2e7d08:
    // 0x2e7d08: 0x52978  dsll        $a1, $a1, 5
    ctx->pc = 0x2e7d08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 5);
label_2e7d0c:
    // 0x2e7d0c: 0xc08997c  jal         func_2265F0
label_2e7d10:
    if (ctx->pc == 0x2E7D10u) {
        ctx->pc = 0x2E7D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7D0Cu;
        // 0x2e7d10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7D14u;
        goto label_2e7d14;
    }
    ctx->pc = 0x2E7D0Cu;
    SET_GPR_U32(ctx, 31, 0x2E7D14u);
    ctx->pc = 0x2E7D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7D0Cu;
    // 0x2e7d10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x2E7D0Cu, 0x2E7D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7D14u;
label_2e7d14:
    // 0x2e7d14: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
label_2e7d18:
    if (ctx->pc == 0x2E7D18u) {
        ctx->pc = 0x2E7D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7D14u;
        // 0x2e7d18: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7D1Cu;
        goto label_2e7d1c;
    }
    ctx->pc = 0x2E7D14u;
    {
        const bool branch_taken_0x2e7d14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7D14u;
        // 0x2e7d18: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7d14) {
            ctx->pc = 0x2E7D90u;
            goto label_2e7d90;
        }
    }
    ctx->pc = 0x2E7D1Cu;
label_2e7d1c:
    // 0x2e7d1c: 0xde2200e0  ld          $v0, 0xE0($s1)
    ctx->pc = 0x2e7d1cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
label_2e7d20:
    // 0x2e7d20: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2e7d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2e7d24:
    // 0x2e7d24: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x2e7d24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_2e7d28:
    // 0x2e7d28: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2e7d28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_2e7d2c:
    // 0x2e7d2c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e7d2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e7d30:
    // 0x2e7d30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e7d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e7d34:
    // 0x2e7d34: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e7d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2e7d38:
    // 0x2e7d38: 0x2405029f  addiu       $a1, $zero, 0x29F
    ctx->pc = 0x2e7d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 671));
label_2e7d3c:
    // 0x2e7d3c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2e7d3cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2e7d40:
    // 0x2e7d40: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e7d40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e7d44:
    // 0x2e7d44: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e7d44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e7d48:
    // 0x2e7d48: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2e7d48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e7d4c:
    // 0x2e7d4c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2e7d4cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e7d50:
    // 0x2e7d50: 0xc0968f8  jal         func_25A3E0
label_2e7d54:
    if (ctx->pc == 0x2E7D54u) {
        ctx->pc = 0x2E7D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7D50u;
        // 0x2e7d54: 0xfe2200e0  sd          $v0, 0xE0($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 224), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7D58u;
        goto label_2e7d58;
    }
    ctx->pc = 0x2E7D50u;
    SET_GPR_U32(ctx, 31, 0x2E7D58u);
    ctx->pc = 0x2E7D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7D50u;
    // 0x2e7d54: 0xfe2200e0  sd          $v0, 0xE0($s1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 17), 224), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3E0u, 0x2E7D50u, 0x2E7D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7D58u;
label_2e7d58:
    // 0x2e7d58: 0xa2320194  sb          $s2, 0x194($s1)
    ctx->pc = 0x2e7d58u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 404), (uint8_t)GPR_U32(ctx, 18));
label_2e7d5c:
    // 0x2e7d5c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2e7d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2e7d60:
    // 0x2e7d60: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2e7d60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_2e7d64:
    // 0x2e7d64: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e7d64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e7d68:
    // 0x2e7d68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e7d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e7d6c:
    // 0x2e7d6c: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2e7d6cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2e7d70:
    // 0x2e7d70: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x2e7d70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_2e7d74:
    // 0x2e7d74: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e7d74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e7d78:
    // 0x2e7d78: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2e7d78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e7d7c:
    // 0x2e7d7c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2e7d7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e7d80:
    // 0x2e7d80: 0xc088178  jal         func_2205E0
label_2e7d84:
    if (ctx->pc == 0x2E7D84u) {
        ctx->pc = 0x2E7D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7D80u;
        // 0x2e7d84: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7D88u;
        goto label_2e7d88;
    }
    ctx->pc = 0x2E7D80u;
    SET_GPR_U32(ctx, 31, 0x2E7D88u);
    ctx->pc = 0x2E7D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7D80u;
    // 0x2e7d84: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2E7D80u, 0x2E7D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7D88u;
label_2e7d88:
    // 0x2e7d88: 0xa2720021  sb          $s2, 0x21($s3)
    ctx->pc = 0x2e7d88u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 33), (uint8_t)GPR_U32(ctx, 18));
label_2e7d8c:
    // 0x2e7d8c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2e7d8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2e7d90:
    // 0x2e7d90: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2e7d90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2e7d94:
    // 0x2e7d94: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e7d94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2e7d98:
    // 0x2e7d98: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2e7d98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e7d9c:
    // 0x2e7d9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e7d9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e7da0:
    // 0x2e7da0: 0x3e00008  jr          $ra
label_2e7da4:
    if (ctx->pc == 0x2E7DA4u) {
        ctx->pc = 0x2E7DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7DA0u;
        // 0x2e7da4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7DA8u;
        goto label_fallthrough_0x2e7da0;
    }
    ctx->pc = 0x2E7DA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E7DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7DA0u;
        // 0x2e7da4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E7DA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2e7da0:
    ctx->pc = 0x2E7DA8u;
}
