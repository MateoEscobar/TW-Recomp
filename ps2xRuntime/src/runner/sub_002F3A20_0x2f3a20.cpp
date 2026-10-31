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

// Function: sub_002F3A20
// Address: 0x2f3a20 - 0x2f3b38
void sub_002F3A20_0x2f3a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F3A20_0x2f3a20");
#endif

    switch (ctx->pc) {
        case 0x2f3a68u: goto label_2f3a68;
        case 0x2f3ad0u: goto label_2f3ad0;
        case 0x2f3b18u: goto label_2f3b18;
        default: break;
    }

    ctx->pc = 0x2f3a20u;

    // 0x2f3a20: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2f3a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2f3a24: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2f3a24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2f3a28: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f3a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f3a2c: 0x24632610  addiu       $v1, $v1, 0x2610
    ctx->pc = 0x2f3a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9744));
    // 0x2f3a30: 0xa5400  sll         $t2, $t2, 16
    ctx->pc = 0x2f3a30u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x2f3a34: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2f3a34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2f3a38: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2f3a38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2f3a3c: 0x3c0bffff  lui         $t3, 0xFFFF
    ctx->pc = 0x2f3a3cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)65535 << 16));
    // 0x2f3a40: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2f3a40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x2f3a44: 0xa5403  sra         $t2, $t2, 16
    ctx->pc = 0x2f3a44u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 16));
    // 0x2f3a48: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x2f3a48u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f3a4c: 0x3129ffff  andi        $t1, $t1, 0xFFFF
    ctx->pc = 0x2f3a4cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x2f3a50: 0xa0800005  sb          $zero, 0x5($a0)
    ctx->pc = 0x2f3a50u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f3a54: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x2f3a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2f3a58: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2f3a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f3a5c: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x2f3a5cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x2f3a60: 0x240cffff  addiu       $t4, $zero, -0x1
    ctx->pc = 0x2f3a60u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f3a64: 0x0  nop
    ctx->pc = 0x2f3a64u;
    // NOP
label_2f3a68:
    // 0x2f3a68: 0xac4b0000  sw          $t3, 0x0($v0)
    ctx->pc = 0x2f3a68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 11));
    // 0x2f3a6c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2f3a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2f3a70: 0x0  nop
    ctx->pc = 0x2f3a70u;
    // NOP
    // 0x2f3a74: 0x0  nop
    ctx->pc = 0x2f3a74u;
    // NOP
    // 0x2f3a78: 0x14acfffb  bne         $a1, $t4, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2F3A78u;
    {
        const bool branch_taken_0x2f3a78 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 12));
        ctx->pc = 0x2F3A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3A78u;
        // 0x2f3a7c: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3a78) {
            ctx->pc = 0x2F3A68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f3a68;
        }
    }
    ctx->pc = 0x2F3A80u;
    // 0x2f3a80: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2f3a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2f3a84: 0xa4890038  sh          $t1, 0x38($a0)
    ctx->pc = 0x2f3a84u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 56), (uint16_t)GPR_U32(ctx, 9));
    // 0x2f3a88: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f3a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f3a8c: 0xa48a003a  sh          $t2, 0x3A($a0)
    ctx->pc = 0x2f3a8cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 58), (uint16_t)GPR_U32(ctx, 10));
    // 0x2f3a90: 0xe48c001c  swc1        $f12, 0x1C($a0)
    ctx->pc = 0x2f3a90u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x2f3a94: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2f3a94u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3a98: 0xe48d0020  swc1        $f13, 0x20($a0)
    ctx->pc = 0x2f3a98u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x2f3a9c: 0x248a003c  addiu       $t2, $a0, 0x3C
    ctx->pc = 0x2f3a9cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 60));
    // 0x2f3aa0: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x2f3aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x2f3aa4: 0x24850010  addiu       $a1, $a0, 0x10
    ctx->pc = 0x2f3aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2f3aa8: 0xa0880041  sb          $t0, 0x41($a0)
    ctx->pc = 0x2f3aa8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 65), (uint8_t)GPR_U32(ctx, 8));
    // 0x2f3aac: 0xa0860045  sb          $a2, 0x45($a0)
    ctx->pc = 0x2f3aacu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 69), (uint8_t)GPR_U32(ctx, 6));
    // 0x2f3ab0: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x2f3ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x2f3ab4: 0xac820028  sw          $v0, 0x28($a0)
    ctx->pc = 0x2f3ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 2));
    // 0x2f3ab8: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x2f3ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x2f3abc: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x2f3abcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x2f3ac0: 0xa0880040  sb          $t0, 0x40($a0)
    ctx->pc = 0x2f3ac0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 64), (uint8_t)GPR_U32(ctx, 8));
    // 0x2f3ac4: 0xa0800042  sb          $zero, 0x42($a0)
    ctx->pc = 0x2f3ac4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 66), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f3ac8: 0xa0800043  sb          $zero, 0x43($a0)
    ctx->pc = 0x2f3ac8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 67), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f3acc: 0xa0800044  sb          $zero, 0x44($a0)
    ctx->pc = 0x2f3accu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 68), (uint8_t)GPR_U32(ctx, 0));
label_2f3ad0:
    // 0x2f3ad0: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x2f3ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2f3ad4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2f3ad4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2f3ad8: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x2f3ad8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x2f3adc: 0x2d220003  sltiu       $v0, $t1, 0x3
    ctx->pc = 0x2f3adcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2f3ae0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2f3ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x2f3ae4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2F3AE4u;
    {
        const bool branch_taken_0x2f3ae4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F3AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3AE4u;
        // 0x2f3ae8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3ae4) {
            ctx->pc = 0x2F3AD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f3ad0;
        }
    }
    ctx->pc = 0x2F3AECu;
    // 0x2f3aec: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x2f3aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f3af0: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x2f3af0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3af4: 0x3c013c0e  lui         $at, 0x3C0E
    ctx->pc = 0x2f3af4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15374 << 16));
    // 0x2f3af8: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x2f3af8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
    // 0x2f3afc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2f3afcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2f3b00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f3b00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3b04: 0xc4810020  lwc1        $f1, 0x20($a0)
    ctx->pc = 0x2f3b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f3b08: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2f3b08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2f3b0c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2f3b0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2f3b10: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x2f3b10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x2f3b14: 0xe4810020  swc1        $f1, 0x20($a0)
    ctx->pc = 0x2f3b14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
label_2f3b18:
    // 0x2f3b18: 0xc51821  addu        $v1, $a2, $a1
    ctx->pc = 0x2f3b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2f3b1c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2f3b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2f3b20: 0x2ca20004  sltiu       $v0, $a1, 0x4
    ctx->pc = 0x2f3b20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2f3b24: 0x0  nop
    ctx->pc = 0x2f3b24u;
    // NOP
    // 0x2f3b28: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2F3B28u;
    {
        const bool branch_taken_0x2f3b28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F3B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3B28u;
        // 0x2f3b2c: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3b28) {
            ctx->pc = 0x2F3B18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f3b18;
        }
    }
    ctx->pc = 0x2F3B30u;
    // 0x2f3b30: 0x3e00008  jr          $ra
    ctx->pc = 0x2F3B30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F3B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3B30u;
        // 0x2f3b34: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F3B30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F3B38u;
}
