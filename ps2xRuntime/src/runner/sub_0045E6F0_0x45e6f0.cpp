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

// Function: sub_0045E6F0
// Address: 0x45e6f0 - 0x45e798
void sub_0045E6F0_0x45e6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045E6F0_0x45e6f0");
#endif

    switch (ctx->pc) {
        case 0x45e73cu: goto label_45e73c;
        case 0x45e750u: goto label_45e750;
        default: break;
    }

    ctx->pc = 0x45e6f0u;

    // 0x45e6f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x45e6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x45e6f4: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x45e6f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45e6f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x45e6f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x45e6fc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x45e6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x45e700: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x45e700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x45e704: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x45E704u;
    {
        const bool branch_taken_0x45e704 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x45E708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45E704u;
        // 0x45e708: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45e704) {
            ctx->pc = 0x45E744u;
            goto label_45e744;
        }
    }
    ctx->pc = 0x45E70Cu;
    // 0x45e70c: 0x8d020080  lw          $v0, 0x80($t0)
    ctx->pc = 0x45e70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 128)));
    // 0x45e710: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x45e710u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x45e714: 0x8d070084  lw          $a3, 0x84($t0)
    ctx->pc = 0x45e714u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 132)));
    // 0x45e718: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x45e718u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45e71c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x45e71cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x45e720: 0x8d030088  lw          $v1, 0x88($t0)
    ctx->pc = 0x45e720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 136)));
    // 0x45e724: 0xafa70004  sw          $a3, 0x4($sp)
    ctx->pc = 0x45e724u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
    // 0x45e728: 0x8d02008c  lw          $v0, 0x8C($t0)
    ctx->pc = 0x45e728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 140)));
    // 0x45e72c: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x45e72cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x45e730: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x45e730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x45e734: 0xc114174  jal         func_4505D0
    ctx->pc = 0x45E734u;
    SET_GPR_U32(ctx, 31, 0x45E73Cu);
    ctx->pc = 0x4505D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4505D0u, 0x45E734u, 0x45E73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45E73Cu;
label_45e73c:
    // 0x45e73c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x45E73Cu;
    {
        const bool branch_taken_0x45e73c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45E740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45E73Cu;
        // 0x45e740: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45e73c) {
            ctx->pc = 0x45E78Cu;
            goto label_45e78c;
        }
    }
    ctx->pc = 0x45E744u;
label_45e744:
    // 0x45e744: 0x18a00011  blez        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x45E744u;
    {
        const bool branch_taken_0x45e744 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x45E748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45E744u;
        // 0x45e748: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45e744) {
            ctx->pc = 0x45E78Cu;
            goto label_45e78c;
        }
    }
    ctx->pc = 0x45E74Cu;
    // 0x45e74c: 0x0  nop
    ctx->pc = 0x45e74cu;
    // NOP
label_45e750:
    // 0x45e750: 0x8d020080  lw          $v0, 0x80($t0)
    ctx->pc = 0x45e750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 128)));
    // 0x45e754: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x45e754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x45e758: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x45e758u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x45e75c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x45e75cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x45e760: 0x8d020084  lw          $v0, 0x84($t0)
    ctx->pc = 0x45e760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 132)));
    // 0x45e764: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x45e764u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x45e768: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x45e768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x45e76c: 0x8d020088  lw          $v0, 0x88($t0)
    ctx->pc = 0x45e76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 136)));
    // 0x45e770: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x45e770u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x45e774: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x45e774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x45e778: 0x8d02008c  lw          $v0, 0x8C($t0)
    ctx->pc = 0x45e778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 140)));
    // 0x45e77c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x45e77cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x45e780: 0x14a0fff3  bnez        $a1, . + 4 + (-0xD << 2)
    ctx->pc = 0x45E780u;
    {
        const bool branch_taken_0x45e780 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x45E784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45E780u;
        // 0x45e784: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45e780) {
            ctx->pc = 0x45E750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45e750;
        }
    }
    ctx->pc = 0x45E788u;
    // 0x45e788: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x45e788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_45e78c:
    // 0x45e78c: 0x3e00008  jr          $ra
    ctx->pc = 0x45E78Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x45E790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45E78Cu;
        // 0x45e790: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45E78Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45E794u;
    // 0x45e794: 0x0  nop
    ctx->pc = 0x45e794u;
    // NOP
    ctx->pc = 0x45e798u;
}
