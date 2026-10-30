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

// Function: sub_001B72D0
// Address: 0x1b72d0 - 0x1b7330
void sub_001B72D0_0x1b72d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B72D0_0x1b72d0");
#endif

    switch (ctx->pc) {
        case 0x1b7304u: goto label_1b7304;
        case 0x1b7314u: goto label_1b7314;
        default: break;
    }

    ctx->pc = 0x1b72d0u;

    // 0x1b72d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b72d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b72d4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b72d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1b72d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b72d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b72dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b72dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b72e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b72e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b72e4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1b72e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b72e8: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x1b72e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b72ec: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B72ECu;
    {
        const bool branch_taken_0x1b72ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B72F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B72ECu;
        // 0x1b72f0: 0x7e020120  sq          $v0, 0x120($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 288), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b72ec) {
            ctx->pc = 0x1B7304u;
            goto label_1b7304;
        }
    }
    ctx->pc = 0x1B72F4u;
    // 0x1b72f4: 0x26040120  addiu       $a0, $s0, 0x120
    ctx->pc = 0x1b72f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x1b72f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b72f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b72fc: 0xc048b52  jal         func_122D48
    ctx->pc = 0x1B72FCu;
    SET_GPR_U32(ctx, 31, 0x1B7304u);
    ctx->pc = 0x1B7300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B72FCu;
    // 0x1b7300: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122D48u, 0x1B72FCu, 0x1B7304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7304u;
label_1b7304:
    // 0x1b7304: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b7304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7308: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x1b7308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x1b730c: 0xc068818  jal         func_1A2060
    ctx->pc = 0x1B730Cu;
    SET_GPR_U32(ctx, 31, 0x1B7314u);
    ctx->pc = 0x1B7310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B730Cu;
    // 0x1b7310: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2060u, 0x1B730Cu, 0x1B7314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7314u;
label_1b7314:
    // 0x1b7314: 0xae110130  sw          $s1, 0x130($s0)
    ctx->pc = 0x1b7314u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 17));
    // 0x1b7318: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b7318u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b731c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b731cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7320: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b7320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7324: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7324u;
        // 0x1b7328: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B732Cu;
    // 0x1b732c: 0x0  nop
    ctx->pc = 0x1b732cu;
    // NOP
    ctx->pc = 0x1b7330u;
}
