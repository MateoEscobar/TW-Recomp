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

// Function: sub_0041FA38
// Address: 0x41fa38 - 0x41fa80
void sub_0041FA38_0x41fa38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041FA38_0x41fa38");
#endif

    switch (ctx->pc) {
        case 0x41fa60u: goto label_41fa60;
        default: break;
    }

    ctx->pc = 0x41fa38u;

    // 0x41fa38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x41fa38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x41fa3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x41fa3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41fa40: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x41fa40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x41fa44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x41fa44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41fa48: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x41fa48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41fa4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41fa4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x41fa50: 0xae00018c  sw          $zero, 0x18C($s0)
    ctx->pc = 0x41fa50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 396), GPR_U32(ctx, 0));
    // 0x41fa54: 0x2604012c  addiu       $a0, $s0, 0x12C
    ctx->pc = 0x41fa54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 300));
    // 0x41fa58: 0xc052910  jal         func_14A440
    ctx->pc = 0x41FA58u;
    SET_GPR_U32(ctx, 31, 0x41FA60u);
    ctx->pc = 0x41FA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41FA58u;
    // 0x41fa5c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A440u, 0x41FA58u, 0x41FA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41FA60u;
label_41fa60:
    // 0x41fa60: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x41fa60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x41fa64: 0xae000188  sw          $zero, 0x188($s0)
    ctx->pc = 0x41fa64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 392), GPR_U32(ctx, 0));
    // 0x41fa68: 0xae020184  sw          $v0, 0x184($s0)
    ctx->pc = 0x41fa68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 2));
    // 0x41fa6c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x41fa6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x41fa70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41fa70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41fa74: 0x3e00008  jr          $ra
    ctx->pc = 0x41FA74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41FA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FA74u;
        // 0x41fa78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41FA74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41FA7Cu;
    // 0x41fa7c: 0x0  nop
    ctx->pc = 0x41fa7cu;
    // NOP
    ctx->pc = 0x41fa80u;
}
