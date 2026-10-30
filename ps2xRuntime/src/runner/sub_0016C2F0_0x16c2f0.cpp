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

// Function: sub_0016C2F0
// Address: 0x16c2f0 - 0x16c358
void sub_0016C2F0_0x16c2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016C2F0_0x16c2f0");
#endif

    switch (ctx->pc) {
        case 0x16c318u: goto label_16c318;
        case 0x16c32cu: goto label_16c32c;
        case 0x16c340u: goto label_16c340;
        default: break;
    }

    ctx->pc = 0x16c2f0u;

    // 0x16c2f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16c2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16c2f4: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x16c2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x16c2f8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x16c2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x16c2fc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x16c2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x16c300: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x16c300u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c304: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x16c304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x16c308: 0x24110b10  addiu       $s1, $zero, 0xB10
    ctx->pc = 0x16c308u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2832));
    // 0x16c30c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16c30cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16c310: 0x24526e30  addiu       $s2, $v0, 0x6E30
    ctx->pc = 0x16c310u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 28208));
    // 0x16c314: 0x102400  sll         $a0, $s0, 16
    ctx->pc = 0x16c314u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
label_16c318:
    // 0x16c318: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x16c318u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x16c31c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x16c31cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x16c320: 0x911018  mult        $v0, $a0, $s1
    ctx->pc = 0x16c320u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16c324: 0xc0591ce  jal         func_164738
    ctx->pc = 0x16C324u;
    SET_GPR_U32(ctx, 31, 0x16C32Cu);
    ctx->pc = 0x16C328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C324u;
    // 0x16c328: 0x522021  addu        $a0, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164738u, 0x16C324u, 0x16C32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C32Cu;
label_16c32c:
    // 0x16c32c: 0x2e020020  sltiu       $v0, $s0, 0x20
    ctx->pc = 0x16c32cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x16c330: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x16C330u;
    {
        const bool branch_taken_0x16c330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16C334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C330u;
        // 0x16c334: 0x102400  sll         $a0, $s0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c330) {
            ctx->pc = 0x16C318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16c318;
        }
    }
    ctx->pc = 0x16C338u;
    // 0x16c338: 0xc0c198c  jal         func_306630
    ctx->pc = 0x16C338u;
    SET_GPR_U32(ctx, 31, 0x16C340u);
    ctx->pc = 0x306630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306630u, 0x16C338u, 0x16C340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C340u;
label_16c340:
    // 0x16c340: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x16c340u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16c344: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x16c344u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16c348: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x16c348u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16c34c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16c34cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c350: 0x3e00008  jr          $ra
    ctx->pc = 0x16C350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C350u;
        // 0x16c354: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16C358u;
}
