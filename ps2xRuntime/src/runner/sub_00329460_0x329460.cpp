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

// Function: sub_00329460
// Address: 0x329460 - 0x329518
void sub_00329460_0x329460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00329460_0x329460");
#endif

    switch (ctx->pc) {
        case 0x329488u: goto label_329488;
        case 0x3294a4u: goto label_3294a4;
        case 0x3294b4u: goto label_3294b4;
        case 0x3294c4u: goto label_3294c4;
        case 0x3294d4u: goto label_3294d4;
        case 0x3294e4u: goto label_3294e4;
        case 0x3294f4u: goto label_3294f4;
        case 0x329504u: goto label_329504;
        default: break;
    }

    ctx->pc = 0x329460u;

    // 0x329460: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x329460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x329464: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x329464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x329468: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x329468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32946c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32946cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x329470: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x329470u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329474: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x329474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x329478: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x329478u;
    {
        const bool branch_taken_0x329478 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x32947Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329478u;
        // 0x32947c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329478) {
            ctx->pc = 0x329494u;
            goto label_329494;
        }
    }
    ctx->pc = 0x329480u;
    // 0x329480: 0xc0ca4f6  jal         func_3293D8
    ctx->pc = 0x329480u;
    SET_GPR_U32(ctx, 31, 0x329488u);
    ctx->pc = 0x329484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329480u;
    // 0x329484: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3293D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3293D8u, 0x329480u, 0x329488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329488u;
label_329488:
    // 0x329488: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x329488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x32948c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x32948cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x329490: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x329490u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
label_329494:
    // 0x329494: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x329494u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x329498: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x329498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32949c: 0xc0cb1d6  jal         func_32C758
    ctx->pc = 0x32949Cu;
    SET_GPR_U32(ctx, 31, 0x3294A4u);
    ctx->pc = 0x3294A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32949Cu;
    // 0x3294a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C758u, 0x32949Cu, 0x3294A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3294A4u;
label_3294a4:
    // 0x3294a4: 0x8e250034  lw          $a1, 0x34($s1)
    ctx->pc = 0x3294a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x3294a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3294a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3294ac: 0xc0cb1d6  jal         func_32C758
    ctx->pc = 0x3294ACu;
    SET_GPR_U32(ctx, 31, 0x3294B4u);
    ctx->pc = 0x3294B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3294ACu;
    // 0x3294b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C758u, 0x3294ACu, 0x3294B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3294B4u;
label_3294b4:
    // 0x3294b4: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x3294b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3294b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3294b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3294bc: 0xc0cb1d6  jal         func_32C758
    ctx->pc = 0x3294BCu;
    SET_GPR_U32(ctx, 31, 0x3294C4u);
    ctx->pc = 0x3294C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3294BCu;
    // 0x3294c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C758u, 0x3294BCu, 0x3294C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3294C4u;
label_3294c4:
    // 0x3294c4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x3294c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3294c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3294c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3294cc: 0xc0cb1d6  jal         func_32C758
    ctx->pc = 0x3294CCu;
    SET_GPR_U32(ctx, 31, 0x3294D4u);
    ctx->pc = 0x3294D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3294CCu;
    // 0x3294d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C758u, 0x3294CCu, 0x3294D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3294D4u;
label_3294d4:
    // 0x3294d4: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x3294d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3294d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3294d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3294dc: 0xc0cb1d6  jal         func_32C758
    ctx->pc = 0x3294DCu;
    SET_GPR_U32(ctx, 31, 0x3294E4u);
    ctx->pc = 0x3294E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3294DCu;
    // 0x3294e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C758u, 0x3294DCu, 0x3294E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3294E4u;
label_3294e4:
    // 0x3294e4: 0x8e25002c  lw          $a1, 0x2C($s1)
    ctx->pc = 0x3294e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x3294e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3294e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3294ec: 0xc0cb1d6  jal         func_32C758
    ctx->pc = 0x3294ECu;
    SET_GPR_U32(ctx, 31, 0x3294F4u);
    ctx->pc = 0x3294F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3294ECu;
    // 0x3294f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C758u, 0x3294ECu, 0x3294F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3294F4u;
label_3294f4:
    // 0x3294f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3294f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3294f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3294f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3294fc: 0xc0cb1d6  jal         func_32C758
    ctx->pc = 0x3294FCu;
    SET_GPR_U32(ctx, 31, 0x329504u);
    ctx->pc = 0x329500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3294FCu;
    // 0x329500: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C758u, 0x3294FCu, 0x329504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329504u;
label_329504:
    // 0x329504: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x329504u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x329508: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x329508u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32950c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32950cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x329510: 0x3e00008  jr          $ra
    ctx->pc = 0x329510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329510u;
        // 0x329514: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x329518u;
}
