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

// Function: sub_00357910
// Address: 0x357910 - 0x357958
void sub_00357910_0x357910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00357910_0x357910");
#endif

    switch (ctx->pc) {
        case 0x357930u: goto label_357930;
        case 0x357940u: goto label_357940;
        default: break;
    }

    ctx->pc = 0x357910u;

    // 0x357910: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x357910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x357914: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x357914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x357918: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x357918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x35791c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35791cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x357920: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x357920u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357924: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x357924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x357928: 0xc0c8da2  jal         func_323688
    ctx->pc = 0x357928u;
    SET_GPR_U32(ctx, 31, 0x357930u);
    ctx->pc = 0x35792Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357928u;
    // 0x35792c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323688u, 0x357928u, 0x357930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357930u;
label_357930:
    // 0x357930: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x357930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x357934: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x357934u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357938: 0xc0c8ccc  jal         func_323330
    ctx->pc = 0x357938u;
    SET_GPR_U32(ctx, 31, 0x357940u);
    ctx->pc = 0x35793Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357938u;
    // 0x35793c: 0x2405fffe  addiu       $a1, $zero, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323330u, 0x357938u, 0x357940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357940u;
label_357940:
    // 0x357940: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x357940u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357944: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x357944u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x357948: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x357948u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35794c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35794cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x357950: 0x3e00008  jr          $ra
    ctx->pc = 0x357950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x357954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357950u;
        // 0x357954: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x357950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x357958u;
}
