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

// Function: sub_0037A770
// Address: 0x37a770 - 0x37a7e0
void sub_0037A770_0x37a770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037A770_0x37a770");
#endif

    switch (ctx->pc) {
        case 0x37a790u: goto label_37a790;
        case 0x37a798u: goto label_37a798;
        case 0x37a7a4u: goto label_37a7a4;
        case 0x37a7bcu: goto label_37a7bc;
        case 0x37a7c8u: goto label_37a7c8;
        default: break;
    }

    ctx->pc = 0x37a770u;

    // 0x37a770: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x37a770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x37a774: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37a774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37a778: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37a778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37a77c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37a77cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a780: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x37a780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x37a784: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37a784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37a788: 0xc102488  jal         func_409220
    ctx->pc = 0x37A788u;
    SET_GPR_U32(ctx, 31, 0x37A790u);
    ctx->pc = 0x37A78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A788u;
    // 0x37a78c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x37A788u, 0x37A790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A790u;
label_37a790:
    // 0x37a790: 0xc105712  jal         func_415C48
    ctx->pc = 0x37A790u;
    SET_GPR_U32(ctx, 31, 0x37A798u);
    ctx->pc = 0x37A794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A790u;
    // 0x37a794: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415C48u, 0x37A790u, 0x37A798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A798u;
label_37a798:
    // 0x37a798: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x37a798u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a79c: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x37A79Cu;
    SET_GPR_U32(ctx, 31, 0x37A7A4u);
    ctx->pc = 0x37A7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A79Cu;
    // 0x37a7a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x37A79Cu, 0x37A7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A7A4u;
label_37a7a4:
    // 0x37a7a4: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x37A7A4u;
    {
        const bool branch_taken_0x37a7a4 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x37A7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A7A4u;
        // 0x37a7a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a7a4) {
            ctx->pc = 0x37A7C0u;
            goto label_37a7c0;
        }
    }
    ctx->pc = 0x37A7ACu;
    // 0x37a7ac: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x37a7acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x37a7b0: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x37a7b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x37a7b4: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x37A7B4u;
    SET_GPR_U32(ctx, 31, 0x37A7BCu);
    ctx->pc = 0x37A7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A7B4u;
    // 0x37a7b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x37A7B4u, 0x37A7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A7BCu;
label_37a7bc:
    // 0x37a7bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37a7bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_37a7c0:
    // 0x37a7c0: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x37A7C0u;
    SET_GPR_U32(ctx, 31, 0x37A7C8u);
    ctx->pc = 0x37A7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A7C0u;
    // 0x37a7c4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x37A7C0u, 0x37A7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A7C8u;
label_37a7c8:
    // 0x37a7c8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x37a7c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37a7cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37a7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37a7d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37a7d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37a7d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37a7d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37a7d8: 0x3e00008  jr          $ra
    ctx->pc = 0x37A7D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37A7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A7D8u;
        // 0x37a7dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37A7D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37A7E0u;
}
