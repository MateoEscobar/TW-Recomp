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

// Function: sub_002F7D18
// Address: 0x2f7d18 - 0x2f7dc8
void sub_002F7D18_0x2f7d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F7D18_0x2f7d18");
#endif

    switch (ctx->pc) {
        case 0x2f7d90u: goto label_2f7d90;
        default: break;
    }

    ctx->pc = 0x2f7d18u;

    // 0x2f7d18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f7d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f7d1c: 0x3c0afffd  lui         $t2, 0xFFFD
    ctx->pc = 0x2f7d1cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65533 << 16));
    // 0x2f7d20: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x2f7d20u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x2f7d24: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2f7d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2f7d28: 0x3c07bfff  lui         $a3, 0xBFFF
    ctx->pc = 0x2f7d28u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)49151 << 16));
    // 0x2f7d2c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x2f7d2cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x2f7d30: 0x73878  dsll        $a3, $a3, 1
    ctx->pc = 0x2f7d30u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 1);
    // 0x2f7d34: 0x34e70001  ori         $a3, $a3, 0x1
    ctx->pc = 0x2f7d34u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)1);
    // 0x2f7d38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f7d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f7d3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f7d3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7d40: 0x2408ff7f  addiu       $t0, $zero, -0x81
    ctx->pc = 0x2f7d40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x2f7d44: 0x2409feff  addiu       $t1, $zero, -0x101
    ctx->pc = 0x2f7d44u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    // 0x2f7d48: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2f7d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f7d4c: 0x2404fdff  addiu       $a0, $zero, -0x201
    ctx->pc = 0x2f7d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
    // 0x2f7d50: 0x2405f7ff  addiu       $a1, $zero, -0x801
    ctx->pc = 0x2f7d50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
    // 0x2f7d54: 0x3c06ff7f  lui         $a2, 0xFF7F
    ctx->pc = 0x2f7d54u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65407 << 16));
    // 0x2f7d58: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x2f7d58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x2f7d5c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2f7d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f7d60: 0xdc6200e0  ld          $v0, 0xE0($v1)
    ctx->pc = 0x2f7d60u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 224)));
    // 0x2f7d64: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x2f7d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x2f7d68: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x2f7d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x2f7d6c: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x2f7d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x2f7d70: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x2f7d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x2f7d74: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2f7d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2f7d78: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2f7d78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2f7d7c: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x2f7d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x2f7d80: 0xfc6200e0  sd          $v0, 0xE0($v1)
    ctx->pc = 0x2f7d80u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 224), GPR_U64(ctx, 2));
    // 0x2f7d84: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2f7d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f7d88: 0xc0a337e  jal         func_28CDF8
    ctx->pc = 0x2F7D88u;
    SET_GPR_U32(ctx, 31, 0x2F7D90u);
    ctx->pc = 0x2F7D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7D88u;
    // 0x2f7d8c: 0x8205002c  lb          $a1, 0x2C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CDF8u, 0x2F7D88u, 0x2F7D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7D90u;
label_2f7d90:
    // 0x2f7d90: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2f7d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f7d94: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f7d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f7d98: 0x3c013ff5  lui         $at, 0x3FF5
    ctx->pc = 0x2f7d98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16373 << 16));
    // 0x2f7d9c: 0x3421be0c  ori         $at, $at, 0xBE0C
    ctx->pc = 0x2f7d9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48652);
    // 0x2f7da0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f7da0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f7da4: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x2f7da4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x2f7da8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f7da8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f7dac: 0xe460012c  swc1        $f0, 0x12C($v1)
    ctx->pc = 0x2f7dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 300), bits); }
    // 0x2f7db0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2f7db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f7db4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2f7db4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f7db8: 0xa0450265  sb          $a1, 0x265($v0)
    ctx->pc = 0x2f7db8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 613), (uint8_t)GPR_U32(ctx, 5));
    // 0x2f7dbc: 0xac80b1dc  sw          $zero, -0x4E24($a0)
    ctx->pc = 0x2f7dbcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x50B1DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50B1DCu, _value); } while (0);
    // 0x2f7dc0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F7DC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F7DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7DC0u;
        // 0x2f7dc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F7DC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F7DC8u;
}
