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

// Function: sub_0014C3B8
// Address: 0x14c3b8 - 0x14c448
void sub_0014C3B8_0x14c3b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014C3B8_0x14c3b8");
#endif

    switch (ctx->pc) {
        case 0x14c3f0u: goto label_14c3f0;
        case 0x14c3f8u: goto label_14c3f8;
        case 0x14c400u: goto label_14c400;
        case 0x14c410u: goto label_14c410;
        default: break;
    }

    ctx->pc = 0x14c3b8u;

    // 0x14c3b8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x14c3b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x14c3bc: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x14c3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x14c3c0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x14c3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x14c3c4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x14c3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x14c3c8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x14c3c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c3cc: 0x8c820824  lw          $v0, 0x824($a0)
    ctx->pc = 0x14c3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2084)));
    // 0x14c3d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14c3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14c3d4: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x14c3d4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x14c3d8: 0xac820824  sw          $v0, 0x824($a0)
    ctx->pc = 0x14c3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2084), GPR_U32(ctx, 2));
    // 0x14c3dc: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x14C3DCu;
    {
        const bool branch_taken_0x14c3dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c3dc) {
            ctx->pc = 0x14C3E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C3DCu;
            // 0x14c3e0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C3E4u;
            goto label_14c3e4;
        }
    }
    ctx->pc = 0x14C3E4u;
label_14c3e4:
    // 0x14c3e4: 0x2810  mfhi        $a1
    ctx->pc = 0x14c3e4u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x14c3e8: 0xac850824  sw          $a1, 0x824($a0)
    ctx->pc = 0x14c3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2084), GPR_U32(ctx, 5));
    // 0x14c3ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c3ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14c3f0:
    // 0x14c3f0: 0xc05420e  jal         func_150838
    ctx->pc = 0x14C3F0u;
    SET_GPR_U32(ctx, 31, 0x14C3F8u);
    ctx->pc = 0x14C3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C3F0u;
    // 0x14c3f4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150838u, 0x14C3F0u, 0x14C3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C3F8u;
label_14c3f8:
    // 0x14c3f8: 0xc053e8e  jal         func_14FA38
    ctx->pc = 0x14C3F8u;
    SET_GPR_U32(ctx, 31, 0x14C400u);
    ctx->pc = 0x14C3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C3F8u;
    // 0x14c3fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FA38u, 0x14C3F8u, 0x14C400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C400u;
label_14c400:
    // 0x14c400: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x14c400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x14c404: 0x24030027  addiu       $v1, $zero, 0x27
    ctx->pc = 0x14c404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x14c408: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x14c408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x14c40c: 0x0  nop
    ctx->pc = 0x14c40cu;
    // NOP
label_14c410:
    // 0x14c410: 0x0  nop
    ctx->pc = 0x14c410u;
    // NOP
    // 0x14c414: 0x0  nop
    ctx->pc = 0x14c414u;
    // NOP
    // 0x14c418: 0x0  nop
    ctx->pc = 0x14c418u;
    // NOP
    // 0x14c41c: 0x0  nop
    ctx->pc = 0x14c41cu;
    // NOP
    // 0x14c420: 0x463fffb  bgezl       $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x14C420u;
    {
        const bool branch_taken_0x14c420 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x14c420) {
            ctx->pc = 0x14C424u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C420u;
            // 0x14c424: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C410u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14c410;
        }
    }
    ctx->pc = 0x14C428u;
    // 0x14c428: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14c428u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c42c: 0x2a02000d  slti        $v0, $s0, 0xD
    ctx->pc = 0x14c42cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x14c430: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x14C430u;
    {
        const bool branch_taken_0x14c430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14c430) {
            ctx->pc = 0x14C434u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C430u;
            // 0x14c434: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C3F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14c3f0;
        }
    }
    ctx->pc = 0x14C438u;
    // 0x14c438: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x14c438u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14c43c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x14c43cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14c440: 0x3e00008  jr          $ra
    ctx->pc = 0x14C440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C440u;
        // 0x14c444: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14C448u;
}
