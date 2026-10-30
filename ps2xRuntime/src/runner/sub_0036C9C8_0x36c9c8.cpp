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

// Function: sub_0036C9C8
// Address: 0x36c9c8 - 0x36ca18
void sub_0036C9C8_0x36c9c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036C9C8_0x36c9c8");
#endif

    switch (ctx->pc) {
        case 0x36c9e4u: goto label_36c9e4;
        case 0x36c9ecu: goto label_36c9ec;
        case 0x36c9f4u: goto label_36c9f4;
        case 0x36ca00u: goto label_36ca00;
        default: break;
    }

    ctx->pc = 0x36c9c8u;

    // 0x36c9c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36c9c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36c9cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36c9ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c9d0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x36c9d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x36c9d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36c9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36c9d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36c9d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36c9dc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36C9DCu;
    SET_GPR_U32(ctx, 31, 0x36C9E4u);
    ctx->pc = 0x36C9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C9DCu;
    // 0x36c9e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36C9DCu, 0x36C9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C9E4u;
label_36c9e4:
    // 0x36c9e4: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36C9E4u;
    SET_GPR_U32(ctx, 31, 0x36C9ECu);
    ctx->pc = 0x36C9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C9E4u;
    // 0x36c9e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36C9E4u, 0x36C9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C9ECu;
label_36c9ec:
    // 0x36c9ec: 0xc0e167c  jal         func_3859F0
    ctx->pc = 0x36C9ECu;
    SET_GPR_U32(ctx, 31, 0x36C9F4u);
    ctx->pc = 0x36C9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C9ECu;
    // 0x36c9f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3859F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3859F0u, 0x36C9ECu, 0x36C9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C9F4u;
label_36c9f4:
    // 0x36c9f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x36c9f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c9f8: 0xc102542  jal         func_409508
    ctx->pc = 0x36C9F8u;
    SET_GPR_U32(ctx, 31, 0x36CA00u);
    ctx->pc = 0x36C9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C9F8u;
    // 0x36c9fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409508u, 0x36C9F8u, 0x36CA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CA00u;
label_36ca00:
    // 0x36ca00: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x36ca00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36ca04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36ca04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36ca08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36ca08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36ca0c: 0x3e00008  jr          $ra
    ctx->pc = 0x36CA0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36CA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CA0Cu;
        // 0x36ca10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36CA0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36CA14u;
    // 0x36ca14: 0x0  nop
    ctx->pc = 0x36ca14u;
    // NOP
    ctx->pc = 0x36ca18u;
}
