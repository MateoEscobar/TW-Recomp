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

// Function: sub_0032F150
// Address: 0x32f150 - 0x32f1e8
void sub_0032F150_0x32f150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032F150_0x32f150");
#endif

    switch (ctx->pc) {
        case 0x32f188u: goto label_32f188;
        case 0x32f190u: goto label_32f190;
        case 0x32f1a4u: goto label_32f1a4;
        case 0x32f1acu: goto label_32f1ac;
        case 0x32f1bcu: goto label_32f1bc;
        case 0x32f1ccu: goto label_32f1cc;
        default: break;
    }

    ctx->pc = 0x32f150u;

    // 0x32f150: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x32f150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x32f154: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x32f154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x32f158: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32f158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x32f15c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32f15cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f160: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x32f160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x32f164: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32f164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32f168: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x32f168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x32f16c: 0x8e110028  lw          $s1, 0x28($s0)
    ctx->pc = 0x32f16cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x32f170: 0x8e320028  lw          $s2, 0x28($s1)
    ctx->pc = 0x32f170u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x32f174: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x32F174u;
    {
        const bool branch_taken_0x32f174 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x32F178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F174u;
        // 0x32f178: 0x8633001c  lh          $s3, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f174) {
            ctx->pc = 0x32F188u;
            goto label_32f188;
        }
    }
    ctx->pc = 0x32F17Cu;
    // 0x32f17c: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x32f17cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x32f180: 0xc0c9968  jal         func_3265A0
    ctx->pc = 0x32F180u;
    SET_GPR_U32(ctx, 31, 0x32F188u);
    ctx->pc = 0x32F184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F180u;
    // 0x32f184: 0x24a55e50  addiu       $a1, $a1, 0x5E50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3265A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3265A0u, 0x32F180u, 0x32F188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F188u;
label_32f188:
    // 0x32f188: 0xc0cb2fa  jal         func_32CBE8
    ctx->pc = 0x32F188u;
    SET_GPR_U32(ctx, 31, 0x32F190u);
    ctx->pc = 0x32F18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F188u;
    // 0x32f18c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CBE8u, 0x32F188u, 0x32F190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F190u;
label_32f190:
    // 0x32f190: 0x26500004  addiu       $s0, $s2, 0x4
    ctx->pc = 0x32f190u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x32f194: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x32f194u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x32f198: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32f198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f19c: 0xc0c9a6e  jal         func_3269B8
    ctx->pc = 0x32F19Cu;
    SET_GPR_U32(ctx, 31, 0x32F1A4u);
    ctx->pc = 0x32F1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F19Cu;
    // 0x32f1a0: 0x2652823  subu        $a1, $s3, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3269B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3269B8u, 0x32F19Cu, 0x32F1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F1A4u;
label_32f1a4:
    // 0x32f1a4: 0xc0c997c  jal         func_3265F0
    ctx->pc = 0x32F1A4u;
    SET_GPR_U32(ctx, 31, 0x32F1ACu);
    ctx->pc = 0x32F1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F1A4u;
    // 0x32f1a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3265F0u, 0x32F1A4u, 0x32F1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F1ACu;
label_32f1ac:
    // 0x32f1ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x32f1acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f1b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32f1b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f1b4: 0xc0c9ba2  jal         func_326E88
    ctx->pc = 0x32F1B4u;
    SET_GPR_U32(ctx, 31, 0x32F1BCu);
    ctx->pc = 0x32F1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F1B4u;
    // 0x32f1b8: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326E88u, 0x32F1B4u, 0x32F1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F1BCu;
label_32f1bc:
    // 0x32f1bc: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x32f1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x32f1c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32f1c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f1c4: 0xc0c9a6e  jal         func_3269B8
    ctx->pc = 0x32F1C4u;
    SET_GPR_U32(ctx, 31, 0x32F1CCu);
    ctx->pc = 0x32F1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F1C4u;
    // 0x32f1c8: 0xb32823  subu        $a1, $a1, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3269B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3269B8u, 0x32F1C4u, 0x32F1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F1CCu;
label_32f1cc:
    // 0x32f1cc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x32f1ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32f1d0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x32f1d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32f1d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32f1d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32f1d8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x32f1d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32f1dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32f1dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32f1e0: 0x3e00008  jr          $ra
    ctx->pc = 0x32F1E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32F1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F1E0u;
        // 0x32f1e4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32F1E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32F1E8u;
}
