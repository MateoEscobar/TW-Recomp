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

// Function: sub_0019C3F0
// Address: 0x19c3f0 - 0x19c438
void sub_0019C3F0_0x19c3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019C3F0_0x19c3f0");
#endif

    switch (ctx->pc) {
        case 0x19c428u: goto label_19c428;
        default: break;
    }

    ctx->pc = 0x19c3f0u;

    // 0x19c3f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19c3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19c3f4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x19c3f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c3f8: 0x2cc20003  sltiu       $v0, $a2, 0x3
    ctx->pc = 0x19c3f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x19c3fc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19C3FCu;
    {
        const bool branch_taken_0x19c3fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C3FCu;
        // 0x19c400: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c3fc) {
            ctx->pc = 0x19C418u;
            goto label_19c418;
        }
    }
    ctx->pc = 0x19C404u;
    // 0x19c404: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x19c404u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x19c408: 0xe41021  addu        $v0, $a3, $a0
    ctx->pc = 0x19c408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x19c40c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x19c40cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x19c410: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19C410u;
    {
        const bool branch_taken_0x19c410 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19c410) {
            ctx->pc = 0x19C420u;
            goto label_19c420;
        }
    }
    ctx->pc = 0x19C418u;
label_19c418:
    // 0x19c418: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19C418u;
    {
        const bool branch_taken_0x19c418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C418u;
        // 0x19c41c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c418) {
            ctx->pc = 0x19C42Cu;
            goto label_19c42c;
        }
    }
    ctx->pc = 0x19C420u;
label_19c420:
    // 0x19c420: 0xc067378  jal         func_19CDE0
    ctx->pc = 0x19C420u;
    SET_GPR_U32(ctx, 31, 0x19C428u);
    ctx->pc = 0x19C424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C420u;
    // 0x19c424: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CDE0u, 0x19C420u, 0x19C428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C428u;
label_19c428:
    // 0x19c428: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19c428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19c42c:
    // 0x19c42c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19c42cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c430: 0x3e00008  jr          $ra
    ctx->pc = 0x19C430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C430u;
        // 0x19c434: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C430u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C438u;
}
