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

// Function: sub_0014B360
// Address: 0x14b360 - 0x14b3d0
void sub_0014B360_0x14b360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B360_0x14b360");
#endif

    switch (ctx->pc) {
        case 0x14b388u: goto label_14b388;
        case 0x14b3b0u: goto label_14b3b0;
        case 0x14b3bcu: goto label_14b3bc;
        default: break;
    }

    ctx->pc = 0x14b360u;

    // 0x14b360: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x14b360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x14b364: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14b364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14b368: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x14b368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x14b36c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14b36cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b370: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x14b370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x14b374: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14b374u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14b378: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x14b378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x14b37c: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x14b37cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b380: 0xc052c56  jal         func_14B158
    ctx->pc = 0x14B380u;
    SET_GPR_U32(ctx, 31, 0x14B388u);
    ctx->pc = 0x14B384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B380u;
    // 0x14b384: 0x27a90040  addiu       $t1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B158u, 0x14B380u, 0x14B388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B388u;
label_14b388:
    // 0x14b388: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x14B388u;
    {
        const bool branch_taken_0x14b388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B388u;
        // 0x14b38c: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b388) {
            ctx->pc = 0x14B3C0u;
            goto label_14b3c0;
        }
    }
    ctx->pc = 0x14B390u;
    // 0x14b390: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x14b390u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x14b394: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x14b394u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x14b398: 0x8e0269ec  lw          $v0, 0x69EC($s0)
    ctx->pc = 0x14b398u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5169ECu));
    // 0x14b39c: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x14b39cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
    // 0x14b3a0: 0x24a5a870  addiu       $a1, $a1, -0x5790
    ctx->pc = 0x14b3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944880));
    // 0x14b3a4: 0x24c6b4f0  addiu       $a2, $a2, -0x4B10
    ctx->pc = 0x14b3a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948080));
    // 0x14b3a8: 0xc10c6b0  jal         func_431AC0
    ctx->pc = 0x14B3A8u;
    SET_GPR_U32(ctx, 31, 0x14B3B0u);
    ctx->pc = 0x14B3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B3A8u;
    // 0x14b3ac: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431AC0u, 0x14B3A8u, 0x14B3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B3B0u;
label_14b3b0:
    // 0x14b3b0: 0x8e0369ec  lw          $v1, 0x69EC($s0)
    ctx->pc = 0x14b3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27116)));
    // 0x14b3b4: 0xc10c57e  jal         func_4315F8
    ctx->pc = 0x14B3B4u;
    SET_GPR_U32(ctx, 31, 0x14B3BCu);
    ctx->pc = 0x14B3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B3B4u;
    // 0x14b3b8: 0x8c64000c  lw          $a0, 0xC($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4315F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4315F8u, 0x14B3B4u, 0x14B3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B3BCu;
label_14b3bc:
    // 0x14b3bc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x14b3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_14b3c0:
    // 0x14b3c0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x14b3c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14b3c4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x14b3c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14b3c8: 0x3e00008  jr          $ra
    ctx->pc = 0x14B3C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B3C8u;
        // 0x14b3cc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B3C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B3D0u;
}
