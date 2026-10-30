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

// Function: sub_00239280
// Address: 0x239280 - 0x2392c0
void sub_00239280_0x239280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239280_0x239280");
#endif

    switch (ctx->pc) {
        case 0x23929cu: goto label_23929c;
        case 0x2392a4u: goto label_2392a4;
        default: break;
    }

    ctx->pc = 0x239280u;

    // 0x239280: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x239280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x239284: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x239284u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x239288: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x239288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x23928c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x23928cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239290: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x239290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x239294: 0xc0e4060  jal         func_390180
    ctx->pc = 0x239294u;
    SET_GPR_U32(ctx, 31, 0x23929Cu);
    ctx->pc = 0x239298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239294u;
    // 0x239298: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x239294u, 0x23929Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23929Cu;
label_23929c:
    // 0x23929c: 0xc08a61a  jal         func_229868
    ctx->pc = 0x23929Cu;
    SET_GPR_U32(ctx, 31, 0x2392A4u);
    ctx->pc = 0x2392A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23929Cu;
    // 0x2392a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x23929Cu, 0x2392A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2392A4u;
label_2392a4:
    // 0x2392a4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2392A4u;
    {
        const bool branch_taken_0x2392a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2392a4) {
            ctx->pc = 0x2392A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2392A4u;
            // 0x2392a8: 0xa050019b  sb          $s0, 0x19B($v0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 2), 411), (uint8_t)GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2392ACu;
            goto label_2392ac;
        }
    }
    ctx->pc = 0x2392ACu;
label_2392ac:
    // 0x2392ac: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2392acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2392b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2392b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2392b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2392B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2392B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2392B4u;
        // 0x2392b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2392B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2392BCu;
    // 0x2392bc: 0x0  nop
    ctx->pc = 0x2392bcu;
    // NOP
    ctx->pc = 0x2392c0u;
}
