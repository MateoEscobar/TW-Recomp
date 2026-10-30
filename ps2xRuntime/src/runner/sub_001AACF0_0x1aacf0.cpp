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

// Function: sub_001AACF0
// Address: 0x1aacf0 - 0x1aad70
void sub_001AACF0_0x1aacf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AACF0_0x1aacf0");
#endif

    ctx->pc = 0x1aacf0u;

    // 0x1aacf0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1aacf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1aacf4: 0x14a2001c  bne         $a1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1AACF4u;
    {
        const bool branch_taken_0x1aacf4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1aacf4) {
            ctx->pc = 0x1AAD68u;
            goto label_1aad68;
        }
    }
    ctx->pc = 0x1AACFCu;
    // 0x1aacfc: 0x1080001a  beqz        $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1AACFCu;
    {
        const bool branch_taken_0x1aacfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AACFCu;
        // 0x1aad00: 0x3c080060  lui         $t0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aacfc) {
            ctx->pc = 0x1AAD68u;
            goto label_1aad68;
        }
    }
    ctx->pc = 0x1AAD04u;
    // 0x1aad04: 0x3c090060  lui         $t1, 0x60
    ctx->pc = 0x1aad04u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)96 << 16));
    // 0x1aad08: 0x24070023  addiu       $a3, $zero, 0x23
    ctx->pc = 0x1aad08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1aad0c: 0x240600c9  addiu       $a2, $zero, 0xC9
    ctx->pc = 0x1aad0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
    // 0x1aad10: 0xa10707e0  sb          $a3, 0x7E0($t0)
    ctx->pc = 0x1aad10u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 2016), (uint8_t)GPR_U32(ctx, 7));
    // 0x1aad14: 0x252407e8  addiu       $a0, $t1, 0x7E8
    ctx->pc = 0x1aad14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 2024));
    // 0x1aad18: 0xa12607e8  sb          $a2, 0x7E8($t1)
    ctx->pc = 0x1aad18u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x6007E8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6007E8u, _value); } while (0);
    // 0x1aad1c: 0x240a00ff  addiu       $t2, $zero, 0xFF
    ctx->pc = 0x1aad1cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1aad20: 0xa08a0003  sb          $t2, 0x3($a0)
    ctx->pc = 0x1aad20u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x6007EBu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6007EBu, _value); } while (0);
    // 0x1aad24: 0x250307e0  addiu       $v1, $t0, 0x7E0
    ctx->pc = 0x1aad24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 2016));
    // 0x1aad28: 0x3c0b0060  lui         $t3, 0x60
    ctx->pc = 0x1aad28u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)96 << 16));
    // 0x1aad2c: 0x240c0053  addiu       $t4, $zero, 0x53
    ctx->pc = 0x1aad2cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x1aad30: 0x240d00bc  addiu       $t5, $zero, 0xBC
    ctx->pc = 0x1aad30u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 188));
    // 0x1aad34: 0x240200b4  addiu       $v0, $zero, 0xB4
    ctx->pc = 0x1aad34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x1aad38: 0xa16207f0  sb          $v0, 0x7F0($t3)
    ctx->pc = 0x1aad38u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6007F0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6007F0u, _value); } while (0);
    // 0x1aad3c: 0x240e006b  addiu       $t6, $zero, 0x6B
    ctx->pc = 0x1aad3cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
    // 0x1aad40: 0xa06c0001  sb          $t4, 0x1($v1)
    ctx->pc = 0x1aad40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 12));
    // 0x1aad44: 0x240f002e  addiu       $t7, $zero, 0x2E
    ctx->pc = 0x1aad44u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x1aad48: 0xa06d0002  sb          $t5, 0x2($v1)
    ctx->pc = 0x1aad48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 13));
    // 0x1aad4c: 0x256507f0  addiu       $a1, $t3, 0x7F0
    ctx->pc = 0x1aad4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), 2032));
    // 0x1aad50: 0xa06a0003  sb          $t2, 0x3($v1)
    ctx->pc = 0x1aad50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 10));
    // 0x1aad54: 0xa08e0001  sb          $t6, 0x1($a0)
    ctx->pc = 0x1aad54u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x6007E9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6007E9u, _value); } while (0);
    // 0x1aad58: 0xa08f0002  sb          $t7, 0x2($a0)
    ctx->pc = 0x1aad58u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 15)); ps2TraceGuestWrite(rdram, 0x6007EAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6007EAu, _value); } while (0);
    // 0x1aad5c: 0xa0a00003  sb          $zero, 0x3($a1)
    ctx->pc = 0x1aad5cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6007F3u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6007F3u, _value); } while (0);
    // 0x1aad60: 0xa0a00001  sb          $zero, 0x1($a1)
    ctx->pc = 0x1aad60u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6007F1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6007F1u, _value); } while (0);
    // 0x1aad64: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x1aad64u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6007F2u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6007F2u, _value); } while (0);
label_1aad68:
    // 0x1aad68: 0x3e00008  jr          $ra
    ctx->pc = 0x1AAD68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AAD68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AAD70u;
}
