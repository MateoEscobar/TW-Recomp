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

// Function: sub_00292C10
// Address: 0x292c10 - 0x292c68
void sub_00292C10_0x292c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00292C10_0x292c10");
#endif

    switch (ctx->pc) {
        case 0x292c34u: goto label_292c34;
        case 0x292c3cu: goto label_292c3c;
        case 0x292c4cu: goto label_292c4c;
        default: break;
    }

    ctx->pc = 0x292c10u;

    // 0x292c10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x292c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x292c14: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x292c14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x292c18: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x292c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x292c1c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x292c1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292c20: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x292c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x292c24: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x292c24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292c28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x292c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x292c2c: 0xc0e4060  jal         func_390180
    ctx->pc = 0x292C2Cu;
    SET_GPR_U32(ctx, 31, 0x292C34u);
    ctx->pc = 0x292C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292C2Cu;
    // 0x292c30: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x292C2Cu, 0x292C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292C34u;
label_292c34:
    // 0x292c34: 0xc08a61a  jal         func_229868
    ctx->pc = 0x292C34u;
    SET_GPR_U32(ctx, 31, 0x292C3Cu);
    ctx->pc = 0x292C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292C34u;
    // 0x292c38: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x292C34u, 0x292C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292C3Cu;
label_292c3c:
    // 0x292c3c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x292C3Cu;
    {
        const bool branch_taken_0x292c3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x292C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292C3Cu;
        // 0x292c40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292c3c) {
            ctx->pc = 0x292C54u;
            goto label_292c54;
        }
    }
    ctx->pc = 0x292C44u;
    // 0x292c44: 0xc087502  jal         func_21D408
    ctx->pc = 0x292C44u;
    SET_GPR_U32(ctx, 31, 0x292C4Cu);
    ctx->pc = 0x292C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292C44u;
    // 0x292c48: 0x11800a  movz        $s0, $zero, $s1 (Delay Slot)
    if (GPR_U64(ctx, 17) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x292C44u, 0x292C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292C4Cu;
label_292c4c:
    // 0x292c4c: 0xa05002d2  sb          $s0, 0x2D2($v0)
    ctx->pc = 0x292c4cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 722), (uint8_t)GPR_U32(ctx, 16));
    // 0x292c50: 0xa05102d1  sb          $s1, 0x2D1($v0)
    ctx->pc = 0x292c50u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 721), (uint8_t)GPR_U32(ctx, 17));
label_292c54:
    // 0x292c54: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x292c54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x292c58: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x292c58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x292c5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x292c5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x292c60: 0x3e00008  jr          $ra
    ctx->pc = 0x292C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x292C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292C60u;
        // 0x292c64: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292C60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x292C68u;
}
