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

// Function: sub_0036C378
// Address: 0x36c378 - 0x36c3d8
void sub_0036C378_0x36c378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036C378_0x36c378");
#endif

    switch (ctx->pc) {
        case 0x36c390u: goto label_36c390;
        case 0x36c39cu: goto label_36c39c;
        case 0x36c3b4u: goto label_36c3b4;
        case 0x36c3c0u: goto label_36c3c0;
        default: break;
    }

    ctx->pc = 0x36c378u;

    // 0x36c378: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x36c378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x36c37c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36c37cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x36c380: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x36c380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x36c384: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36c384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36c388: 0xc1075f8  jal         func_41D7E0
    ctx->pc = 0x36C388u;
    SET_GPR_U32(ctx, 31, 0x36C390u);
    ctx->pc = 0x36C38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C388u;
    // 0x36c38c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D7E0u, 0x36C388u, 0x36C390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C390u;
label_36c390:
    // 0x36c390: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x36c390u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c394: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x36C394u;
    SET_GPR_U32(ctx, 31, 0x36C39Cu);
    ctx->pc = 0x36C398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C394u;
    // 0x36c398: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x36C394u, 0x36C39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C39Cu;
label_36c39c:
    // 0x36c39c: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x36C39Cu;
    {
        const bool branch_taken_0x36c39c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x36C3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C39Cu;
        // 0x36c3a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c39c) {
            ctx->pc = 0x36C3B8u;
            goto label_36c3b8;
        }
    }
    ctx->pc = 0x36C3A4u;
    // 0x36c3a4: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x36c3a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x36c3a8: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x36c3a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x36c3ac: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x36C3ACu;
    SET_GPR_U32(ctx, 31, 0x36C3B4u);
    ctx->pc = 0x36C3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C3ACu;
    // 0x36c3b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x36C3ACu, 0x36C3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C3B4u;
label_36c3b4:
    // 0x36c3b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x36c3b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_36c3b8:
    // 0x36c3b8: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x36C3B8u;
    SET_GPR_U32(ctx, 31, 0x36C3C0u);
    ctx->pc = 0x36C3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C3B8u;
    // 0x36c3bc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x36C3B8u, 0x36C3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C3C0u;
label_36c3c0:
    // 0x36c3c0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x36c3c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36c3c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36c3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36c3c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36c3c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36c3cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36c3ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c3d0: 0x3e00008  jr          $ra
    ctx->pc = 0x36C3D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C3D0u;
        // 0x36c3d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C3D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C3D8u;
}
