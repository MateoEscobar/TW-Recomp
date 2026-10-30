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

// Function: sub_0011B6C0
// Address: 0x11b6c0 - 0x11b740
void sub_0011B6C0_0x11b6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011B6C0_0x11b6c0");
#endif

    switch (ctx->pc) {
        case 0x11b700u: goto label_11b700;
        case 0x11b710u: goto label_11b710;
        case 0x11b718u: goto label_11b718;
        case 0x11b72cu: goto label_11b72c;
        default: break;
    }

    ctx->pc = 0x11b6c0u;

    // 0x11b6c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11b6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11b6c4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x11b6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x11b6c8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x11b6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x11b6cc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11b6ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11b6d0: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x11b6d0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    // 0x11b6d4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x11b6d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x11b6d8: 0x8e25aa84  lw          $a1, -0x557C($s1)
    ctx->pc = 0x11b6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x50AA84u));
    // 0x11b6dc: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x11b6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x11b6e0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x11b6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x11b6e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11b6e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b6e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11b6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11b6ec: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x11b6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x11b6f0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11b6f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b6f4: 0x8ca24268  lw          $v0, 0x4268($a1)
    ctx->pc = 0x11b6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 17000)));
    // 0x11b6f8: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x11B6F8u;
    SET_GPR_U32(ctx, 31, 0x11B700u);
    ctx->pc = 0x11B6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B6F8u;
    // 0x11b6fc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x11B6F8u, 0x11B700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B700u;
label_11b700:
    // 0x11b700: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x11B700u;
    {
        const bool branch_taken_0x11b700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b700) {
            ctx->pc = 0x11B704u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11B700u;
            // 0x11b704: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11B730u;
            goto label_11b730;
        }
    }
    ctx->pc = 0x11B708u;
    // 0x11b708: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x11B708u;
    SET_GPR_U32(ctx, 31, 0x11B710u);
    ctx->pc = 0x11B70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B708u;
    // 0x11b70c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x11B708u, 0x11B710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B710u;
label_11b710:
    // 0x11b710: 0xc043c20  jal         func_10F080
    ctx->pc = 0x11B710u;
    SET_GPR_U32(ctx, 31, 0x11B718u);
    ctx->pc = 0x11B714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B710u;
    // 0x11b714: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F080u, 0x11B710u, 0x11B718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B718u;
label_11b718:
    // 0x11b718: 0x8e24aa84  lw          $a0, -0x557C($s1)
    ctx->pc = 0x11b718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945412)));
    // 0x11b71c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11b71cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b720: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x11b720u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b724: 0xc0440c6  jal         func_110318
    ctx->pc = 0x11B724u;
    SET_GPR_U32(ctx, 31, 0x11B72Cu);
    ctx->pc = 0x11B728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B724u;
    // 0x11b728: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110318u, 0x11B724u, 0x11B72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B72Cu;
label_11b72c:
    // 0x11b72c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x11b72cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_11b730:
    // 0x11b730: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x11b730u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11b734: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11b734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11b738: 0x3e00008  jr          $ra
    ctx->pc = 0x11B738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B738u;
        // 0x11b73c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B740u;
}
