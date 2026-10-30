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

// Function: sub_0036D008
// Address: 0x36d008 - 0x36d068
void sub_0036D008_0x36d008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036D008_0x36d008");
#endif

    switch (ctx->pc) {
        case 0x36d028u: goto label_36d028;
        case 0x36d030u: goto label_36d030;
        case 0x36d044u: goto label_36d044;
        case 0x36d050u: goto label_36d050;
        default: break;
    }

    ctx->pc = 0x36d008u;

    // 0x36d008: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x36d008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x36d00c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36d00cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36d010: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x36d010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x36d014: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36d014u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d018: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36d018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x36d01c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36d01cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36d020: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36D020u;
    SET_GPR_U32(ctx, 31, 0x36D028u);
    ctx->pc = 0x36D024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D020u;
    // 0x36d024: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36D020u, 0x36D028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D028u;
label_36d028:
    // 0x36d028: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36D028u;
    SET_GPR_U32(ctx, 31, 0x36D030u);
    ctx->pc = 0x36D02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D028u;
    // 0x36d02c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36D028u, 0x36D030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D030u;
label_36d030:
    // 0x36d030: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x36d030u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d034: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36d034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d038: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36d038u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d03c: 0xc1024c6  jal         func_409318
    ctx->pc = 0x36D03Cu;
    SET_GPR_U32(ctx, 31, 0x36D044u);
    ctx->pc = 0x36D040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D03Cu;
    // 0x36d040: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x36D03Cu, 0x36D044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D044u;
label_36d044:
    // 0x36d044: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x36d044u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x36d048: 0xc1052b8  jal         func_414AE0
    ctx->pc = 0x36D048u;
    SET_GPR_U32(ctx, 31, 0x36D050u);
    ctx->pc = 0x36D04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D048u;
    // 0x36d04c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x414AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x414AE0u, 0x36D048u, 0x36D050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D050u;
label_36d050:
    // 0x36d050: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x36d050u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36d054: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36d054u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d058: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36d058u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36d05c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36d05cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36d060: 0x3e00008  jr          $ra
    ctx->pc = 0x36D060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36D064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D060u;
        // 0x36d064: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36D060u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36D068u;
}
