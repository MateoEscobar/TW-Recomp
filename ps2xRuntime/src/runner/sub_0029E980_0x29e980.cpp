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

// Function: sub_0029E980
// Address: 0x29e980 - 0x29e9c8
void sub_0029E980_0x29e980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029E980_0x29e980");
#endif

    switch (ctx->pc) {
        case 0x29e99cu: goto label_29e99c;
        default: break;
    }

    ctx->pc = 0x29e980u;

    // 0x29e980: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29e980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29e984: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x29e984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x29e988: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29e988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29e98c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x29e98cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e990: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29e990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29e994: 0xc0a792c  jal         func_29E4B0
    ctx->pc = 0x29E994u;
    SET_GPR_U32(ctx, 31, 0x29E99Cu);
    ctx->pc = 0x29E998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E994u;
    // 0x29e998: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E4B0u, 0x29E994u, 0x29E99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E99Cu;
label_29e99c:
    // 0x29e99c: 0x1080c0  sll         $s0, $s0, 3
    ctx->pc = 0x29e99cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x29e9a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29e9a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29e9a4: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x29e9a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x29e9a8: 0x92220007  lbu         $v0, 0x7($s1)
    ctx->pc = 0x29e9a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
    // 0x29e9ac: 0x96230004  lhu         $v1, 0x4($s1)
    ctx->pc = 0x29e9acu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x29e9b0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x29e9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x29e9b4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x29e9b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29e9b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29e9b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29e9bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29e9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29e9c0: 0x3e00008  jr          $ra
    ctx->pc = 0x29E9C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29E9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E9C0u;
        // 0x29e9c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E9C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29E9C8u;
}
