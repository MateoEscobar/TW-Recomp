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

// Function: sub_0041A370
// Address: 0x41a370 - 0x41a3e0
void sub_0041A370_0x41a370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041A370_0x41a370");
#endif

    switch (ctx->pc) {
        case 0x41a390u: goto label_41a390;
        case 0x41a3b8u: goto label_41a3b8;
        case 0x41a3c8u: goto label_41a3c8;
        case 0x41a3d0u: goto label_41a3d0;
        default: break;
    }

    ctx->pc = 0x41a370u;

    // 0x41a370: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x41a370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x41a374: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x41a374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x41a378: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41a378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x41a37c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x41a37cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41a380: 0x8e020230  lw          $v0, 0x230($s0)
    ctx->pc = 0x41a380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 560)));
    // 0x41a384: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x41a384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x41a388: 0xc10658c  jal         func_419630
    ctx->pc = 0x41A388u;
    SET_GPR_U32(ctx, 31, 0x41A390u);
    ctx->pc = 0x41A38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A388u;
    // 0x41a38c: 0xae020230  sw          $v0, 0x230($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 560), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419630u, 0x41A388u, 0x41A390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A390u;
label_41a390:
    // 0x41a390: 0x8e040230  lw          $a0, 0x230($s0)
    ctx->pc = 0x41a390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 560)));
    // 0x41a394: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x41a394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x41a398: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x41A398u;
    {
        const bool branch_taken_0x41a398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41a398) {
            ctx->pc = 0x41A39Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41A398u;
            // 0x41a39c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x41A3A0u;
            goto label_41a3a0;
        }
    }
    ctx->pc = 0x41A3A0u;
label_41a3a0:
    // 0x41a3a0: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x41a3a0u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x41a3a4: 0x1810  mfhi        $v1
    ctx->pc = 0x41a3a4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x41a3a8: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x41A3A8u;
    {
        const bool branch_taken_0x41a3a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x41a3a8) {
            ctx->pc = 0x41A3ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41A3A8u;
            // 0x41a3ac: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41A3BCu;
            goto label_41a3bc;
        }
    }
    ctx->pc = 0x41A3B0u;
    // 0x41a3b0: 0xc106818  jal         func_41A060
    ctx->pc = 0x41A3B0u;
    SET_GPR_U32(ctx, 31, 0x41A3B8u);
    ctx->pc = 0x41A3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A3B0u;
    // 0x41a3b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41A060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41A060u, 0x41A3B0u, 0x41A3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A3B8u;
label_41a3b8:
    // 0x41a3b8: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x41a3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_41a3bc:
    // 0x41a3bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41a3bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41a3c0: 0xc106454  jal         func_419150
    ctx->pc = 0x41A3C0u;
    SET_GPR_U32(ctx, 31, 0x41A3C8u);
    ctx->pc = 0x41A3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A3C0u;
    // 0x41a3c4: 0x24a516c0  addiu       $a1, $a1, 0x16C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419150u, 0x41A3C0u, 0x41A3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A3C8u;
label_41a3c8:
    // 0x41a3c8: 0xc1065ea  jal         func_4197A8
    ctx->pc = 0x41A3C8u;
    SET_GPR_U32(ctx, 31, 0x41A3D0u);
    ctx->pc = 0x41A3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A3C8u;
    // 0x41a3cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4197A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4197A8u, 0x41A3C8u, 0x41A3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A3D0u;
label_41a3d0:
    // 0x41a3d0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x41a3d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x41a3d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41a3d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41a3d8: 0x3e00008  jr          $ra
    ctx->pc = 0x41A3D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41A3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A3D8u;
        // 0x41a3dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41A3D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41A3E0u;
}
