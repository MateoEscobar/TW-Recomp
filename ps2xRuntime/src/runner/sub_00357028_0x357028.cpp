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

// Function: sub_00357028
// Address: 0x357028 - 0x357060
void sub_00357028_0x357028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00357028_0x357028");
#endif

    switch (ctx->pc) {
        case 0x357044u: goto label_357044;
        case 0x357050u: goto label_357050;
        default: break;
    }

    ctx->pc = 0x357028u;

    // 0x357028: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x357028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35702c: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x35702cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x357030: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x357030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x357034: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x357034u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357038: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x357038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35703c: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x35703Cu;
    SET_GPR_U32(ctx, 31, 0x357044u);
    ctx->pc = 0x357040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35703Cu;
    // 0x357040: 0x52403  sra         $a0, $a1, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x35703Cu, 0x357044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357044u;
label_357044:
    // 0x357044: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x357044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x357048: 0xc0c8e38  jal         func_3238E0
    ctx->pc = 0x357048u;
    SET_GPR_U32(ctx, 31, 0x357050u);
    ctx->pc = 0x35704Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357048u;
    // 0x35704c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3238E0u, 0x357048u, 0x357050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357050u;
label_357050:
    // 0x357050: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x357050u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x357054: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x357054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x357058: 0x3e00008  jr          $ra
    ctx->pc = 0x357058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35705Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357058u;
        // 0x35705c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x357058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x357060u;
}
