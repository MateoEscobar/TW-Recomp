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

// Function: sub_001652E8
// Address: 0x1652e8 - 0x165368
void sub_001652E8_0x1652e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001652E8_0x1652e8");
#endif

    switch (ctx->pc) {
        case 0x16530cu: goto label_16530c;
        case 0x165320u: goto label_165320;
        case 0x165334u: goto label_165334;
        default: break;
    }

    ctx->pc = 0x1652e8u;

    // 0x1652e8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1652e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1652ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1652ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1652f0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1652f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1652f4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1652f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1652f8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1652f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1652fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1652fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x165300: 0x8c82017c  lw          $v0, 0x17C($a0)
    ctx->pc = 0x165300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 380)));
    // 0x165304: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x165304u;
    {
        const bool branch_taken_0x165304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x165308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165304u;
        // 0x165308: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165304) {
            ctx->pc = 0x165314u;
            goto label_165314;
        }
    }
    ctx->pc = 0x16530Cu;
label_16530c:
    // 0x16530c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x16530Cu;
    {
        const bool branch_taken_0x16530c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16530Cu;
        // 0x165310: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16530c) {
            ctx->pc = 0x16534Cu;
            goto label_16534c;
        }
    }
    ctx->pc = 0x165314u;
label_165314:
    // 0x165314: 0x2490015c  addiu       $s0, $a0, 0x15C
    ctx->pc = 0x165314u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 348));
    // 0x165318: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x165318u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16531c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x16531cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_165320:
    // 0x165320: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x165320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x165324: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x165324u;
    {
        const bool branch_taken_0x165324 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x165324) {
            ctx->pc = 0x165328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165324u;
            // 0x165328: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16533Cu;
            goto label_16533c;
        }
    }
    ctx->pc = 0x16532Cu;
    // 0x16532c: 0xc104a86  jal         func_412A18
    ctx->pc = 0x16532Cu;
    SET_GPR_U32(ctx, 31, 0x165334u);
    ctx->pc = 0x165330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16532Cu;
    // 0x165330: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412A18u, 0x16532Cu, 0x165334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165334u;
label_165334:
    // 0x165334: 0x1053fff5  beq         $v0, $s3, . + 4 + (-0xB << 2)
    ctx->pc = 0x165334u;
    {
        const bool branch_taken_0x165334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x165338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165334u;
        // 0x165338: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165334) {
            ctx->pc = 0x16530Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16530c;
        }
    }
    ctx->pc = 0x16533Cu;
label_16533c:
    // 0x16533c: 0x2e220008  sltiu       $v0, $s1, 0x8
    ctx->pc = 0x16533cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x165340: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x165340u;
    {
        const bool branch_taken_0x165340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x165344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165340u;
        // 0x165344: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165340) {
            ctx->pc = 0x165320u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_165320;
        }
    }
    ctx->pc = 0x165348u;
    // 0x165348: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x165348u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16534c:
    // 0x16534c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x16534cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x165350: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x165350u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x165354: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x165354u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x165358: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x165358u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16535c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16535cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x165360: 0x3e00008  jr          $ra
    ctx->pc = 0x165360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165360u;
        // 0x165364: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165368u;
}
