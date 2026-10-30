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

// Function: sub_004513A0
// Address: 0x4513a0 - 0x451428
void sub_004513A0_0x4513a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004513A0_0x4513a0");
#endif

    switch (ctx->pc) {
        case 0x4513e0u: goto label_4513e0;
        case 0x4513f4u: goto label_4513f4;
        default: break;
    }

    ctx->pc = 0x4513a0u;

    // 0x4513a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4513a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4513a4: 0x8f828418  lw          $v0, -0x7BE8($gp)
    ctx->pc = 0x4513a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935576)));
    // 0x4513a8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4513a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x4513ac: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4513acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x4513b0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4513b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4513b4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4513b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x4513b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4513b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4513bc: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x4513bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4513c0: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x4513c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x4513c4: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x4513c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x4513c8: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x4513C8u;
    {
        const bool branch_taken_0x4513c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4513CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4513C8u;
        // 0x4513cc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4513c8) {
            ctx->pc = 0x451410u;
            goto label_451410;
        }
    }
    ctx->pc = 0x4513D0u;
    // 0x4513d0: 0x8c91009c  lw          $s1, 0x9C($a0)
    ctx->pc = 0x4513d0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x4513d4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4513d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4513d8: 0x26300138  addiu       $s0, $s1, 0x138
    ctx->pc = 0x4513d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 312));
    // 0x4513dc: 0x0  nop
    ctx->pc = 0x4513dcu;
    // NOP
label_4513e0:
    // 0x4513e0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4513e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4513e4: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4513E4u;
    {
        const bool branch_taken_0x4513e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4513e4) {
            ctx->pc = 0x4513E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4513E4u;
            // 0x4513e8: 0x8e2200e8  lw          $v0, 0xE8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4513FCu;
            goto label_4513fc;
        }
    }
    ctx->pc = 0x4513ECu;
    // 0x4513ec: 0xc11fa54  jal         func_47E950
    ctx->pc = 0x4513ECu;
    SET_GPR_U32(ctx, 31, 0x4513F4u);
    ctx->pc = 0x47E950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47E950u, 0x4513ECu, 0x4513F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4513F4u;
label_4513f4:
    // 0x4513f4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x4513f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x4513f8: 0x8e2200e8  lw          $v0, 0xE8($s1)
    ctx->pc = 0x4513f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
label_4513fc:
    // 0x4513fc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4513fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x451400: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x451400u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x451404: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x451404u;
    {
        const bool branch_taken_0x451404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x451408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x451404u;
        // 0x451408: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x451404) {
            ctx->pc = 0x4513E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4513e0;
        }
    }
    ctx->pc = 0x45140Cu;
    // 0x45140c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x45140cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_451410:
    // 0x451410: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x451410u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x451414: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x451414u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x451418: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x451418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45141c: 0x3e00008  jr          $ra
    ctx->pc = 0x45141Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x451420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45141Cu;
        // 0x451420: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45141Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x451424u;
    // 0x451424: 0x0  nop
    ctx->pc = 0x451424u;
    // NOP
    ctx->pc = 0x451428u;
}
