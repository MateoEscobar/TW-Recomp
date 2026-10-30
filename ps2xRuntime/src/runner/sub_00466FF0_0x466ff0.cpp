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

// Function: sub_00466FF0
// Address: 0x466ff0 - 0x467090
void sub_00466FF0_0x466ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00466FF0_0x466ff0");
#endif

    switch (ctx->pc) {
        case 0x46701cu: goto label_46701c;
        case 0x46702cu: goto label_46702c;
        case 0x467050u: goto label_467050;
        case 0x467074u: goto label_467074;
        default: break;
    }

    ctx->pc = 0x466ff0u;

    // 0x466ff0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x466ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x466ff4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x466ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x466ff8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x466ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x466ffc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x466ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x467000: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x467000u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x467004: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x467004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x467008: 0x8e440018  lw          $a0, 0x18($s2)
    ctx->pc = 0x467008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x46700c: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x46700Cu;
    {
        const bool branch_taken_0x46700c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x467010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46700Cu;
        // 0x467010: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46700c) {
            ctx->pc = 0x467074u;
            goto label_467074;
        }
    }
    ctx->pc = 0x467014u;
    // 0x467014: 0xc119b0e  jal         func_466C38
    ctx->pc = 0x467014u;
    SET_GPR_U32(ctx, 31, 0x46701Cu);
    ctx->pc = 0x466C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466C38u, 0x467014u, 0x46701Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46701Cu;
label_46701c:
    // 0x46701c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x46701Cu;
    {
        const bool branch_taken_0x46701c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x467020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46701Cu;
        // 0x467020: 0x24040120  addiu       $a0, $zero, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46701c) {
            ctx->pc = 0x467074u;
            goto label_467074;
        }
    }
    ctx->pc = 0x467024u;
    // 0x467024: 0xc120daa  jal         func_4836A8
    ctx->pc = 0x467024u;
    SET_GPR_U32(ctx, 31, 0x46702Cu);
    ctx->pc = 0x467028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x467024u;
    // 0x467028: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4836A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4836A8u, 0x467024u, 0x46702Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46702Cu;
label_46702c:
    // 0x46702c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x46702cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x467030: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x467030u;
    {
        const bool branch_taken_0x467030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x467034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467030u;
        // 0x467034: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x467030) {
            ctx->pc = 0x467048u;
            goto label_467048;
        }
    }
    ctx->pc = 0x467038u;
    // 0x467038: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x467038u;
    {
        const bool branch_taken_0x467038 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x467038) {
            ctx->pc = 0x467048u;
            goto label_467048;
        }
    }
    ctx->pc = 0x467040u;
    // 0x467040: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x467040u;
    {
        const bool branch_taken_0x467040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x467044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467040u;
        // 0x467044: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x467040) {
            ctx->pc = 0x467068u;
            goto label_467068;
        }
    }
    ctx->pc = 0x467048u;
label_467048:
    // 0x467048: 0xc120daa  jal         func_4836A8
    ctx->pc = 0x467048u;
    SET_GPR_U32(ctx, 31, 0x467050u);
    ctx->pc = 0x46704Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x467048u;
    // 0x46704c: 0x2404012e  addiu       $a0, $zero, 0x12E (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 302));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4836A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4836A8u, 0x467048u, 0x467050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x467050u;
label_467050:
    // 0x467050: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x467050u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x467054: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x467054u;
    {
        const bool branch_taken_0x467054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x467058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467054u;
        // 0x467058: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x467054) {
            ctx->pc = 0x46706Cu;
            goto label_46706c;
        }
    }
    ctx->pc = 0x46705Cu;
    // 0x46705c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x46705cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x467060: 0x3a220003  xori        $v0, $s1, 0x3
    ctx->pc = 0x467060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)3);
    // 0x467064: 0x222800b  movn        $s0, $s1, $v0
    ctx->pc = 0x467064u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 17));
label_467068:
    // 0x467068: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x467068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46706c:
    // 0x46706c: 0xc119ddc  jal         func_467770
    ctx->pc = 0x46706Cu;
    SET_GPR_U32(ctx, 31, 0x467074u);
    ctx->pc = 0x467070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46706Cu;
    // 0x467070: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x467770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467770u, 0x46706Cu, 0x467074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x467074u;
label_467074:
    // 0x467074: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x467074u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x467078: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x467078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x46707c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x46707cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x467080: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x467080u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x467084: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x467084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x467088: 0x3e00008  jr          $ra
    ctx->pc = 0x467088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46708Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467088u;
        // 0x46708c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x467088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x467090u;
}
