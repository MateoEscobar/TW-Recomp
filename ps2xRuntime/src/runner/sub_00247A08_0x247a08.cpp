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

// Function: sub_00247A08
// Address: 0x247a08 - 0x247a50
void sub_00247A08_0x247a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247A08_0x247a08");
#endif

    switch (ctx->pc) {
        case 0x247a28u: goto label_247a28;
        default: break;
    }

    ctx->pc = 0x247a08u;

    // 0x247a08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x247a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x247a0c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x247a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x247a10: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x247a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x247a14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x247a14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247a18: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x247a18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247a1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x247a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x247a20: 0xc09387e  jal         func_24E1F8
    ctx->pc = 0x247A20u;
    SET_GPR_U32(ctx, 31, 0x247A28u);
    ctx->pc = 0x247A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247A20u;
    // 0x247a24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24E1F8u, 0x247A20u, 0x247A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247A28u;
label_247a28:
    // 0x247a28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x247a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x247a2c: 0x54430002  bnel        $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x247A2Cu;
    {
        const bool branch_taken_0x247a2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x247a2c) {
            ctx->pc = 0x247A30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x247A2Cu;
            // 0x247a30: 0x7a0202b0  lq          $v0, 0x2B0($s0) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 688)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x247A38u;
            goto label_247a38;
        }
    }
    ctx->pc = 0x247A34u;
    // 0x247a34: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x247a34u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_247a38:
    // 0x247a38: 0x7e0202c0  sq          $v0, 0x2C0($s0)
    ctx->pc = 0x247a38u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 704), GPR_VEC(ctx, 2));
    // 0x247a3c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x247a3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x247a40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x247a40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247a44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x247a44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x247a48: 0x3e00008  jr          $ra
    ctx->pc = 0x247A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x247A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247A48u;
        // 0x247a4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247A48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247A50u;
}
