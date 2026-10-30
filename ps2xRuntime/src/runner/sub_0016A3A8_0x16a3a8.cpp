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

// Function: sub_0016A3A8
// Address: 0x16a3a8 - 0x16a3f8
void sub_0016A3A8_0x16a3a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016A3A8_0x16a3a8");
#endif

    switch (ctx->pc) {
        case 0x16a3d0u: goto label_16a3d0;
        case 0x16a3dcu: goto label_16a3dc;
        case 0x16a3e8u: goto label_16a3e8;
        default: break;
    }

    ctx->pc = 0x16a3a8u;

    // 0x16a3a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16a3a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16a3ac: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x16a3acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x16a3b0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x16a3b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x16a3b4: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x16a3b4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x16a3b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16a3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16a3bc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16a3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16a3c0: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x16A3C0u;
    {
        const bool branch_taken_0x16a3c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x16A3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A3C0u;
        // 0x16a3c4: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a3c0) {
            ctx->pc = 0x16A3E8u;
            goto label_16a3e8;
        }
    }
    ctx->pc = 0x16A3C8u;
    // 0x16a3c8: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x16A3C8u;
    SET_GPR_U32(ctx, 31, 0x16A3D0u);
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x16A3C8u, 0x16A3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A3D0u;
label_16a3d0:
    // 0x16a3d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16a3d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a3d4: 0xc0e40aa  jal         func_3902A8
    ctx->pc = 0x16A3D4u;
    SET_GPR_U32(ctx, 31, 0x16A3DCu);
    ctx->pc = 0x16A3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A3D4u;
    // 0x16a3d8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3902A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3902A8u, 0x16A3D4u, 0x16A3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A3DCu;
label_16a3dc:
    // 0x16a3dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16a3dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a3e0: 0xc059498  jal         func_165260
    ctx->pc = 0x16A3E0u;
    SET_GPR_U32(ctx, 31, 0x16A3E8u);
    ctx->pc = 0x16A3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A3E0u;
    // 0x16a3e4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165260u, 0x16A3E0u, 0x16A3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A3E8u;
label_16a3e8:
    // 0x16a3e8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x16a3e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16a3ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16a3ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16a3f0: 0x3e00008  jr          $ra
    ctx->pc = 0x16A3F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A3F0u;
        // 0x16a3f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A3F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16A3F8u;
}
