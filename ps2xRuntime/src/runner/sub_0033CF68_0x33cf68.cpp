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

// Function: sub_0033CF68
// Address: 0x33cf68 - 0x33cff8
void sub_0033CF68_0x33cf68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033CF68_0x33cf68");
#endif

    switch (ctx->pc) {
        case 0x33cf98u: goto label_33cf98;
        case 0x33cfacu: goto label_33cfac;
        case 0x33cfc4u: goto label_33cfc4;
        default: break;
    }

    ctx->pc = 0x33cf68u;

    // 0x33cf68: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x33cf68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x33cf6c: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x33cf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x33cf70: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x33cf70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x33cf74: 0x3442be20  ori         $v0, $v0, 0xBE20
    ctx->pc = 0x33cf74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48672);
    // 0x33cf78: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x33cf78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x33cf7c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x33cf7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33cf80: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x33cf80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x33cf84: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x33cf84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x33cf88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33cf88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33cf8c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x33cf8cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33cf90: 0x3c128000  lui         $s2, 0x8000
    ctx->pc = 0x33cf90u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)32768 << 16));
    // 0x33cf94: 0x0  nop
    ctx->pc = 0x33cf94u;
    // NOP
label_33cf98:
    // 0x33cf98: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x33cf98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x33cf9c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x33CF9Cu;
    {
        const bool branch_taken_0x33cf9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33CFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CF9Cu;
        // 0x33cfa0: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cf9c) {
            ctx->pc = 0x33CFCCu;
            goto label_33cfcc;
        }
    }
    ctx->pc = 0x33CFA4u;
    // 0x33cfa4: 0xc0d069a  jal         func_341A68
    ctx->pc = 0x33CFA4u;
    SET_GPR_U32(ctx, 31, 0x33CFACu);
    ctx->pc = 0x33CFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CFA4u;
    // 0x33cfa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341A68u, 0x33CFA4u, 0x33CFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CFACu;
label_33cfac:
    // 0x33cfac: 0xae120040  sw          $s2, 0x40($s0)
    ctx->pc = 0x33cfacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 18));
    // 0x33cfb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33cfb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33cfb4: 0xa600003c  sh          $zero, 0x3C($s0)
    ctx->pc = 0x33cfb4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 60), (uint16_t)GPR_U32(ctx, 0));
    // 0x33cfb8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x33cfb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33cfbc: 0xc0d019a  jal         func_340668
    ctx->pc = 0x33CFBCu;
    SET_GPR_U32(ctx, 31, 0x33CFC4u);
    ctx->pc = 0x33CFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CFBCu;
    // 0x33cfc0: 0xae000070  sw          $zero, 0x70($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340668u, 0x33CFBCu, 0x33CFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CFC4u;
label_33cfc4:
    // 0x33cfc4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x33CFC4u;
    {
        const bool branch_taken_0x33cfc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CFC4u;
        // 0x33cfc8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cfc4) {
            ctx->pc = 0x33CFDCu;
            goto label_33cfdc;
        }
    }
    ctx->pc = 0x33CFCCu;
label_33cfcc:
    // 0x33cfcc: 0x28620012  slti        $v0, $v1, 0x12
    ctx->pc = 0x33cfccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x33cfd0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x33CFD0u;
    {
        const bool branch_taken_0x33cfd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33CFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CFD0u;
        // 0x33cfd4: 0x26100080  addiu       $s0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cfd0) {
            ctx->pc = 0x33CF98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33cf98;
        }
    }
    ctx->pc = 0x33CFD8u;
    // 0x33cfd8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x33cfd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33cfdc:
    // 0x33cfdc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x33cfdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33cfe0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x33cfe0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33cfe4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x33cfe4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33cfe8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33cfe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33cfec: 0x3e00008  jr          $ra
    ctx->pc = 0x33CFECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33CFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CFECu;
        // 0x33cff0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33CFECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33CFF4u;
    // 0x33cff4: 0x0  nop
    ctx->pc = 0x33cff4u;
    // NOP
    ctx->pc = 0x33cff8u;
}
