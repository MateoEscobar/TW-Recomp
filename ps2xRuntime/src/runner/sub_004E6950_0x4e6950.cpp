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

// Function: sub_004E6950
// Address: 0x4e6950 - 0x4e69b0
void sub_004E6950_0x4e6950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6950_0x4e6950");
#endif

    switch (ctx->pc) {
        case 0x4e6980u: goto label_4e6980;
        case 0x4e698cu: goto label_4e698c;
        case 0x4e6998u: goto label_4e6998;
        default: break;
    }

    ctx->pc = 0x4e6950u;

    // 0x4e6950: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4e6950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4e6954: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4e6954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x4e6958: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4e6958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4e695c: 0x2442a930  addiu       $v0, $v0, -0x56D0
    ctx->pc = 0x4e695cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945072));
    // 0x4e6960: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4e6960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4e6964: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e6964u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e6968: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e6968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4e696c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4e696cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e6970: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4e6970u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4e6974: 0x26040230  addiu       $a0, $s0, 0x230
    ctx->pc = 0x4e6974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 560));
    // 0x4e6978: 0xc0733f0  jal         func_1CCFC0
    ctx->pc = 0x4E6978u;
    SET_GPR_U32(ctx, 31, 0x4E6980u);
    ctx->pc = 0x4E697Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E6978u;
    // 0x4e697c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCFC0u, 0x4E6978u, 0x4E6980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E6980u;
label_4e6980:
    // 0x4e6980: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x4e6980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x4e6984: 0xc06e410  jal         func_1B9040
    ctx->pc = 0x4E6984u;
    SET_GPR_U32(ctx, 31, 0x4E698Cu);
    ctx->pc = 0x4E6988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E6984u;
    // 0x4e6988: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9040u, 0x4E6984u, 0x4E698Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E698Cu;
label_4e698c:
    // 0x4e698c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e698cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e6990: 0xc06a39e  jal         func_1A8E78
    ctx->pc = 0x4E6990u;
    SET_GPR_U32(ctx, 31, 0x4E6998u);
    ctx->pc = 0x4E6994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E6990u;
    // 0x4e6994: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x4E6990u, 0x4E6998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E6998u;
label_4e6998:
    // 0x4e6998: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4e6998u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e699c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4e699cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e69a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e69a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e69a4: 0x3e00008  jr          $ra
    ctx->pc = 0x4E69A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E69A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E69A4u;
        // 0x4e69a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E69A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E69ACu;
    // 0x4e69ac: 0x0  nop
    ctx->pc = 0x4e69acu;
    // NOP
    ctx->pc = 0x4e69b0u;
}
