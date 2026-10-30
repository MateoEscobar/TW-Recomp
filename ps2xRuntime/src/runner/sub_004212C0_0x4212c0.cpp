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

// Function: sub_004212C0
// Address: 0x4212c0 - 0x421348
void sub_004212C0_0x4212c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004212C0_0x4212c0");
#endif

    switch (ctx->pc) {
        case 0x4212f8u: goto label_4212f8;
        case 0x421304u: goto label_421304;
        default: break;
    }

    ctx->pc = 0x4212c0u;

    // 0x4212c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4212c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4212c4: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4212c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x4212c8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4212c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x4212cc: 0x24426198  addiu       $v0, $v0, 0x6198
    ctx->pc = 0x4212ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24984));
    // 0x4212d0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4212d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x4212d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4212d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4212d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4212d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4212dc: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x4212dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4212e0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4212e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x4212e4: 0x24120005  addiu       $s2, $zero, 0x5
    ctx->pc = 0x4212e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x4212e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4212e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4212ec: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x4212ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4212f0: 0xae020128  sw          $v0, 0x128($s0)
    ctx->pc = 0x4212f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 2));
    // 0x4212f4: 0x0  nop
    ctx->pc = 0x4212f4u;
    // NOP
label_4212f8:
    // 0x4212f8: 0x26240016  addiu       $a0, $s1, 0x16
    ctx->pc = 0x4212f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 22));
    // 0x4212fc: 0xc13d90a  jal         func_4F6428
    ctx->pc = 0x4212FCu;
    SET_GPR_U32(ctx, 31, 0x421304u);
    ctx->pc = 0x421300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4212FCu;
    // 0x421300: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F6428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F6428u, 0x4212FCu, 0x421304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x421304u;
label_421304:
    // 0x421304: 0x0  nop
    ctx->pc = 0x421304u;
    // NOP
    // 0x421308: 0x1653fffb  bne         $s2, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x421308u;
    {
        const bool branch_taken_0x421308 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x42130Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421308u;
        // 0x42130c: 0x2631002c  addiu       $s1, $s1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x421308) {
            ctx->pc = 0x4212F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4212f8;
        }
    }
    ctx->pc = 0x421310u;
    // 0x421310: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x421310u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x421314: 0xae000108  sw          $zero, 0x108($s0)
    ctx->pc = 0x421314u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 0));
    // 0x421318: 0xae000110  sw          $zero, 0x110($s0)
    ctx->pc = 0x421318u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
    // 0x42131c: 0xae000114  sw          $zero, 0x114($s0)
    ctx->pc = 0x42131cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 0));
    // 0x421320: 0xae00011c  sw          $zero, 0x11C($s0)
    ctx->pc = 0x421320u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 0));
    // 0x421324: 0xae000124  sw          $zero, 0x124($s0)
    ctx->pc = 0x421324u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 0));
    // 0x421328: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x421328u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x42132c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x42132cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x421330: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x421330u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x421334: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x421334u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x421338: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x421338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x42133c: 0x3e00008  jr          $ra
    ctx->pc = 0x42133Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x421340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42133Cu;
        // 0x421340: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42133Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x421344u;
    // 0x421344: 0x0  nop
    ctx->pc = 0x421344u;
    // NOP
    ctx->pc = 0x421348u;
}
