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

// Function: sub_0037B090
// Address: 0x37b090 - 0x37b108
void sub_0037B090_0x37b090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037B090_0x37b090");
#endif

    switch (ctx->pc) {
        case 0x37b0b0u: goto label_37b0b0;
        case 0x37b0b8u: goto label_37b0b8;
        case 0x37b0d0u: goto label_37b0d0;
        case 0x37b0d8u: goto label_37b0d8;
        case 0x37b0e4u: goto label_37b0e4;
        case 0x37b0f0u: goto label_37b0f0;
        default: break;
    }

    ctx->pc = 0x37b090u;

    // 0x37b090: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x37b090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x37b094: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37b094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37b098: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x37b098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x37b09c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37b09cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b0a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37b0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37b0a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37b0a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37b0a8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37B0A8u;
    SET_GPR_U32(ctx, 31, 0x37B0B0u);
    ctx->pc = 0x37B0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B0A8u;
    // 0x37b0ac: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37B0A8u, 0x37B0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B0B0u;
label_37b0b0:
    // 0x37b0b0: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x37B0B0u;
    SET_GPR_U32(ctx, 31, 0x37B0B8u);
    ctx->pc = 0x37B0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B0B0u;
    // 0x37b0b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x37B0B0u, 0x37B0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B0B8u;
label_37b0b8:
    // 0x37b0b8: 0x3406ffc0  ori         $a2, $zero, 0xFFC0
    ctx->pc = 0x37b0b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x37b0bc: 0x633bc  dsll32      $a2, $a2, 14
    ctx->pc = 0x37b0bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 14));
    // 0x37b0c0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x37b0c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b0c4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x37b0c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37b0c8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37B0C8u;
    SET_GPR_U32(ctx, 31, 0x37B0D0u);
    ctx->pc = 0x37B0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B0C8u;
    // 0x37b0cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37B0C8u, 0x37B0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B0D0u;
label_37b0d0:
    // 0x37b0d0: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x37B0D0u;
    SET_GPR_U32(ctx, 31, 0x37B0D8u);
    ctx->pc = 0x37B0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B0D0u;
    // 0x37b0d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x37B0D0u, 0x37B0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B0D8u;
label_37b0d8:
    // 0x37b0d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37b0d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b0dc: 0xc107b62  jal         func_41ED88
    ctx->pc = 0x37B0DCu;
    SET_GPR_U32(ctx, 31, 0x37B0E4u);
    ctx->pc = 0x37B0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B0DCu;
    // 0x37b0e0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41ED88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41ED88u, 0x37B0DCu, 0x37B0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B0E4u;
label_37b0e4:
    // 0x37b0e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x37b0e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b0e8: 0xc102562  jal         func_409588
    ctx->pc = 0x37B0E8u;
    SET_GPR_U32(ctx, 31, 0x37B0F0u);
    ctx->pc = 0x37B0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B0E8u;
    // 0x37b0ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409588u, 0x37B0E8u, 0x37B0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B0F0u;
label_37b0f0:
    // 0x37b0f0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x37b0f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37b0f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37b0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37b0f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37b0f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37b0fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37b0fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37b100: 0x3e00008  jr          $ra
    ctx->pc = 0x37B100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37B104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B100u;
        // 0x37b104: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37B100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37B108u;
}
