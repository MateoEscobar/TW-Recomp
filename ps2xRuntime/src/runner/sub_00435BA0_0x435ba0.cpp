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

// Function: sub_00435BA0
// Address: 0x435ba0 - 0x435c20
void sub_00435BA0_0x435ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00435BA0_0x435ba0");
#endif

    switch (ctx->pc) {
        case 0x435bc0u: goto label_435bc0;
        case 0x435bd8u: goto label_435bd8;
        case 0x435be4u: goto label_435be4;
        case 0x435bf4u: goto label_435bf4;
        case 0x435c00u: goto label_435c00;
        default: break;
    }

    ctx->pc = 0x435ba0u;

    // 0x435ba0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x435ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x435ba4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x435ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x435ba8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x435ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x435bac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x435bacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x435bb0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x435bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x435bb4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x435bb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x435bb8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x435BB8u;
    {
        const bool branch_taken_0x435bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x435BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435BB8u;
        // 0x435bbc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435bb8) {
            ctx->pc = 0x435BC4u;
            goto label_435bc4;
        }
    }
    ctx->pc = 0x435BC0u;
label_435bc0:
    // 0x435bc0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x435bc0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_435bc4:
    // 0x435bc4: 0x82240000  lb          $a0, 0x0($s1)
    ctx->pc = 0x435bc4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x435bc8: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x435BC8u;
    {
        const bool branch_taken_0x435bc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x435bc8) {
            ctx->pc = 0x435BECu;
            goto label_435bec;
        }
    }
    ctx->pc = 0x435BD0u;
    // 0x435bd0: 0xc10e694  jal         func_439A50
    ctx->pc = 0x435BD0u;
    SET_GPR_U32(ctx, 31, 0x435BD8u);
    ctx->pc = 0x439A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x439A50u, 0x435BD0u, 0x435BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x435BD8u;
label_435bd8:
    // 0x435bd8: 0x82440000  lb          $a0, 0x0($s2)
    ctx->pc = 0x435bd8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x435bdc: 0xc10e694  jal         func_439A50
    ctx->pc = 0x435BDCu;
    SET_GPR_U32(ctx, 31, 0x435BE4u);
    ctx->pc = 0x435BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x435BDCu;
    // 0x435be0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x439A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x439A50u, 0x435BDCu, 0x435BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x435BE4u;
label_435be4:
    // 0x435be4: 0x5202fff6  beql        $s0, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x435BE4u;
    {
        const bool branch_taken_0x435be4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x435be4) {
            ctx->pc = 0x435BE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x435BE4u;
            // 0x435be8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x435BC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_435bc0;
        }
    }
    ctx->pc = 0x435BECu;
label_435bec:
    // 0x435bec: 0xc10e694  jal         func_439A50
    ctx->pc = 0x435BECu;
    SET_GPR_U32(ctx, 31, 0x435BF4u);
    ctx->pc = 0x435BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x435BECu;
    // 0x435bf0: 0x92240000  lbu         $a0, 0x0($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x439A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x439A50u, 0x435BECu, 0x435BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x435BF4u;
label_435bf4:
    // 0x435bf4: 0x92440000  lbu         $a0, 0x0($s2)
    ctx->pc = 0x435bf4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x435bf8: 0xc10e694  jal         func_439A50
    ctx->pc = 0x435BF8u;
    SET_GPR_U32(ctx, 31, 0x435C00u);
    ctx->pc = 0x435BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x435BF8u;
    // 0x435bfc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x439A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x439A50u, 0x435BF8u, 0x435C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x435C00u;
label_435c00:
    // 0x435c00: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x435c00u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x435c04: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x435c04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x435c08: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x435c08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x435c0c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x435c0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x435c10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x435c10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x435c14: 0x3e00008  jr          $ra
    ctx->pc = 0x435C14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x435C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435C14u;
        // 0x435c18: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x435C14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x435C1Cu;
    // 0x435c1c: 0x0  nop
    ctx->pc = 0x435c1cu;
    // NOP
    ctx->pc = 0x435c20u;
}
