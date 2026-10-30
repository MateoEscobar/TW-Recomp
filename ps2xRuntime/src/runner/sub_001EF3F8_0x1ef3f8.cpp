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

// Function: sub_001EF3F8
// Address: 0x1ef3f8 - 0x1ef490
void sub_001EF3F8_0x1ef3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EF3F8_0x1ef3f8");
#endif

    switch (ctx->pc) {
        case 0x1ef430u: goto label_1ef430;
        case 0x1ef438u: goto label_1ef438;
        case 0x1ef448u: goto label_1ef448;
        case 0x1ef450u: goto label_1ef450;
        case 0x1ef458u: goto label_1ef458;
        case 0x1ef464u: goto label_1ef464;
        default: break;
    }

    ctx->pc = 0x1ef3f8u;

    // 0x1ef3f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ef3f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ef3fc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1ef3fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1ef400: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1ef400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1ef404: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1ef404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1ef408: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ef408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ef40c: 0x8c8201dc  lw          $v0, 0x1DC($a0)
    ctx->pc = 0x1ef40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 476)));
    // 0x1ef410: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x1ef410u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1ef414: 0xa29021  addu        $s2, $a1, $v0
    ctx->pc = 0x1ef414u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1ef418: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ef418u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef41c: 0x232102b  sltu        $v0, $s1, $s2
    ctx->pc = 0x1ef41cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1ef420: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1EF420u;
    {
        const bool branch_taken_0x1ef420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF420u;
        // 0x1ef424: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef420) {
            ctx->pc = 0x1EF474u;
            goto label_1ef474;
        }
    }
    ctx->pc = 0x1EF428u;
    // 0x1ef428: 0x24420094  addiu       $v0, $v0, 0x94
    ctx->pc = 0x1ef428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 148));
    // 0x1ef42c: 0x448021  addu        $s0, $v0, $a0
    ctx->pc = 0x1ef42cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1ef430:
    // 0x1ef430: 0xc0e4060  jal         func_390180
    ctx->pc = 0x1EF430u;
    SET_GPR_U32(ctx, 31, 0x1EF438u);
    ctx->pc = 0x1EF434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF430u;
    // 0x1ef434: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x1EF430u, 0x1EF438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF438u;
label_1ef438:
    // 0x1ef438: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1EF438u;
    {
        const bool branch_taken_0x1ef438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef438) {
            ctx->pc = 0x1EF43Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EF438u;
            // 0x1ef43c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EF468u;
            goto label_1ef468;
        }
    }
    ctx->pc = 0x1EF440u;
    // 0x1ef440: 0xc0e409a  jal         func_390268
    ctx->pc = 0x1EF440u;
    SET_GPR_U32(ctx, 31, 0x1EF448u);
    ctx->pc = 0x1EF444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF440u;
    // 0x1ef444: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1EF440u, 0x1EF448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF448u;
label_1ef448:
    // 0x1ef448: 0xc089c70  jal         func_2271C0
    ctx->pc = 0x1EF448u;
    SET_GPR_U32(ctx, 31, 0x1EF450u);
    ctx->pc = 0x1EF44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF448u;
    // 0x1ef44c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2271C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2271C0u, 0x1EF448u, 0x1EF450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF450u;
label_1ef450:
    // 0x1ef450: 0xc0e409a  jal         func_390268
    ctx->pc = 0x1EF450u;
    SET_GPR_U32(ctx, 31, 0x1EF458u);
    ctx->pc = 0x1EF454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF450u;
    // 0x1ef454: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1EF450u, 0x1EF458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF458u;
label_1ef458:
    // 0x1ef458: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ef458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef45c: 0xc0871f2  jal         func_21C7C8
    ctx->pc = 0x1EF45Cu;
    SET_GPR_U32(ctx, 31, 0x1EF464u);
    ctx->pc = 0x1EF460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF45Cu;
    // 0x1ef460: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C7C8u, 0x1EF45Cu, 0x1EF464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF464u;
label_1ef464:
    // 0x1ef464: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1ef464u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1ef468:
    // 0x1ef468: 0x232102b  sltu        $v0, $s1, $s2
    ctx->pc = 0x1ef468u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1ef46c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1EF46Cu;
    {
        const bool branch_taken_0x1ef46c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EF470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF46Cu;
        // 0x1ef470: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef46c) {
            ctx->pc = 0x1EF430u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ef430;
        }
    }
    ctx->pc = 0x1EF474u;
label_1ef474:
    // 0x1ef474: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1ef474u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ef478: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1ef478u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ef47c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1ef47cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ef480: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ef480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ef484: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF484u;
        // 0x1ef488: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF484u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EF48Cu;
    // 0x1ef48c: 0x0  nop
    ctx->pc = 0x1ef48cu;
    // NOP
    ctx->pc = 0x1ef490u;
}
