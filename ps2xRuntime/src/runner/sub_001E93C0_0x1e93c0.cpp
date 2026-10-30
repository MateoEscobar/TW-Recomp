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

// Function: sub_001E93C0
// Address: 0x1e93c0 - 0x1e9468
void sub_001E93C0_0x1e93c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E93C0_0x1e93c0");
#endif

    switch (ctx->pc) {
        case 0x1e9440u: goto label_1e9440;
        case 0x1e9450u: goto label_1e9450;
        default: break;
    }

    ctx->pc = 0x1e93c0u;

    // 0x1e93c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e93c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e93c4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1e93c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1e93c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e93c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e93cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e93ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e93d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e93d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e93d4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1e93d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e93d8: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1E93D8u;
    {
        const bool branch_taken_0x1e93d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E93DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E93D8u;
        // 0x1e93dc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e93d8) {
            ctx->pc = 0x1E9450u;
            goto label_1e9450;
        }
    }
    ctx->pc = 0x1E93E0u;
    // 0x1e93e0: 0x80640019  lb          $a0, 0x19($v1)
    ctx->pc = 0x1e93e0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 25)));
    // 0x1e93e4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e93e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e93e8: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E93E8u;
    {
        const bool branch_taken_0x1e93e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E93ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E93E8u;
        // 0x1e93ec: 0x24030050  addiu       $v1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e93e8) {
            ctx->pc = 0x1E9404u;
            goto label_1e9404;
        }
    }
    ctx->pc = 0x1E93F0u;
    // 0x1e93f0: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x1e93f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x1e93f4: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x1e93f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1e93f8: 0x2442d810  addiu       $v0, $v0, -0x27F0
    ctx->pc = 0x1e93f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957072));
    // 0x1e93fc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E93FCu;
    {
        const bool branch_taken_0x1e93fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E93FCu;
        // 0x1e9400: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e93fc) {
            ctx->pc = 0x1E9408u;
            goto label_1e9408;
        }
    }
    ctx->pc = 0x1E9404u;
label_1e9404:
    // 0x1e9404: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1e9404u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e9408:
    // 0x1e9408: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1E9408u;
    {
        const bool branch_taken_0x1e9408 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E940Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9408u;
        // 0x1e940c: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9408) {
            ctx->pc = 0x1E9450u;
            goto label_1e9450;
        }
    }
    ctx->pc = 0x1E9410u;
    // 0x1e9410: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e9410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e9414: 0x80440019  lb          $a0, 0x19($v0)
    ctx->pc = 0x1e9414u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 25)));
    // 0x1e9418: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E9418u;
    {
        const bool branch_taken_0x1e9418 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E941Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9418u;
        // 0x1e941c: 0x24030050  addiu       $v1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9418) {
            ctx->pc = 0x1E9434u;
            goto label_1e9434;
        }
    }
    ctx->pc = 0x1E9420u;
    // 0x1e9420: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x1e9420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x1e9424: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x1e9424u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1e9428: 0x2442d810  addiu       $v0, $v0, -0x27F0
    ctx->pc = 0x1e9428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957072));
    // 0x1e942c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E942Cu;
    {
        const bool branch_taken_0x1e942c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E942Cu;
        // 0x1e9430: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e942c) {
            ctx->pc = 0x1E9438u;
            goto label_1e9438;
        }
    }
    ctx->pc = 0x1E9434u;
label_1e9434:
    // 0x1e9434: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e9434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e9438:
    // 0x1e9438: 0xc0512b4  jal         func_144AD0
    ctx->pc = 0x1E9438u;
    SET_GPR_U32(ctx, 31, 0x1E9440u);
    ctx->pc = 0x1E943Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9438u;
    // 0x1e943c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144AD0u, 0x1E9438u, 0x1E9440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9440u;
label_1e9440:
    // 0x1e9440: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1e9440u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1e9444: 0x512824  and         $a1, $v0, $s1
    ctx->pc = 0x1e9444u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x1e9448: 0xc07a570  jal         func_1E95C0
    ctx->pc = 0x1E9448u;
    SET_GPR_U32(ctx, 31, 0x1E9450u);
    ctx->pc = 0x1E944Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9448u;
    // 0x1e944c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E95C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E95C0u, 0x1E9448u, 0x1E9450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9450u;
label_1e9450:
    // 0x1e9450: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1e9450u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e9454: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e9454u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9458: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e9458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e945c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E945Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E945Cu;
        // 0x1e9460: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E945Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E9464u;
    // 0x1e9464: 0x0  nop
    ctx->pc = 0x1e9464u;
    // NOP
    ctx->pc = 0x1e9468u;
}
