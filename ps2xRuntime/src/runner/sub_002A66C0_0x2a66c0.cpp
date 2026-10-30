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

// Function: sub_002A66C0
// Address: 0x2a66c0 - 0x2a6760
void sub_002A66C0_0x2a66c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A66C0_0x2a66c0");
#endif

    switch (ctx->pc) {
        case 0x2a66f8u: goto label_2a66f8;
        case 0x2a6700u: goto label_2a6700;
        case 0x2a6708u: goto label_2a6708;
        case 0x2a671cu: goto label_2a671c;
        case 0x2a6734u: goto label_2a6734;
        case 0x2a6740u: goto label_2a6740;
        default: break;
    }

    ctx->pc = 0x2a66c0u;

    // 0x2a66c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2a66c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2a66c4: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x2a66c4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x2a66c8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2a66c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2a66cc: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x2a66ccu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x2a66d0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2a66d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2a66d4: 0x69403  sra         $s2, $a2, 16
    ctx->pc = 0x2a66d4u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 6), 16));
    // 0x2a66d8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2a66d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2a66dc: 0x79c03  sra         $s3, $a3, 16
    ctx->pc = 0x2a66dcu;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 7), 16));
    // 0x2a66e0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2a66e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2a66e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a66e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a66e8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2a66e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2a66ec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a66ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a66f0: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2A66F0u;
    SET_GPR_U32(ctx, 31, 0x2A66F8u);
    ctx->pc = 0x2A66F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A66F0u;
    // 0x2a66f4: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2A66F0u, 0x2A66F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A66F8u;
label_2a66f8:
    // 0x2a66f8: 0xc087502  jal         func_21D408
    ctx->pc = 0x2A66F8u;
    SET_GPR_U32(ctx, 31, 0x2A6700u);
    ctx->pc = 0x2A66FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A66F8u;
    // 0x2a66fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2A66F8u, 0x2A6700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6700u;
label_2a6700:
    // 0x2a6700: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2A6700u;
    SET_GPR_U32(ctx, 31, 0x2A6708u);
    ctx->pc = 0x2A6704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6700u;
    // 0x2a6704: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2A6700u, 0x2A6708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6708u;
label_2a6708:
    // 0x2a6708: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a6708u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a670c: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x2A670Cu;
    {
        const bool branch_taken_0x2a670c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A670Cu;
        // 0x2a6710: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a670c) {
            ctx->pc = 0x2A6738u;
            goto label_2a6738;
        }
    }
    ctx->pc = 0x2A6714u;
    // 0x2a6714: 0xc0e40a2  jal         func_390288
    ctx->pc = 0x2A6714u;
    SET_GPR_U32(ctx, 31, 0x2A671Cu);
    ctx->pc = 0x2A6718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6714u;
    // 0x2a6718: 0x37a40004  ori         $a0, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390288u, 0x2A6714u, 0x2A671Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A671Cu;
label_2a671c:
    // 0x2a671c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2a671cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6720: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2a6720u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6724: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2a6724u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6728: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a6728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a672c: 0xc0a99d8  jal         func_2A6760
    ctx->pc = 0x2A672Cu;
    SET_GPR_U32(ctx, 31, 0x2A6734u);
    ctx->pc = 0x2A6730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A672Cu;
    // 0x2a6730: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6760u, 0x2A672Cu, 0x2A6734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6734u;
label_2a6734:
    // 0x2a6734: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a6734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a6738:
    // 0x2a6738: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2A6738u;
    SET_GPR_U32(ctx, 31, 0x2A6740u);
    ctx->pc = 0x2A673Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6738u;
    // 0x2a673c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2A6738u, 0x2A6740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6740u;
label_2a6740:
    // 0x2a6740: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2a6740u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a6744: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2a6744u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a6748: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2a6748u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a674c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2a674cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a6750: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a6750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a6754: 0x3e00008  jr          $ra
    ctx->pc = 0x2A6754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A6758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6754u;
        // 0x2a6758: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A6754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A675Cu;
    // 0x2a675c: 0x0  nop
    ctx->pc = 0x2a675cu;
    // NOP
    ctx->pc = 0x2a6760u;
}
