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

// Function: sub_00292410
// Address: 0x292410 - 0x292460
void sub_00292410_0x292410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00292410_0x292410");
#endif

    switch (ctx->pc) {
        case 0x29242cu: goto label_29242c;
        case 0x292434u: goto label_292434;
        case 0x292444u: goto label_292444;
        case 0x292450u: goto label_292450;
        default: break;
    }

    ctx->pc = 0x292410u;

    // 0x292410: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x292410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x292414: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x292414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x292418: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x292418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x29241c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29241cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292420: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x292420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x292424: 0xc0e4060  jal         func_390180
    ctx->pc = 0x292424u;
    SET_GPR_U32(ctx, 31, 0x29242Cu);
    ctx->pc = 0x292428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292424u;
    // 0x292428: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x292424u, 0x29242Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29242Cu;
label_29242c:
    // 0x29242c: 0xc08a61a  jal         func_229868
    ctx->pc = 0x29242Cu;
    SET_GPR_U32(ctx, 31, 0x292434u);
    ctx->pc = 0x292430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29242Cu;
    // 0x292430: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x29242Cu, 0x292434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292434u;
label_292434:
    // 0x292434: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x292434u;
    {
        const bool branch_taken_0x292434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x292434) {
            ctx->pc = 0x292438u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292434u;
            // 0x292438: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x292454u;
            goto label_292454;
        }
    }
    ctx->pc = 0x29243Cu;
    // 0x29243c: 0xc087502  jal         func_21D408
    ctx->pc = 0x29243Cu;
    SET_GPR_U32(ctx, 31, 0x292444u);
    ctx->pc = 0x292440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29243Cu;
    // 0x292440: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x29243Cu, 0x292444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292444u;
label_292444:
    // 0x292444: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x292444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292448: 0xc0a33ae  jal         func_28CEB8
    ctx->pc = 0x292448u;
    SET_GPR_U32(ctx, 31, 0x292450u);
    ctx->pc = 0x29244Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292448u;
    // 0x29244c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CEB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CEB8u, 0x292448u, 0x292450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292450u;
label_292450:
    // 0x292450: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x292450u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_292454:
    // 0x292454: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x292454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x292458: 0x3e00008  jr          $ra
    ctx->pc = 0x292458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29245Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292458u;
        // 0x29245c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x292460u;
}
