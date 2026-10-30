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

// Function: sub_00169D30
// Address: 0x169d30 - 0x169dd8
void sub_00169D30_0x169d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169D30_0x169d30");
#endif

    switch (ctx->pc) {
        case 0x169d78u: goto label_169d78;
        case 0x169d80u: goto label_169d80;
        case 0x169d88u: goto label_169d88;
        case 0x169d98u: goto label_169d98;
        case 0x169dc0u: goto label_169dc0;
        default: break;
    }

    ctx->pc = 0x169d30u;

    // 0x169d30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x169d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x169d34: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x169d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x169d38: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x169d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x169d3c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x169d3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169d40: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x169d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x169d44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x169d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x169d48: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x169d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x169d4c: 0x38620017  xori        $v0, $v1, 0x17
    ctx->pc = 0x169d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)23);
    // 0x169d50: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x169D50u;
    {
        const bool branch_taken_0x169d50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x169D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169D50u;
        // 0x169d54: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169d50) {
            ctx->pc = 0x169D60u;
            goto label_169d60;
        }
    }
    ctx->pc = 0x169D58u;
    // 0x169d58: 0x38620018  xori        $v0, $v1, 0x18
    ctx->pc = 0x169d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)24);
    // 0x169d5c: 0x2202b  sltu        $a0, $zero, $v0
    ctx->pc = 0x169d5cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_169d60:
    // 0x169d60: 0x14800018  bnez        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x169D60u;
    {
        const bool branch_taken_0x169d60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x169D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169D60u;
        // 0x169d64: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169d60) {
            ctx->pc = 0x169DC4u;
            goto label_169dc4;
        }
    }
    ctx->pc = 0x169D68u;
    // 0x169d68: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x169d68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169d6c: 0x26320048  addiu       $s2, $s1, 0x48
    ctx->pc = 0x169d6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
    // 0x169d70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x169d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169d74: 0x0  nop
    ctx->pc = 0x169d74u;
    // NOP
label_169d78:
    // 0x169d78: 0xc137826  jal         func_4DE098
    ctx->pc = 0x169D78u;
    SET_GPR_U32(ctx, 31, 0x169D80u);
    ctx->pc = 0x169D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169D78u;
    // 0x169d7c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x169D78u, 0x169D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169D80u;
label_169d80:
    // 0x169d80: 0xc0e409a  jal         func_390268
    ctx->pc = 0x169D80u;
    SET_GPR_U32(ctx, 31, 0x169D88u);
    ctx->pc = 0x169D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169D80u;
    // 0x169d84: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x169D80u, 0x169D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169D88u;
label_169d88:
    // 0x169d88: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x169D88u;
    {
        const bool branch_taken_0x169d88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x169d88) {
            ctx->pc = 0x169D8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x169D88u;
            // 0x169d8c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x169DA4u;
            goto label_169da4;
        }
    }
    ctx->pc = 0x169D90u;
    // 0x169d90: 0xc087502  jal         func_21D408
    ctx->pc = 0x169D90u;
    SET_GPR_U32(ctx, 31, 0x169D98u);
    ctx->pc = 0x169D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169D90u;
    // 0x169d94: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x169D90u, 0x169D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169D98u;
label_169d98:
    // 0x169d98: 0x8c43021c  lw          $v1, 0x21C($v0)
    ctx->pc = 0x169d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 540)));
    // 0x169d9c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x169D9Cu;
    {
        const bool branch_taken_0x169d9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x169DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169D9Cu;
        // 0x169da0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169d9c) {
            ctx->pc = 0x169DC0u;
            goto label_169dc0;
        }
    }
    ctx->pc = 0x169DA4u;
label_169da4:
    // 0x169da4: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x169da4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x169da8: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x169DA8u;
    {
        const bool branch_taken_0x169da8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x169DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169DA8u;
        // 0x169dac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169da8) {
            ctx->pc = 0x169D78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_169d78;
        }
    }
    ctx->pc = 0x169DB0u;
    // 0x169db0: 0x86240030  lh          $a0, 0x30($s1)
    ctx->pc = 0x169db0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x169db4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x169db4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169db8: 0xc05b11c  jal         func_16C470
    ctx->pc = 0x169DB8u;
    SET_GPR_U32(ctx, 31, 0x169DC0u);
    ctx->pc = 0x169DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169DB8u;
    // 0x169dbc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C470u, 0x169DB8u, 0x169DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169DC0u;
label_169dc0:
    // 0x169dc0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x169dc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_169dc4:
    // 0x169dc4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x169dc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x169dc8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x169dc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x169dcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x169dccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169dd0: 0x3e00008  jr          $ra
    ctx->pc = 0x169DD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169DD0u;
        // 0x169dd4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169DD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169DD8u;
}
