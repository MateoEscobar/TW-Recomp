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

// Function: sub_0032D400
// Address: 0x32d400 - 0x32d470
void sub_0032D400_0x32d400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032D400_0x32d400");
#endif

    switch (ctx->pc) {
        case 0x32d424u: goto label_32d424;
        case 0x32d440u: goto label_32d440;
        case 0x32d450u: goto label_32d450;
        case 0x32d45cu: goto label_32d45c;
        default: break;
    }

    ctx->pc = 0x32d400u;

    // 0x32d400: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32d400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32d404: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x32d404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x32d408: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32d408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32d40c: 0xc58023  subu        $s0, $a2, $a1
    ctx->pc = 0x32d40cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x32d410: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32d410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32d414: 0x18c0000e  blez        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x32D414u;
    {
        const bool branch_taken_0x32d414 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x32D418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D414u;
        // 0x32d418: 0x8c910028  lw          $s1, 0x28($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d414) {
            ctx->pc = 0x32D450u;
            goto label_32d450;
        }
    }
    ctx->pc = 0x32D41Cu;
    // 0x32d41c: 0xc0c9a7c  jal         func_3269F0
    ctx->pc = 0x32D41Cu;
    SET_GPR_U32(ctx, 31, 0x32D424u);
    ctx->pc = 0x32D420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D41Cu;
    // 0x32d420: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3269F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3269F0u, 0x32D41Cu, 0x32D424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D424u;
label_32d424:
    // 0x32d424: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x32D424u;
    {
        const bool branch_taken_0x32d424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D424u;
        // 0x32d428: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d424) {
            ctx->pc = 0x32D454u;
            goto label_32d454;
        }
    }
    ctx->pc = 0x32D42Cu;
    // 0x32d42c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x32d42cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x32d430: 0x1e000005  bgtz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x32D430u;
    {
        const bool branch_taken_0x32d430 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x32D434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D430u;
        // 0x32d434: 0x102823  negu        $a1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d430) {
            ctx->pc = 0x32D448u;
            goto label_32d448;
        }
    }
    ctx->pc = 0x32D438u;
    // 0x32d438: 0xc0c9a8e  jal         func_326A38
    ctx->pc = 0x32D438u;
    SET_GPR_U32(ctx, 31, 0x32D440u);
    ctx->pc = 0x32D43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D438u;
    // 0x32d43c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326A38u, 0x32D438u, 0x32D440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D440u;
label_32d440:
    // 0x32d440: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x32D440u;
    {
        const bool branch_taken_0x32d440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D440u;
        // 0x32d444: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d440) {
            ctx->pc = 0x32D450u;
            goto label_32d450;
        }
    }
    ctx->pc = 0x32D448u;
label_32d448:
    // 0x32d448: 0xc0c9a8e  jal         func_326A38
    ctx->pc = 0x32D448u;
    SET_GPR_U32(ctx, 31, 0x32D450u);
    ctx->pc = 0x32D44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D448u;
    // 0x32d44c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326A38u, 0x32D448u, 0x32D450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D450u;
label_32d450:
    // 0x32d450: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32d450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32d454:
    // 0x32d454: 0xc0c9a6e  jal         func_3269B8
    ctx->pc = 0x32D454u;
    SET_GPR_U32(ctx, 31, 0x32D45Cu);
    ctx->pc = 0x32D458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D454u;
    // 0x32d458: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3269B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3269B8u, 0x32D454u, 0x32D45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D45Cu;
label_32d45c:
    // 0x32d45c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x32d45cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32d460: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32d460u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32d464: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32d464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32d468: 0x3e00008  jr          $ra
    ctx->pc = 0x32D468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32D46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D468u;
        // 0x32d46c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32D468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32D470u;
}
