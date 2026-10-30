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

// Function: sub_002AD530
// Address: 0x2ad530 - 0x2ad580
void sub_002AD530_0x2ad530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AD530_0x2ad530");
#endif

    switch (ctx->pc) {
        case 0x2ad554u: goto label_2ad554;
        case 0x2ad55cu: goto label_2ad55c;
        default: break;
    }

    ctx->pc = 0x2ad530u;

    // 0x2ad530: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ad530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ad534: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2ad534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2ad538: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ad538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ad53c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ad53cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad540: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ad540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ad544: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2ad544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ad548: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2ad548u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ad54c: 0xc042f3e  jal         func_10BCF8
    ctx->pc = 0x2AD54Cu;
    SET_GPR_U32(ctx, 31, 0x2AD554u);
    ctx->pc = 0x2AD550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD54Cu;
    // 0x2ad550: 0x26240418  addiu       $a0, $s1, 0x418 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BCF8u, 0x2AD54Cu, 0x2AD554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD554u;
label_2ad554:
    // 0x2ad554: 0xc042f3e  jal         func_10BCF8
    ctx->pc = 0x2AD554u;
    SET_GPR_U32(ctx, 31, 0x2AD55Cu);
    ctx->pc = 0x2AD558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD554u;
    // 0x2ad558: 0x26240440  addiu       $a0, $s1, 0x440 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BCF8u, 0x2AD554u, 0x2AD55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD55Cu;
label_2ad55c:
    // 0x2ad55c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2ad55cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ad560: 0x9202002e  lbu         $v0, 0x2E($s0)
    ctx->pc = 0x2ad560u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 46)));
    // 0x2ad564: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2ad564u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ad568: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ad568u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ad56c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ad56cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ad570: 0xac62021c  sw          $v0, 0x21C($v1)
    ctx->pc = 0x2ad570u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 540), GPR_U32(ctx, 2));
    // 0x2ad574: 0x3e00008  jr          $ra
    ctx->pc = 0x2AD574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD574u;
        // 0x2ad578: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AD57Cu;
    // 0x2ad57c: 0x0  nop
    ctx->pc = 0x2ad57cu;
    // NOP
    ctx->pc = 0x2ad580u;
}
