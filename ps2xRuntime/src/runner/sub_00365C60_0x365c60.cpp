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

// Function: sub_00365C60
// Address: 0x365c60 - 0x365d38
void sub_00365C60_0x365c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00365C60_0x365c60");
#endif

    switch (ctx->pc) {
        case 0x365c88u: goto label_365c88;
        case 0x365c90u: goto label_365c90;
        case 0x365ca0u: goto label_365ca0;
        case 0x365cb8u: goto label_365cb8;
        case 0x365cc0u: goto label_365cc0;
        case 0x365cdcu: goto label_365cdc;
        case 0x365ce8u: goto label_365ce8;
        case 0x365cf8u: goto label_365cf8;
        case 0x365d0cu: goto label_365d0c;
        default: break;
    }

    ctx->pc = 0x365c60u;

    // 0x365c60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x365c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x365c64: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x365c64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x365c68: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x365c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x365c6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x365c6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365c70: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x365c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x365c74: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x365c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x365c78: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x365c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x365c7c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x365c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x365c80: 0xc102472  jal         func_4091C8
    ctx->pc = 0x365C80u;
    SET_GPR_U32(ctx, 31, 0x365C88u);
    ctx->pc = 0x365C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365C80u;
    // 0x365c84: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x365C80u, 0x365C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365C88u;
label_365c88:
    // 0x365c88: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x365C88u;
    SET_GPR_U32(ctx, 31, 0x365C90u);
    ctx->pc = 0x365C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365C88u;
    // 0x365c8c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x365C88u, 0x365C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365C90u;
label_365c90:
    // 0x365c90: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x365c90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365c94: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x365c94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365c98: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x365c98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365c9c: 0x0  nop
    ctx->pc = 0x365c9cu;
    // NOP
label_365ca0:
    // 0x365ca0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x365ca0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x365ca4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x365ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365ca8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x365ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x365cac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x365cacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365cb0: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x365CB0u;
    SET_GPR_U32(ctx, 31, 0x365CB8u);
    ctx->pc = 0x365CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365CB0u;
    // 0x365cb4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x365CB0u, 0x365CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365CB8u;
label_365cb8:
    // 0x365cb8: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x365CB8u;
    SET_GPR_U32(ctx, 31, 0x365CC0u);
    ctx->pc = 0x365CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365CB8u;
    // 0x365cbc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x365CB8u, 0x365CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365CC0u;
label_365cc0:
    // 0x365cc0: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x365cc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x365cc4: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x365cc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x365cc8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x365CC8u;
    {
        const bool branch_taken_0x365cc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x365CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365CC8u;
        // 0x365ccc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365cc8) {
            ctx->pc = 0x365CA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_365ca0;
        }
    }
    ctx->pc = 0x365CD0u;
    // 0x365cd0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x365cd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365cd4: 0xc04718e  jal         func_11C638
    ctx->pc = 0x365CD4u;
    SET_GPR_U32(ctx, 31, 0x365CDCu);
    ctx->pc = 0x365CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365CD4u;
    // 0x365cd8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C638u, 0x365CD4u, 0x365CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365CDCu;
label_365cdc:
    // 0x365cdc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x365cdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365ce0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x365ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x365ce4: 0x0  nop
    ctx->pc = 0x365ce4u;
    // NOP
label_365ce8:
    // 0x365ce8: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x365ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x365cec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x365cecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x365cf0: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x365CF0u;
    SET_GPR_U32(ctx, 31, 0x365CF8u);
    ctx->pc = 0x365CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365CF0u;
    // 0x365cf4: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x365CF0u, 0x365CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365CF8u;
label_365cf8:
    // 0x365cf8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x365cf8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365cfc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x365cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365d00: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x365d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x365d04: 0xc102576  jal         func_4095D8
    ctx->pc = 0x365D04u;
    SET_GPR_U32(ctx, 31, 0x365D0Cu);
    ctx->pc = 0x365D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365D04u;
    // 0x365d08: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x365D04u, 0x365D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365D0Cu;
label_365d0c:
    // 0x365d0c: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x365d0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x365d10: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x365D10u;
    {
        const bool branch_taken_0x365d10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x365D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365D10u;
        // 0x365d14: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365d10) {
            ctx->pc = 0x365CE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_365ce8;
        }
    }
    ctx->pc = 0x365D18u;
    // 0x365d18: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x365d18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x365d1c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x365d1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365d20: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x365d20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x365d24: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x365d24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x365d28: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x365d28u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x365d2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x365d2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x365d30: 0x3e00008  jr          $ra
    ctx->pc = 0x365D30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x365D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365D30u;
        // 0x365d34: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x365D30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x365D38u;
}
