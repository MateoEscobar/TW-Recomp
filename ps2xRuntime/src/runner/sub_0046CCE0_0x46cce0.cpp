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

// Function: sub_0046CCE0
// Address: 0x46cce0 - 0x46cd48
void sub_0046CCE0_0x46cce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046CCE0_0x46cce0");
#endif

    switch (ctx->pc) {
        case 0x46cd18u: goto label_46cd18;
        default: break;
    }

    ctx->pc = 0x46cce0u;

    // 0x46cce0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x46cce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x46cce4: 0x8f8388d8  lw          $v1, -0x7728($gp)
    ctx->pc = 0x46cce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936792)));
    // 0x46cce8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x46cce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x46ccec: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x46ccecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x46ccf0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x46ccf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x46ccf4: 0x2451ad18  addiu       $s1, $v0, -0x52E8
    ctx->pc = 0x46ccf4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
    // 0x46ccf8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46ccf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46ccfc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x46ccfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46cd00: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x46cd00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x46cd04: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x46cd04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x46cd08: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x46CD08u;
    {
        const bool branch_taken_0x46cd08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x46cd08) {
            ctx->pc = 0x46CD24u;
            goto label_46cd24;
        }
    }
    ctx->pc = 0x46CD10u;
    // 0x46cd10: 0xc11f74a  jal         func_47DD28
    ctx->pc = 0x46CD10u;
    SET_GPR_U32(ctx, 31, 0x46CD18u);
    ctx->pc = 0x47DD28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47DD28u, 0x46CD10u, 0x46CD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46CD18u;
label_46cd18:
    // 0x46cd18: 0x8f8388d8  lw          $v1, -0x7728($gp)
    ctx->pc = 0x46cd18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936792)));
    // 0x46cd1c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x46cd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x46cd20: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x46cd20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_46cd24:
    // 0x46cd24: 0x8f8388dc  lw          $v1, -0x7724($gp)
    ctx->pc = 0x46cd24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936796)));
    // 0x46cd28: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x46cd28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46cd2c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x46cd2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46cd30: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x46cd30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x46cd34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x46cd34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46cd38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46cd38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46cd3c: 0xaf8388dc  sw          $v1, -0x7724($gp)
    ctx->pc = 0x46cd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936796), GPR_U32(ctx, 3));
    // 0x46cd40: 0x3e00008  jr          $ra
    ctx->pc = 0x46CD40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46CD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CD40u;
        // 0x46cd44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46CD40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46CD48u;
}
