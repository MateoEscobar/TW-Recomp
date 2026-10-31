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

// Function: sub_00308870
// Address: 0x308870 - 0x308918
void sub_00308870_0x308870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308870_0x308870");
#endif

    switch (ctx->pc) {
        case 0x3088a4u: goto label_3088a4;
        case 0x3088bcu: goto label_3088bc;
        case 0x3088c4u: goto label_3088c4;
        case 0x3088ecu: goto label_3088ec;
        case 0x3088f8u: goto label_3088f8;
        default: break;
    }

    ctx->pc = 0x308870u;

    // 0x308870: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x308870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x308874: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x308874u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x308878: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x308878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x30887c: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x30887cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x308880: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x308880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x308884: 0x30b200ff  andi        $s2, $a1, 0xFF
    ctx->pc = 0x308884u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x308888: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x308888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x30888c: 0x30d300ff  andi        $s3, $a2, 0xFF
    ctx->pc = 0x30888cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x308890: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x308890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x308894: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x308894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x308898: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x308898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30889c: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x30889Cu;
    SET_GPR_U32(ctx, 31, 0x3088A4u);
    ctx->pc = 0x3088A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30889Cu;
    // 0x3088a0: 0xe0a02d  daddu       $s4, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x30889Cu, 0x3088A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3088A4u;
label_3088a4:
    // 0x3088a4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3088a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3088a8: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x3088a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x3088ac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3088ACu;
    {
        const bool branch_taken_0x3088ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3088ac) {
            ctx->pc = 0x3088BCu;
            goto label_3088bc;
        }
    }
    ctx->pc = 0x3088B4u;
    // 0x3088b4: 0xc059578  jal         func_1655E0
    ctx->pc = 0x3088B4u;
    SET_GPR_U32(ctx, 31, 0x3088BCu);
    ctx->pc = 0x3088B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3088B4u;
    // 0x3088b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1655E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1655E0u, 0x3088B4u, 0x3088BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3088BCu;
label_3088bc:
    // 0x3088bc: 0xc0c1956  jal         func_306558
    ctx->pc = 0x3088BCu;
    SET_GPR_U32(ctx, 31, 0x3088C4u);
    ctx->pc = 0x306558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306558u, 0x3088BCu, 0x3088C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3088C4u;
label_3088c4:
    // 0x3088c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3088c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3088c8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3088C8u;
    {
        const bool branch_taken_0x3088c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3088CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3088C8u;
        // 0x3088cc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3088c8) {
            ctx->pc = 0x3088ECu;
            goto label_3088ec;
        }
    }
    ctx->pc = 0x3088D0u;
    // 0x3088d0: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x3088d0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x3088d4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3088d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3088d8: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x3088d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3088dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3088dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3088e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3088e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3088e4: 0xc0c2246  jal         func_308918
    ctx->pc = 0x3088E4u;
    SET_GPR_U32(ctx, 31, 0x3088ECu);
    ctx->pc = 0x3088E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3088E4u;
    // 0x3088e8: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x308918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308918u, 0x3088E4u, 0x3088ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3088ECu;
label_3088ec:
    // 0x3088ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3088ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3088f0: 0xc059590  jal         func_165640
    ctx->pc = 0x3088F0u;
    SET_GPR_U32(ctx, 31, 0x3088F8u);
    ctx->pc = 0x3088F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3088F0u;
    // 0x3088f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165640u, 0x3088F0u, 0x3088F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3088F8u;
label_3088f8:
    // 0x3088f8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3088f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3088fc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3088fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x308900: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x308900u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x308904: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x308904u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x308908: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x308908u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30890c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30890cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x308910: 0x3e00008  jr          $ra
    ctx->pc = 0x308910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308910u;
        // 0x308914: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308918u;
}
