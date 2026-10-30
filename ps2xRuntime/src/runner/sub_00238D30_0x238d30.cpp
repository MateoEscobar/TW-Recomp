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

// Function: sub_00238D30
// Address: 0x238d30 - 0x238db0
void sub_00238D30_0x238d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238D30_0x238d30");
#endif

    switch (ctx->pc) {
        case 0x238d48u: goto label_238d48;
        case 0x238d50u: goto label_238d50;
        case 0x238d64u: goto label_238d64;
        case 0x238d74u: goto label_238d74;
        case 0x238d9cu: goto label_238d9c;
        default: break;
    }

    ctx->pc = 0x238d30u;

    // 0x238d30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x238d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x238d34: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x238d34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x238d38: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x238d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x238d3c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x238d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x238d40: 0xc0e4060  jal         func_390180
    ctx->pc = 0x238D40u;
    SET_GPR_U32(ctx, 31, 0x238D48u);
    ctx->pc = 0x238D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238D40u;
    // 0x238d44: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x238D40u, 0x238D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238D48u;
label_238d48:
    // 0x238d48: 0xc08a61a  jal         func_229868
    ctx->pc = 0x238D48u;
    SET_GPR_U32(ctx, 31, 0x238D50u);
    ctx->pc = 0x238D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238D48u;
    // 0x238d4c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x238D48u, 0x238D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238D50u;
label_238d50:
    // 0x238d50: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x238d50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238d54: 0x52000012  beql        $s0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x238D54u;
    {
        const bool branch_taken_0x238d54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x238d54) {
            ctx->pc = 0x238D58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238D54u;
            // 0x238d58: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238DA0u;
            goto label_238da0;
        }
    }
    ctx->pc = 0x238D5Cu;
    // 0x238d5c: 0xc08a000  jal         func_228000
    ctx->pc = 0x238D5Cu;
    SET_GPR_U32(ctx, 31, 0x238D64u);
    ctx->pc = 0x238D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238D5Cu;
    // 0x238d60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228000u, 0x238D5Cu, 0x238D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238D64u;
label_238d64:
    // 0x238d64: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x238D64u;
    {
        const bool branch_taken_0x238d64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x238D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238D64u;
        // 0x238d68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238d64) {
            ctx->pc = 0x238D7Cu;
            goto label_238d7c;
        }
    }
    ctx->pc = 0x238D6Cu;
    // 0x238d6c: 0xc0899aa  jal         func_2266A8
    ctx->pc = 0x238D6Cu;
    SET_GPR_U32(ctx, 31, 0x238D74u);
    ctx->pc = 0x238D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238D6Cu;
    // 0x238d70: 0x2405001c  addiu       $a1, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x238D6Cu, 0x238D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238D74u;
label_238d74:
    // 0x238d74: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x238D74u;
    {
        const bool branch_taken_0x238d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238D74u;
        // 0x238d78: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238d74) {
            ctx->pc = 0x238DA0u;
            goto label_238da0;
        }
    }
    ctx->pc = 0x238D7Cu;
label_238d7c:
    // 0x238d7c: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x238d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x238d80: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x238d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x238d84: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x238d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x238d88: 0x54640005  bnel        $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x238D88u;
    {
        const bool branch_taken_0x238d88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x238d88) {
            ctx->pc = 0x238D8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238D88u;
            // 0x238d8c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238DA0u;
            goto label_238da0;
        }
    }
    ctx->pc = 0x238D90u;
    // 0x238d90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x238d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238d94: 0xc0899aa  jal         func_2266A8
    ctx->pc = 0x238D94u;
    SET_GPR_U32(ctx, 31, 0x238D9Cu);
    ctx->pc = 0x238D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238D94u;
    // 0x238d98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x238D94u, 0x238D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238D9Cu;
label_238d9c:
    // 0x238d9c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x238d9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_238da0:
    // 0x238da0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x238da0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x238da4: 0x3e00008  jr          $ra
    ctx->pc = 0x238DA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238DA4u;
        // 0x238da8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238DA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x238DACu;
    // 0x238dac: 0x0  nop
    ctx->pc = 0x238dacu;
    // NOP
    ctx->pc = 0x238db0u;
}
