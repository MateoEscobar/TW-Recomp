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

// Function: sub_0033FEB0
// Address: 0x33feb0 - 0x340120
void sub_0033FEB0_0x33feb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033FEB0_0x33feb0");
#endif

    switch (ctx->pc) {
        case 0x33fed0u: goto label_33fed0;
        case 0x33ff9cu: goto label_33ff9c;
        case 0x340020u: goto label_340020;
        default: break;
    }

    ctx->pc = 0x33feb0u;

    // 0x33feb0: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x33feb0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33feb4: 0x10e0004a  beqz        $a3, . + 4 + (0x4A << 2)
    ctx->pc = 0x33FEB4u;
    {
        const bool branch_taken_0x33feb4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FEB4u;
        // 0x33feb8: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33feb4) {
            ctx->pc = 0x33FFE0u;
            goto label_33ffe0;
        }
    }
    ctx->pc = 0x33FEBCu;
    // 0x33febc: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x33febcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33fec0: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x33fec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33fec4: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x33FEC4u;
    {
        const bool branch_taken_0x33fec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FEC4u;
        // 0x33fec8: 0xc5600010  lwc1        $f0, 0x10($t3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fec4) {
            ctx->pc = 0x33FFACu;
            goto label_33ffac;
        }
    }
    ctx->pc = 0x33FECCu;
    // 0x33fecc: 0x0  nop
    ctx->pc = 0x33feccu;
    // NOP
label_33fed0:
    // 0x33fed0: 0x8d640020  lw          $a0, 0x20($t3)
    ctx->pc = 0x33fed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 32)));
    // 0x33fed4: 0x3463f450  ori         $v1, $v1, 0xF450
    ctx->pc = 0x33fed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)62544);
    // 0x33fed8: 0x1831821  addu        $v1, $t4, $v1
    ctx->pc = 0x33fed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x33fedc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x33fedcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x33fee0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x33fee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x33fee4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x33fee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x33fee8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x33fee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33feec: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x33feecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x33fef0: 0x5068002a  beql        $v1, $t0, . + 4 + (0x2A << 2)
    ctx->pc = 0x33FEF0u;
    {
        const bool branch_taken_0x33fef0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        if (branch_taken_0x33fef0) {
            ctx->pc = 0x33FEF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33FEF0u;
            // 0x33fef4: 0x8d6b0024  lw          $t3, 0x24($t3) (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33FF9Cu;
            goto label_33ff9c;
        }
    }
    ctx->pc = 0x33FEF8u;
    // 0x33fef8: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x33fef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x33fefc: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x33fefcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x33ff00: 0x50400026  beql        $v0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x33FF00u;
    {
        const bool branch_taken_0x33ff00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ff00) {
            ctx->pc = 0x33FF04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33FF00u;
            // 0x33ff04: 0x8d6b0024  lw          $t3, 0x24($t3) (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33FF9Cu;
            goto label_33ff9c;
        }
    }
    ctx->pc = 0x33FF08u;
    // 0x33ff08: 0x51400006  beql        $t2, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x33FF08u;
    {
        const bool branch_taken_0x33ff08 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ff08) {
            ctx->pc = 0x33FF0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33FF08u;
            // 0x33ff0c: 0xc4c00014  lwc1        $f0, 0x14($a2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x33FF24u;
            goto label_33ff24;
        }
    }
    ctx->pc = 0x33FF10u;
    // 0x33ff10: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x33ff10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x33ff14: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x33ff14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x33ff18: 0x50400020  beql        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x33FF18u;
    {
        const bool branch_taken_0x33ff18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ff18) {
            ctx->pc = 0x33FF1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33FF18u;
            // 0x33ff1c: 0x8d6b0024  lw          $t3, 0x24($t3) (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33FF9Cu;
            goto label_33ff9c;
        }
    }
    ctx->pc = 0x33FF20u;
    // 0x33ff20: 0xc4c00014  lwc1        $f0, 0x14($a2)
    ctx->pc = 0x33ff20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_33ff24:
    // 0x33ff24: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x33ff24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ff28: 0xc5610004  lwc1        $f1, 0x4($t3)
    ctx->pc = 0x33ff28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33ff2c: 0xc5620014  lwc1        $f2, 0x14($t3)
    ctx->pc = 0x33ff2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33ff30: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x33ff30u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33ff34: 0x0  nop
    ctx->pc = 0x33ff34u;
    // NOP
    // 0x33ff38: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x33FF38u;
    {
        const bool branch_taken_0x33ff38 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x33FF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FF38u;
        // 0x33ff3c: 0xc4c00004  lwc1        $f0, 0x4($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ff38) {
            ctx->pc = 0x33FF50u;
            goto label_33ff50;
        }
    }
    ctx->pc = 0x33FF40u;
    // 0x33ff40: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x33ff40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33ff44: 0x0  nop
    ctx->pc = 0x33ff44u;
    // NOP
    // 0x33ff48: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x33FF48u;
    {
        const bool branch_taken_0x33ff48 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x33ff48) {
            ctx->pc = 0x33FF4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33FF48u;
            // 0x33ff4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33FF50u;
            goto label_33ff50;
        }
    }
    ctx->pc = 0x33FF50u;
label_33ff50:
    // 0x33ff50: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x33FF50u;
    {
        const bool branch_taken_0x33ff50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FF50u;
        // 0x33ff54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ff50) {
            ctx->pc = 0x33FF98u;
            goto label_33ff98;
        }
    }
    ctx->pc = 0x33FF58u;
    // 0x33ff58: 0xc4c00018  lwc1        $f0, 0x18($a2)
    ctx->pc = 0x33ff58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33ff5c: 0xc5610008  lwc1        $f1, 0x8($t3)
    ctx->pc = 0x33ff5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33ff60: 0xc5620018  lwc1        $f2, 0x18($t3)
    ctx->pc = 0x33ff60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33ff64: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x33ff64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33ff68: 0x0  nop
    ctx->pc = 0x33ff68u;
    // NOP
    // 0x33ff6c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x33FF6Cu;
    {
        const bool branch_taken_0x33ff6c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x33FF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FF6Cu;
        // 0x33ff70: 0xc4c00008  lwc1        $f0, 0x8($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ff6c) {
            ctx->pc = 0x33FF84u;
            goto label_33ff84;
        }
    }
    ctx->pc = 0x33FF74u;
    // 0x33ff74: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x33ff74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33ff78: 0x0  nop
    ctx->pc = 0x33ff78u;
    // NOP
    // 0x33ff7c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x33FF7Cu;
    {
        const bool branch_taken_0x33ff7c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x33ff7c) {
            ctx->pc = 0x33FF80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33FF7Cu;
            // 0x33ff80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33FF84u;
            goto label_33ff84;
        }
    }
    ctx->pc = 0x33FF84u;
label_33ff84:
    // 0x33ff84: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33FF84u;
    {
        const bool branch_taken_0x33ff84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FF84u;
        // 0x33ff88: 0xd1080  sll         $v0, $t5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ff84) {
            ctx->pc = 0x33FF98u;
            goto label_33ff98;
        }
    }
    ctx->pc = 0x33FF8Cu;
    // 0x33ff8c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x33ff8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x33ff90: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x33ff90u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x33ff94: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x33ff94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_33ff98:
    // 0x33ff98: 0x8d6b0024  lw          $t3, 0x24($t3)
    ctx->pc = 0x33ff98u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 36)));
label_33ff9c:
    // 0x33ff9c: 0x51600011  beql        $t3, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x33FF9Cu;
    {
        const bool branch_taken_0x33ff9c = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ff9c) {
            ctx->pc = 0x33FFA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33FF9Cu;
            // 0x33ffa0: 0x8ce70028  lw          $a3, 0x28($a3) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33FFE4u;
            goto label_33ffe4;
        }
    }
    ctx->pc = 0x33FFA4u;
    // 0x33ffa4: 0xc5600010  lwc1        $f0, 0x10($t3)
    ctx->pc = 0x33ffa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33ffa8: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x33ffa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_33ffac:
    // 0x33ffac: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x33ffacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33ffb0: 0x0  nop
    ctx->pc = 0x33ffb0u;
    // NOP
    // 0x33ffb4: 0x4503fff9  bc1tl       . + 4 + (-0x7 << 2)
    ctx->pc = 0x33FFB4u;
    {
        const bool branch_taken_0x33ffb4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x33ffb4) {
            ctx->pc = 0x33FFB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33FFB4u;
            // 0x33ffb8: 0x8d6b0024  lw          $t3, 0x24($t3) (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33FF9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33ff9c;
        }
    }
    ctx->pc = 0x33FFBCu;
    // 0x33ffbc: 0xc5600000  lwc1        $f0, 0x0($t3)
    ctx->pc = 0x33ffbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33ffc0: 0xc5810014  lwc1        $f1, 0x14($t4)
    ctx->pc = 0x33ffc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33ffc4: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x33ffc4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x33ffc8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x33ffc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33ffcc: 0x0  nop
    ctx->pc = 0x33ffccu;
    // NOP
    // 0x33ffd0: 0x4500ffbf  bc1f        . + 4 + (-0x41 << 2)
    ctx->pc = 0x33FFD0u;
    {
        const bool branch_taken_0x33ffd0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x33FFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FFD0u;
        // 0x33ffd4: 0x3c030004  lui         $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ffd0) {
            ctx->pc = 0x33FED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33fed0;
        }
    }
    ctx->pc = 0x33FFD8u;
    // 0x33ffd8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x33FFD8u;
    {
        const bool branch_taken_0x33ffd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FFD8u;
        // 0x33ffdc: 0x8ce70028  lw          $a3, 0x28($a3) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ffd8) {
            ctx->pc = 0x33FFE4u;
            goto label_33ffe4;
        }
    }
    ctx->pc = 0x33FFE0u;
label_33ffe0:
    // 0x33ffe0: 0x8d870008  lw          $a3, 0x8($t4)
    ctx->pc = 0x33ffe0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 8)));
label_33ffe4:
    // 0x33ffe4: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x33ffe4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ffe8: 0x1160004b  beqz        $t3, . + 4 + (0x4B << 2)
    ctx->pc = 0x33FFE8u;
    {
        const bool branch_taken_0x33ffe8 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ffe8) {
            ctx->pc = 0x340118u;
            goto label_340118;
        }
    }
    ctx->pc = 0x33FFF0u;
    // 0x33fff0: 0xc5610000  lwc1        $f1, 0x0($t3)
    ctx->pc = 0x33fff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33fff4: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x33fff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33fff8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x33fff8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33fffc: 0x0  nop
    ctx->pc = 0x33fffcu;
    // NOP
    // 0x340000: 0x45010045  bc1t        . + 4 + (0x45 << 2)
    ctx->pc = 0x340000u;
    {
        const bool branch_taken_0x340000 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x340004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340000u;
        // 0x340004: 0x3c020004  lui         $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340000) {
            ctx->pc = 0x340118u;
            goto label_340118;
        }
    }
    ctx->pc = 0x340008u;
    // 0x340008: 0xd1880  sll         $v1, $t5, 2
    ctx->pc = 0x340008u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x34000c: 0x3442f450  ori         $v0, $v0, 0xF450
    ctx->pc = 0x34000cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)62544);
    // 0x340010: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x340010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x340014: 0x1822021  addu        $a0, $t4, $v0
    ctx->pc = 0x340014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x340018: 0xc5610010  lwc1        $f1, 0x10($t3)
    ctx->pc = 0x340018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34001c: 0x0  nop
    ctx->pc = 0x34001cu;
    // NOP
label_340020:
    // 0x340020: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x340020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x340024: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x340024u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x340028: 0x0  nop
    ctx->pc = 0x340028u;
    // NOP
    // 0x34002c: 0x45030032  bc1tl       . + 4 + (0x32 << 2)
    ctx->pc = 0x34002Cu;
    {
        const bool branch_taken_0x34002c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x34002c) {
            ctx->pc = 0x340030u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34002Cu;
            // 0x340030: 0x8d6b0028  lw          $t3, 0x28($t3) (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3400F8u;
            goto label_3400f8;
        }
    }
    ctx->pc = 0x340034u;
    // 0x340034: 0x8d620020  lw          $v0, 0x20($t3)
    ctx->pc = 0x340034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 32)));
    // 0x340038: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x340038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x34003c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x34003cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x340040: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x340040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x340044: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x340044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x340048: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x340048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x34004c: 0x5048002a  beql        $v0, $t0, . + 4 + (0x2A << 2)
    ctx->pc = 0x34004Cu;
    {
        const bool branch_taken_0x34004c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        if (branch_taken_0x34004c) {
            ctx->pc = 0x340050u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34004Cu;
            // 0x340050: 0x8d6b0028  lw          $t3, 0x28($t3) (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3400F8u;
            goto label_3400f8;
        }
    }
    ctx->pc = 0x340054u;
    // 0x340054: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x340054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x340058: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x340058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x34005c: 0x50400026  beql        $v0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x34005Cu;
    {
        const bool branch_taken_0x34005c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34005c) {
            ctx->pc = 0x340060u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34005Cu;
            // 0x340060: 0x8d6b0028  lw          $t3, 0x28($t3) (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3400F8u;
            goto label_3400f8;
        }
    }
    ctx->pc = 0x340064u;
    // 0x340064: 0x51400006  beql        $t2, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x340064u;
    {
        const bool branch_taken_0x340064 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x340064) {
            ctx->pc = 0x340068u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x340064u;
            // 0x340068: 0xc4c00014  lwc1        $f0, 0x14($a2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x340080u;
            goto label_340080;
        }
    }
    ctx->pc = 0x34006Cu;
    // 0x34006c: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x34006cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x340070: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x340070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x340074: 0x50400020  beql        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x340074u;
    {
        const bool branch_taken_0x340074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x340074) {
            ctx->pc = 0x340078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x340074u;
            // 0x340078: 0x8d6b0028  lw          $t3, 0x28($t3) (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3400F8u;
            goto label_3400f8;
        }
    }
    ctx->pc = 0x34007Cu;
    // 0x34007c: 0xc4c00014  lwc1        $f0, 0x14($a2)
    ctx->pc = 0x34007cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_340080:
    // 0x340080: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x340080u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340084: 0xc5610004  lwc1        $f1, 0x4($t3)
    ctx->pc = 0x340084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x340088: 0xc5620014  lwc1        $f2, 0x14($t3)
    ctx->pc = 0x340088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34008c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x34008cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x340090: 0x0  nop
    ctx->pc = 0x340090u;
    // NOP
    // 0x340094: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x340094u;
    {
        const bool branch_taken_0x340094 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x340098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340094u;
        // 0x340098: 0xc4c00004  lwc1        $f0, 0x4($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x340094) {
            ctx->pc = 0x3400ACu;
            goto label_3400ac;
        }
    }
    ctx->pc = 0x34009Cu;
    // 0x34009c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x34009cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3400a0: 0x0  nop
    ctx->pc = 0x3400a0u;
    // NOP
    // 0x3400a4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3400A4u;
    {
        const bool branch_taken_0x3400a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3400a4) {
            ctx->pc = 0x3400A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3400A4u;
            // 0x3400a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3400ACu;
            goto label_3400ac;
        }
    }
    ctx->pc = 0x3400ACu;
label_3400ac:
    // 0x3400ac: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3400ACu;
    {
        const bool branch_taken_0x3400ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3400B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3400ACu;
        // 0x3400b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3400ac) {
            ctx->pc = 0x3400F4u;
            goto label_3400f4;
        }
    }
    ctx->pc = 0x3400B4u;
    // 0x3400b4: 0xc4c00018  lwc1        $f0, 0x18($a2)
    ctx->pc = 0x3400b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3400b8: 0xc5610008  lwc1        $f1, 0x8($t3)
    ctx->pc = 0x3400b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3400bc: 0xc5620018  lwc1        $f2, 0x18($t3)
    ctx->pc = 0x3400bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3400c0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3400c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3400c4: 0x0  nop
    ctx->pc = 0x3400c4u;
    // NOP
    // 0x3400c8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x3400C8u;
    {
        const bool branch_taken_0x3400c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3400CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3400C8u;
        // 0x3400cc: 0xc4c00008  lwc1        $f0, 0x8($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3400c8) {
            ctx->pc = 0x3400E0u;
            goto label_3400e0;
        }
    }
    ctx->pc = 0x3400D0u;
    // 0x3400d0: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x3400d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3400d4: 0x0  nop
    ctx->pc = 0x3400d4u;
    // NOP
    // 0x3400d8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3400D8u;
    {
        const bool branch_taken_0x3400d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3400d8) {
            ctx->pc = 0x3400DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3400D8u;
            // 0x3400dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3400E0u;
            goto label_3400e0;
        }
    }
    ctx->pc = 0x3400E0u;
label_3400e0:
    // 0x3400e0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3400E0u;
    {
        const bool branch_taken_0x3400e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3400e0) {
            ctx->pc = 0x3400E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3400E0u;
            // 0x3400e4: 0x8d6b0028  lw          $t3, 0x28($t3) (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3400F8u;
            goto label_3400f8;
        }
    }
    ctx->pc = 0x3400E8u;
    // 0x3400e8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x3400e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x3400ec: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x3400ecu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x3400f0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x3400f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_3400f4:
    // 0x3400f4: 0x8d6b0028  lw          $t3, 0x28($t3)
    ctx->pc = 0x3400f4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 40)));
label_3400f8:
    // 0x3400f8: 0x11600007  beqz        $t3, . + 4 + (0x7 << 2)
    ctx->pc = 0x3400F8u;
    {
        const bool branch_taken_0x3400f8 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x3400f8) {
            ctx->pc = 0x340118u;
            goto label_340118;
        }
    }
    ctx->pc = 0x340100u;
    // 0x340100: 0xc5610000  lwc1        $f1, 0x0($t3)
    ctx->pc = 0x340100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x340104: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x340104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x340108: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x340108u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34010c: 0x0  nop
    ctx->pc = 0x34010cu;
    // NOP
    // 0x340110: 0x4502ffc3  bc1fl       . + 4 + (-0x3D << 2)
    ctx->pc = 0x340110u;
    {
        const bool branch_taken_0x340110 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x340110) {
            ctx->pc = 0x340114u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x340110u;
            // 0x340114: 0xc5610010  lwc1        $f1, 0x10($t3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x340020u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_340020;
        }
    }
    ctx->pc = 0x340118u;
label_340118:
    // 0x340118: 0x3e00008  jr          $ra
    ctx->pc = 0x340118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34011Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340118u;
        // 0x34011c: 0x1a0102d  daddu       $v0, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x340120u;
}
