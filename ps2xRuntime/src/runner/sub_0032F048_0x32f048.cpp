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

// Function: sub_0032F048
// Address: 0x32f048 - 0x32f0d8
void sub_0032F048_0x32f048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032F048_0x32f048");
#endif

    switch (ctx->pc) {
        case 0x32f068u: goto label_32f068;
        case 0x32f080u: goto label_32f080;
        case 0x32f094u: goto label_32f094;
        case 0x32f0a0u: goto label_32f0a0;
        case 0x32f0b4u: goto label_32f0b4;
        case 0x32f0c0u: goto label_32f0c0;
        default: break;
    }

    ctx->pc = 0x32f048u;

    // 0x32f048: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x32f048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x32f04c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x32f04cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x32f050: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x32f050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f054: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32f054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32f058: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32f058u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f05c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x32f05cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x32f060: 0xc0cb708  jal         func_32DC20
    ctx->pc = 0x32F060u;
    SET_GPR_U32(ctx, 31, 0x32F068u);
    ctx->pc = 0x32F064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F060u;
    // 0x32f064: 0x8e110028  lw          $s1, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DC20u, 0x32F060u, 0x32F068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F068u;
label_32f068:
    // 0x32f068: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x32f068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32f06c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x32f06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x32f070: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x32F070u;
    {
        const bool branch_taken_0x32f070 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x32F074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F070u;
        // 0x32f074: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f070) {
            ctx->pc = 0x32F0A8u;
            goto label_32f0a8;
        }
    }
    ctx->pc = 0x32F078u;
    // 0x32f078: 0xc0c9a7c  jal         func_3269F0
    ctx->pc = 0x32F078u;
    SET_GPR_U32(ctx, 31, 0x32F080u);
    ctx->pc = 0x32F07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F078u;
    // 0x32f07c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3269F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3269F0u, 0x32F078u, 0x32F080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F080u;
label_32f080:
    // 0x32f080: 0x3c060057  lui         $a2, 0x57
    ctx->pc = 0x32f080u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)87 << 16));
    // 0x32f084: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32f084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f088: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32f088u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f08c: 0xc0cb344  jal         func_32CD10
    ctx->pc = 0x32F08Cu;
    SET_GPR_U32(ctx, 31, 0x32F094u);
    ctx->pc = 0x32F090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F08Cu;
    // 0x32f090: 0x24c65df8  addiu       $a2, $a2, 0x5DF8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CD10u, 0x32F08Cu, 0x32F094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F094u;
label_32f094:
    // 0x32f094: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32f094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f098: 0xc0c9a8e  jal         func_326A38
    ctx->pc = 0x32F098u;
    SET_GPR_U32(ctx, 31, 0x32F0A0u);
    ctx->pc = 0x32F09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F098u;
    // 0x32f09c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326A38u, 0x32F098u, 0x32F0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F0A0u;
label_32f0a0:
    // 0x32f0a0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x32F0A0u;
    {
        const bool branch_taken_0x32f0a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F0A0u;
        // 0x32f0a4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f0a0) {
            ctx->pc = 0x32F0C4u;
            goto label_32f0c4;
        }
    }
    ctx->pc = 0x32F0A8u;
label_32f0a8:
    // 0x32f0a8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x32f0a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f0ac: 0xc0cb9b4  jal         func_32E6D0
    ctx->pc = 0x32F0ACu;
    SET_GPR_U32(ctx, 31, 0x32F0B4u);
    ctx->pc = 0x32F0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F0ACu;
    // 0x32f0b0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E6D0u, 0x32F0ACu, 0x32F0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F0B4u;
label_32f0b4:
    // 0x32f0b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32f0b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f0b8: 0xc0c9a6e  jal         func_3269B8
    ctx->pc = 0x32F0B8u;
    SET_GPR_U32(ctx, 31, 0x32F0C0u);
    ctx->pc = 0x32F0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F0B8u;
    // 0x32f0bc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3269B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3269B8u, 0x32F0B8u, 0x32F0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F0C0u;
label_32f0c0:
    // 0x32f0c0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x32f0c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_32f0c4:
    // 0x32f0c4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x32f0c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32f0c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32f0c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32f0cc: 0x3e00008  jr          $ra
    ctx->pc = 0x32F0CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32F0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F0CCu;
        // 0x32f0d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32F0CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32F0D4u;
    // 0x32f0d4: 0x0  nop
    ctx->pc = 0x32f0d4u;
    // NOP
    ctx->pc = 0x32f0d8u;
}
