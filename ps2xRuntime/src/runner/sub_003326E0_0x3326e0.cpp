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

// Function: sub_003326E0
// Address: 0x3326e0 - 0x332798
void sub_003326E0_0x3326e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003326E0_0x3326e0");
#endif

    switch (ctx->pc) {
        case 0x332714u: goto label_332714;
        case 0x332728u: goto label_332728;
        case 0x332730u: goto label_332730;
        case 0x332738u: goto label_332738;
        default: break;
    }

    ctx->pc = 0x3326e0u;

    // 0x3326e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3326e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3326e4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3326e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x3326e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3326e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3326ec: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3326ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3326f0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3326f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x3326f4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3326f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3326f8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3326f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3326fc: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3326fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x332700: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x332700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x332704: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x332704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x332708: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x332708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33270c: 0xc0cc99a  jal         func_332668
    ctx->pc = 0x33270Cu;
    SET_GPR_U32(ctx, 31, 0x332714u);
    ctx->pc = 0x332710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33270Cu;
    // 0x332710: 0x12a980  sll         $s5, $s2, 6 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332668u, 0x33270Cu, 0x332714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332714u;
label_332714:
    // 0x332714: 0x10a180  sll         $s4, $s0, 6
    ctx->pc = 0x332714u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x332718: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x332718u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33271c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x33271cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332720: 0xc0cc99a  jal         func_332668
    ctx->pc = 0x332720u;
    SET_GPR_U32(ctx, 31, 0x332728u);
    ctx->pc = 0x332724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332720u;
    // 0x332724: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332668u, 0x332720u, 0x332728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332728u;
label_332728:
    // 0x332728: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x332728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33272c: 0x0  nop
    ctx->pc = 0x33272cu;
    // NOP
label_332730:
    // 0x332730: 0xc0cc940  jal         func_332500
    ctx->pc = 0x332730u;
    SET_GPR_U32(ctx, 31, 0x332738u);
    ctx->pc = 0x332734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332730u;
    // 0x332734: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332500u, 0x332730u, 0x332738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332738u;
label_332738:
    // 0x332738: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x332738u;
    {
        const bool branch_taken_0x332738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33273Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332738u;
        // 0x33273c: 0x112880  sll         $a1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332738) {
            ctx->pc = 0x33275Cu;
            goto label_33275c;
        }
    }
    ctx->pc = 0x332740u;
    // 0x332740: 0x8e630048  lw          $v1, 0x48($s3)
    ctx->pc = 0x332740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x332744: 0x2832021  addu        $a0, $s4, $v1
    ctx->pc = 0x332744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x332748: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x332748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x33274c: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x33274cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x332750: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x332750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x332754: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x332754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x332758: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x332758u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_33275c:
    // 0x33275c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x33275cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x332760: 0x2a22000f  slti        $v0, $s1, 0xF
    ctx->pc = 0x332760u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x332764: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x332764u;
    {
        const bool branch_taken_0x332764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x332768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332764u;
        // 0x332768: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332764) {
            ctx->pc = 0x332730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_332730;
        }
    }
    ctx->pc = 0x33276Cu;
    // 0x33276c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x33276cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332770: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x332770u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x332774: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x332774u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x332778: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x332778u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33277c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x33277cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x332780: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x332780u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x332784: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x332784u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x332788: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x332788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33278c: 0x3e00008  jr          $ra
    ctx->pc = 0x33278Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x332790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33278Cu;
        // 0x332790: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33278Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x332794u;
    // 0x332794: 0x0  nop
    ctx->pc = 0x332794u;
    // NOP
    ctx->pc = 0x332798u;
}
