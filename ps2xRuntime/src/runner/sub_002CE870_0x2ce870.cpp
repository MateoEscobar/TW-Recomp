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

// Function: sub_002CE870
// Address: 0x2ce870 - 0x2ce8e8
void sub_002CE870_0x2ce870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CE870_0x2ce870");
#endif

    switch (ctx->pc) {
        case 0x2ce894u: goto label_2ce894;
        case 0x2ce8acu: goto label_2ce8ac;
        case 0x2ce8b8u: goto label_2ce8b8;
        default: break;
    }

    ctx->pc = 0x2ce870u;

    // 0x2ce870: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ce870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ce874: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2ce874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2ce878: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ce878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ce87c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ce87cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce880: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ce880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ce884: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2ce884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ce888: 0x8c44020c  lw          $a0, 0x20C($v0)
    ctx->pc = 0x2ce888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x2ce88c: 0xc05959e  jal         func_165678
    ctx->pc = 0x2CE88Cu;
    SET_GPR_U32(ctx, 31, 0x2CE894u);
    ctx->pc = 0x2CE890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE88Cu;
    // 0x2ce890: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x2CE88Cu, 0x2CE894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE894u;
label_2ce894:
    // 0x2ce894: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CE894u;
    {
        const bool branch_taken_0x2ce894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE894u;
        // 0x2ce898: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce894) {
            ctx->pc = 0x2CE8BCu;
            goto label_2ce8bc;
        }
    }
    ctx->pc = 0x2CE89Cu;
    // 0x2ce89c: 0x10510007  beq         $v0, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CE89Cu;
    {
        const bool branch_taken_0x2ce89c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x2CE8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE89Cu;
        // 0x2ce8a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce89c) {
            ctx->pc = 0x2CE8BCu;
            goto label_2ce8bc;
        }
    }
    ctx->pc = 0x2CE8A4u;
    // 0x2ce8a4: 0xc08750a  jal         func_21D428
    ctx->pc = 0x2CE8A4u;
    SET_GPR_U32(ctx, 31, 0x2CE8ACu);
    ctx->pc = 0x2CE8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE8A4u;
    // 0x2ce8a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D428u, 0x2CE8A4u, 0x2CE8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE8ACu;
label_2ce8ac:
    // 0x2ce8ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ce8acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce8b0: 0xc0a57ca  jal         func_295F28
    ctx->pc = 0x2CE8B0u;
    SET_GPR_U32(ctx, 31, 0x2CE8B8u);
    ctx->pc = 0x2CE8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE8B0u;
    // 0x2ce8b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F28u, 0x2CE8B0u, 0x2CE8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE8B8u;
label_2ce8b8:
    // 0x2ce8b8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2ce8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_2ce8bc:
    // 0x2ce8bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ce8bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ce8c0: 0x8c64b734  lw          $a0, -0x48CC($v1)
    ctx->pc = 0x2ce8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948660)));
    // 0x2ce8c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ce8c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ce8c8: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x2ce8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x2ce8cc: 0x244205dc  addiu       $v0, $v0, 0x5DC
    ctx->pc = 0x2ce8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1500));
    // 0x2ce8d0: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x2ce8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x2ce8d4: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x2ce8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x2ce8d8: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x2ce8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    // 0x2ce8dc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2ce8dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ce8e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE8E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE8E0u;
        // 0x2ce8e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CE8E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CE8E8u;
}
