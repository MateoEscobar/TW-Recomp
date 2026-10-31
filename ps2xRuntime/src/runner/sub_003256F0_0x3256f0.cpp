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

// Function: sub_003256F0
// Address: 0x3256f0 - 0x3257a0
void sub_003256F0_0x3256f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003256F0_0x3256f0");
#endif

    switch (ctx->pc) {
        case 0x325710u: goto label_325710;
        case 0x325724u: goto label_325724;
        case 0x325748u: goto label_325748;
        case 0x325760u: goto label_325760;
        case 0x325774u: goto label_325774;
        case 0x325784u: goto label_325784;
        default: break;
    }

    ctx->pc = 0x3256f0u;

    // 0x3256f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3256f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3256f4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3256f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3256f8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3256f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3256fc: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3256fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x325700: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x325700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x325704: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x325704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x325708: 0xc0c8cc6  jal         func_323318
    ctx->pc = 0x325708u;
    SET_GPR_U32(ctx, 31, 0x325710u);
    ctx->pc = 0x32570Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325708u;
    // 0x32570c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323318u, 0x325708u, 0x325710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325710u;
label_325710:
    // 0x325710: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x325710u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325714: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x325714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325718: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x325718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32571c: 0xc0c9192  jal         func_324648
    ctx->pc = 0x32571Cu;
    SET_GPR_U32(ctx, 31, 0x325724u);
    ctx->pc = 0x325720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32571Cu;
    // 0x325720: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324648u, 0x32571Cu, 0x325724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325724u;
label_325724:
    // 0x325724: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x325724u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325728: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x325728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x32572c: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x32572cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x325730: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x325730u;
    {
        const bool branch_taken_0x325730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x325734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325730u;
        // 0x325734: 0x8fb00000  lw          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325730) {
            ctx->pc = 0x32574Cu;
            goto label_32574c;
        }
    }
    ctx->pc = 0x325738u;
    // 0x325738: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x325738u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x32573c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32573cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325740: 0xc0ca46e  jal         func_3291B8
    ctx->pc = 0x325740u;
    SET_GPR_U32(ctx, 31, 0x325748u);
    ctx->pc = 0x325744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325740u;
    // 0x325744: 0x24a54a68  addiu       $a1, $a1, 0x4A68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3291B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3291B8u, 0x325740u, 0x325748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325748u;
label_325748:
    // 0x325748: 0x8fb00000  lw          $s0, 0x0($sp)
    ctx->pc = 0x325748u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_32574c:
    // 0x32574c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32574cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325750: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x325750u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325754: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x325754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x325758: 0xc0c91b0  jal         func_3246C0
    ctx->pc = 0x325758u;
    SET_GPR_U32(ctx, 31, 0x325760u);
    ctx->pc = 0x32575Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325758u;
    // 0x32575c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3246C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3246C0u, 0x325758u, 0x325760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325760u;
label_325760:
    // 0x325760: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x325760u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325764: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x325764u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325768: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x325768u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32576c: 0xc0ca434  jal         func_3290D0
    ctx->pc = 0x32576Cu;
    SET_GPR_U32(ctx, 31, 0x325774u);
    ctx->pc = 0x325770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32576Cu;
    // 0x325770: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3290D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3290D0u, 0x32576Cu, 0x325774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325774u;
label_325774:
    // 0x325774: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x325774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325778: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x325778u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32577c: 0xc0c9598  jal         func_325660
    ctx->pc = 0x32577Cu;
    SET_GPR_U32(ctx, 31, 0x325784u);
    ctx->pc = 0x325780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32577Cu;
    // 0x325780: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x325660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325660u, 0x32577Cu, 0x325784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325784u;
label_325784:
    // 0x325784: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x325784u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x325788: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x325788u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32578c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x32578cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x325790: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x325790u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x325794: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x325794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x325798: 0x3e00008  jr          $ra
    ctx->pc = 0x325798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32579Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325798u;
        // 0x32579c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3257A0u;
}
