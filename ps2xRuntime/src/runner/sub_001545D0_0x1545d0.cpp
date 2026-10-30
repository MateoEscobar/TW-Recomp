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

// Function: sub_001545D0
// Address: 0x1545d0 - 0x154630
void sub_001545D0_0x1545d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001545D0_0x1545d0");
#endif

    switch (ctx->pc) {
        case 0x1545f4u: goto label_1545f4;
        default: break;
    }

    ctx->pc = 0x1545d0u;

    // 0x1545d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1545d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1545d4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1545d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1545d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1545d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1545dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1545dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1545e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1545e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1545e4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1545e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1545e8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1545e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1545ec: 0xc10c190  jal         func_430640
    ctx->pc = 0x1545ECu;
    SET_GPR_U32(ctx, 31, 0x1545F4u);
    ctx->pc = 0x1545F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1545ECu;
    // 0x1545f0: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x1545ECu, 0x1545F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1545F4u;
label_1545f4:
    // 0x1545f4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1545f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1545f8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1545f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1545fc: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x1545fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x154600: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x154600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x154604: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x154604u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x154608: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x154608u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x15460c: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x15460cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x154610: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x154610u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x154614: 0xae040014  sw          $a0, 0x14($s0)
    ctx->pc = 0x154614u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 4));
    // 0x154618: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x154618u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15461c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15461cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x154620: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x154620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x154624: 0x3e00008  jr          $ra
    ctx->pc = 0x154624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x154628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154624u;
        // 0x154628: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15462Cu;
    // 0x15462c: 0x0  nop
    ctx->pc = 0x15462cu;
    // NOP
    ctx->pc = 0x154630u;
}
