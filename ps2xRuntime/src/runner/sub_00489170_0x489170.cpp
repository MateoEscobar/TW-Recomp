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

// Function: sub_00489170
// Address: 0x489170 - 0x4891f8
void sub_00489170_0x489170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00489170_0x489170");
#endif

    switch (ctx->pc) {
        case 0x4891acu: goto label_4891ac;
        case 0x4891c0u: goto label_4891c0;
        case 0x4891c8u: goto label_4891c8;
        default: break;
    }

    ctx->pc = 0x489170u;

    // 0x489170: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x489170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x489174: 0x8f838978  lw          $v1, -0x7688($gp)
    ctx->pc = 0x489174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936952)));
    // 0x489178: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x489178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x48917c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x48917cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x489180: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x489180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x489184: 0x2442ad18  addiu       $v0, $v0, -0x52E8
    ctx->pc = 0x489184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
    // 0x489188: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x489188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x48918c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x48918cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x489190: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x489190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x489194: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x489194u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x489198: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x489198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x48919c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x48919Cu;
    {
        const bool branch_taken_0x48919c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x48919c) {
            ctx->pc = 0x4891A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x48919Cu;
            // 0x4891a0: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4891B4u;
            goto label_4891b4;
        }
    }
    ctx->pc = 0x4891A4u;
    // 0x4891a4: 0xc1223aa  jal         func_488EA8
    ctx->pc = 0x4891A4u;
    SET_GPR_U32(ctx, 31, 0x4891ACu);
    ctx->pc = 0x4891A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4891A4u;
    // 0x4891a8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488EA8u, 0x4891A4u, 0x4891ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4891ACu;
label_4891ac:
    // 0x4891ac: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x4891ACu;
    {
        const bool branch_taken_0x4891ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4891B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4891ACu;
        // 0x4891b0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4891ac) {
            ctx->pc = 0x4891E4u;
            goto label_4891e4;
        }
    }
    ctx->pc = 0x4891B4u;
label_4891b4:
    // 0x4891b4: 0x1211000a  beq         $s0, $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x4891B4u;
    {
        const bool branch_taken_0x4891b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x4891B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4891B4u;
        // 0x4891b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4891b4) {
            ctx->pc = 0x4891E0u;
            goto label_4891e0;
        }
    }
    ctx->pc = 0x4891BCu;
    // 0x4891bc: 0x2604fff0  addiu       $a0, $s0, -0x10
    ctx->pc = 0x4891bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
label_4891c0:
    // 0x4891c0: 0xc1223aa  jal         func_488EA8
    ctx->pc = 0x4891C0u;
    SET_GPR_U32(ctx, 31, 0x4891C8u);
    ctx->pc = 0x4891C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4891C0u;
    // 0x4891c4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488EA8u, 0x4891C0u, 0x4891C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4891C8u;
label_4891c8:
    // 0x4891c8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4891C8u;
    {
        const bool branch_taken_0x4891c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4891c8) {
            ctx->pc = 0x4891CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4891C8u;
            // 0x4891cc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4891E4u;
            goto label_4891e4;
        }
    }
    ctx->pc = 0x4891D0u;
    // 0x4891d0: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x4891d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4891d4: 0x1611fffa  bne         $s0, $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4891D4u;
    {
        const bool branch_taken_0x4891d4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x4891D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4891D4u;
        // 0x4891d8: 0x2604fff0  addiu       $a0, $s0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4891d4) {
            ctx->pc = 0x4891C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4891c0;
        }
    }
    ctx->pc = 0x4891DCu;
    // 0x4891dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4891dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4891e0:
    // 0x4891e0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4891e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4891e4:
    // 0x4891e4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4891e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4891e8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4891e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4891ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4891ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4891f0: 0x3e00008  jr          $ra
    ctx->pc = 0x4891F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4891F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4891F0u;
        // 0x4891f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4891F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4891F8u;
}
