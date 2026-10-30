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

// Function: sub_0018DDA0
// Address: 0x18dda0 - 0x18deb0
void sub_0018DDA0_0x18dda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018DDA0_0x18dda0");
#endif

    switch (ctx->pc) {
        case 0x18ddd8u: goto label_18ddd8;
        case 0x18de78u: goto label_18de78;
        case 0x18de8cu: goto label_18de8c;
        default: break;
    }

    ctx->pc = 0x18dda0u;

    // 0x18dda0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x18dda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x18dda4: 0x30ce00ff  andi        $t6, $a2, 0xFF
    ctx->pc = 0x18dda4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x18dda8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x18dda8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x18ddac: 0x80782d  daddu       $t7, $a0, $zero
    ctx->pc = 0x18ddacu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ddb0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x18ddb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x18ddb4: 0x30ad00ff  andi        $t5, $a1, 0xFF
    ctx->pc = 0x18ddb4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x18ddb8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x18ddb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x18ddbc: 0x312900ff  andi        $t1, $t1, 0xFF
    ctx->pc = 0x18ddbcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x18ddc0: 0x314a00ff  andi        $t2, $t2, 0xFF
    ctx->pc = 0x18ddc0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
    // 0x18ddc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18ddc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18ddc8: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x18ddc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x18ddcc: 0x27ac0044  addiu       $t4, $sp, 0x44
    ctx->pc = 0x18ddccu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x18ddd0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x18ddd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18ddd4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18ddd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_18ddd8:
    // 0x18ddd8: 0x0  nop
    ctx->pc = 0x18ddd8u;
    // NOP
    // 0x18dddc: 0x0  nop
    ctx->pc = 0x18dddcu;
    // NOP
    // 0x18dde0: 0x0  nop
    ctx->pc = 0x18dde0u;
    // NOP
    // 0x18dde4: 0x0  nop
    ctx->pc = 0x18dde4u;
    // NOP
    // 0x18dde8: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x18DDE8u;
    {
        const bool branch_taken_0x18dde8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x18DDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DDE8u;
        // 0x18ddec: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dde8) {
            ctx->pc = 0x18DDD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18ddd8;
        }
    }
    ctx->pc = 0x18DDF0u;
    // 0x18ddf0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x18ddf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x18ddf4: 0x90e50000  lbu         $a1, 0x0($a3)
    ctx->pc = 0x18ddf4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x18ddf8: 0x2451deb8  addiu       $s1, $v0, -0x2148
    ctx->pc = 0x18ddf8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958776));
    // 0x18ddfc: 0x90e4000c  lbu         $a0, 0xC($a3)
    ctx->pc = 0x18ddfcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x18de00: 0x90e30004  lbu         $v1, 0x4($a3)
    ctx->pc = 0x18de00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x18de04: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x18de04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18de08: 0x90e20008  lbu         $v0, 0x8($a3)
    ctx->pc = 0x18de08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x18de0c: 0xa3a50040  sb          $a1, 0x40($sp)
    ctx->pc = 0x18de0cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 5));
    // 0x18de10: 0xa0c40003  sb          $a0, 0x3($a2)
    ctx->pc = 0x18de10u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x18de14: 0xa0c30001  sb          $v1, 0x1($a2)
    ctx->pc = 0x18de14u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x18de18: 0xa0c20002  sb          $v0, 0x2($a2)
    ctx->pc = 0x18de18u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x18de1c: 0x91660008  lbu         $a2, 0x8($t3)
    ctx->pc = 0x18de1cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x18de20: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x18de20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18de24: 0x91630000  lbu         $v1, 0x0($t3)
    ctx->pc = 0x18de24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x18de28: 0x9164000c  lbu         $a0, 0xC($t3)
    ctx->pc = 0x18de28u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 12)));
    // 0x18de2c: 0x91650004  lbu         $a1, 0x4($t3)
    ctx->pc = 0x18de2cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x18de30: 0xa3a30044  sb          $v1, 0x44($sp)
    ctx->pc = 0x18de30u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 3));
    // 0x18de34: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x18de34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x18de38: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x18de38u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x18de3c: 0xe7ad0014  swc1        $f13, 0x14($sp)
    ctx->pc = 0x18de3cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x18de40: 0xa3ad000c  sb          $t5, 0xC($sp)
    ctx->pc = 0x18de40u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 12), (uint8_t)GPR_U32(ctx, 13));
    // 0x18de44: 0xa3ae000d  sb          $t6, 0xD($sp)
    ctx->pc = 0x18de44u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 13), (uint8_t)GPR_U32(ctx, 14));
    // 0x18de48: 0xafaf0004  sw          $t7, 0x4($sp)
    ctx->pc = 0x18de48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 15));
    // 0x18de4c: 0xa1840003  sb          $a0, 0x3($t4)
    ctx->pc = 0x18de4cu;
    WRITE8(ADD32(GPR_U32(ctx, 12), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x18de50: 0xa1850001  sb          $a1, 0x1($t4)
    ctx->pc = 0x18de50u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x18de54: 0xa1860002  sb          $a2, 0x2($t4)
    ctx->pc = 0x18de54u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 2), (uint8_t)GPR_U32(ctx, 6));
    // 0x18de58: 0xe7ae002c  swc1        $f14, 0x2C($sp)
    ctx->pc = 0x18de58u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x18de5c: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x18de5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x18de60: 0xe7af0030  swc1        $f15, 0x30($sp)
    ctx->pc = 0x18de60u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x18de64: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x18de64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x18de68: 0xa3a90028  sb          $t1, 0x28($sp)
    ctx->pc = 0x18de68u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 40), (uint8_t)GPR_U32(ctx, 9));
    // 0x18de6c: 0xa3aa0029  sb          $t2, 0x29($sp)
    ctx->pc = 0x18de6cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 41), (uint8_t)GPR_U32(ctx, 10));
    // 0x18de70: 0xafa80020  sw          $t0, 0x20($sp)
    ctx->pc = 0x18de70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 8));
    // 0x18de74: 0x0  nop
    ctx->pc = 0x18de74u;
    // NOP
label_18de78:
    // 0x18de78: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x18de78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18de7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18de7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18de80: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18de80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18de84: 0xc062eb8  jal         func_18BAE0
    ctx->pc = 0x18DE84u;
    SET_GPR_U32(ctx, 31, 0x18DE8Cu);
    ctx->pc = 0x18DE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DE84u;
    // 0x18de88: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18BAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BAE0u, 0x18DE84u, 0x18DE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DE8Cu;
label_18de8c:
    // 0x18de8c: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x18de8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x18de90: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x18DE90u;
    {
        const bool branch_taken_0x18de90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18DE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DE90u;
        // 0x18de94: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18de90) {
            ctx->pc = 0x18DE78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18de78;
        }
    }
    ctx->pc = 0x18DE98u;
    // 0x18de98: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x18de98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18de9c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x18de9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18dea0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x18dea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18dea4: 0x3e00008  jr          $ra
    ctx->pc = 0x18DEA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18DEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DEA4u;
        // 0x18dea8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18DEA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18DEACu;
    // 0x18deac: 0x0  nop
    ctx->pc = 0x18deacu;
    // NOP
    ctx->pc = 0x18deb0u;
}
