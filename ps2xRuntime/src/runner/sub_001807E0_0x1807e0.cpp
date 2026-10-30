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

// Function: sub_001807E0
// Address: 0x1807e0 - 0x180858
void sub_001807E0_0x1807e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001807E0_0x1807e0");
#endif

    switch (ctx->pc) {
        case 0x18083cu: goto label_18083c;
        case 0x18084cu: goto label_18084c;
        default: break;
    }

    ctx->pc = 0x1807e0u;

    // 0x1807e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1807e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1807e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1807e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1807e8: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x1807e8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x1807ec: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x1807ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x1807f0: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x1807f0u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1807f4: 0x78a90010  lq          $t1, 0x10($a1)
    ctx->pc = 0x1807f4u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1807f8: 0x78aa0020  lq          $t2, 0x20($a1)
    ctx->pc = 0x1807f8u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1807fc: 0x78ab0030  lq          $t3, 0x30($a1)
    ctx->pc = 0x1807fcu;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x180800: 0x1074026  xor         $t0, $t0, $a3
    ctx->pc = 0x180800u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 7));
    // 0x180804: 0x1274826  xor         $t1, $t1, $a3
    ctx->pc = 0x180804u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 7));
    // 0x180808: 0x1475026  xor         $t2, $t2, $a3
    ctx->pc = 0x180808u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 7));
    // 0x18080c: 0x1675826  xor         $t3, $t3, $a3
    ctx->pc = 0x18080cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) ^ GPR_U64(ctx, 7));
    // 0x180810: 0x700847a9  pexcw       $t0, $t0
    ctx->pc = 0x180810u;
    SET_GPR_VEC(ctx, 8, _mm_shuffle_epi32(GPR_VEC(ctx, 8), _MM_SHUFFLE(1,0,3,2)));
    // 0x180814: 0x70094fa9  pexcw       $t1, $t1
    ctx->pc = 0x180814u;
    SET_GPR_VEC(ctx, 9, _mm_shuffle_epi32(GPR_VEC(ctx, 9), _MM_SHUFFLE(1,0,3,2)));
    // 0x180818: 0x700a57a9  pexcw       $t2, $t2
    ctx->pc = 0x180818u;
    SET_GPR_VEC(ctx, 10, _mm_shuffle_epi32(GPR_VEC(ctx, 10), _MM_SHUFFLE(1,0,3,2)));
    // 0x18081c: 0x700b5fa9  pexcw       $t3, $t3
    ctx->pc = 0x18081cu;
    SET_GPR_VEC(ctx, 11, _mm_shuffle_epi32(GPR_VEC(ctx, 11), _MM_SHUFFLE(1,0,3,2)));
    // 0x180820: 0x7fa80000  sq          $t0, 0x0($sp)
    ctx->pc = 0x180820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 8));
    // 0x180824: 0x7fa90010  sq          $t1, 0x10($sp)
    ctx->pc = 0x180824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 9));
    // 0x180828: 0x7faa0020  sq          $t2, 0x20($sp)
    ctx->pc = 0x180828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 10));
    // 0x18082c: 0x7fab0030  sq          $t3, 0x30($sp)
    ctx->pc = 0x18082cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 11));
    // 0x180830: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x180830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x180834: 0xc05fdee  jal         func_17F7B8
    ctx->pc = 0x180834u;
    SET_GPR_U32(ctx, 31, 0x18083Cu);
    ctx->pc = 0x180838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180834u;
    // 0x180838: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F7B8u, 0x180834u, 0x18083Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18083Cu;
label_18083c:
    // 0x18083c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x18083cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x180840: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x180840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180844: 0xc120efe  jal         func_483BF8
    ctx->pc = 0x180844u;
    SET_GPR_U32(ctx, 31, 0x18084Cu);
    ctx->pc = 0x180848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180844u;
    // 0x180848: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x483BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483BF8u, 0x180844u, 0x18084Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18084Cu;
label_18084c:
    // 0x18084c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x18084cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x180850: 0x3e00008  jr          $ra
    ctx->pc = 0x180850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180850u;
        // 0x180854: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180858u;
}
