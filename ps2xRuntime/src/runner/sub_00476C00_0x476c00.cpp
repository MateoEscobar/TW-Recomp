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

// Function: sub_00476C00
// Address: 0x476c00 - 0x476cc8
void sub_00476C00_0x476c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00476C00_0x476c00");
#endif

    ctx->pc = 0x476c00u;

    // 0x476c00: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x476c00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x476c04: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x476c04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x476c08: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x476c08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
    // 0x476c0c: 0x240603d0  addiu       $a2, $zero, 0x3D0
    ctx->pc = 0x476c0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 976));
    // 0x476c10: 0x24a30037  addiu       $v1, $a1, 0x37
    ctx->pc = 0x476c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 55));
    // 0x476c14: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x476c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x476c18: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x476c18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x476c1c: 0xaca6001c  sw          $a2, 0x1C($a1)
    ctx->pc = 0x476c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 6));
    // 0x476c20: 0xaca30024  sw          $v1, 0x24($a1)
    ctx->pc = 0x476c20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 3));
    // 0x476c24: 0x3c0a6c01  lui         $t2, 0x6C01
    ctx->pc = 0x476c24u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)27649 << 16));
    // 0x476c28: 0xaca40020  sw          $a0, 0x20($a1)
    ctx->pc = 0x476c28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 4));
    // 0x476c2c: 0x3c0b0100  lui         $t3, 0x100
    ctx->pc = 0x476c2cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)256 << 16));
    // 0x476c30: 0x356b0404  ori         $t3, $t3, 0x404
    ctx->pc = 0x476c30u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)1028);
    // 0x476c34: 0xaca00018  sw          $zero, 0x18($a1)
    ctx->pc = 0x476c34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
    // 0x476c38: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x476c38u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x476c3c: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x476c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x476c40: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x476c40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x476c44: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x476c44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x476c48: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x476c48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x476c4c: 0x8ca40024  lw          $a0, 0x24($a1)
    ctx->pc = 0x476c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x476c50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x476c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x476c54: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x476c54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x476c58: 0x8ca30024  lw          $v1, 0x24($a1)
    ctx->pc = 0x476c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x476c5c: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x476c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
    // 0x476c60: 0x8ca40024  lw          $a0, 0x24($a1)
    ctx->pc = 0x476c60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x476c64: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x476c64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x476c68: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x476c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x476c6c: 0x8ca40024  lw          $a0, 0x24($a1)
    ctx->pc = 0x476c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x476c70: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x476c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x476c74: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x476c74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x476c78: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x476c78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x476c7c: 0x6b1825  or          $v1, $v1, $t3
    ctx->pc = 0x476c7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 11));
    // 0x476c80: 0x70691b89  pcpyld      $v1, $v1, $t1
    ctx->pc = 0x476c80u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 9)));
    // 0x476c84: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x476c84u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x476c88: 0xa0a80005  sb          $t0, 0x5($a1)
    ctx->pc = 0x476c88u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 8));
    // 0x476c8c: 0xa0a60009  sb          $a2, 0x9($a1)
    ctx->pc = 0x476c8cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 9), (uint8_t)GPR_U32(ctx, 6));
    // 0x476c90: 0xa0a7000c  sb          $a3, 0xC($a1)
    ctx->pc = 0x476c90u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 12), (uint8_t)GPR_U32(ctx, 7));
    // 0x476c94: 0xa0a0000d  sb          $zero, 0xD($a1)
    ctx->pc = 0x476c94u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 13), (uint8_t)GPR_U32(ctx, 0));
    // 0x476c98: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x476c98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
    // 0x476c9c: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x476c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
    // 0x476ca0: 0xa0a60001  sb          $a2, 0x1($a1)
    ctx->pc = 0x476ca0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x476ca4: 0xa0a70002  sb          $a3, 0x2($a1)
    ctx->pc = 0x476ca4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 7));
    // 0x476ca8: 0xa0a60003  sb          $a2, 0x3($a1)
    ctx->pc = 0x476ca8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 6));
    // 0x476cac: 0xa0a60004  sb          $a2, 0x4($a1)
    ctx->pc = 0x476cacu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4), (uint8_t)GPR_U32(ctx, 6));
    // 0x476cb0: 0xa0a60006  sb          $a2, 0x6($a1)
    ctx->pc = 0x476cb0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 6));
    // 0x476cb4: 0xa0a00008  sb          $zero, 0x8($a1)
    ctx->pc = 0x476cb4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x476cb8: 0xa0a0000a  sb          $zero, 0xA($a1)
    ctx->pc = 0x476cb8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x476cbc: 0x3e00008  jr          $ra
    ctx->pc = 0x476CBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x476CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476CBCu;
        // 0x476cc0: 0xa0a7000b  sb          $a3, 0xB($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 11), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x476CBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x476CC4u;
    // 0x476cc4: 0x0  nop
    ctx->pc = 0x476cc4u;
    // NOP
    ctx->pc = 0x476cc8u;
}
