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

// Function: sub_003A15C0
// Address: 0x3a15c0 - 0x3a1630
void sub_003A15C0_0x3a15c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A15C0_0x3a15c0");
#endif

    ctx->pc = 0x3a15c0u;

    // 0x3a15c0: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x3a15c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x3a15c4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3a15c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x3a15c8: 0x24a516c0  addiu       $a1, $a1, 0x16C0
    ctx->pc = 0x3a15c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
    // 0x3a15cc: 0x24631780  addiu       $v1, $v1, 0x1780
    ctx->pc = 0x3a15ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6016));
    // 0x3a15d0: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x3a15d0u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x5116C0u));
    // 0x3a15d4: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x3a15d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3a15d8: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x3a15d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a15dc: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x3a15dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3a15e0: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x3a15e0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x3a15e4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x3a15e4u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x511780u));
    // 0x3a15e8: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x3a15e8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x3a15ec: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x3a15ecu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x5116C0u));
    // 0x3a15f0: 0x7c830030  sq          $v1, 0x30($a0)
    ctx->pc = 0x3a15f0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 3));
    // 0x3a15f4: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x3a15f4u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x5116C0u));
    // 0x3a15f8: 0xa486006e  sh          $a2, 0x6E($a0)
    ctx->pc = 0x3a15f8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 110), (uint16_t)GPR_U32(ctx, 6));
    // 0x3a15fc: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x3a15fcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
    // 0x3a1600: 0xa4880060  sh          $t0, 0x60($a0)
    ctx->pc = 0x3a1600u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 96), (uint16_t)GPR_U32(ctx, 8));
    // 0x3a1604: 0xa4870062  sh          $a3, 0x62($a0)
    ctx->pc = 0x3a1604u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 98), (uint16_t)GPR_U32(ctx, 7));
    // 0x3a1608: 0xa080006c  sb          $zero, 0x6C($a0)
    ctx->pc = 0x3a1608u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 108), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a160c: 0xac800050  sw          $zero, 0x50($a0)
    ctx->pc = 0x3a160cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
    // 0x3a1610: 0xac800054  sw          $zero, 0x54($a0)
    ctx->pc = 0x3a1610u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
    // 0x3a1614: 0xac800058  sw          $zero, 0x58($a0)
    ctx->pc = 0x3a1614u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 0));
    // 0x3a1618: 0xa080006d  sb          $zero, 0x6D($a0)
    ctx->pc = 0x3a1618u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 109), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a161c: 0xac80005c  sw          $zero, 0x5C($a0)
    ctx->pc = 0x3a161cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 0));
    // 0x3a1620: 0xac800064  sw          $zero, 0x64($a0)
    ctx->pc = 0x3a1620u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 0));
    // 0x3a1624: 0x3e00008  jr          $ra
    ctx->pc = 0x3A1624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A1628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1624u;
        // 0x3a1628: 0xac800068  sw          $zero, 0x68($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A162Cu;
    // 0x3a162c: 0x0  nop
    ctx->pc = 0x3a162cu;
    // NOP
    ctx->pc = 0x3a1630u;
}
