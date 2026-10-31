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

// Function: sub_0019BF50
// Address: 0x19bf50 - 0x19c030
void sub_0019BF50_0x19bf50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019BF50_0x19bf50");
#endif

    switch (ctx->pc) {
        case 0x19bf80u: goto label_19bf80;
        case 0x19bfa8u: goto label_19bfa8;
        case 0x19bfd0u: goto label_19bfd0;
        case 0x19bff8u: goto label_19bff8;
        default: break;
    }

    ctx->pc = 0x19bf50u;

    // 0x19bf50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x19bf50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x19bf54: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x19bf54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x19bf58: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x19bf58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x19bf5c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x19bf5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bf60: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x19bf60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x19bf64: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x19bf64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bf68: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x19bf68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x19bf6c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x19bf6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bf70: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x19bf70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x19bf74: 0x3c120055  lui         $s2, 0x55
    ctx->pc = 0x19bf74u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)85 << 16));
    // 0x19bf78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19bf78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19bf7c: 0x0  nop
    ctx->pc = 0x19bf7cu;
    // NOP
label_19bf80:
    // 0x19bf80: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x19bf80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x19bf84: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x19BF84u;
    {
        const bool branch_taken_0x19bf84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BF84u;
        // 0x19bf88: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bf84) {
            ctx->pc = 0x19BFB0u;
            goto label_19bfb0;
        }
    }
    ctx->pc = 0x19BF8Cu;
    // 0x19bf8c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19bf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19bf90: 0x264539d0  addiu       $a1, $s2, 0x39D0
    ctx->pc = 0x19bf90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 14800));
    // 0x19bf94: 0x2406002d  addiu       $a2, $zero, 0x2D
    ctx->pc = 0x19bf94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x19bf98: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19BF98u;
    {
        const bool branch_taken_0x19bf98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BF98u;
        // 0x19bf9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bf98) {
            ctx->pc = 0x19BFB0u;
            goto label_19bfb0;
        }
    }
    ctx->pc = 0x19BFA0u;
    // 0x19bfa0: 0xc138f24  jal         func_4E3C90
    ctx->pc = 0x19BFA0u;
    SET_GPR_U32(ctx, 31, 0x19BFA8u);
    ctx->pc = 0x4E3C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3C90u, 0x19BFA0u, 0x19BFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BFA8u;
label_19bfa8:
    // 0x19bfa8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x19bfa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x19bfac: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x19bfacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_19bfb0:
    // 0x19bfb0: 0x2e220003  sltiu       $v0, $s1, 0x3
    ctx->pc = 0x19bfb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x19bfb4: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x19BFB4u;
    {
        const bool branch_taken_0x19bfb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19BFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BFB4u;
        // 0x19bfb8: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bfb4) {
            ctx->pc = 0x19BF80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19bf80;
        }
    }
    ctx->pc = 0x19BFBCu;
    // 0x19bfbc: 0x2671001c  addiu       $s1, $s3, 0x1C
    ctx->pc = 0x19bfbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
    // 0x19bfc0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x19bfc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bfc4: 0x3c140055  lui         $s4, 0x55
    ctx->pc = 0x19bfc4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)85 << 16));
    // 0x19bfc8: 0x26700018  addiu       $s0, $s3, 0x18
    ctx->pc = 0x19bfc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x19bfcc: 0x0  nop
    ctx->pc = 0x19bfccu;
    // NOP
label_19bfd0:
    // 0x19bfd0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x19bfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x19bfd4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x19BFD4u;
    {
        const bool branch_taken_0x19bfd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BFD4u;
        // 0x19bfd8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bfd4) {
            ctx->pc = 0x19C000u;
            goto label_19c000;
        }
    }
    ctx->pc = 0x19BFDCu;
    // 0x19bfdc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19bfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19bfe0: 0x268539d0  addiu       $a1, $s4, 0x39D0
    ctx->pc = 0x19bfe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 14800));
    // 0x19bfe4: 0x2406003a  addiu       $a2, $zero, 0x3A
    ctx->pc = 0x19bfe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x19bfe8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19BFE8u;
    {
        const bool branch_taken_0x19bfe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BFE8u;
        // 0x19bfec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bfe8) {
            ctx->pc = 0x19C000u;
            goto label_19c000;
        }
    }
    ctx->pc = 0x19BFF0u;
    // 0x19bff0: 0xc138f44  jal         func_4E3D10
    ctx->pc = 0x19BFF0u;
    SET_GPR_U32(ctx, 31, 0x19BFF8u);
    ctx->pc = 0x4E3D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3D10u, 0x19BFF0u, 0x19BFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BFF8u;
label_19bff8:
    // 0x19bff8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x19bff8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x19bffc: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x19bffcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_19c000:
    // 0x19c000: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x19c000u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x19c004: 0x1240fff2  beqz        $s2, . + 4 + (-0xE << 2)
    ctx->pc = 0x19C004u;
    {
        const bool branch_taken_0x19c004 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C004u;
        // 0x19c008: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c004) {
            ctx->pc = 0x19BFD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19bfd0;
        }
    }
    ctx->pc = 0x19C00Cu;
    // 0x19c00c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x19c00cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19c010: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x19c010u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19c014: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x19c014u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19c018: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x19c018u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19c01c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x19c01cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c020: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19c020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c024: 0x3e00008  jr          $ra
    ctx->pc = 0x19C024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C024u;
        // 0x19c028: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C02Cu;
    // 0x19c02c: 0x0  nop
    ctx->pc = 0x19c02cu;
    // NOP
    ctx->pc = 0x19c030u;
}
