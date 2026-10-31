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

// Function: sub_0048CA60
// Address: 0x48ca60 - 0x48cf68
void sub_0048CA60_0x48ca60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048CA60_0x48ca60");
#endif

    switch (ctx->pc) {
        case 0x48ca74u: goto label_48ca74;
        case 0x48cafcu: goto label_48cafc;
        case 0x48cd48u: goto label_48cd48;
        case 0x48ce74u: goto label_48ce74;
        case 0x48cf4cu: goto label_48cf4c;
        default: break;
    }

    ctx->pc = 0x48ca60u;

    // 0x48ca60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x48ca60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x48ca64: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x48ca64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x48ca68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48ca68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48ca6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x48ca6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48ca70: 0x8f8889f4  lw          $t0, -0x760C($gp)
    ctx->pc = 0x48ca70u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937076)));
label_48ca74:
    // 0x48ca74: 0x110000ff  beqz        $t0, . + 4 + (0xFF << 2)
    ctx->pc = 0x48CA74u;
    {
        const bool branch_taken_0x48ca74 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x48CA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48CA74u;
        // 0x48ca78: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ca74) {
            ctx->pc = 0x48CE74u;
            goto label_48ce74;
        }
    }
    ctx->pc = 0x48CA7Cu;
    // 0x48ca7c: 0x24020102  addiu       $v0, $zero, 0x102
    ctx->pc = 0x48ca7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
    // 0x48ca80: 0x15020058  bne         $t0, $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x48CA80u;
    {
        const bool branch_taken_0x48ca80 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x48CA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48CA80u;
        // 0x48ca84: 0x8f828990  lw          $v0, -0x7670($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936976)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ca80) {
            ctx->pc = 0x48CBE4u;
            goto label_48cbe4;
        }
    }
    ctx->pc = 0x48CA88u;
    // 0x48ca88: 0x8f86898c  lw          $a2, -0x7674($gp)
    ctx->pc = 0x48ca88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
    // 0x48ca8c: 0x102900  sll         $a1, $s0, 4
    ctx->pc = 0x48ca8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x48ca90: 0x8f8389a8  lw          $v1, -0x7658($gp)
    ctx->pc = 0x48ca90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x48ca94: 0x8f8289ac  lw          $v0, -0x7654($gp)
    ctx->pc = 0x48ca94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937004)));
    // 0x48ca98: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x48ca98u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x48ca9c: 0x8f8489d8  lw          $a0, -0x7628($gp)
    ctx->pc = 0x48ca9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937048)));
    // 0x48caa0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x48caa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x48caa4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x48caa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x48caa8: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x48caa8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x48caac: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x48CAACu;
    {
        const bool branch_taken_0x48caac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48CAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48CAACu;
        // 0x48cab0: 0xa0502d  daddu       $t2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48caac) {
            ctx->pc = 0x48CBE0u;
            goto label_48cbe0;
        }
    }
    ctx->pc = 0x48CAB4u;
    // 0x48cab4: 0x6a1021  addu        $v0, $v1, $t2
    ctx->pc = 0x48cab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x48cab8: 0x2c422001  sltiu       $v0, $v0, 0x2001
    ctx->pc = 0x48cab8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8193) ? 1 : 0);
    // 0x48cabc: 0x54400040  bnel        $v0, $zero, . + 4 + (0x40 << 2)
    ctx->pc = 0x48CABCu;
    {
        const bool branch_taken_0x48cabc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48cabc) {
            ctx->pc = 0x48CAC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x48CABCu;
            // 0x48cac0: 0x8f8389ac  lw          $v1, -0x7654($gp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937004)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x48CBC0u;
            goto label_48cbc0;
        }
    }
    ctx->pc = 0x48CAC4u;
    // 0x48cac4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x48cac4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48cac8: 0x66480b  movn        $t1, $v1, $a2
    ctx->pc = 0x48cac8u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 3));
    // 0x48cacc: 0x1120003b  beqz        $t1, . + 4 + (0x3B << 2)
    ctx->pc = 0x48CACCu;
    {
        const bool branch_taken_0x48cacc = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x48CAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48CACCu;
        // 0x48cad0: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48cacc) {
            ctx->pc = 0x48CBBCu;
            goto label_48cbbc;
        }
    }
    ctx->pc = 0x48CAD4u;
    // 0x48cad4: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x48cad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x48cad8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x48cad8u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x48cadc: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x48cadcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x48cae0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x48CAE0u;
    {
        const bool branch_taken_0x48cae0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x48CAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48CAE0u;
        // 0x48cae4: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48cae0) {
            ctx->pc = 0x48CB18u;
            goto label_48cb18;
        }
    }
    ctx->pc = 0x48CAE8u;
    // 0x48cae8: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x48cae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x48caec: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x48caecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x48caf0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x48caf0u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x48caf4: 0xf  sync
    ctx->pc = 0x48caf4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x48caf8: 0x40f  sync.p
    ctx->pc = 0x48caf8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_48cafc:
    // 0x48cafc: 0x0  nop
    ctx->pc = 0x48cafcu;
    // NOP
    // 0x48cb00: 0x0  nop
    ctx->pc = 0x48cb00u;
    // NOP
    // 0x48cb04: 0x0  nop
    ctx->pc = 0x48cb04u;
    // NOP
    // 0x48cb08: 0x0  nop
    ctx->pc = 0x48cb08u;
    // NOP
    // 0x48cb0c: 0x0  nop
    ctx->pc = 0x48cb0cu;
    // NOP
    // 0x48cb10: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x48CB10u;
    {
        const bool branch_taken_0x48cb10 = (false);
        if (branch_taken_0x48cb10) {
            ctx->pc = 0x48CAFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48cafc;
        }
    }
    ctx->pc = 0x48CB18u;
label_48cb18:
    // 0x48cb18: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x48cb18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x48cb1c: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x48cb1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x48cb20: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x48cb20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x48cb24: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x48cb24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x48cb28: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x48cb28u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 6)); // MMIO: 0x10000000
    // 0x48cb2c: 0x3484d080  ori         $a0, $a0, 0xD080
    ctx->pc = 0x48cb2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53376);
    // 0x48cb30: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x48cb30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x48cb34: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x48cb34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x48cb38: 0x8f8889a8  lw          $t0, -0x7658($gp)
    ctx->pc = 0x48cb38u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x48cb3c: 0x3442d010  ori         $v0, $v0, 0xD010
    ctx->pc = 0x48cb3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53264);
    // 0x48cb40: 0x3463d020  ori         $v1, $v1, 0xD020
    ctx->pc = 0x48cb40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53280);
    // 0x48cb44: 0x92902  srl         $a1, $t1, 4
    ctx->pc = 0x48cb44u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 9), 4));
    // 0x48cb48: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x48cb48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
    // 0x48cb4c: 0x8f8789ac  lw          $a3, -0x7654($gp)
    ctx->pc = 0x48cb4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937004)));
    // 0x48cb50: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x48cb50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x48cb54: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x48cb54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x48cb58: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x48cb58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x48cb5c: 0xac26d000  sw          $a2, -0x3000($at)
    ctx->pc = 0x48cb5cu;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 6)); // MMIO: 0x1000d000
    // 0x48cb60: 0xf  sync
    ctx->pc = 0x48cb60u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x48cb64: 0x40f  sync.p
    ctx->pc = 0x48cb64u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x48cb68: 0x8f848994  lw          $a0, -0x766C($gp)
    ctx->pc = 0x48cb68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936980)));
    // 0x48cb6c: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x48CB6Cu;
    {
        const bool branch_taken_0x48cb6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x48CB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48CB6Cu;
        // 0x48cb70: 0x3c037000  lui         $v1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48cb6c) {
            ctx->pc = 0x48CBA0u;
            goto label_48cba0;
        }
    }
    ctx->pc = 0x48CB74u;
    // 0x48cb74: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x48cb74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x48cb78: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x48cb78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x48cb7c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x48cb7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x48cb80: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x48CB80u;
    {
        const bool branch_taken_0x48cb80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x48CB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48CB80u;
        // 0x48cb84: 0x8f8289ac  lw          $v0, -0x7654($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937004)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48cb80) {
            ctx->pc = 0x48CBA4u;
            goto label_48cba4;
        }
    }
    ctx->pc = 0x48CB88u;
    // 0x48cb88: 0x881023  subu        $v0, $a0, $t0
    ctx->pc = 0x48cb88u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x48cb8c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x48cb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x48cb90: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x48cb90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x48cb94: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x48cb94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x48cb98: 0xaf828994  sw          $v0, -0x766C($gp)
    ctx->pc = 0x48cb98u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936980), GPR_U32(ctx, 2));
    // 0x48cb9c: 0x0  nop
    ctx->pc = 0x48cb9cu;
    // NOP
label_48cba0:
    // 0x48cba0: 0x8f8289ac  lw          $v0, -0x7654($gp)
    ctx->pc = 0x48cba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937004)));
label_48cba4:
    // 0x48cba4: 0x8f8389a8  lw          $v1, -0x7658($gp)
    ctx->pc = 0x48cba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x48cba8: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x48cba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x48cbac: 0x38632000  xori        $v1, $v1, 0x2000
    ctx->pc = 0x48cbacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)8192);
    // 0x48cbb0: 0xaf8289ac  sw          $v0, -0x7654($gp)
    ctx->pc = 0x48cbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937004), GPR_U32(ctx, 2));
    // 0x48cbb4: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x48cbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
    // 0x48cbb8: 0xaf8389a8  sw          $v1, -0x7658($gp)
    ctx->pc = 0x48cbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937000), GPR_U32(ctx, 3));
label_48cbbc:
    // 0x48cbbc: 0x8f8389ac  lw          $v1, -0x7654($gp)
    ctx->pc = 0x48cbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937004)));
label_48cbc0:
    // 0x48cbc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x48cbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48cbc4: 0x8f85898c  lw          $a1, -0x7674($gp)
    ctx->pc = 0x48cbc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
    // 0x48cbc8: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x48cbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x48cbcc: 0x8f8489a8  lw          $a0, -0x7658($gp)
    ctx->pc = 0x48cbccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x48cbd0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x48cbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x48cbd4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x48cbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x48cbd8: 0x100000de  b           . + 4 + (0xDE << 2)
    ctx->pc = 0x48CBD8u;
    {
        const bool branch_taken_0x48cbd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48CBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48CBD8u;
        // 0x48cbdc: 0xaf8389dc  sw          $v1, -0x7624($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937052), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48cbd8) {
            ctx->pc = 0x48CF54u;
            goto label_48cf54;
        }
    }
    ctx->pc = 0x48CBE0u;
label_48cbe0:
    // 0x48cbe0: 0x8f828990  lw          $v0, -0x7670($gp)
    ctx->pc = 0x48cbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936976)));
label_48cbe4:
    // 0x48cbe4: 0x104000a1  beqz        $v0, . + 4 + (0xA1 << 2)
    ctx->pc = 0x48CBE4u;
    {
        const bool branch_taken_0x48cbe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48CBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48CBE4u;
        // 0x48cbe8: 0x8f8289a8  lw          $v0, -0x7658($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48cbe4) {
            ctx->pc = 0x48CE6Cu;
            goto label_48ce6c;
        }
    }
    ctx->pc = 0x48CBECu;
    // 0x48cbec: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x48cbecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x48cbf0: 0x8f86898c  lw          $a2, -0x7674($gp)
    ctx->pc = 0x48cbf0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
    // 0x48cbf4: 0x3484ff80  ori         $a0, $a0, 0xFF80
    ctx->pc = 0x48cbf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65408);
    // 0x48cbf8: 0x8f8789ac  lw          $a3, -0x7654($gp)
    ctx->pc = 0x48cbf8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937004)));
    // 0x48cbfc: 0x102900  sll         $a1, $s0, 4
    ctx->pc = 0x48cbfcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x48cc00: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x48cc00u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x48cc04: 0x8f8389d8  lw          $v1, -0x7628($gp)
    ctx->pc = 0x48cc04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937048)));
    // 0x48cc08: 0xe61021  addu        $v0, $a3, $a2
    ctx->pc = 0x48cc08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x48cc0c: 0x244200ff  addiu       $v0, $v0, 0xFF
    ctx->pc = 0x48cc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 255));
    // 0x48cc10: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x48cc10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x48cc14: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x48cc14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x48cc18: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x48cc18u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x48cc1c: 0x14600093  bnez        $v1, . + 4 + (0x93 << 2)
    ctx->pc = 0x48CC1Cu;
    {
        const bool branch_taken_0x48cc1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x48CC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48CC1Cu;
        // 0x48cc20: 0xa0502d  daddu       $t2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48cc1c) {
            ctx->pc = 0x48CE6Cu;
            goto label_48ce6c;
        }
    }
    ctx->pc = 0x48CC24u;
    // 0x48cc24: 0x5010018  bgez        $t0, . + 4 + (0x18 << 2)
    ctx->pc = 0x48CC24u;
    {
        const bool branch_taken_0x48cc24 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x48CC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48CC24u;
        // 0x48cc28: 0x8f82898c  lw          $v0, -0x7674($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48cc24) {
            ctx->pc = 0x48CC88u;
            goto label_48cc88;
        }
    }
    ctx->pc = 0x48CC2Cu;
    // 0x48cc2c: 0x8f8589f0  lw          $a1, -0x7610($gp)
    ctx->pc = 0x48cc2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937072)));
    // 0x48cc30: 0xe51023  subu        $v0, $a3, $a1
    ctx->pc = 0x48cc30u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x48cc34: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x48cc34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x48cc38: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x48cc38u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x48cc3c: 0x2446ffff  addiu       $a2, $v0, -0x1
    ctx->pc = 0x48cc3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x48cc40: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x48CC40u;
    {
        const bool branch_taken_0x48cc40 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x48CC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48CC40u;
        // 0x48cc44: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48cc40) {
            ctx->pc = 0x48CC78u;
            goto label_48cc78;
        }
    }
    ctx->pc = 0x48CC48u;
    // 0x48cc48: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x48cc48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x48cc4c: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x48cc4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x48cc50: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x48cc50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x48cc54: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x48cc54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x48cc58: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x48cc58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x48cc5c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x48cc5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x48cc60: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x48cc60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x48cc64: 0x70621b89  pcpyld      $v1, $v1, $v0
    ctx->pc = 0x48cc64u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x48cc68: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x48cc68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x48cc6c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x48CC6Cu;
    {
        const bool branch_taken_0x48cc6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48CC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48CC6Cu;
        // 0x48cc70: 0x7c830000  sq          $v1, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48cc6c) {
            ctx->pc = 0x48CC80u;
            goto label_48cc80;
        }
    }
    ctx->pc = 0x48CC74u;
    // 0x48cc74: 0x0  nop
    ctx->pc = 0x48cc74u;
    // NOP
label_48cc78:
    // 0x48cc78: 0x24e2fff0  addiu       $v0, $a3, -0x10
    ctx->pc = 0x48cc78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967280));
    // 0x48cc7c: 0xaf8289ac  sw          $v0, -0x7654($gp)
    ctx->pc = 0x48cc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937004), GPR_U32(ctx, 2));
label_48cc80:
    // 0x48cc80: 0xaf8089f0  sw          $zero, -0x7610($gp)
    ctx->pc = 0x48cc80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937072), GPR_U32(ctx, 0));
    // 0x48cc84: 0x8f82898c  lw          $v0, -0x7674($gp)
    ctx->pc = 0x48cc84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
label_48cc88:
    // 0x48cc88: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x48cc88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x48cc8c: 0x34840002  ori         $a0, $a0, 0x2
    ctx->pc = 0x48cc8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x48cc90: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x48cc90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x48cc94: 0x34841100  ori         $a0, $a0, 0x1100
    ctx->pc = 0x48cc94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4352);
    // 0x48cc98: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x48cc98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x48cc9c: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x48cc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x48cca0: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x48cca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x48cca4: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x48cca4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x48cca8: 0x70831b89  pcpyld      $v1, $a0, $v1
    ctx->pc = 0x48cca8u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x48ccac: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x48ccacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x48ccb0: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x48ccb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x48ccb4: 0x34a58001  ori         $a1, $a1, 0x8001
    ctx->pc = 0x48ccb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32769);
    // 0x48ccb8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x48ccb8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x48ccbc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x48ccbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48ccc0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x48ccc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x48ccc4: 0x70c51b89  pcpyld      $v1, $a2, $a1
    ctx->pc = 0x48ccc4u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 5)));
    // 0x48ccc8: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x48ccc8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x48cccc: 0x2407007f  addiu       $a3, $zero, 0x7F
    ctx->pc = 0x48ccccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x48ccd0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x48ccd0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x48ccd4: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x48ccd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x48ccd8: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x48ccd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x48ccdc: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x48ccdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x48cce0: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x48cce0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
    // 0x48cce4: 0x70e41b89  pcpyld      $v1, $a3, $a0
    ctx->pc = 0x48cce4u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 4)));
    // 0x48cce8: 0x7c430010  sq          $v1, 0x10($v0)
    ctx->pc = 0x48cce8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 3));
    // 0x48ccec: 0x3c040600  lui         $a0, 0x600
    ctx->pc = 0x48ccecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1536 << 16));
    // 0x48ccf0: 0x3c031300  lui         $v1, 0x1300
    ctx->pc = 0x48ccf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4864 << 16));
    // 0x48ccf4: 0xaf85898c  sw          $a1, -0x7674($gp)
    ctx->pc = 0x48ccf4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 5));
    // 0x48ccf8: 0x70831b89  pcpyld      $v1, $a0, $v1
    ctx->pc = 0x48ccf8u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x48ccfc: 0x7c430020  sq          $v1, 0x20($v0)
    ctx->pc = 0x48ccfcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), GPR_VEC(ctx, 3));
    // 0x48cd00: 0xaf86898c  sw          $a2, -0x7674($gp)
    ctx->pc = 0x48cd00u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 6));
    // 0x48cd04: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x48CD04u;
    {
        const bool branch_taken_0x48cd04 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x48CD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48CD04u;
        // 0x48cd08: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48cd04) {
            ctx->pc = 0x48CD18u;
            goto label_48cd18;
        }
    }
    ctx->pc = 0x48CD0Cu;
    // 0x48cd0c: 0x8f8289a8  lw          $v0, -0x7658($gp)
    ctx->pc = 0x48cd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x48cd10: 0xc24823  subu        $t1, $a2, $v0
    ctx->pc = 0x48cd10u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x48cd14: 0x0  nop
    ctx->pc = 0x48cd14u;
    // NOP
label_48cd18:
    // 0x48cd18: 0x1120003c  beqz        $t1, . + 4 + (0x3C << 2)
    ctx->pc = 0x48CD18u;
    {
        const bool branch_taken_0x48cd18 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x48CD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48CD18u;
        // 0x48cd1c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48cd18) {
            ctx->pc = 0x48CE0Cu;
            goto label_48ce0c;
        }
    }
    ctx->pc = 0x48CD20u;
    // 0x48cd20: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x48cd20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x48cd24: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x48cd24u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x48cd28: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x48cd28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x48cd2c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x48CD2Cu;
    {
        const bool branch_taken_0x48cd2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x48CD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48CD2Cu;
        // 0x48cd30: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48cd2c) {
            ctx->pc = 0x48CD68u;
            goto label_48cd68;
        }
    }
    ctx->pc = 0x48CD34u;
    // 0x48cd34: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x48cd34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x48cd38: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x48cd38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x48cd3c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x48cd3cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x48cd40: 0xf  sync
    ctx->pc = 0x48cd40u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x48cd44: 0x40f  sync.p
    ctx->pc = 0x48cd44u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_48cd48:
    // 0x48cd48: 0x0  nop
    ctx->pc = 0x48cd48u;
    // NOP
    // 0x48cd4c: 0x0  nop
    ctx->pc = 0x48cd4cu;
    // NOP
    // 0x48cd50: 0x0  nop
    ctx->pc = 0x48cd50u;
    // NOP
    // 0x48cd54: 0x0  nop
    ctx->pc = 0x48cd54u;
    // NOP
    // 0x48cd58: 0x0  nop
    ctx->pc = 0x48cd58u;
    // NOP
    // 0x48cd5c: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x48CD5Cu;
    {
        const bool branch_taken_0x48cd5c = (false);
        if (branch_taken_0x48cd5c) {
            ctx->pc = 0x48CD48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48cd48;
        }
    }
    ctx->pc = 0x48CD64u;
    // 0x48cd64: 0x0  nop
    ctx->pc = 0x48cd64u;
    // NOP
label_48cd68:
    // 0x48cd68: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x48cd68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x48cd6c: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x48cd6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x48cd70: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x48cd70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x48cd74: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x48cd74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x48cd78: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x48cd78u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 6)); // MMIO: 0x10000000
    // 0x48cd7c: 0x3484d080  ori         $a0, $a0, 0xD080
    ctx->pc = 0x48cd7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53376);
    // 0x48cd80: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x48cd80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x48cd84: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x48cd84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x48cd88: 0x8f8889a8  lw          $t0, -0x7658($gp)
    ctx->pc = 0x48cd88u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x48cd8c: 0x3442d010  ori         $v0, $v0, 0xD010
    ctx->pc = 0x48cd8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53264);
    // 0x48cd90: 0x3463d020  ori         $v1, $v1, 0xD020
    ctx->pc = 0x48cd90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53280);
    // 0x48cd94: 0x92902  srl         $a1, $t1, 4
    ctx->pc = 0x48cd94u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 9), 4));
    // 0x48cd98: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x48cd98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
    // 0x48cd9c: 0x8f8789ac  lw          $a3, -0x7654($gp)
    ctx->pc = 0x48cd9cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937004)));
    // 0x48cda0: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x48cda0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x48cda4: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x48cda4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x48cda8: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x48cda8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x48cdac: 0xac26d000  sw          $a2, -0x3000($at)
    ctx->pc = 0x48cdacu;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 6)); // MMIO: 0x1000d000
    // 0x48cdb0: 0xf  sync
    ctx->pc = 0x48cdb0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x48cdb4: 0x40f  sync.p
    ctx->pc = 0x48cdb4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x48cdb8: 0x8f848994  lw          $a0, -0x766C($gp)
    ctx->pc = 0x48cdb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936980)));
    // 0x48cdbc: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x48CDBCu;
    {
        const bool branch_taken_0x48cdbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x48CDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48CDBCu;
        // 0x48cdc0: 0x3c037000  lui         $v1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48cdbc) {
            ctx->pc = 0x48CDF0u;
            goto label_48cdf0;
        }
    }
    ctx->pc = 0x48CDC4u;
    // 0x48cdc4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x48cdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x48cdc8: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x48cdc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x48cdcc: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x48cdccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x48cdd0: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x48CDD0u;
    {
        const bool branch_taken_0x48cdd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x48CDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48CDD0u;
        // 0x48cdd4: 0x8f8289ac  lw          $v0, -0x7654($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937004)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48cdd0) {
            ctx->pc = 0x48CDF4u;
            goto label_48cdf4;
        }
    }
    ctx->pc = 0x48CDD8u;
    // 0x48cdd8: 0x881023  subu        $v0, $a0, $t0
    ctx->pc = 0x48cdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x48cddc: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x48cddcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x48cde0: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x48cde0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x48cde4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x48cde4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x48cde8: 0xaf828994  sw          $v0, -0x766C($gp)
    ctx->pc = 0x48cde8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936980), GPR_U32(ctx, 2));
    // 0x48cdec: 0x0  nop
    ctx->pc = 0x48cdecu;
    // NOP
label_48cdf0:
    // 0x48cdf0: 0x8f8289ac  lw          $v0, -0x7654($gp)
    ctx->pc = 0x48cdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937004)));
label_48cdf4:
    // 0x48cdf4: 0x8f8389a8  lw          $v1, -0x7658($gp)
    ctx->pc = 0x48cdf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x48cdf8: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x48cdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x48cdfc: 0x38632000  xori        $v1, $v1, 0x2000
    ctx->pc = 0x48cdfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)8192);
    // 0x48ce00: 0xaf8289ac  sw          $v0, -0x7654($gp)
    ctx->pc = 0x48ce00u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937004), GPR_U32(ctx, 2));
    // 0x48ce04: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x48ce04u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
    // 0x48ce08: 0xaf8389a8  sw          $v1, -0x7658($gp)
    ctx->pc = 0x48ce08u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937000), GPR_U32(ctx, 3));
label_48ce0c:
    // 0x48ce0c: 0x8f8289ac  lw          $v0, -0x7654($gp)
    ctx->pc = 0x48ce0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937004)));
    // 0x48ce10: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x48ce10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x48ce14: 0x3463ff80  ori         $v1, $v1, 0xFF80
    ctx->pc = 0x48ce14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65408);
    // 0x48ce18: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x48ce18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x48ce1c: 0x244200cf  addiu       $v0, $v0, 0xCF
    ctx->pc = 0x48ce1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 207));
    // 0x48ce20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x48ce20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48ce24: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x48ce24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x48ce28: 0x8f878990  lw          $a3, -0x7670($gp)
    ctx->pc = 0x48ce28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936976)));
    // 0x48ce2c: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x48ce2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x48ce30: 0x24080102  addiu       $t0, $zero, 0x102
    ctx->pc = 0x48ce30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
    // 0x48ce34: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x48ce34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x48ce38: 0x4a2021  addu        $a0, $v0, $t2
    ctx->pc = 0x48ce38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x48ce3c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x48ce3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x48ce40: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x48ce40u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x48ce44: 0xaf8489dc  sw          $a0, -0x7624($gp)
    ctx->pc = 0x48ce44u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937052), GPR_U32(ctx, 4));
    // 0x48ce48: 0x70c31b89  pcpyld      $v1, $a2, $v1
    ctx->pc = 0x48ce48u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 3)));
    // 0x48ce4c: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x48ce4cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x48ce50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x48ce50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48ce54: 0xaf8889f4  sw          $t0, -0x760C($gp)
    ctx->pc = 0x48ce54u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937076), GPR_U32(ctx, 8));
    // 0x48ce58: 0x8f83898c  lw          $v1, -0x7674($gp)
    ctx->pc = 0x48ce58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
    // 0x48ce5c: 0x8f8489a8  lw          $a0, -0x7658($gp)
    ctx->pc = 0x48ce5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x48ce60: 0xaf8389ac  sw          $v1, -0x7654($gp)
    ctx->pc = 0x48ce60u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937004), GPR_U32(ctx, 3));
    // 0x48ce64: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x48CE64u;
    {
        const bool branch_taken_0x48ce64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48CE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48CE64u;
        // 0x48ce68: 0xaf84898c  sw          $a0, -0x7674($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ce64) {
            ctx->pc = 0x48CF54u;
            goto label_48cf54;
        }
    }
    ctx->pc = 0x48CE6Cu;
label_48ce6c:
    // 0x48ce6c: 0xc123024  jal         func_48C090
    ctx->pc = 0x48CE6Cu;
    SET_GPR_U32(ctx, 31, 0x48CE74u);
    ctx->pc = 0x48C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C090u, 0x48CE6Cu, 0x48CE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48CE74u;
label_48ce74:
    // 0x48ce74: 0x8f8789e4  lw          $a3, -0x761C($gp)
    ctx->pc = 0x48ce74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937060)));
    // 0x48ce78: 0x8f8289e0  lw          $v0, -0x7620($gp)
    ctx->pc = 0x48ce78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937056)));
    // 0x48ce7c: 0x14e20014  bne         $a3, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x48CE7Cu;
    {
        const bool branch_taken_0x48ce7c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x48CE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48CE7Cu;
        // 0x48ce80: 0x8f8689dc  lw          $a2, -0x7624($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937052)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ce7c) {
            ctx->pc = 0x48CED0u;
            goto label_48ced0;
        }
    }
    ctx->pc = 0x48CE84u;
    // 0x48ce84: 0x8f8289dc  lw          $v0, -0x7624($gp)
    ctx->pc = 0x48ce84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937052)));
    // 0x48ce88: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x48ce88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x48ce8c: 0x3463ffc0  ori         $v1, $v1, 0xFFC0
    ctx->pc = 0x48ce8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65472);
    // 0x48ce90: 0x8f8489d8  lw          $a0, -0x7628($gp)
    ctx->pc = 0x48ce90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937048)));
    // 0x48ce94: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x48ce94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x48ce98: 0x433024  and         $a2, $v0, $v1
    ctx->pc = 0x48ce98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x48ce9c: 0x24c50080  addiu       $a1, $a2, 0x80
    ctx->pc = 0x48ce9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x48cea0: 0xa4202b  sltu        $a0, $a1, $a0
    ctx->pc = 0x48cea0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x48cea4: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x48CEA4u;
    {
        const bool branch_taken_0x48cea4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x48CEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48CEA4u;
        // 0x48cea8: 0x24c20078  addiu       $v0, $a2, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48cea4) {
            ctx->pc = 0x48CECCu;
            goto label_48cecc;
        }
    }
    ctx->pc = 0x48CEACu;
    // 0x48ceac: 0xaf8589dc  sw          $a1, -0x7624($gp)
    ctx->pc = 0x48ceacu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937052), GPR_U32(ctx, 5));
    // 0x48ceb0: 0xaf8289e0  sw          $v0, -0x7620($gp)
    ctx->pc = 0x48ceb0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937056), GPR_U32(ctx, 2));
    // 0x48ceb4: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x48ceb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x48ceb8: 0xace60004  sw          $a2, 0x4($a3)
    ctx->pc = 0x48ceb8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 6));
    // 0x48cebc: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x48cebcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x48cec0: 0xaf8689e4  sw          $a2, -0x761C($gp)
    ctx->pc = 0x48cec0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937060), GPR_U32(ctx, 6));
    // 0x48cec4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x48CEC4u;
    {
        const bool branch_taken_0x48cec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48CEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48CEC4u;
        // 0x48cec8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48cec4) {
            ctx->pc = 0x48CED0u;
            goto label_48ced0;
        }
    }
    ctx->pc = 0x48CECCu;
label_48cecc:
    // 0x48cecc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x48ceccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48ced0:
    // 0x48ced0: 0x10c00016  beqz        $a2, . + 4 + (0x16 << 2)
    ctx->pc = 0x48CED0u;
    {
        const bool branch_taken_0x48ced0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x48CED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48CED0u;
        // 0x48ced4: 0x24c4008f  addiu       $a0, $a2, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 143));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ced0) {
            ctx->pc = 0x48CF2Cu;
            goto label_48cf2c;
        }
    }
    ctx->pc = 0x48CED8u;
    // 0x48ced8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x48ced8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x48cedc: 0x3442ff80  ori         $v0, $v0, 0xFF80
    ctx->pc = 0x48cedcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65408);
    // 0x48cee0: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x48cee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x48cee4: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x48cee4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x48cee8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x48cee8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x48ceec: 0x8f8289d8  lw          $v0, -0x7628($gp)
    ctx->pc = 0x48ceecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937048)));
    // 0x48cef0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x48cef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x48cef4: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x48cef4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x48cef8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x48CEF8u;
    {
        const bool branch_taken_0x48cef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x48CEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48CEF8u;
        // 0x48cefc: 0x101100  sll         $v0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48cef8) {
            ctx->pc = 0x48CF30u;
            goto label_48cf30;
        }
    }
    ctx->pc = 0x48CF00u;
    // 0x48cf00: 0x2486fff0  addiu       $a2, $a0, -0x10
    ctx->pc = 0x48cf00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    // 0x48cf04: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x48cf04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x48cf08: 0x8f8389a8  lw          $v1, -0x7658($gp)
    ctx->pc = 0x48cf08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x48cf0c: 0x24040102  addiu       $a0, $zero, 0x102
    ctx->pc = 0x48cf0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
    // 0x48cf10: 0xaf8289dc  sw          $v0, -0x7624($gp)
    ctx->pc = 0x48cf10u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937052), GPR_U32(ctx, 2));
    // 0x48cf14: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x48cf14u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
    // 0x48cf18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x48cf18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48cf1c: 0xaf8489f4  sw          $a0, -0x760C($gp)
    ctx->pc = 0x48cf1cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937076), GPR_U32(ctx, 4));
    // 0x48cf20: 0xaf8689e8  sw          $a2, -0x7618($gp)
    ctx->pc = 0x48cf20u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937064), GPR_U32(ctx, 6));
    // 0x48cf24: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x48CF24u;
    {
        const bool branch_taken_0x48cf24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48CF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48CF24u;
        // 0x48cf28: 0xaf8689ac  sw          $a2, -0x7654($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937004), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48cf24) {
            ctx->pc = 0x48CF54u;
            goto label_48cf54;
        }
    }
    ctx->pc = 0x48CF2Cu;
label_48cf2c:
    // 0x48cf2c: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x48cf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_48cf30:
    // 0x48cf30: 0x8f8389c8  lw          $v1, -0x7638($gp)
    ctx->pc = 0x48cf30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937032)));
    // 0x48cf34: 0x24420130  addiu       $v0, $v0, 0x130
    ctx->pc = 0x48cf34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 304));
    // 0x48cf38: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x48cf38u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x48cf3c: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x48CF3Cu;
    {
        const bool branch_taken_0x48cf3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x48CF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48CF3Cu;
        // 0x48cf40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48cf3c) {
            ctx->pc = 0x48CF54u;
            goto label_48cf54;
        }
    }
    ctx->pc = 0x48CF44u;
    // 0x48cf44: 0xc123142  jal         func_48C508
    ctx->pc = 0x48CF44u;
    SET_GPR_U32(ctx, 31, 0x48CF4Cu);
    ctx->pc = 0x48CF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48CF44u;
    // 0x48cf48: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48C508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C508u, 0x48CF44u, 0x48CF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48CF4Cu;
label_48cf4c:
    // 0x48cf4c: 0x1000fec9  b           . + 4 + (-0x137 << 2)
    ctx->pc = 0x48CF4Cu;
    {
        const bool branch_taken_0x48cf4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48CF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48CF4Cu;
        // 0x48cf50: 0x8f8889f4  lw          $t0, -0x760C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937076)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48cf4c) {
            ctx->pc = 0x48CA74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48ca74;
        }
    }
    ctx->pc = 0x48CF54u;
label_48cf54:
    // 0x48cf54: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x48cf54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48cf58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48cf58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48cf5c: 0x3e00008  jr          $ra
    ctx->pc = 0x48CF5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48CF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48CF5Cu;
        // 0x48cf60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48CF5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48CF64u;
    // 0x48cf64: 0x0  nop
    ctx->pc = 0x48cf64u;
    // NOP
    ctx->pc = 0x48cf68u;
}
