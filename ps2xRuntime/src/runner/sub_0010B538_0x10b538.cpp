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

// Function: sub_0010B538
// Address: 0x10b538 - 0x10b590
void sub_0010B538_0x10b538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010B538_0x10b538");
#endif

    switch (ctx->pc) {
        case 0x10b558u: goto label_10b558;
        case 0x10b568u: goto label_10b568;
        case 0x10b570u: goto label_10b570;
        case 0x10b578u: goto label_10b578;
        default: break;
    }

    ctx->pc = 0x10b538u;

    // 0x10b538: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10b538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10b53c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x10b53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x10b540: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10b540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10b544: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10b544u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b548: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x10b548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x10b54c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x10b54cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x10b550: 0xc05d448  jal         func_175120
    ctx->pc = 0x10B550u;
    SET_GPR_U32(ctx, 31, 0x10B558u);
    ctx->pc = 0x10B554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B550u;
    // 0x10b554: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175120u, 0x10B550u, 0x10B558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B558u;
label_10b558:
    // 0x10b558: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x10b558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x10b55c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x10b55cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x10b560: 0xc05d448  jal         func_175120
    ctx->pc = 0x10B560u;
    SET_GPR_U32(ctx, 31, 0x10B568u);
    ctx->pc = 0x10B564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B560u;
    // 0x10b564: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175120u, 0x10B560u, 0x10B568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B568u;
label_10b568:
    // 0x10b568: 0xc042ef4  jal         func_10BBD0
    ctx->pc = 0x10B568u;
    SET_GPR_U32(ctx, 31, 0x10B570u);
    ctx->pc = 0x10B56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B568u;
    // 0x10b56c: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BBD0u, 0x10B568u, 0x10B570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B570u;
label_10b570:
    // 0x10b570: 0xc042ef4  jal         func_10BBD0
    ctx->pc = 0x10B570u;
    SET_GPR_U32(ctx, 31, 0x10B578u);
    ctx->pc = 0x10B574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B570u;
    // 0x10b574: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BBD0u, 0x10B570u, 0x10B578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B578u;
label_10b578:
    // 0x10b578: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x10b578u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x10b57c: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x10b57cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x10b580: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x10b580u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b584: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10b584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b588: 0x3e00008  jr          $ra
    ctx->pc = 0x10B588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B588u;
        // 0x10b58c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B590u;
}
