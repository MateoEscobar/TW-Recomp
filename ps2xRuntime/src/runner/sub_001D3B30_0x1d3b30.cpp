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

// Function: sub_001D3B30
// Address: 0x1d3b30 - 0x1d3b90
void sub_001D3B30_0x1d3b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D3B30_0x1d3b30");
#endif

    ctx->pc = 0x1d3b30u;

    // 0x1d3b30: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d3b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d3b34: 0x14a20014  bne         $a1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1D3B34u;
    {
        const bool branch_taken_0x1d3b34 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d3b34) {
            ctx->pc = 0x1D3B88u;
            goto label_1d3b88;
        }
    }
    ctx->pc = 0x1D3B3Cu;
    // 0x1d3b3c: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D3B3Cu;
    {
        const bool branch_taken_0x1d3b3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3B3Cu;
        // 0x1d3b40: 0x3c060063  lui         $a2, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3b3c) {
            ctx->pc = 0x1D3B88u;
            goto label_1d3b88;
        }
    }
    ctx->pc = 0x1D3B44u;
    // 0x1d3b44: 0x3c070063  lui         $a3, 0x63
    ctx->pc = 0x1d3b44u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)99 << 16));
    // 0x1d3b48: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1d3b48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d3b4c: 0x2404006a  addiu       $a0, $zero, 0x6A
    ctx->pc = 0x1d3b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
    // 0x1d3b50: 0xa0c5a180  sb          $a1, -0x5E80($a2)
    ctx->pc = 0x1d3b50u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4294943104), (uint8_t)GPR_U32(ctx, 5));
    // 0x1d3b54: 0x24e2a188  addiu       $v0, $a3, -0x5E78
    ctx->pc = 0x1d3b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294943112));
    // 0x1d3b58: 0xa0e4a188  sb          $a0, -0x5E78($a3)
    ctx->pc = 0x1d3b58u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x62A188u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x62A188u, _value); } while (0);
    // 0x1d3b5c: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x1d3b5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1d3b60: 0x24c3a180  addiu       $v1, $a2, -0x5E80
    ctx->pc = 0x1d3b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943104));
    // 0x1d3b64: 0xa0480003  sb          $t0, 0x3($v0)
    ctx->pc = 0x1d3b64u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x62A18Bu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x62A18Bu, _value); } while (0);
    // 0x1d3b68: 0x24090064  addiu       $t1, $zero, 0x64
    ctx->pc = 0x1d3b68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1d3b6c: 0xa0680003  sb          $t0, 0x3($v1)
    ctx->pc = 0x1d3b6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 8));
    // 0x1d3b70: 0xa0690001  sb          $t1, 0x1($v1)
    ctx->pc = 0x1d3b70u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 9));
    // 0x1d3b74: 0x240a0041  addiu       $t2, $zero, 0x41
    ctx->pc = 0x1d3b74u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1d3b78: 0x240b0082  addiu       $t3, $zero, 0x82
    ctx->pc = 0x1d3b78u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x1d3b7c: 0xa04a0001  sb          $t2, 0x1($v0)
    ctx->pc = 0x1d3b7cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x62A189u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x62A189u, _value); } while (0);
    // 0x1d3b80: 0xa04b0002  sb          $t3, 0x2($v0)
    ctx->pc = 0x1d3b80u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x62A18Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x62A18Au, _value); } while (0);
    // 0x1d3b84: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1d3b84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_1d3b88:
    // 0x1d3b88: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3B88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3B88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3B90u;
}
