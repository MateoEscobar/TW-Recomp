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

// Function: sub_00236BE0
// Address: 0x236be0 - 0x236c28
void sub_00236BE0_0x236be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236BE0_0x236be0");
#endif

    ctx->pc = 0x236be0u;

    // 0x236be0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x236be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x236be4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x236be4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x236be8: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x236be8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x236bec: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x236becu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x236bf0: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x236bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x236bf4: 0x3c07006b  lui         $a3, 0x6B
    ctx->pc = 0x236bf4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)107 << 16));
    // 0x236bf8: 0x3c08006b  lui         $t0, 0x6B
    ctx->pc = 0x236bf8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)107 << 16));
    // 0x236bfc: 0x3c09006b  lui         $t1, 0x6B
    ctx->pc = 0x236bfcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)107 << 16));
    // 0x236c00: 0xac40027c  sw          $zero, 0x27C($v0)
    ctx->pc = 0x236c00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x51027Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x51027Cu, _value); } while (0);
    // 0x236c04: 0xac600288  sw          $zero, 0x288($v1)
    ctx->pc = 0x236c04u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x510288u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x510288u, _value); } while (0);
    // 0x236c08: 0xac800284  sw          $zero, 0x284($a0)
    ctx->pc = 0x236c08u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x510284u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x510284u, _value); } while (0);
    // 0x236c0c: 0xaca00280  sw          $zero, 0x280($a1)
    ctx->pc = 0x236c0cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x510280u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x510280u, _value); } while (0);
    // 0x236c10: 0xacc0028c  sw          $zero, 0x28C($a2)
    ctx->pc = 0x236c10u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x51028Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x51028Cu, _value); } while (0);
    // 0x236c14: 0xa0e06810  sb          $zero, 0x6810($a3)
    ctx->pc = 0x236c14u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6B6810u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6B6810u, _value); } while (0);
    // 0x236c18: 0xa1006830  sb          $zero, 0x6830($t0)
    ctx->pc = 0x236c18u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6B6830u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6B6830u, _value); } while (0);
    // 0x236c1c: 0x3e00008  jr          $ra
    ctx->pc = 0x236C1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236C1Cu;
        // 0x236c20: 0xa1206850  sb          $zero, 0x6850($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 26704), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236C1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236C24u;
    // 0x236c24: 0x0  nop
    ctx->pc = 0x236c24u;
    // NOP
    ctx->pc = 0x236c28u;
}
