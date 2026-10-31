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

// Function: sub_0047F3B8
// Address: 0x47f3b8 - 0x47f430
void sub_0047F3B8_0x47f3b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047F3B8_0x47f3b8");
#endif

    switch (ctx->pc) {
        case 0x47f3f0u: goto label_47f3f0;
        default: break;
    }

    ctx->pc = 0x47f3b8u;

    // 0x47f3b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x47f3b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x47f3bc: 0xaf858940  sw          $a1, -0x76C0($gp)
    ctx->pc = 0x47f3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936896), GPR_U32(ctx, 5));
    // 0x47f3c0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x47f3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x47f3c4: 0x3c080071  lui         $t0, 0x71
    ctx->pc = 0x47f3c4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)113 << 16));
    // 0x47f3c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x47f3c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47f3cc: 0x8f8585e0  lw          $a1, -0x7A20($gp)
    ctx->pc = 0x47f3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936032)));
    // 0x47f3d0: 0x8f8785e4  lw          $a3, -0x7A1C($gp)
    ctx->pc = 0x47f3d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936036)));
    // 0x47f3d4: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x47f3d4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x47f3d8: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x47f3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x47f3dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x47f3dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x47f3e0: 0x2508aca0  addiu       $t0, $t0, -0x5360
    ctx->pc = 0x47f3e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294945952));
    // 0x47f3e4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x47f3e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x47f3e8: 0xc11f66e  jal         func_47D9B8
    ctx->pc = 0x47F3E8u;
    SET_GPR_U32(ctx, 31, 0x47F3F0u);
    ctx->pc = 0x47F3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47F3E8u;
    // 0x47f3ec: 0x35290404  ori         $t1, $t1, 0x404 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1028);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47D9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47D9B8u, 0x47F3E8u, 0x47F3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47F3F0u;
label_47f3f0:
    // 0x47f3f0: 0x8f848940  lw          $a0, -0x76C0($gp)
    ctx->pc = 0x47f3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936896)));
    // 0x47f3f4: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x47f3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x47f3f8: 0x2463ad18  addiu       $v1, $v1, -0x52E8
    ctx->pc = 0x47f3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946072));
    // 0x47f3fc: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x47f3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x47f400: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x47F400u;
    {
        const bool branch_taken_0x47f400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47F404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F400u;
        // 0x47f404: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47f400) {
            ctx->pc = 0x47F41Cu;
            goto label_47f41c;
        }
    }
    ctx->pc = 0x47F408u;
    // 0x47f408: 0x8f838944  lw          $v1, -0x76BC($gp)
    ctx->pc = 0x47f408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936900)));
    // 0x47f40c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x47f40cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x47f410: 0xaf838944  sw          $v1, -0x76BC($gp)
    ctx->pc = 0x47f410u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936900), GPR_U32(ctx, 3));
    // 0x47f414: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x47F414u;
    {
        const bool branch_taken_0x47f414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47F418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F414u;
        // 0x47f418: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47f414) {
            ctx->pc = 0x47F420u;
            goto label_47f420;
        }
    }
    ctx->pc = 0x47F41Cu;
label_47f41c:
    // 0x47f41c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x47f41cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47f420:
    // 0x47f420: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x47f420u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47f424: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x47f424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47f428: 0x3e00008  jr          $ra
    ctx->pc = 0x47F428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47F42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F428u;
        // 0x47f42c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47F428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47F430u;
}
