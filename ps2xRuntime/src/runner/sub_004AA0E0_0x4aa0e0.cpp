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

// Function: sub_004AA0E0
// Address: 0x4aa0e0 - 0x4aa180
void sub_004AA0E0_0x4aa0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AA0E0_0x4aa0e0");
#endif

    switch (ctx->pc) {
        case 0x4aa110u: goto label_4aa110;
        case 0x4aa140u: goto label_4aa140;
        default: break;
    }

    ctx->pc = 0x4aa0e0u;

    // 0x4aa0e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4aa0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4aa0e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4aa0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4aa0e8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4aa0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x4aa0ec: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4aa0ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x4aa0f0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4aa0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x4aa0f4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4aa0f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa0f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4aa0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4aa0fc: 0x26500014  addiu       $s0, $s2, 0x14
    ctx->pc = 0x4aa0fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x4aa100: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x4aa100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x4aa104: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x4aa104u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x4aa108: 0x96510002  lhu         $s1, 0x2($s2)
    ctx->pc = 0x4aa108u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x4aa10c: 0x0  nop
    ctx->pc = 0x4aa10cu;
    // NOP
label_4aa110:
    // 0x4aa110: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x4aa110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x4aa114: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x4AA114u;
    {
        const bool branch_taken_0x4aa114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4aa114) {
            ctx->pc = 0x4AA118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AA114u;
            // 0x4aa118: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AA15Cu;
            goto label_4aa15c;
        }
    }
    ctx->pc = 0x4AA11Cu;
    // 0x4aa11c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x4aa11cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4aa120: 0x50a00009  beql        $a1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x4AA120u;
    {
        const bool branch_taken_0x4aa120 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4aa120) {
            ctx->pc = 0x4AA124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AA120u;
            // 0x4aa124: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AA148u;
            goto label_4aa148;
        }
    }
    ctx->pc = 0x4AA128u;
    // 0x4aa128: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4aa128u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4aa12c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x4aa12cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x4aa130: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4AA130u;
    {
        const bool branch_taken_0x4aa130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4aa130) {
            ctx->pc = 0x4AA134u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AA130u;
            // 0x4aa134: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AA148u;
            goto label_4aa148;
        }
    }
    ctx->pc = 0x4AA138u;
    // 0x4aa138: 0xc12a298  jal         func_4A8A60
    ctx->pc = 0x4AA138u;
    SET_GPR_U32(ctx, 31, 0x4AA140u);
    ctx->pc = 0x4AA13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA138u;
    // 0x4aa13c: 0x8f8487d0  lw          $a0, -0x7830($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936528)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8A60u, 0x4AA138u, 0x4AA140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AA140u;
label_4aa140:
    // 0x4aa140: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x4aa140u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x4aa144: 0x0  nop
    ctx->pc = 0x4aa144u;
    // NOP
label_4aa148:
    // 0x4aa148: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x4aa148u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x4aa14c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x4aa14cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x4aa150: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x4aa150u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x4aa154: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x4aa154u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x4aa158: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x4aa158u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_4aa15c:
    // 0x4aa15c: 0x1620ffec  bnez        $s1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x4AA15Cu;
    {
        const bool branch_taken_0x4aa15c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x4AA160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA15Cu;
        // 0x4aa160: 0x2610001c  addiu       $s0, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa15c) {
            ctx->pc = 0x4AA110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4aa110;
        }
    }
    ctx->pc = 0x4AA164u;
    // 0x4aa164: 0xa6400000  sh          $zero, 0x0($s2)
    ctx->pc = 0x4aa164u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x4aa168: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4aa168u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4aa16c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4aa16cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4aa170: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4aa170u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4aa174: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4aa174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4aa178: 0x3e00008  jr          $ra
    ctx->pc = 0x4AA178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AA17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA178u;
        // 0x4aa17c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AA178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AA180u;
}
