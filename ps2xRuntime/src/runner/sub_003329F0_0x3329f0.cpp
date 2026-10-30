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

// Function: sub_003329F0
// Address: 0x3329f0 - 0x332a38
void sub_003329F0_0x3329f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003329F0_0x3329f0");
#endif

    switch (ctx->pc) {
        case 0x332a14u: goto label_332a14;
        case 0x332a24u: goto label_332a24;
        default: break;
    }

    ctx->pc = 0x3329f0u;

    // 0x3329f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3329f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3329f4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3329f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3329f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3329f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3329fc: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x3329fcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    // 0x332a00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x332a00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332a04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x332a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x332a08: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x332a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332a0c: 0xc0cca76  jal         func_3329D8
    ctx->pc = 0x332A0Cu;
    SET_GPR_U32(ctx, 31, 0x332A14u);
    ctx->pc = 0x332A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332A0Cu;
    // 0x332a10: 0x26106650  addiu       $s0, $s0, 0x6650 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 26192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3329D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3329D8u, 0x332A0Cu, 0x332A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332A14u;
label_332a14:
    // 0x332a14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x332a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332a18: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x332a18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332a1c: 0xc0cb28a  jal         func_32CA28
    ctx->pc = 0x332A1Cu;
    SET_GPR_U32(ctx, 31, 0x332A24u);
    ctx->pc = 0x332A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332A1Cu;
    // 0x332a20: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CA28u, 0x332A1Cu, 0x332A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332A24u;
label_332a24:
    // 0x332a24: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x332a24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x332a28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x332a28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x332a2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x332a2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x332a30: 0x3e00008  jr          $ra
    ctx->pc = 0x332A30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x332A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332A30u;
        // 0x332a34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x332A30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x332A38u;
}
