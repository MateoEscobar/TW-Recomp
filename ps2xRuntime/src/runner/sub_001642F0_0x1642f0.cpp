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

// Function: sub_001642F0
// Address: 0x1642f0 - 0x164370
void sub_001642F0_0x1642f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001642F0_0x1642f0");
#endif

    switch (ctx->pc) {
        case 0x164314u: goto label_164314;
        case 0x164330u: goto label_164330;
        case 0x164344u: goto label_164344;
        default: break;
    }

    ctx->pc = 0x1642f0u;

    // 0x1642f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1642f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1642f4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1642f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1642f8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1642f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1642fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1642fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164300: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x164300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x164304: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x164304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x164308: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x164308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16430c: 0xc058fc4  jal         func_163F10
    ctx->pc = 0x16430Cu;
    SET_GPR_U32(ctx, 31, 0x164314u);
    ctx->pc = 0x164310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16430Cu;
    // 0x164310: 0x37a70004  ori         $a3, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x163F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163F10u, 0x16430Cu, 0x164314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164314u;
label_164314:
    // 0x164314: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x164314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x164318: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x164318u;
    {
        const bool branch_taken_0x164318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16431Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164318u;
        // 0x16431c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164318) {
            ctx->pc = 0x164358u;
            goto label_164358;
        }
    }
    ctx->pc = 0x164320u;
    // 0x164320: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x164320u;
    {
        const bool branch_taken_0x164320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x164324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164320u;
        // 0x164324: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164320) {
            ctx->pc = 0x164354u;
            goto label_164354;
        }
    }
    ctx->pc = 0x164328u;
    // 0x164328: 0x24120028  addiu       $s2, $zero, 0x28
    ctx->pc = 0x164328u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16432c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x16432cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_164330:
    // 0x164330: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x164330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x164334: 0x921018  mult        $v0, $a0, $s2
    ctx->pc = 0x164334u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x164338: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x164338u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x16433c: 0xc042f3e  jal         func_10BCF8
    ctx->pc = 0x16433Cu;
    SET_GPR_U32(ctx, 31, 0x164344u);
    ctx->pc = 0x164340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16433Cu;
    // 0x164340: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BCF8u, 0x16433Cu, 0x164344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164344u;
label_164344:
    // 0x164344: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x164344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x164348: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x164348u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x16434c: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x16434Cu;
    {
        const bool branch_taken_0x16434c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16434c) {
            ctx->pc = 0x164350u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16434Cu;
            // 0x164350: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x164330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_164330;
        }
    }
    ctx->pc = 0x164354u;
label_164354:
    // 0x164354: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x164354u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_164358:
    // 0x164358: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x164358u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16435c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16435cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x164360: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x164360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x164364: 0x3e00008  jr          $ra
    ctx->pc = 0x164364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164364u;
        // 0x164368: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16436Cu;
    // 0x16436c: 0x0  nop
    ctx->pc = 0x16436cu;
    // NOP
    ctx->pc = 0x164370u;
}
