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

// Function: sub_00414398
// Address: 0x414398 - 0x414438
void sub_00414398_0x414398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00414398_0x414398");
#endif

    switch (ctx->pc) {
        case 0x4143c8u: goto label_4143c8;
        case 0x4143f8u: goto label_4143f8;
        default: break;
    }

    ctx->pc = 0x414398u;

    // 0x414398: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x414398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x41439c: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x41439cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x4143a0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4143a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x4143a4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4143a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x4143a8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4143a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4143ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4143acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4143b0: 0x24110005  addiu       $s1, $zero, 0x5
    ctx->pc = 0x4143b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x4143b4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4143b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x4143b8: 0x2452d6e0  addiu       $s2, $v0, -0x2920
    ctx->pc = 0x4143b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956768));
    // 0x4143bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4143bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4143c0: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x4143c0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
    // 0x4143c4: 0x0  nop
    ctx->pc = 0x4143c4u;
    // NOP
label_4143c8:
    // 0x4143c8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x4143c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4143cc: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x4143CCu;
    {
        const bool branch_taken_0x4143cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4143cc) {
            ctx->pc = 0x4143D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4143CCu;
            // 0x4143d0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4143F8u;
            goto label_4143f8;
        }
    }
    ctx->pc = 0x4143D4u;
    // 0x4143d4: 0x211001b  divu        $zero, $s0, $s1
    ctx->pc = 0x4143d4u;
    { uint32_t divisor = GPR_U32(ctx, 17); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
    // 0x4143d8: 0x52200001  beql        $s1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x4143D8u;
    {
        const bool branch_taken_0x4143d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4143d8) {
            ctx->pc = 0x4143DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4143D8u;
            // 0x4143dc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4143E0u;
            goto label_4143e0;
        }
    }
    ctx->pc = 0x4143E0u;
label_4143e0:
    // 0x4143e0: 0x8e62482c  lw          $v0, 0x482C($s3)
    ctx->pc = 0x4143e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18476)));
    // 0x4143e4: 0x1810  mfhi        $v1
    ctx->pc = 0x4143e4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x4143e8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4143E8u;
    {
        const bool branch_taken_0x4143e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4143ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4143E8u;
        // 0x4143ec: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4143e8) {
            ctx->pc = 0x4143F8u;
            goto label_4143f8;
        }
    }
    ctx->pc = 0x4143F0u;
    // 0x4143f0: 0xc1051b8  jal         func_4146E0
    ctx->pc = 0x4143F0u;
    SET_GPR_U32(ctx, 31, 0x4143F8u);
    ctx->pc = 0x4146E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4146E0u, 0x4143F0u, 0x4143F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4143F8u;
label_4143f8:
    // 0x4143f8: 0x2e020064  sltiu       $v0, $s0, 0x64
    ctx->pc = 0x4143f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)100) ? 1 : 0);
    // 0x4143fc: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x4143FCu;
    {
        const bool branch_taken_0x4143fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x414400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4143FCu;
        // 0x414400: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4143fc) {
            ctx->pc = 0x4143C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4143c8;
        }
    }
    ctx->pc = 0x414404u;
    // 0x414404: 0x8e62482c  lw          $v0, 0x482C($s3)
    ctx->pc = 0x414404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18476)));
    // 0x414408: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x414408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x41440c: 0x2c430005  sltiu       $v1, $v0, 0x5
    ctx->pc = 0x41440cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x414410: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x414410u;
    {
        const bool branch_taken_0x414410 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x414414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414410u;
        // 0x414414: 0xae62482c  sw          $v0, 0x482C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 18476), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414410) {
            ctx->pc = 0x41441Cu;
            goto label_41441c;
        }
    }
    ctx->pc = 0x414418u;
    // 0x414418: 0xae60482c  sw          $zero, 0x482C($s3)
    ctx->pc = 0x414418u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 18476), GPR_U32(ctx, 0));
label_41441c:
    // 0x41441c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x41441cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x414420: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x414420u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x414424: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x414424u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x414428: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x414428u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x41442c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41442cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x414430: 0x3e00008  jr          $ra
    ctx->pc = 0x414430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x414434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414430u;
        // 0x414434: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x414430u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x414438u;
}
