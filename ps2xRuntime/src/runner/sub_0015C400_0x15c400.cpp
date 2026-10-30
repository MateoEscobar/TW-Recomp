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

// Function: sub_0015C400
// Address: 0x15c400 - 0x15c450
void sub_0015C400_0x15c400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015C400_0x15c400");
#endif

    switch (ctx->pc) {
        case 0x15c428u: goto label_15c428;
        case 0x15c440u: goto label_15c440;
        default: break;
    }

    ctx->pc = 0x15c400u;

    // 0x15c400: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15c400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15c404: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x15c404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x15c408: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x15c408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x15c40c: 0x14a2000c  bne         $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x15C40Cu;
    {
        const bool branch_taken_0x15c40c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x15C410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C40Cu;
        // 0x15c410: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c40c) {
            ctx->pc = 0x15C440u;
            goto label_15c440;
        }
    }
    ctx->pc = 0x15C414u;
    // 0x15c414: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x15C414u;
    {
        const bool branch_taken_0x15c414 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C414u;
        // 0x15c418: 0x3c10005e  lui         $s0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c414) {
            ctx->pc = 0x15C440u;
            goto label_15c440;
        }
    }
    ctx->pc = 0x15C41Cu;
    // 0x15c41c: 0x26105810  addiu       $s0, $s0, 0x5810
    ctx->pc = 0x15c41cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 22544));
    // 0x15c420: 0xc0557b6  jal         func_155ED8
    ctx->pc = 0x15C420u;
    SET_GPR_U32(ctx, 31, 0x15C428u);
    ctx->pc = 0x15C424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C420u;
    // 0x15c424: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155ED8u, 0x15C420u, 0x15C428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C428u;
label_15c428:
    // 0x15c428: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x15c428u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x15c42c: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x15c42cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x15c430: 0x24638580  addiu       $v1, $v1, -0x7A80
    ctx->pc = 0x15c430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935936));
    // 0x15c434: 0x24845840  addiu       $a0, $a0, 0x5840
    ctx->pc = 0x15c434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22592));
    // 0x15c438: 0xc071a88  jal         func_1C6A20
    ctx->pc = 0x15C438u;
    SET_GPR_U32(ctx, 31, 0x15C440u);
    ctx->pc = 0x15C43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C438u;
    // 0x15c43c: 0xae030018  sw          $v1, 0x18($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6A20u, 0x15C438u, 0x15C440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C440u;
label_15c440:
    // 0x15c440: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x15c440u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15c444: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15c444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15c448: 0x3e00008  jr          $ra
    ctx->pc = 0x15C448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15C44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C448u;
        // 0x15c44c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15C450u;
}
