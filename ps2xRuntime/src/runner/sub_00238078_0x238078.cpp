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

// Function: sub_00238078
// Address: 0x238078 - 0x2380c0
void sub_00238078_0x238078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238078_0x238078");
#endif

    switch (ctx->pc) {
        case 0x238094u: goto label_238094;
        case 0x23809cu: goto label_23809c;
        case 0x2380acu: goto label_2380ac;
        default: break;
    }

    ctx->pc = 0x238078u;

    // 0x238078: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x238078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23807c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x23807cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x238080: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x238080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x238084: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x238084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238088: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x238088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23808c: 0xc0e4060  jal         func_390180
    ctx->pc = 0x23808Cu;
    SET_GPR_U32(ctx, 31, 0x238094u);
    ctx->pc = 0x238090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23808Cu;
    // 0x238090: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x23808Cu, 0x238094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238094u;
label_238094:
    // 0x238094: 0xc08a61a  jal         func_229868
    ctx->pc = 0x238094u;
    SET_GPR_U32(ctx, 31, 0x23809Cu);
    ctx->pc = 0x238098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238094u;
    // 0x238098: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x238094u, 0x23809Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23809Cu;
label_23809c:
    // 0x23809c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23809Cu;
    {
        const bool branch_taken_0x23809c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2380A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23809Cu;
        // 0x2380a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23809c) {
            ctx->pc = 0x2380ACu;
            goto label_2380ac;
        }
    }
    ctx->pc = 0x2380A4u;
    // 0x2380a4: 0xc08736a  jal         func_21CDA8
    ctx->pc = 0x2380A4u;
    SET_GPR_U32(ctx, 31, 0x2380ACu);
    ctx->pc = 0x2380A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2380A4u;
    // 0x2380a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21CDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21CDA8u, 0x2380A4u, 0x2380ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2380ACu;
label_2380ac:
    // 0x2380ac: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2380acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2380b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2380b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2380b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2380B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2380B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2380B4u;
        // 0x2380b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2380B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2380BCu;
    // 0x2380bc: 0x0  nop
    ctx->pc = 0x2380bcu;
    // NOP
    ctx->pc = 0x2380c0u;
}
