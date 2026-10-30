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

// Function: sub_0014D528
// Address: 0x14d528 - 0x14d590
void sub_0014D528_0x14d528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014D528_0x14d528");
#endif

    switch (ctx->pc) {
        case 0x14d550u: goto label_14d550;
        case 0x14d578u: goto label_14d578;
        case 0x14d580u: goto label_14d580;
        default: break;
    }

    ctx->pc = 0x14d528u;

    // 0x14d528: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14d528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14d52c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14d52cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14d530: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14d530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14d534: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x14d534u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d538: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x14d538u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x14d53c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x14d53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14d540: 0x24a5b6e0  addiu       $a1, $a1, -0x4920
    ctx->pc = 0x14d540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948576));
    // 0x14d544: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x14d544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x14d548: 0xc05402a  jal         func_1500A8
    ctx->pc = 0x14D548u;
    SET_GPR_U32(ctx, 31, 0x14D550u);
    ctx->pc = 0x14D54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D548u;
    // 0x14d54c: 0x8c460010  lw          $a2, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1500A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1500A8u, 0x14D548u, 0x14D550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D550u;
label_14d550:
    // 0x14d550: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x14d550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14d554: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x14d554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x14d558: 0x8c66001c  lw          $a2, 0x1C($v1)
    ctx->pc = 0x14d558u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x14d55c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x14d55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x14d560: 0x8c670014  lw          $a3, 0x14($v1)
    ctx->pc = 0x14d560u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x14d564: 0xc23018  mult        $a2, $a2, $v0
    ctx->pc = 0x14d564u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x14d568: 0xc70018  mult        $zero, $a2, $a3
    ctx->pc = 0x14d568u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x14d56c: 0x3012  mflo        $a2
    ctx->pc = 0x14d56cu;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x14d570: 0xc05406a  jal         func_1501A8
    ctx->pc = 0x14D570u;
    SET_GPR_U32(ctx, 31, 0x14D578u);
    ctx->pc = 0x14D574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D570u;
    // 0x14d574: 0x8c650010  lw          $a1, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1501A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1501A8u, 0x14D570u, 0x14D578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D578u;
label_14d578:
    // 0x14d578: 0xc053eb2  jal         func_14FAC8
    ctx->pc = 0x14D578u;
    SET_GPR_U32(ctx, 31, 0x14D580u);
    ctx->pc = 0x14D57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D578u;
    // 0x14d57c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FAC8u, 0x14D578u, 0x14D580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D580u;
label_14d580:
    // 0x14d580: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14d580u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14d584: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14d584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14d588: 0x3e00008  jr          $ra
    ctx->pc = 0x14D588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D588u;
        // 0x14d58c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D590u;
}
