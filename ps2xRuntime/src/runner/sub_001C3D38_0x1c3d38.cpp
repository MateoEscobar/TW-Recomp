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

// Function: sub_001C3D38
// Address: 0x1c3d38 - 0x1c3dc0
void sub_001C3D38_0x1c3d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C3D38_0x1c3d38");
#endif

    ctx->pc = 0x1c3d38u;

    // 0x1c3d38: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c3d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1c3d3c: 0x14a2001e  bne         $a1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1C3D3Cu;
    {
        const bool branch_taken_0x1c3d3c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c3d3c) {
            ctx->pc = 0x1C3DB8u;
            goto label_1c3db8;
        }
    }
    ctx->pc = 0x1C3D44u;
    // 0x1c3d44: 0x1080001c  beqz        $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1C3D44u;
    {
        const bool branch_taken_0x1c3d44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3D44u;
        // 0x1c3d48: 0x24030080  addiu       $v1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3d44) {
            ctx->pc = 0x1C3DB8u;
            goto label_1c3db8;
        }
    }
    ctx->pc = 0x1C3D4Cu;
    // 0x1c3d4c: 0x3c090062  lui         $t1, 0x62
    ctx->pc = 0x1c3d4cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)98 << 16));
    // 0x1c3d50: 0x3c0a0062  lui         $t2, 0x62
    ctx->pc = 0x1c3d50u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)98 << 16));
    // 0x1c3d54: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x1c3d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1c3d58: 0xa1232fc0  sb          $v1, 0x2FC0($t1)
    ctx->pc = 0x1c3d58u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x622FC0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x622FC0u, _value); } while (0);
    // 0x1c3d5c: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x1c3d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1c3d60: 0xa1422fc8  sb          $v0, 0x2FC8($t2)
    ctx->pc = 0x1c3d60u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x622FC8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x622FC8u, _value); } while (0);
    // 0x1c3d64: 0x25482fc8  addiu       $t0, $t2, 0x2FC8
    ctx->pc = 0x1c3d64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), 12232));
    // 0x1c3d68: 0xa1040003  sb          $a0, 0x3($t0)
    ctx->pc = 0x1c3d68u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x622FCBu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x622FCBu, _value); } while (0);
    // 0x1c3d6c: 0x3c0b0062  lui         $t3, 0x62
    ctx->pc = 0x1c3d6cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)98 << 16));
    // 0x1c3d70: 0xa1632fb0  sb          $v1, 0x2FB0($t3)
    ctx->pc = 0x1c3d70u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x622FB0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x622FB0u, _value); } while (0);
    // 0x1c3d74: 0x25652fb0  addiu       $a1, $t3, 0x2FB0
    ctx->pc = 0x1c3d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), 12208));
    // 0x1c3d78: 0xa0a40003  sb          $a0, 0x3($a1)
    ctx->pc = 0x1c3d78u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x622FB3u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x622FB3u, _value); } while (0);
    // 0x1c3d7c: 0x3c0c0062  lui         $t4, 0x62
    ctx->pc = 0x1c3d7cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)98 << 16));
    // 0x1c3d80: 0xa1832fb8  sb          $v1, 0x2FB8($t4)
    ctx->pc = 0x1c3d80u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x622FB8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x622FB8u, _value); } while (0);
    // 0x1c3d84: 0x25862fb8  addiu       $a2, $t4, 0x2FB8
    ctx->pc = 0x1c3d84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 12), 12216));
    // 0x1c3d88: 0xa0c40003  sb          $a0, 0x3($a2)
    ctx->pc = 0x1c3d88u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x622FBBu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x622FBBu, _value); } while (0);
    // 0x1c3d8c: 0x25272fc0  addiu       $a3, $t1, 0x2FC0
    ctx->pc = 0x1c3d8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 12224));
    // 0x1c3d90: 0xa0e40003  sb          $a0, 0x3($a3)
    ctx->pc = 0x1c3d90u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x622FC3u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x622FC3u, _value); } while (0);
    // 0x1c3d94: 0x240d0010  addiu       $t5, $zero, 0x10
    ctx->pc = 0x1c3d94u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1c3d98: 0xa10d0002  sb          $t5, 0x2($t0)
    ctx->pc = 0x1c3d98u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x622FCAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x622FCAu, _value); } while (0);
    // 0x1c3d9c: 0xa0a30001  sb          $v1, 0x1($a1)
    ctx->pc = 0x1c3d9cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x622FB1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x622FB1u, _value); } while (0);
    // 0x1c3da0: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x1c3da0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x622FB2u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x622FB2u, _value); } while (0);
    // 0x1c3da4: 0xa0c30001  sb          $v1, 0x1($a2)
    ctx->pc = 0x1c3da4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x622FB9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x622FB9u, _value); } while (0);
    // 0x1c3da8: 0xa0c00002  sb          $zero, 0x2($a2)
    ctx->pc = 0x1c3da8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x622FBAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x622FBAu, _value); } while (0);
    // 0x1c3dac: 0xa0e00001  sb          $zero, 0x1($a3)
    ctx->pc = 0x1c3dacu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x622FC1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x622FC1u, _value); } while (0);
    // 0x1c3db0: 0xa0e00002  sb          $zero, 0x2($a3)
    ctx->pc = 0x1c3db0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x622FC2u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x622FC2u, _value); } while (0);
    // 0x1c3db4: 0xa10d0001  sb          $t5, 0x1($t0)
    ctx->pc = 0x1c3db4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x622FC9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x622FC9u, _value); } while (0);
label_1c3db8:
    // 0x1c3db8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3DB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3DB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3DC0u;
}
