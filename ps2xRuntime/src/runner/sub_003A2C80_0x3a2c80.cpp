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

// Function: sub_003A2C80
// Address: 0x3a2c80 - 0x3a2cd8
void sub_003A2C80_0x3a2c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A2C80_0x3a2c80");
#endif

    switch (ctx->pc) {
        case 0x3a2c9cu: goto label_3a2c9c;
        default: break;
    }

    ctx->pc = 0x3a2c80u;

    // 0x3a2c80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a2c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a2c84: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3a2c84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3a2c88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a2c88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2c8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a2c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a2c90: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3a2c90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2c94: 0xc0e855c  jal         func_3A1570
    ctx->pc = 0x3A2C94u;
    SET_GPR_U32(ctx, 31, 0x3A2C9Cu);
    ctx->pc = 0x3A2C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2C94u;
    // 0x3a2c98: 0xae05082c  sw          $a1, 0x82C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1570u, 0x3A2C94u, 0x3A2C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2C9Cu;
label_3a2c9c:
    // 0x3a2c9c: 0x8e04082c  lw          $a0, 0x82C($s0)
    ctx->pc = 0x3a2c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2092)));
    // 0x3a2ca0: 0x24020408  addiu       $v0, $zero, 0x408
    ctx->pc = 0x3a2ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1032));
    // 0x3a2ca4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a2ca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a2ca8: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x3a2ca8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3a2cac: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3a2cacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3a2cb0: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x3a2cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x3a2cb4: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x3a2cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x3a2cb8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3a2cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3a2cbc: 0xae020830  sw          $v0, 0x830($s0)
    ctx->pc = 0x3a2cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2096), GPR_U32(ctx, 2));
    // 0x3a2cc0: 0x8c830838  lw          $v1, 0x838($a0)
    ctx->pc = 0x3a2cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2104)));
    // 0x3a2cc4: 0xae030834  sw          $v1, 0x834($s0)
    ctx->pc = 0x3a2cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2100), GPR_U32(ctx, 3));
    // 0x3a2cc8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3a2cc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a2ccc: 0x3e00008  jr          $ra
    ctx->pc = 0x3A2CCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A2CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2CCCu;
        // 0x3a2cd0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A2CCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A2CD4u;
    // 0x3a2cd4: 0x0  nop
    ctx->pc = 0x3a2cd4u;
    // NOP
    ctx->pc = 0x3a2cd8u;
}
