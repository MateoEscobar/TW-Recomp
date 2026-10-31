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

// Function: sub_0029FB60
// Address: 0x29fb60 - 0x29fba8
void sub_0029FB60_0x29fb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029FB60_0x29fb60");
#endif

    ctx->pc = 0x29fb60u;

    // 0x29fb60: 0x240d03e8  addiu       $t5, $zero, 0x3E8
    ctx->pc = 0x29fb60u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x29fb64: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x29fb64u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
    // 0x29fb68: 0x3c0a006f  lui         $t2, 0x6F
    ctx->pc = 0x29fb68u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)111 << 16));
    // 0x29fb6c: 0x3c0b006f  lui         $t3, 0x6F
    ctx->pc = 0x29fb6cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)111 << 16));
    // 0x29fb70: 0x3c0c006f  lui         $t4, 0x6F
    ctx->pc = 0x29fb70u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)111 << 16));
    // 0x29fb74: 0x3c0e006f  lui         $t6, 0x6F
    ctx->pc = 0x29fb74u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)111 << 16));
    // 0x29fb78: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x29fb78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x29fb7c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x29fb7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x29fb80: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x29fb80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x29fb84: 0xa5259424  sh          $a1, -0x6BDC($t1)
    ctx->pc = 0x29fb84u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6E9424u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x6E9424u, _value); } while (0);
    // 0x29fb88: 0xa5469426  sh          $a2, -0x6BDA($t2)
    ctx->pc = 0x29fb88u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x6E9426u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x6E9426u, _value); } while (0);
    // 0x29fb8c: 0xa5679428  sh          $a3, -0x6BD8($t3)
    ctx->pc = 0x29fb8cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x6E9428u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x6E9428u, _value); } while (0);
    // 0x29fb90: 0xa588942a  sh          $t0, -0x6BD6($t4)
    ctx->pc = 0x29fb90u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x6E942Au, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x6E942Au, _value); } while (0);
    // 0x29fb94: 0xa46d942e  sh          $t5, -0x6BD2($v1)
    ctx->pc = 0x29fb94u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x6E942Eu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x6E942Eu, _value); } while (0);
    // 0x29fb98: 0xa4829430  sh          $v0, -0x6BD0($a0)
    ctx->pc = 0x29fb98u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6E9430u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x6E9430u, _value); } while (0);
    // 0x29fb9c: 0x3e00008  jr          $ra
    ctx->pc = 0x29FB9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29FBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FB9Cu;
        // 0x29fba0: 0xa5cd942c  sh          $t5, -0x6BD4($t6) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 14), 4294939692), (uint16_t)GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29FB9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29FBA4u;
    // 0x29fba4: 0x0  nop
    ctx->pc = 0x29fba4u;
    // NOP
    ctx->pc = 0x29fba8u;
}
