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

// Function: sub_00482D08
// Address: 0x482d08 - 0x482d70
void sub_00482D08_0x482d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00482D08_0x482d08");
#endif

    switch (ctx->pc) {
        case 0x482d40u: goto label_482d40;
        default: break;
    }

    ctx->pc = 0x482d08u;

    // 0x482d08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x482d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x482d0c: 0x8f838958  lw          $v1, -0x76A8($gp)
    ctx->pc = 0x482d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936920)));
    // 0x482d10: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x482d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x482d14: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x482d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x482d18: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x482d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x482d1c: 0x2451ad18  addiu       $s1, $v0, -0x52E8
    ctx->pc = 0x482d1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
    // 0x482d20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x482d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x482d24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x482d24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x482d28: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x482d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x482d2c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x482d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x482d30: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x482D30u;
    {
        const bool branch_taken_0x482d30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x482d30) {
            ctx->pc = 0x482D4Cu;
            goto label_482d4c;
        }
    }
    ctx->pc = 0x482D38u;
    // 0x482d38: 0xc11f74a  jal         func_47DD28
    ctx->pc = 0x482D38u;
    SET_GPR_U32(ctx, 31, 0x482D40u);
    ctx->pc = 0x47DD28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47DD28u, 0x482D38u, 0x482D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x482D40u;
label_482d40:
    // 0x482d40: 0x8f838958  lw          $v1, -0x76A8($gp)
    ctx->pc = 0x482d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936920)));
    // 0x482d44: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x482d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x482d48: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x482d48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_482d4c:
    // 0x482d4c: 0x8f83895c  lw          $v1, -0x76A4($gp)
    ctx->pc = 0x482d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936924)));
    // 0x482d50: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x482d50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x482d54: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x482d54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x482d58: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x482d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x482d5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x482d5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x482d60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x482d60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x482d64: 0xaf83895c  sw          $v1, -0x76A4($gp)
    ctx->pc = 0x482d64u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936924), GPR_U32(ctx, 3));
    // 0x482d68: 0x3e00008  jr          $ra
    ctx->pc = 0x482D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x482D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x482D68u;
        // 0x482d6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x482D68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x482D70u;
}
