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

// Function: sub_00227C88
// Address: 0x227c88 - 0x227cd8
void sub_00227C88_0x227c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227C88_0x227c88");
#endif

    switch (ctx->pc) {
        case 0x227ca8u: goto label_227ca8;
        case 0x227cb8u: goto label_227cb8;
        default: break;
    }

    ctx->pc = 0x227c88u;

    // 0x227c88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x227c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x227c8c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x227c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x227c90: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x227c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x227c94: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x227c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x227c98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x227c98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227c9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x227c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x227ca0: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x227CA0u;
    SET_GPR_U32(ctx, 31, 0x227CA8u);
    ctx->pc = 0x227CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227CA0u;
    // 0x227ca4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x227CA0u, 0x227CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227CA8u;
label_227ca8:
    // 0x227ca8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x227CA8u;
    {
        const bool branch_taken_0x227ca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x227CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227CA8u;
        // 0x227cac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227ca8) {
            ctx->pc = 0x227CBCu;
            goto label_227cbc;
        }
    }
    ctx->pc = 0x227CB0u;
    // 0x227cb0: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x227CB0u;
    SET_GPR_U32(ctx, 31, 0x227CB8u);
    ctx->pc = 0x227CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227CB0u;
    // 0x227cb4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x227CB0u, 0x227CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227CB8u;
label_227cb8:
    // 0x227cb8: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x227cb8u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_227cbc:
    // 0x227cbc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x227cbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227cc0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x227cc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x227cc4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x227cc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227cc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x227cc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227ccc: 0x3e00008  jr          $ra
    ctx->pc = 0x227CCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227CCCu;
        // 0x227cd0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227CCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227CD4u;
    // 0x227cd4: 0x0  nop
    ctx->pc = 0x227cd4u;
    // NOP
    ctx->pc = 0x227cd8u;
}
