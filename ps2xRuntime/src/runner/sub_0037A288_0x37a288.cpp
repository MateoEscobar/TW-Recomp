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

// Function: sub_0037A288
// Address: 0x37a288 - 0x37a2f8
void sub_0037A288_0x37a288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037A288_0x37a288");
#endif

    switch (ctx->pc) {
        case 0x37a2a8u: goto label_37a2a8;
        case 0x37a2b0u: goto label_37a2b0;
        case 0x37a2b8u: goto label_37a2b8;
        case 0x37a2ccu: goto label_37a2cc;
        case 0x37a2dcu: goto label_37a2dc;
        default: break;
    }

    ctx->pc = 0x37a288u;

    // 0x37a288: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x37a288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x37a28c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37a28cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a290: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x37a290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x37a294: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37a294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37a298: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37a298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37a29c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37a29cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37a2a0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37A2A0u;
    SET_GPR_U32(ctx, 31, 0x37A2A8u);
    ctx->pc = 0x37A2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A2A0u;
    // 0x37a2a4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37A2A0u, 0x37A2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A2A8u;
label_37a2a8:
    // 0x37a2a8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37A2A8u;
    SET_GPR_U32(ctx, 31, 0x37A2B0u);
    ctx->pc = 0x37A2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A2A8u;
    // 0x37a2ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37A2A8u, 0x37A2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A2B0u;
label_37a2b0:
    // 0x37a2b0: 0xc105aee  jal         func_416BB8
    ctx->pc = 0x37A2B0u;
    SET_GPR_U32(ctx, 31, 0x37A2B8u);
    ctx->pc = 0x37A2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A2B0u;
    // 0x37a2b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x416BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x416BB8u, 0x37A2B0u, 0x37A2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A2B8u;
label_37a2b8:
    // 0x37a2b8: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x37a2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x37a2bc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x37a2bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a2c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37a2c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a2c4: 0xc1026b2  jal         func_409AC8
    ctx->pc = 0x37A2C4u;
    SET_GPR_U32(ctx, 31, 0x37A2CCu);
    ctx->pc = 0x37A2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A2C4u;
    // 0x37a2c8: 0x24a590b0  addiu       $a1, $a1, -0x6F50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409AC8u, 0x37A2C4u, 0x37A2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A2CCu;
label_37a2cc:
    // 0x37a2cc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x37a2ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a2d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37a2d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a2d4: 0xc10254e  jal         func_409538
    ctx->pc = 0x37A2D4u;
    SET_GPR_U32(ctx, 31, 0x37A2DCu);
    ctx->pc = 0x37A2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A2D4u;
    // 0x37a2d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409538u, 0x37A2D4u, 0x37A2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A2DCu;
label_37a2dc:
    // 0x37a2dc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x37a2dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37a2e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37a2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37a2e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37a2e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37a2e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37a2e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37a2ec: 0x3e00008  jr          $ra
    ctx->pc = 0x37A2ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37A2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A2ECu;
        // 0x37a2f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37A2ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37A2F4u;
    // 0x37a2f4: 0x0  nop
    ctx->pc = 0x37a2f4u;
    // NOP
    ctx->pc = 0x37a2f8u;
}
