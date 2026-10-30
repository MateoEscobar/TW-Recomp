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

// Function: sub_0011B558
// Address: 0x11b558 - 0x11b5e8
void sub_0011B558_0x11b558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011B558_0x11b558");
#endif

    switch (ctx->pc) {
        case 0x11b5a0u: goto label_11b5a0;
        case 0x11b5b8u: goto label_11b5b8;
        case 0x11b5c8u: goto label_11b5c8;
        default: break;
    }

    ctx->pc = 0x11b558u;

    // 0x11b558: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11b558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11b55c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x11b55cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x11b560: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x11b560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x11b564: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11b564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11b568: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x11b568u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
    // 0x11b56c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x11b56cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x11b570: 0x8e46aa84  lw          $a2, -0x557C($s2)
    ctx->pc = 0x11b570u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x50AA84u));
    // 0x11b574: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x11b574u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x11b578: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x11b578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x11b57c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11b57cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b580: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x11b580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x11b584: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x11b584u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x11b588: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11b588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11b58c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x11b58cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b590: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11b590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b594: 0x8cc24268  lw          $v0, 0x4268($a2)
    ctx->pc = 0x11b594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 17000)));
    // 0x11b598: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x11B598u;
    SET_GPR_U32(ctx, 31, 0x11B5A0u);
    ctx->pc = 0x11B59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B598u;
    // 0x11b59c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x11B598u, 0x11B5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B5A0u;
label_11b5a0:
    // 0x11b5a0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B5A0u;
    {
        const bool branch_taken_0x11b5a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B5A0u;
        // 0x11b5a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b5a0) {
            ctx->pc = 0x11B5B0u;
            goto label_11b5b0;
        }
    }
    ctx->pc = 0x11B5A8u;
    // 0x11b5a8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x11B5A8u;
    {
        const bool branch_taken_0x11b5a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B5A8u;
        // 0x11b5ac: 0xae110004  sw          $s1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b5a8) {
            ctx->pc = 0x11B5CCu;
            goto label_11b5cc;
        }
    }
    ctx->pc = 0x11B5B0u;
label_11b5b0:
    // 0x11b5b0: 0xc046d98  jal         func_11B660
    ctx->pc = 0x11B5B0u;
    SET_GPR_U32(ctx, 31, 0x11B5B8u);
    ctx->pc = 0x11B5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B5B0u;
    // 0x11b5b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B660u, 0x11B5B0u, 0x11B5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B5B8u;
label_11b5b8:
    // 0x11b5b8: 0x8e44aa84  lw          $a0, -0x557C($s2)
    ctx->pc = 0x11b5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945412)));
    // 0x11b5bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11b5bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b5c0: 0xc0440c6  jal         func_110318
    ctx->pc = 0x11B5C0u;
    SET_GPR_U32(ctx, 31, 0x11B5C8u);
    ctx->pc = 0x11B5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B5C0u;
    // 0x11b5c4: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110318u, 0x11B5C0u, 0x11B5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B5C8u;
label_11b5c8:
    // 0x11b5c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11b5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11b5cc:
    // 0x11b5cc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x11b5ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11b5d0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x11b5d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11b5d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x11b5d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11b5d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11b5d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11b5dc: 0x3e00008  jr          $ra
    ctx->pc = 0x11B5DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B5DCu;
        // 0x11b5e0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B5DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B5E4u;
    // 0x11b5e4: 0x0  nop
    ctx->pc = 0x11b5e4u;
    // NOP
    ctx->pc = 0x11b5e8u;
}
