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

// Function: sub_002C6D90
// Address: 0x2c6d90 - 0x2c6e78
void sub_002C6D90_0x2c6d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C6D90_0x2c6d90");
#endif

    switch (ctx->pc) {
        case 0x2c6e34u: goto label_2c6e34;
        case 0x2c6e48u: goto label_2c6e48;
        default: break;
    }

    ctx->pc = 0x2c6d90u;

    // 0x2c6d90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c6d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c6d94: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2c6d94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2c6d98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c6d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c6d9c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2c6d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2c6da0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c6da0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6da4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2c6da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2c6da8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c6da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c6dac: 0x24630c90  addiu       $v1, $v1, 0xC90
    ctx->pc = 0x2c6dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3216));
    // 0x2c6db0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2c6db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2c6db4: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x2c6db4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x2c6db8: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x2c6db8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x2c6dbc: 0x3c0a0051  lui         $t2, 0x51
    ctx->pc = 0x2c6dbcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)81 << 16));
    // 0x2c6dc0: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x2c6dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x2c6dc4: 0x254a16c0  addiu       $t2, $t2, 0x16C0
    ctx->pc = 0x2c6dc4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 5824));
    // 0x2c6dc8: 0xa2200004  sb          $zero, 0x4($s1)
    ctx->pc = 0x2c6dc8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c6dcc: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x2c6dccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6dd0: 0xa2200005  sb          $zero, 0x5($s1)
    ctx->pc = 0x2c6dd0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c6dd4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c6dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6dd8: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2c6dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x2c6ddc: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2c6ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2c6de0: 0x79420000  lq          $v0, 0x0($t2)
    ctx->pc = 0x2c6de0u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x5116C0u));
    // 0x2c6de4: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2c6de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    // 0x2c6de8: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x2c6de8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x2c6dec: 0xae200030  sw          $zero, 0x30($s1)
    ctx->pc = 0x2c6decu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
    // 0x2c6df0: 0xae200034  sw          $zero, 0x34($s1)
    ctx->pc = 0x2c6df0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
    // 0x2c6df4: 0xa6200038  sh          $zero, 0x38($s1)
    ctx->pc = 0x2c6df4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 56), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c6df8: 0xa230003b  sb          $s0, 0x3B($s1)
    ctx->pc = 0x2c6df8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 59), (uint8_t)GPR_U32(ctx, 16));
    // 0x2c6dfc: 0xa220003d  sb          $zero, 0x3D($s1)
    ctx->pc = 0x2c6dfcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 61), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c6e00: 0xa220003e  sb          $zero, 0x3E($s1)
    ctx->pc = 0x2c6e00u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 62), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c6e04: 0xa220003f  sb          $zero, 0x3F($s1)
    ctx->pc = 0x2c6e04u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 63), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c6e08: 0xa2200040  sb          $zero, 0x40($s1)
    ctx->pc = 0x2c6e08u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c6e0c: 0xa2200042  sb          $zero, 0x42($s1)
    ctx->pc = 0x2c6e0cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 66), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c6e10: 0xa2200045  sb          $zero, 0x45($s1)
    ctx->pc = 0x2c6e10u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 69), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c6e14: 0xa2200046  sb          $zero, 0x46($s1)
    ctx->pc = 0x2c6e14u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 70), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c6e18: 0xae230024  sw          $v1, 0x24($s1)
    ctx->pc = 0x2c6e18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
    // 0x2c6e1c: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x2c6e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
    // 0x2c6e20: 0xae260028  sw          $a2, 0x28($s1)
    ctx->pc = 0x2c6e20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 6));
    // 0x2c6e24: 0xe62c002c  swc1        $f12, 0x2C($s1)
    ctx->pc = 0x2c6e24u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
    // 0x2c6e28: 0xa227003a  sb          $a3, 0x3A($s1)
    ctx->pc = 0x2c6e28u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 58), (uint8_t)GPR_U32(ctx, 7));
    // 0x2c6e2c: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x2C6E2Cu;
    SET_GPR_U32(ctx, 31, 0x2C6E34u);
    ctx->pc = 0x2C6E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6E2Cu;
    // 0x2c6e30: 0xa229003c  sb          $t1, 0x3C($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 60), (uint8_t)GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2C6E2Cu, 0x2C6E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6E34u;
label_2c6e34:
    // 0x2c6e34: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x2c6e34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2c6e38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c6e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6e3c: 0xa2220041  sb          $v0, 0x41($s1)
    ctx->pc = 0x2c6e3cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 65), (uint8_t)GPR_U32(ctx, 2));
    // 0x2c6e40: 0x26220044  addiu       $v0, $s1, 0x44
    ctx->pc = 0x2c6e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    // 0x2c6e44: 0x0  nop
    ctx->pc = 0x2c6e44u;
    // NOP
label_2c6e48:
    // 0x2c6e48: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x2c6e48u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c6e4c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2c6e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2c6e50: 0x0  nop
    ctx->pc = 0x2c6e50u;
    // NOP
    // 0x2c6e54: 0x0  nop
    ctx->pc = 0x2c6e54u;
    // NOP
    // 0x2c6e58: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2C6E58u;
    {
        const bool branch_taken_0x2c6e58 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2C6E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6E58u;
        // 0x2c6e5c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6e58) {
            ctx->pc = 0x2C6E48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c6e48;
        }
    }
    ctx->pc = 0x2C6E60u;
    // 0x2c6e60: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2c6e60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6e64: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2c6e64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c6e68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c6e68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c6e6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c6e6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c6e70: 0x3e00008  jr          $ra
    ctx->pc = 0x2C6E70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C6E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6E70u;
        // 0x2c6e74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C6E70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C6E78u;
}
