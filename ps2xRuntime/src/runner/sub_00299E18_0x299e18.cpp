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

// Function: sub_00299E18
// Address: 0x299e18 - 0x299e50
void sub_00299E18_0x299e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299E18_0x299e18");
#endif

    switch (ctx->pc) {
        case 0x299e44u: goto label_299e44;
        default: break;
    }

    ctx->pc = 0x299e18u;

    // 0x299e18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x299e18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x299e1c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x299e1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299e20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x299e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x299e24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x299e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x299e28: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x299e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x299e2c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x299e2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x299e30: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x299e30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x299e34: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x299e34u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x299e38: 0xa4450002  sh          $a1, 0x2($v0)
    ctx->pc = 0x299e38u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x299e3c: 0xc0a679a  jal         func_299E68
    ctx->pc = 0x299E3Cu;
    SET_GPR_U32(ctx, 31, 0x299E44u);
    ctx->pc = 0x299E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299E3Cu;
    // 0x299e40: 0xac400010  sw          $zero, 0x10($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299E68u, 0x299E3Cu, 0x299E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299E44u;
label_299e44:
    // 0x299e44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x299e44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x299e48: 0x3e00008  jr          $ra
    ctx->pc = 0x299E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299E48u;
        // 0x299e4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299E48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299E50u;
}
