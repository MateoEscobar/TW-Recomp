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

// Function: sub_002B75B8
// Address: 0x2b75b8 - 0x2b7670
void sub_002B75B8_0x2b75b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B75B8_0x2b75b8");
#endif

    switch (ctx->pc) {
        case 0x2b75e8u: goto label_2b75e8;
        case 0x2b75f0u: goto label_2b75f0;
        case 0x2b7604u: goto label_2b7604;
        case 0x2b760cu: goto label_2b760c;
        case 0x2b761cu: goto label_2b761c;
        case 0x2b7624u: goto label_2b7624;
        case 0x2b7644u: goto label_2b7644;
        case 0x2b7650u: goto label_2b7650;
        default: break;
    }

    ctx->pc = 0x2b75b8u;

    // 0x2b75b8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2b75b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2b75bc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2b75bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2b75c0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2b75c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2b75c4: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2b75c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b75c8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2b75c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2b75cc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2b75ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b75d0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2b75d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2b75d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b75d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b75d8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2b75d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2b75dc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b75dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b75e0: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2B75E0u;
    SET_GPR_U32(ctx, 31, 0x2B75E8u);
    ctx->pc = 0x2B75E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B75E0u;
    // 0x2b75e4: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2B75E0u, 0x2B75E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B75E8u;
label_2b75e8:
    // 0x2b75e8: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2B75E8u;
    SET_GPR_U32(ctx, 31, 0x2B75F0u);
    ctx->pc = 0x2B75ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B75E8u;
    // 0x2b75ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2B75E8u, 0x2B75F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B75F0u;
label_2b75f0:
    // 0x2b75f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b75f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b75f4: 0x52000017  beql        $s0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x2B75F4u;
    {
        const bool branch_taken_0x2b75f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b75f4) {
            ctx->pc = 0x2B75F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B75F4u;
            // 0x2b75f8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B7654u;
            goto label_2b7654;
        }
    }
    ctx->pc = 0x2B75FCu;
    // 0x2b75fc: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2B75FCu;
    SET_GPR_U32(ctx, 31, 0x2B7604u);
    ctx->pc = 0x2B7600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B75FCu;
    // 0x2b7600: 0x37a40004  ori         $a0, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2B75FCu, 0x2B7604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7604u;
label_2b7604:
    // 0x2b7604: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2B7604u;
    SET_GPR_U32(ctx, 31, 0x2B760Cu);
    ctx->pc = 0x2B7608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7604u;
    // 0x2b7608: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2B7604u, 0x2B760Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B760Cu;
label_2b760c:
    // 0x2b760c: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2B760Cu;
    {
        const bool branch_taken_0x2b760c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b760c) {
            ctx->pc = 0x2B7610u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B760Cu;
            // 0x2b7610: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B7654u;
            goto label_2b7654;
        }
    }
    ctx->pc = 0x2B7614u;
    // 0x2b7614: 0xc087502  jal         func_21D408
    ctx->pc = 0x2B7614u;
    SET_GPR_U32(ctx, 31, 0x2B761Cu);
    ctx->pc = 0x2B7618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7614u;
    // 0x2b7618: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2B7614u, 0x2B761Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B761Cu;
label_2b761c:
    // 0x2b761c: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2B761Cu;
    SET_GPR_U32(ctx, 31, 0x2B7624u);
    ctx->pc = 0x2B7620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B761Cu;
    // 0x2b7620: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2B761Cu, 0x2B7624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7624u;
label_2b7624:
    // 0x2b7624: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b7624u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7628: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B7628u;
    {
        const bool branch_taken_0x2b7628 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B762Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7628u;
        // 0x2b762c: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7628) {
            ctx->pc = 0x2B7644u;
            goto label_2b7644;
        }
    }
    ctx->pc = 0x2B7630u;
    // 0x2b7630: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2b7630u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7634: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x2b7634u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7638: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b7638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b763c: 0xc0add9c  jal         func_2B7670
    ctx->pc = 0x2B763Cu;
    SET_GPR_U32(ctx, 31, 0x2B7644u);
    ctx->pc = 0x2B7640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B763Cu;
    // 0x2b7640: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7670u, 0x2B763Cu, 0x2B7644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7644u;
label_2b7644:
    // 0x2b7644: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b7644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7648: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2B7648u;
    SET_GPR_U32(ctx, 31, 0x2B7650u);
    ctx->pc = 0x2B764Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7648u;
    // 0x2b764c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2B7648u, 0x2B7650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7650u;
label_2b7650:
    // 0x2b7650: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2b7650u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2b7654:
    // 0x2b7654: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2b7654u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b7658: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2b7658u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b765c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2b765cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b7660: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b7660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b7664: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B7668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7664u;
        // 0x2b7668: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B766Cu;
    // 0x2b766c: 0x0  nop
    ctx->pc = 0x2b766cu;
    // NOP
    ctx->pc = 0x2b7670u;
}
