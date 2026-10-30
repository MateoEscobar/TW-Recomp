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

// Function: sub_0045DEE0
// Address: 0x45dee0 - 0x45e658
void sub_0045DEE0_0x45dee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045DEE0_0x45dee0");
#endif

    switch (ctx->pc) {
        case 0x45df30u: goto label_45df30;
        case 0x45df5cu: goto label_45df5c;
        case 0x45dfa8u: goto label_45dfa8;
        case 0x45dfd0u: goto label_45dfd0;
        case 0x45e058u: goto label_45e058;
        case 0x45e074u: goto label_45e074;
        case 0x45e0b4u: goto label_45e0b4;
        case 0x45e0d8u: goto label_45e0d8;
        case 0x45e130u: goto label_45e130;
        case 0x45e158u: goto label_45e158;
        case 0x45e188u: goto label_45e188;
        case 0x45e208u: goto label_45e208;
        case 0x45e244u: goto label_45e244;
        case 0x45e268u: goto label_45e268;
        case 0x45e2e8u: goto label_45e2e8;
        case 0x45e338u: goto label_45e338;
        case 0x45e360u: goto label_45e360;
        case 0x45e3e8u: goto label_45e3e8;
        case 0x45e410u: goto label_45e410;
        case 0x45e440u: goto label_45e440;
        case 0x45e4d0u: goto label_45e4d0;
        case 0x45e51cu: goto label_45e51c;
        case 0x45e540u: goto label_45e540;
        case 0x45e5c0u: goto label_45e5c0;
        default: break;
    }

    ctx->pc = 0x45dee0u;

    // 0x45dee0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x45dee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x45dee4: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x45dee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x45dee8: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x45dee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x45deec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x45deecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45def0: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x45def0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x45def4: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x45def4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x45def8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x45def8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x45defc: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x45defcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x45df00: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x45df00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x45df04: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x45df04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x45df08: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x45df08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x45df0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x45df0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x45df10: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x45df10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x45df14: 0x8cc70040  lw          $a3, 0x40($a2)
    ctx->pc = 0x45df14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x45df18: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x45df18u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x45df1c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x45df1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x45df20: 0x14e201a3  bne         $a3, $v0, . + 4 + (0x1A3 << 2)
    ctx->pc = 0x45DF20u;
    {
        const bool branch_taken_0x45df20 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x45DF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45DF20u;
        // 0x45df24: 0x8cd2003c  lw          $s2, 0x3C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45df20) {
            ctx->pc = 0x45E5B0u;
            goto label_45e5b0;
        }
    }
    ctx->pc = 0x45DF28u;
    // 0x45df28: 0xc10f4c8  jal         func_43D320
    ctx->pc = 0x45DF28u;
    SET_GPR_U32(ctx, 31, 0x45DF30u);
    ctx->pc = 0x45DF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x45DF28u;
    // 0x45df2c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D320u, 0x45DF28u, 0x45DF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45DF30u;
label_45df30:
    // 0x45df30: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x45df30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x45df34: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x45df34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x45df38: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x45df38u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x10000000
    // 0x45df3c: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x45df3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x45df40: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x45DF40u;
    {
        const bool branch_taken_0x45df40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x45DF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45DF40u;
        // 0x45df44: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45df40) {
            ctx->pc = 0x45DF78u;
            goto label_45df78;
        }
    }
    ctx->pc = 0x45DF48u;
    // 0x45df48: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x45df48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x45df4c: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x45df4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x45df50: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x45df50u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x45df54: 0xf  sync
    ctx->pc = 0x45df54u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45df58: 0x40f  sync.p
    ctx->pc = 0x45df58u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45df5c:
    // 0x45df5c: 0x0  nop
    ctx->pc = 0x45df5cu;
    // NOP
    // 0x45df60: 0x0  nop
    ctx->pc = 0x45df60u;
    // NOP
    // 0x45df64: 0x0  nop
    ctx->pc = 0x45df64u;
    // NOP
    // 0x45df68: 0x0  nop
    ctx->pc = 0x45df68u;
    // NOP
    // 0x45df6c: 0x0  nop
    ctx->pc = 0x45df6cu;
    // NOP
    // 0x45df70: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45DF70u;
    {
        const bool branch_taken_0x45df70 = (false);
        if (branch_taken_0x45df70) {
            ctx->pc = 0x45DF5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45df5c;
        }
    }
    ctx->pc = 0x45DF78u;
label_45df78:
    // 0x45df78: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45df78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45df7c: 0x2a240156  slti        $a0, $s1, 0x156
    ctx->pc = 0x45df7cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)342) ? 1 : 0);
    // 0x45df80: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x45df80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x45df84: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x45df84u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x45df88: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45df88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45df8c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x45DF8Cu;
    {
        const bool branch_taken_0x45df8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x45DF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45DF8Cu;
        // 0x45df90: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45df8c) {
            ctx->pc = 0x45DFECu;
            goto label_45dfec;
        }
    }
    ctx->pc = 0x45DF94u;
    // 0x45df94: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x45df94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x45df98: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x45df98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x45df9c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x45df9cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x45dfa0: 0xf  sync
    ctx->pc = 0x45dfa0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45dfa4: 0x40f  sync.p
    ctx->pc = 0x45dfa4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45dfa8:
    // 0x45dfa8: 0x0  nop
    ctx->pc = 0x45dfa8u;
    // NOP
    // 0x45dfac: 0x0  nop
    ctx->pc = 0x45dfacu;
    // NOP
    // 0x45dfb0: 0x0  nop
    ctx->pc = 0x45dfb0u;
    // NOP
    // 0x45dfb4: 0x0  nop
    ctx->pc = 0x45dfb4u;
    // NOP
    // 0x45dfb8: 0x0  nop
    ctx->pc = 0x45dfb8u;
    // NOP
    // 0x45dfbc: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45DFBCu;
    {
        const bool branch_taken_0x45dfbc = (false);
        if (branch_taken_0x45dfbc) {
            ctx->pc = 0x45DFA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45dfa8;
        }
    }
    ctx->pc = 0x45DFC4u;
    // 0x45dfc4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45dfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45dfc8: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x45dfc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x45dfcc: 0x0  nop
    ctx->pc = 0x45dfccu;
    // NOP
label_45dfd0:
    // 0x45dfd0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x45dfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x45dfd4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45dfd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45dfd8: 0x0  nop
    ctx->pc = 0x45dfd8u;
    // NOP
    // 0x45dfdc: 0x0  nop
    ctx->pc = 0x45dfdcu;
    // NOP
    // 0x45dfe0: 0x0  nop
    ctx->pc = 0x45dfe0u;
    // NOP
    // 0x45dfe4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45DFE4u;
    {
        const bool branch_taken_0x45dfe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45dfe4) {
            ctx->pc = 0x45DFD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45dfd0;
        }
    }
    ctx->pc = 0x45DFECu;
label_45dfec:
    // 0x45dfec: 0x148000b2  bnez        $a0, . + 4 + (0xB2 << 2)
    ctx->pc = 0x45DFECu;
    {
        const bool branch_taken_0x45dfec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x45dfec) {
            ctx->pc = 0x45E2B8u;
            goto label_45e2b8;
        }
    }
    ctx->pc = 0x45DFF4u;
    // 0x45dff4: 0x3c091000  lui         $t1, 0x1000
    ctx->pc = 0x45dff4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4096 << 16));
    // 0x45dff8: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x45dff8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x45dffc: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x45dffcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x45e000: 0x3c0b1000  lui         $t3, 0x1000
    ctx->pc = 0x45e000u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)4096 << 16));
    // 0x45e004: 0x3c161000  lui         $s6, 0x1000
    ctx->pc = 0x45e004u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)4096 << 16));
    // 0x45e008: 0x3c151000  lui         $s5, 0x1000
    ctx->pc = 0x45e008u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)4096 << 16));
    // 0x45e00c: 0x3c141000  lui         $s4, 0x1000
    ctx->pc = 0x45e00cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)4096 << 16));
    // 0x45e010: 0x3c131000  lui         $s3, 0x1000
    ctx->pc = 0x45e010u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4096 << 16));
    // 0x45e014: 0x3c191000  lui         $t9, 0x1000
    ctx->pc = 0x45e014u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)4096 << 16));
    // 0x45e018: 0x3c181000  lui         $t8, 0x1000
    ctx->pc = 0x45e018u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)4096 << 16));
    // 0x45e01c: 0x3529d000  ori         $t1, $t1, 0xD000
    ctx->pc = 0x45e01cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)53248);
    // 0x45e020: 0x34e7e020  ori         $a3, $a3, 0xE020
    ctx->pc = 0x45e020u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)57376);
    // 0x45e024: 0x240a0100  addiu       $t2, $zero, 0x100
    ctx->pc = 0x45e024u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x45e028: 0x3508d400  ori         $t0, $t0, 0xD400
    ctx->pc = 0x45e028u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)54272);
    // 0x45e02c: 0x240c0200  addiu       $t4, $zero, 0x200
    ctx->pc = 0x45e02cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x45e030: 0x356be010  ori         $t3, $t3, 0xE010
    ctx->pc = 0x45e030u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)57360);
    // 0x45e034: 0x36d6d420  ori         $s6, $s6, 0xD420
    ctx->pc = 0x45e034u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)54304);
    // 0x45e038: 0x36b5d080  ori         $s5, $s5, 0xD080
    ctx->pc = 0x45e038u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)53376);
    // 0x45e03c: 0x3694d020  ori         $s4, $s4, 0xD020
    ctx->pc = 0x45e03cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)53280);
    // 0x45e040: 0x3673d480  ori         $s3, $s3, 0xD480
    ctx->pc = 0x45e040u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)54400);
    // 0x45e044: 0x3739d410  ori         $t9, $t9, 0xD410
    ctx->pc = 0x45e044u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) | (uint64_t)(uint16_t)54288);
    // 0x45e048: 0x241e1550  addiu       $fp, $zero, 0x1550
    ctx->pc = 0x45e048u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 5456));
    // 0x45e04c: 0x3718d010  ori         $t8, $t8, 0xD010
    ctx->pc = 0x45e04cu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | (uint64_t)(uint16_t)53264);
    // 0x45e050: 0x241702aa  addiu       $s7, $zero, 0x2AA
    ctx->pc = 0x45e050u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 682));
    // 0x45e054: 0x0  nop
    ctx->pc = 0x45e054u;
    // NOP
label_45e058:
    // 0x45e058: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x45e058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x45e05c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45e05cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45e060: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x45E060u;
    {
        const bool branch_taken_0x45e060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45e060) {
            ctx->pc = 0x45E090u;
            goto label_45e090;
        }
    }
    ctx->pc = 0x45E068u;
    // 0x45e068: 0xacea0000  sw          $t2, 0x0($a3)
    ctx->pc = 0x45e068u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 10));
    // 0x45e06c: 0xf  sync
    ctx->pc = 0x45e06cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45e070: 0x40f  sync.p
    ctx->pc = 0x45e070u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45e074:
    // 0x45e074: 0x0  nop
    ctx->pc = 0x45e074u;
    // NOP
    // 0x45e078: 0x0  nop
    ctx->pc = 0x45e078u;
    // NOP
    // 0x45e07c: 0x0  nop
    ctx->pc = 0x45e07cu;
    // NOP
    // 0x45e080: 0x0  nop
    ctx->pc = 0x45e080u;
    // NOP
    // 0x45e084: 0x0  nop
    ctx->pc = 0x45e084u;
    // NOP
    // 0x45e088: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45E088u;
    {
        const bool branch_taken_0x45e088 = (false);
        if (branch_taken_0x45e088) {
            ctx->pc = 0x45E074u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45e074;
        }
    }
    ctx->pc = 0x45E090u;
label_45e090:
    // 0x45e090: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x45e090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x45e094: 0x262ffeab  addiu       $t7, $s1, -0x155
    ctx->pc = 0x45e094u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 17), 4294966955));
    // 0x45e098: 0x264d1550  addiu       $t5, $s2, 0x1550
    ctx->pc = 0x45e098u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 18), 5456));
    // 0x45e09c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45e09cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45e0a0: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x45E0A0u;
    {
        const bool branch_taken_0x45e0a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x45E0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45E0A0u;
        // 0x45e0a4: 0x260e2aa0  addiu       $t6, $s0, 0x2AA0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), 10912));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45e0a0) {
            ctx->pc = 0x45E0F4u;
            goto label_45e0f4;
        }
    }
    ctx->pc = 0x45E0A8u;
    // 0x45e0a8: 0xacec0000  sw          $t4, 0x0($a3)
    ctx->pc = 0x45e0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 12));
    // 0x45e0ac: 0xf  sync
    ctx->pc = 0x45e0acu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45e0b0: 0x40f  sync.p
    ctx->pc = 0x45e0b0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45e0b4:
    // 0x45e0b4: 0x0  nop
    ctx->pc = 0x45e0b4u;
    // NOP
    // 0x45e0b8: 0x0  nop
    ctx->pc = 0x45e0b8u;
    // NOP
    // 0x45e0bc: 0x0  nop
    ctx->pc = 0x45e0bcu;
    // NOP
    // 0x45e0c0: 0x0  nop
    ctx->pc = 0x45e0c0u;
    // NOP
    // 0x45e0c4: 0x0  nop
    ctx->pc = 0x45e0c4u;
    // NOP
    // 0x45e0c8: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45E0C8u;
    {
        const bool branch_taken_0x45e0c8 = (false);
        if (branch_taken_0x45e0c8) {
            ctx->pc = 0x45E0B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45e0b4;
        }
    }
    ctx->pc = 0x45E0D0u;
    // 0x45e0d0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45e0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45e0d4: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x45e0d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_45e0d8:
    // 0x45e0d8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x45e0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x45e0dc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45e0dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45e0e0: 0x0  nop
    ctx->pc = 0x45e0e0u;
    // NOP
    // 0x45e0e4: 0x0  nop
    ctx->pc = 0x45e0e4u;
    // NOP
    // 0x45e0e8: 0x0  nop
    ctx->pc = 0x45e0e8u;
    // NOP
    // 0x45e0ec: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45E0ECu;
    {
        const bool branch_taken_0x45e0ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45e0ec) {
            ctx->pc = 0x45E0D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45e0d8;
        }
    }
    ctx->pc = 0x45E0F4u;
label_45e0f4:
    // 0x45e0f4: 0xad6c0000  sw          $t4, 0x0($t3)
    ctx->pc = 0x45e0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 12));
    // 0x45e0f8: 0x24020155  addiu       $v0, $zero, 0x155
    ctx->pc = 0x45e0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 341));
    // 0x45e0fc: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x45e0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x45e100: 0xaf320000  sw          $s2, 0x0($t9)
    ctx->pc = 0x45e100u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 18));
    // 0x45e104: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x45e104u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x45e108: 0xad0a0000  sw          $t2, 0x0($t0)
    ctx->pc = 0x45e108u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 10));
    // 0x45e10c: 0xf  sync
    ctx->pc = 0x45e10cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45e110: 0x40f  sync.p
    ctx->pc = 0x45e110u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45e114: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x45e114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x45e118: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45e118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45e11c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x45E11Cu;
    {
        const bool branch_taken_0x45e11c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x45E120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45E11Cu;
        // 0x45e120: 0x3c037000  lui         $v1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45e11c) {
            ctx->pc = 0x45E178u;
            goto label_45e178;
        }
    }
    ctx->pc = 0x45E124u;
    // 0x45e124: 0xacec0000  sw          $t4, 0x0($a3)
    ctx->pc = 0x45e124u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 12));
    // 0x45e128: 0xf  sync
    ctx->pc = 0x45e128u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45e12c: 0x40f  sync.p
    ctx->pc = 0x45e12cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45e130:
    // 0x45e130: 0x0  nop
    ctx->pc = 0x45e130u;
    // NOP
    // 0x45e134: 0x0  nop
    ctx->pc = 0x45e134u;
    // NOP
    // 0x45e138: 0x0  nop
    ctx->pc = 0x45e138u;
    // NOP
    // 0x45e13c: 0x0  nop
    ctx->pc = 0x45e13cu;
    // NOP
    // 0x45e140: 0x0  nop
    ctx->pc = 0x45e140u;
    // NOP
    // 0x45e144: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45E144u;
    {
        const bool branch_taken_0x45e144 = (false);
        if (branch_taken_0x45e144) {
            ctx->pc = 0x45E130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45e130;
        }
    }
    ctx->pc = 0x45E14Cu;
    // 0x45e14c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45e14cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45e150: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x45e150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x45e154: 0x0  nop
    ctx->pc = 0x45e154u;
    // NOP
label_45e158:
    // 0x45e158: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x45e158u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x45e15c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45e15cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45e160: 0x0  nop
    ctx->pc = 0x45e160u;
    // NOP
    // 0x45e164: 0x0  nop
    ctx->pc = 0x45e164u;
    // NOP
    // 0x45e168: 0x0  nop
    ctx->pc = 0x45e168u;
    // NOP
    // 0x45e16c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45E16Cu;
    {
        const bool branch_taken_0x45e16c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45e16c) {
            ctx->pc = 0x45E158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45e158;
        }
    }
    ctx->pc = 0x45E174u;
    // 0x45e174: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x45e174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_45e178:
    // 0x45e178: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x45e178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x45e17c: 0x34631550  ori         $v1, $v1, 0x1550
    ctx->pc = 0x45e17cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5456);
    // 0x45e180: 0x24050154  addiu       $a1, $zero, 0x154
    ctx->pc = 0x45e180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 340));
    // 0x45e184: 0x0  nop
    ctx->pc = 0x45e184u;
    // NOP
label_45e188:
    // 0x45e188: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x45e188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45e18c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x45e18cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x45e190: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x45e190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45e194: 0x24860008  addiu       $a2, $a0, 0x8
    ctx->pc = 0x45e194u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x45e198: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x45e198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x45e19c: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x45e19cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x45e1a0: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x45e1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45e1a4: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x45e1a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x45e1a8: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x45e1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x45e1ac: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x45e1acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45e1b0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x45e1b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x45e1b4: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x45e1b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45e1b8: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x45e1b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x45e1bc: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x45e1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x45e1c0: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x45e1c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45e1c4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x45e1c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x45e1c8: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x45e1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45e1cc: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x45e1ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x45e1d0: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x45e1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x45e1d4: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x45e1d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45e1d8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x45e1d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x45e1dc: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x45e1dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45e1e0: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x45e1e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x45e1e4: 0x4a1ffe8  bgez        $a1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x45E1E4u;
    {
        const bool branch_taken_0x45e1e4 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x45E1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45E1E4u;
        // 0x45e1e8: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45e1e4) {
            ctx->pc = 0x45E188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45e188;
        }
    }
    ctx->pc = 0x45E1ECu;
    // 0x45e1ec: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x45e1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x45e1f0: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45e1f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45e1f4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x45E1F4u;
    {
        const bool branch_taken_0x45e1f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45e1f4) {
            ctx->pc = 0x45E228u;
            goto label_45e228;
        }
    }
    ctx->pc = 0x45E1FCu;
    // 0x45e1fc: 0xacea0000  sw          $t2, 0x0($a3)
    ctx->pc = 0x45e1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 10));
    // 0x45e200: 0xf  sync
    ctx->pc = 0x45e200u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45e204: 0x40f  sync.p
    ctx->pc = 0x45e204u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45e208:
    // 0x45e208: 0x0  nop
    ctx->pc = 0x45e208u;
    // NOP
    // 0x45e20c: 0x0  nop
    ctx->pc = 0x45e20cu;
    // NOP
    // 0x45e210: 0x0  nop
    ctx->pc = 0x45e210u;
    // NOP
    // 0x45e214: 0x0  nop
    ctx->pc = 0x45e214u;
    // NOP
    // 0x45e218: 0x0  nop
    ctx->pc = 0x45e218u;
    // NOP
    // 0x45e21c: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45E21Cu;
    {
        const bool branch_taken_0x45e21c = (false);
        if (branch_taken_0x45e21c) {
            ctx->pc = 0x45E208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45e208;
        }
    }
    ctx->pc = 0x45E224u;
    // 0x45e224: 0x0  nop
    ctx->pc = 0x45e224u;
    // NOP
label_45e228:
    // 0x45e228: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x45e228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x45e22c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45e22cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45e230: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x45E230u;
    {
        const bool branch_taken_0x45e230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45e230) {
            ctx->pc = 0x45E284u;
            goto label_45e284;
        }
    }
    ctx->pc = 0x45E238u;
    // 0x45e238: 0xacec0000  sw          $t4, 0x0($a3)
    ctx->pc = 0x45e238u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 12));
    // 0x45e23c: 0xf  sync
    ctx->pc = 0x45e23cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45e240: 0x40f  sync.p
    ctx->pc = 0x45e240u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45e244:
    // 0x45e244: 0x0  nop
    ctx->pc = 0x45e244u;
    // NOP
    // 0x45e248: 0x0  nop
    ctx->pc = 0x45e248u;
    // NOP
    // 0x45e24c: 0x0  nop
    ctx->pc = 0x45e24cu;
    // NOP
    // 0x45e250: 0x0  nop
    ctx->pc = 0x45e250u;
    // NOP
    // 0x45e254: 0x0  nop
    ctx->pc = 0x45e254u;
    // NOP
    // 0x45e258: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45E258u;
    {
        const bool branch_taken_0x45e258 = (false);
        if (branch_taken_0x45e258) {
            ctx->pc = 0x45E244u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45e244;
        }
    }
    ctx->pc = 0x45E260u;
    // 0x45e260: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45e260u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45e264: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x45e264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_45e268:
    // 0x45e268: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x45e268u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x45e26c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45e26cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45e270: 0x0  nop
    ctx->pc = 0x45e270u;
    // NOP
    // 0x45e274: 0x0  nop
    ctx->pc = 0x45e274u;
    // NOP
    // 0x45e278: 0x0  nop
    ctx->pc = 0x45e278u;
    // NOP
    // 0x45e27c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45E27Cu;
    {
        const bool branch_taken_0x45e27c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45e27c) {
            ctx->pc = 0x45E268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45e268;
        }
    }
    ctx->pc = 0x45E284u;
label_45e284:
    // 0x45e284: 0xad6a0000  sw          $t2, 0x0($t3)
    ctx->pc = 0x45e284u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 10));
    // 0x45e288: 0xaebe0000  sw          $fp, 0x0($s5)
    ctx->pc = 0x45e288u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 30));
    // 0x45e28c: 0xaf100000  sw          $s0, 0x0($t8)
    ctx->pc = 0x45e28cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 16));
    // 0x45e290: 0xae970000  sw          $s7, 0x0($s4)
    ctx->pc = 0x45e290u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 23));
    // 0x45e294: 0xad2a0000  sw          $t2, 0x0($t1)
    ctx->pc = 0x45e294u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 10));
    // 0x45e298: 0xf  sync
    ctx->pc = 0x45e298u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45e29c: 0x40f  sync.p
    ctx->pc = 0x45e29cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45e2a0: 0x1a0902d  daddu       $s2, $t5, $zero
    ctx->pc = 0x45e2a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45e2a4: 0x1e0882d  daddu       $s1, $t7, $zero
    ctx->pc = 0x45e2a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45e2a8: 0x2a220156  slti        $v0, $s1, 0x156
    ctx->pc = 0x45e2a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)342) ? 1 : 0);
    // 0x45e2ac: 0x1040ff6a  beqz        $v0, . + 4 + (-0x96 << 2)
    ctx->pc = 0x45E2ACu;
    {
        const bool branch_taken_0x45e2ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x45E2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45E2ACu;
        // 0x45e2b0: 0x1c0802d  daddu       $s0, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45e2ac) {
            ctx->pc = 0x45E058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45e058;
        }
    }
    ctx->pc = 0x45E2B4u;
    // 0x45e2b4: 0x0  nop
    ctx->pc = 0x45e2b4u;
    // NOP
label_45e2b8:
    // 0x45e2b8: 0x122000da  beqz        $s1, . + 4 + (0xDA << 2)
    ctx->pc = 0x45E2B8u;
    {
        const bool branch_taken_0x45e2b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x45E2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45E2B8u;
        // 0x45e2bc: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45e2b8) {
            ctx->pc = 0x45E624u;
            goto label_45e624;
        }
    }
    ctx->pc = 0x45E2C0u;
    // 0x45e2c0: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x45e2c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x45e2c4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x45e2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x45e2c8: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x45e2c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x45e2cc: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x45E2CCu;
    {
        const bool branch_taken_0x45e2cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x45E2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45E2CCu;
        // 0x45e2d0: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45e2cc) {
            ctx->pc = 0x45E308u;
            goto label_45e308;
        }
    }
    ctx->pc = 0x45E2D4u;
    // 0x45e2d4: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x45e2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x45e2d8: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x45e2d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x45e2dc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x45e2dcu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x45e2e0: 0xf  sync
    ctx->pc = 0x45e2e0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45e2e4: 0x40f  sync.p
    ctx->pc = 0x45e2e4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45e2e8:
    // 0x45e2e8: 0x0  nop
    ctx->pc = 0x45e2e8u;
    // NOP
    // 0x45e2ec: 0x0  nop
    ctx->pc = 0x45e2ecu;
    // NOP
    // 0x45e2f0: 0x0  nop
    ctx->pc = 0x45e2f0u;
    // NOP
    // 0x45e2f4: 0x0  nop
    ctx->pc = 0x45e2f4u;
    // NOP
    // 0x45e2f8: 0x0  nop
    ctx->pc = 0x45e2f8u;
    // NOP
    // 0x45e2fc: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45E2FCu;
    {
        const bool branch_taken_0x45e2fc = (false);
        if (branch_taken_0x45e2fc) {
            ctx->pc = 0x45E2E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45e2e8;
        }
    }
    ctx->pc = 0x45E304u;
    // 0x45e304: 0x0  nop
    ctx->pc = 0x45e304u;
    // NOP
label_45e308:
    // 0x45e308: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45e308u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45e30c: 0x113840  sll         $a3, $s1, 1
    ctx->pc = 0x45e30cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x45e310: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x45e310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x45e314: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x45e314u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x45e318: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45e318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45e31c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x45E31Cu;
    {
        const bool branch_taken_0x45e31c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x45E320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45E31Cu;
        // 0x45e320: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45e31c) {
            ctx->pc = 0x45E37Cu;
            goto label_45e37c;
        }
    }
    ctx->pc = 0x45E324u;
    // 0x45e324: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x45e324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x45e328: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x45e328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x45e32c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x45e32cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x45e330: 0xf  sync
    ctx->pc = 0x45e330u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45e334: 0x40f  sync.p
    ctx->pc = 0x45e334u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45e338:
    // 0x45e338: 0x0  nop
    ctx->pc = 0x45e338u;
    // NOP
    // 0x45e33c: 0x0  nop
    ctx->pc = 0x45e33cu;
    // NOP
    // 0x45e340: 0x0  nop
    ctx->pc = 0x45e340u;
    // NOP
    // 0x45e344: 0x0  nop
    ctx->pc = 0x45e344u;
    // NOP
    // 0x45e348: 0x0  nop
    ctx->pc = 0x45e348u;
    // NOP
    // 0x45e34c: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45E34Cu;
    {
        const bool branch_taken_0x45e34c = (false);
        if (branch_taken_0x45e34c) {
            ctx->pc = 0x45E338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45e338;
        }
    }
    ctx->pc = 0x45E354u;
    // 0x45e354: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45e354u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45e358: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x45e358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x45e35c: 0x0  nop
    ctx->pc = 0x45e35cu;
    // NOP
label_45e360:
    // 0x45e360: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x45e360u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x45e364: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45e364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45e368: 0x0  nop
    ctx->pc = 0x45e368u;
    // NOP
    // 0x45e36c: 0x0  nop
    ctx->pc = 0x45e36cu;
    // NOP
    // 0x45e370: 0x0  nop
    ctx->pc = 0x45e370u;
    // NOP
    // 0x45e374: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45E374u;
    {
        const bool branch_taken_0x45e374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45e374) {
            ctx->pc = 0x45E360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45e360;
        }
    }
    ctx->pc = 0x45E37Cu;
label_45e37c:
    // 0x45e37c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x45e37cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x45e380: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x45e380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x45e384: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x45e384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x45e388: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45e388u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45e38c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x45e38cu;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x45e390: 0x3463d480  ori         $v1, $v1, 0xD480
    ctx->pc = 0x45e390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54400);
    // 0x45e394: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x45e394u;
    runtime->Store32(rdram, ctx, 0x1000D480u, GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x45e398: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x45e398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x45e39c: 0x3442d410  ori         $v0, $v0, 0xD410
    ctx->pc = 0x45e39cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54288);
    // 0x45e3a0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45e3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45e3a4: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x45e3a4u;
    runtime->Store32(rdram, ctx, 0x1000D410u, GPR_U32(ctx, 18)); // MMIO: 0x10000000
    // 0x45e3a8: 0x3463d420  ori         $v1, $v1, 0xD420
    ctx->pc = 0x45e3a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54304);
    // 0x45e3ac: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x45e3acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x45e3b0: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x45e3b0u;
    runtime->Store32(rdram, ctx, 0x1000D420u, GPR_U32(ctx, 17)); // MMIO: 0x10000000
    // 0x45e3b4: 0x3484d400  ori         $a0, $a0, 0xD400
    ctx->pc = 0x45e3b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54272);
    // 0x45e3b8: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x45e3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x45e3bc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x45e3bcu;
    runtime->Store32(rdram, ctx, 0x1000D400u, GPR_U32(ctx, 2)); // MMIO: 0x10000000
    // 0x45e3c0: 0xf  sync
    ctx->pc = 0x45e3c0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45e3c4: 0x40f  sync.p
    ctx->pc = 0x45e3c4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45e3c8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x45e3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x45e3cc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45e3ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45e3d0: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x45E3D0u;
    {
        const bool branch_taken_0x45e3d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x45E3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45E3D0u;
        // 0x45e3d4: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45e3d0) {
            ctx->pc = 0x45E42Cu;
            goto label_45e42c;
        }
    }
    ctx->pc = 0x45E3D8u;
    // 0x45e3d8: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x45e3d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x45e3dc: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x45e3dcu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x45e3e0: 0xf  sync
    ctx->pc = 0x45e3e0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45e3e4: 0x40f  sync.p
    ctx->pc = 0x45e3e4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45e3e8:
    // 0x45e3e8: 0x0  nop
    ctx->pc = 0x45e3e8u;
    // NOP
    // 0x45e3ec: 0x0  nop
    ctx->pc = 0x45e3ecu;
    // NOP
    // 0x45e3f0: 0x0  nop
    ctx->pc = 0x45e3f0u;
    // NOP
    // 0x45e3f4: 0x0  nop
    ctx->pc = 0x45e3f4u;
    // NOP
    // 0x45e3f8: 0x0  nop
    ctx->pc = 0x45e3f8u;
    // NOP
    // 0x45e3fc: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45E3FCu;
    {
        const bool branch_taken_0x45e3fc = (false);
        if (branch_taken_0x45e3fc) {
            ctx->pc = 0x45E3E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45e3e8;
        }
    }
    ctx->pc = 0x45E404u;
    // 0x45e404: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45e404u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45e408: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x45e408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x45e40c: 0x0  nop
    ctx->pc = 0x45e40cu;
    // NOP
label_45e410:
    // 0x45e410: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x45e410u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x45e414: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45e414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45e418: 0x0  nop
    ctx->pc = 0x45e418u;
    // NOP
    // 0x45e41c: 0x0  nop
    ctx->pc = 0x45e41cu;
    // NOP
    // 0x45e420: 0x0  nop
    ctx->pc = 0x45e420u;
    // NOP
    // 0x45e424: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45E424u;
    {
        const bool branch_taken_0x45e424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45e424) {
            ctx->pc = 0x45E410u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45e410;
        }
    }
    ctx->pc = 0x45E42Cu;
label_45e42c:
    // 0x45e42c: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x45e42cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x45e430: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x45e430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x45e434: 0x1a20001b  blez        $s1, . + 4 + (0x1B << 2)
    ctx->pc = 0x45E434u;
    {
        const bool branch_taken_0x45e434 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x45E438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45E434u;
        // 0x45e438: 0x34631550  ori         $v1, $v1, 0x1550 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5456);
        ctx->in_delay_slot = false;
        if (branch_taken_0x45e434) {
            ctx->pc = 0x45E4A4u;
            goto label_45e4a4;
        }
    }
    ctx->pc = 0x45E43Cu;
    // 0x45e43c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x45e43cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_45e440:
    // 0x45e440: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x45e440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45e444: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x45e444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x45e448: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x45e448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45e44c: 0x24860008  addiu       $a2, $a0, 0x8
    ctx->pc = 0x45e44cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x45e450: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x45e450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x45e454: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x45e454u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x45e458: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x45e458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45e45c: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x45e45cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x45e460: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x45e460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x45e464: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x45e464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45e468: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x45e468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x45e46c: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x45e46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45e470: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x45e470u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x45e474: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x45e474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x45e478: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x45e478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45e47c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x45e47cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x45e480: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x45e480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45e484: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x45e484u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x45e488: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x45e488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x45e48c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x45e48cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45e490: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x45e490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x45e494: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x45e494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45e498: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x45e498u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x45e49c: 0x14a0ffe8  bnez        $a1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x45E49Cu;
    {
        const bool branch_taken_0x45e49c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x45E4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45E49Cu;
        // 0x45e4a0: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45e49c) {
            ctx->pc = 0x45E440u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45e440;
        }
    }
    ctx->pc = 0x45E4A4u;
label_45e4a4:
    // 0x45e4a4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x45e4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x45e4a8: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x45e4a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x45e4ac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x45e4acu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x10000000
    // 0x45e4b0: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x45e4b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x45e4b4: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x45E4B4u;
    {
        const bool branch_taken_0x45e4b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x45E4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45E4B4u;
        // 0x45e4b8: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45e4b4) {
            ctx->pc = 0x45E4F0u;
            goto label_45e4f0;
        }
    }
    ctx->pc = 0x45E4BCu;
    // 0x45e4bc: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x45e4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x45e4c0: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x45e4c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x45e4c4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x45e4c4u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x45e4c8: 0xf  sync
    ctx->pc = 0x45e4c8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45e4cc: 0x40f  sync.p
    ctx->pc = 0x45e4ccu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45e4d0:
    // 0x45e4d0: 0x0  nop
    ctx->pc = 0x45e4d0u;
    // NOP
    // 0x45e4d4: 0x0  nop
    ctx->pc = 0x45e4d4u;
    // NOP
    // 0x45e4d8: 0x0  nop
    ctx->pc = 0x45e4d8u;
    // NOP
    // 0x45e4dc: 0x0  nop
    ctx->pc = 0x45e4dcu;
    // NOP
    // 0x45e4e0: 0x0  nop
    ctx->pc = 0x45e4e0u;
    // NOP
    // 0x45e4e4: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45E4E4u;
    {
        const bool branch_taken_0x45e4e4 = (false);
        if (branch_taken_0x45e4e4) {
            ctx->pc = 0x45E4D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45e4d0;
        }
    }
    ctx->pc = 0x45E4ECu;
    // 0x45e4ec: 0x0  nop
    ctx->pc = 0x45e4ecu;
    // NOP
label_45e4f0:
    // 0x45e4f0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x45e4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x45e4f4: 0x3442d400  ori         $v0, $v0, 0xD400
    ctx->pc = 0x45e4f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54272);
    // 0x45e4f8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x45e4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D400u)); // MMIO: 0x10000000
    // 0x45e4fc: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x45e4fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x45e500: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x45E500u;
    {
        const bool branch_taken_0x45e500 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x45E504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45E500u;
        // 0x45e504: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45e500) {
            ctx->pc = 0x45E55Cu;
            goto label_45e55c;
        }
    }
    ctx->pc = 0x45E508u;
    // 0x45e508: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x45e508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x45e50c: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x45e50cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x45e510: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x45e510u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x45e514: 0xf  sync
    ctx->pc = 0x45e514u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45e518: 0x40f  sync.p
    ctx->pc = 0x45e518u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45e51c:
    // 0x45e51c: 0x0  nop
    ctx->pc = 0x45e51cu;
    // NOP
    // 0x45e520: 0x0  nop
    ctx->pc = 0x45e520u;
    // NOP
    // 0x45e524: 0x0  nop
    ctx->pc = 0x45e524u;
    // NOP
    // 0x45e528: 0x0  nop
    ctx->pc = 0x45e528u;
    // NOP
    // 0x45e52c: 0x0  nop
    ctx->pc = 0x45e52cu;
    // NOP
    // 0x45e530: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45E530u;
    {
        const bool branch_taken_0x45e530 = (false);
        if (branch_taken_0x45e530) {
            ctx->pc = 0x45E51Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45e51c;
        }
    }
    ctx->pc = 0x45E538u;
    // 0x45e538: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45e538u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45e53c: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x45e53cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_45e540:
    // 0x45e540: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x45e540u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x45e544: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45e544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45e548: 0x0  nop
    ctx->pc = 0x45e548u;
    // NOP
    // 0x45e54c: 0x0  nop
    ctx->pc = 0x45e54cu;
    // NOP
    // 0x45e550: 0x0  nop
    ctx->pc = 0x45e550u;
    // NOP
    // 0x45e554: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45E554u;
    {
        const bool branch_taken_0x45e554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45e554) {
            ctx->pc = 0x45E540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45e540;
        }
    }
    ctx->pc = 0x45E55Cu;
label_45e55c:
    // 0x45e55c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x45e55cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x45e560: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x45e560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x45e564: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x45e564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x45e568: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45e568u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45e56c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x45e56cu;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x45e570: 0x3463d080  ori         $v1, $v1, 0xD080
    ctx->pc = 0x45e570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53376);
    // 0x45e574: 0x24041550  addiu       $a0, $zero, 0x1550
    ctx->pc = 0x45e574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5456));
    // 0x45e578: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x45e578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x45e57c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x45e57cu;
    runtime->Store32(rdram, ctx, 0x1000D080u, GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x45e580: 0x3442d010  ori         $v0, $v0, 0xD010
    ctx->pc = 0x45e580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53264);
    // 0x45e584: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x45e584u;
    runtime->Store32(rdram, ctx, 0x1000D010u, GPR_U32(ctx, 16)); // MMIO: 0x10000000
    // 0x45e588: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45e588u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45e58c: 0x3463d020  ori         $v1, $v1, 0xD020
    ctx->pc = 0x45e58cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53280);
    // 0x45e590: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x45e590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x45e594: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x45e594u;
    runtime->Store32(rdram, ctx, 0x1000D020u, GPR_U32(ctx, 7)); // MMIO: 0x10000000
    // 0x45e598: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x45e598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x45e59c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x45e59cu;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x45e5a0: 0xf  sync
    ctx->pc = 0x45e5a0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45e5a4: 0x40f  sync.p
    ctx->pc = 0x45e5a4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45e5a8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x45E5A8u;
    {
        const bool branch_taken_0x45e5a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45E5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45E5A8u;
        // 0x45e5ac: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45e5a8) {
            ctx->pc = 0x45E628u;
            goto label_45e628;
        }
    }
    ctx->pc = 0x45E5B0u;
label_45e5b0:
    // 0x45e5b0: 0x5a20001d  blezl       $s1, . + 4 + (0x1D << 2)
    ctx->pc = 0x45E5B0u;
    {
        const bool branch_taken_0x45e5b0 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x45e5b0) {
            ctx->pc = 0x45E5B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x45E5B0u;
            // 0x45e5b4: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x45E628u;
            goto label_45e628;
        }
    }
    ctx->pc = 0x45E5B8u;
    // 0x45e5b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x45e5b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45e5bc: 0x0  nop
    ctx->pc = 0x45e5bcu;
    // NOP
label_45e5c0:
    // 0x45e5c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x45e5c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45e5c4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x45e5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x45e5c8: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x45e5c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45e5cc: 0x24860008  addiu       $a2, $a0, 0x8
    ctx->pc = 0x45e5ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x45e5d0: 0x879021  addu        $s2, $a0, $a3
    ctx->pc = 0x45e5d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x45e5d4: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x45e5d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x45e5d8: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x45e5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45e5dc: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x45e5dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x45e5e0: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x45e5e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x45e5e4: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x45e5e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45e5e8: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x45e5e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x45e5ec: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x45e5ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45e5f0: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x45e5f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x45e5f4: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x45e5f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x45e5f8: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x45e5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45e5fc: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x45e5fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x45e600: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x45e600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45e604: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x45e604u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x45e608: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x45e608u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x45e60c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x45e60cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45e610: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x45e610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x45e614: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x45e614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45e618: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x45e618u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x45e61c: 0x14a0ffe8  bnez        $a1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x45E61Cu;
    {
        const bool branch_taken_0x45e61c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x45E620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45E61Cu;
        // 0x45e620: 0x2038021  addu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45e61c) {
            ctx->pc = 0x45E5C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45e5c0;
        }
    }
    ctx->pc = 0x45E624u;
label_45e624:
    // 0x45e624: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x45e624u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_45e628:
    // 0x45e628: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x45e628u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x45e62c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x45e62cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x45e630: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x45e630u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x45e634: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x45e634u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x45e638: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x45e638u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x45e63c: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x45e63cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x45e640: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x45e640u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45e644: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x45e644u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45e648: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x45e648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45e64c: 0x3e00008  jr          $ra
    ctx->pc = 0x45E64Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x45E650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45E64Cu;
        // 0x45e650: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45E64Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45E654u;
    // 0x45e654: 0x0  nop
    ctx->pc = 0x45e654u;
    // NOP
    ctx->pc = 0x45e658u;
}
