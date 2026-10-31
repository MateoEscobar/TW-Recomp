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

// Function: sub_001E6E20
// Address: 0x1e6e20 - 0x1e6e78
void sub_001E6E20_0x1e6e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E6E20_0x1e6e20");
#endif

    ctx->pc = 0x1e6e20u;

    // 0x1e6e20: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1e6e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1e6e24: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1E6E24u;
    {
        const bool branch_taken_0x1e6e24 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e6e24) {
            ctx->pc = 0x1E6E6Cu;
            goto label_1e6e6c;
        }
    }
    ctx->pc = 0x1E6E2Cu;
    // 0x1e6e2c: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x1E6E2Cu;
    {
        const bool branch_taken_0x1e6e2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6E2Cu;
        // 0x1e6e30: 0x3c070064  lui         $a3, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6e2c) {
            ctx->pc = 0x1E6E6Cu;
            goto label_1e6e6c;
        }
    }
    ctx->pc = 0x1E6E34u;
    // 0x1e6e34: 0x24050096  addiu       $a1, $zero, 0x96
    ctx->pc = 0x1e6e34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x1e6e38: 0x24e4ee38  addiu       $a0, $a3, -0x11C8
    ctx->pc = 0x1e6e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962744));
    // 0x1e6e3c: 0xa0e5ee38  sb          $a1, -0x11C8($a3)
    ctx->pc = 0x1e6e3cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4294962744), (uint8_t)GPR_U32(ctx, 5));
    // 0x1e6e40: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x1e6e40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1e6e44: 0x3c080064  lui         $t0, 0x64
    ctx->pc = 0x1e6e44u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)100 << 16));
    // 0x1e6e48: 0xa0860003  sb          $a2, 0x3($a0)
    ctx->pc = 0x1e6e48u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 6));
    // 0x1e6e4c: 0x2503ee30  addiu       $v1, $t0, -0x11D0
    ctx->pc = 0x1e6e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294962736));
    // 0x1e6e50: 0xa105ee30  sb          $a1, -0x11D0($t0)
    ctx->pc = 0x1e6e50u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x63EE30u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x63EE30u, _value); } while (0);
    // 0x1e6e54: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1e6e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1e6e58: 0xa0660003  sb          $a2, 0x3($v1)
    ctx->pc = 0x1e6e58u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x63EE33u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x63EE33u, _value); } while (0);
    // 0x1e6e5c: 0xa0820002  sb          $v0, 0x2($a0)
    ctx->pc = 0x1e6e5cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1e6e60: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x1e6e60u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x63EE31u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x63EE31u, _value); } while (0);
    // 0x1e6e64: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x1e6e64u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x63EE32u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x63EE32u, _value); } while (0);
    // 0x1e6e68: 0xa0820001  sb          $v0, 0x1($a0)
    ctx->pc = 0x1e6e68u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
label_1e6e6c:
    // 0x1e6e6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6E6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6E6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E6E74u;
    // 0x1e6e74: 0x0  nop
    ctx->pc = 0x1e6e74u;
    // NOP
    ctx->pc = 0x1e6e78u;
}
