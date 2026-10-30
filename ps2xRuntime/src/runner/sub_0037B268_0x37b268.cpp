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

// Function: sub_0037B268
// Address: 0x37b268 - 0x37b2d8
void sub_0037B268_0x37b268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037B268_0x37b268");
#endif

    switch (ctx->pc) {
        case 0x37b288u: goto label_37b288;
        case 0x37b290u: goto label_37b290;
        case 0x37b2a8u: goto label_37b2a8;
        case 0x37b2b0u: goto label_37b2b0;
        case 0x37b2bcu: goto label_37b2bc;
        default: break;
    }

    ctx->pc = 0x37b268u;

    // 0x37b268: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x37b268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x37b26c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37b26cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37b270: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x37b270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x37b274: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37b274u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b278: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37b278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37b27c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37b27cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37b280: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37B280u;
    SET_GPR_U32(ctx, 31, 0x37B288u);
    ctx->pc = 0x37B284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B280u;
    // 0x37b284: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37B280u, 0x37B288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B288u;
label_37b288:
    // 0x37b288: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x37B288u;
    SET_GPR_U32(ctx, 31, 0x37B290u);
    ctx->pc = 0x37B28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B288u;
    // 0x37b28c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x37B288u, 0x37B290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B290u;
label_37b290:
    // 0x37b290: 0x3406ffc0  ori         $a2, $zero, 0xFFC0
    ctx->pc = 0x37b290u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x37b294: 0x633bc  dsll32      $a2, $a2, 14
    ctx->pc = 0x37b294u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 14));
    // 0x37b298: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x37b298u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b29c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37b29cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b2a0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37B2A0u;
    SET_GPR_U32(ctx, 31, 0x37B2A8u);
    ctx->pc = 0x37B2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B2A0u;
    // 0x37b2a4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37B2A0u, 0x37B2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B2A8u;
label_37b2a8:
    // 0x37b2a8: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x37B2A8u;
    SET_GPR_U32(ctx, 31, 0x37B2B0u);
    ctx->pc = 0x37B2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B2A8u;
    // 0x37b2ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x37B2A8u, 0x37B2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B2B0u;
label_37b2b0:
    // 0x37b2b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x37b2b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b2b4: 0xc107b88  jal         func_41EE20
    ctx->pc = 0x37B2B4u;
    SET_GPR_U32(ctx, 31, 0x37B2BCu);
    ctx->pc = 0x37B2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B2B4u;
    // 0x37b2b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41EE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41EE20u, 0x37B2B4u, 0x37B2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B2BCu;
label_37b2bc:
    // 0x37b2bc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x37b2bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37b2c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37b2c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b2c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37b2c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37b2c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37b2c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37b2cc: 0x3e00008  jr          $ra
    ctx->pc = 0x37B2CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37B2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B2CCu;
        // 0x37b2d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37B2CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37B2D4u;
    // 0x37b2d4: 0x0  nop
    ctx->pc = 0x37b2d4u;
    // NOP
    ctx->pc = 0x37b2d8u;
}
