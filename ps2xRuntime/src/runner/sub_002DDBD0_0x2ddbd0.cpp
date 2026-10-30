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

// Function: sub_002DDBD0
// Address: 0x2ddbd0 - 0x2ddc18
void sub_002DDBD0_0x2ddbd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DDBD0_0x2ddbd0");
#endif

    ctx->pc = 0x2ddbd0u;

    // 0x2ddbd0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2ddbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2ddbd4: 0x3c070054  lui         $a3, 0x54
    ctx->pc = 0x2ddbd4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)84 << 16));
    // 0x2ddbd8: 0x24e71dd0  addiu       $a3, $a3, 0x1DD0
    ctx->pc = 0x2ddbd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 7632));
    // 0x2ddbdc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2ddbdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2ddbe0: 0x2408000a  addiu       $t0, $zero, 0xA
    ctx->pc = 0x2ddbe0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2ddbe4: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2ddbe4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2ddbe8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2ddbe8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddbec: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2ddbecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x2ddbf0: 0xac87000c  sw          $a3, 0xC($a0)
    ctx->pc = 0x2ddbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
    // 0x2ddbf4: 0xac860010  sw          $a2, 0x10($a0)
    ctx->pc = 0x2ddbf4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
    // 0x2ddbf8: 0xe48c0014  swc1        $f12, 0x14($a0)
    ctx->pc = 0x2ddbf8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x2ddbfc: 0xa0880018  sb          $t0, 0x18($a0)
    ctx->pc = 0x2ddbfcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 24), (uint8_t)GPR_U32(ctx, 8));
    // 0x2ddc00: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x2ddc00u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ddc04: 0xa0800005  sb          $zero, 0x5($a0)
    ctx->pc = 0x2ddc04u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ddc08: 0xa0800019  sb          $zero, 0x19($a0)
    ctx->pc = 0x2ddc08u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 25), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ddc0c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DDC0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DDC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDC0Cu;
        // 0x2ddc10: 0xa080001a  sb          $zero, 0x1A($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 26), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DDC0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DDC14u;
    // 0x2ddc14: 0x0  nop
    ctx->pc = 0x2ddc14u;
    // NOP
    ctx->pc = 0x2ddc18u;
}
