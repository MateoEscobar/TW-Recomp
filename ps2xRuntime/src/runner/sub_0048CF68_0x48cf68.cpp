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

// Function: sub_0048CF68
// Address: 0x48cf68 - 0x48d420
void sub_0048CF68_0x48cf68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048CF68_0x48cf68");
#endif

    switch (ctx->pc) {
        case 0x48cf84u: goto label_48cf84;
        case 0x48d034u: goto label_48d034;
        case 0x48d200u: goto label_48d200;
        case 0x48d304u: goto label_48d304;
        case 0x48d404u: goto label_48d404;
        default: break;
    }

    ctx->pc = 0x48cf68u;

    // 0x48cf68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x48cf68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x48cf6c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x48cf6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x48cf70: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x48cf70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x48cf74: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x48cf74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48cf78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48cf78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48cf7c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x48cf7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48cf80: 0x8f8489f4  lw          $a0, -0x760C($gp)
    ctx->pc = 0x48cf80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937076)));
label_48cf84:
    // 0x48cf84: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x48cf84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x48cf88: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x48cf88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x48cf8c: 0x2231824  and         $v1, $s1, $v1
    ctx->pc = 0x48cf8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x48cf90: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x48cf90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48cf94: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x48cf94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x48cf98: 0x42027  nor         $a0, $zero, $a0
    ctx->pc = 0x48cf98u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
    // 0x48cf9c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x48cf9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x48cfa0: 0x10e000d8  beqz        $a3, . + 4 + (0xD8 << 2)
    ctx->pc = 0x48CFA0u;
    {
        const bool branch_taken_0x48cfa0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x48CFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48CFA0u;
        // 0x48cfa4: 0x43800b  movn        $s0, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48cfa0) {
            ctx->pc = 0x48D304u;
            goto label_48d304;
        }
    }
    ctx->pc = 0x48CFA8u;
    // 0x48cfa8: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x48cfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x48cfac: 0x24031101  addiu       $v1, $zero, 0x1101
    ctx->pc = 0x48cfacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4353));
    // 0x48cfb0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x48cfb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x48cfb4: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x48cfb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x48cfb8: 0x144300cb  bne         $v0, $v1, . + 4 + (0xCB << 2)
    ctx->pc = 0x48CFB8u;
    {
        const bool branch_taken_0x48cfb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x48CFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48CFB8u;
        // 0x48cfbc: 0x8f86898c  lw          $a2, -0x7674($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48cfb8) {
            ctx->pc = 0x48D2E8u;
            goto label_48d2e8;
        }
    }
    ctx->pc = 0x48CFC0u;
    // 0x48cfc0: 0x102900  sll         $a1, $s0, 4
    ctx->pc = 0x48cfc0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x48cfc4: 0x8f8389a8  lw          $v1, -0x7658($gp)
    ctx->pc = 0x48cfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x48cfc8: 0x8f8289ac  lw          $v0, -0x7654($gp)
    ctx->pc = 0x48cfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937004)));
    // 0x48cfcc: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x48cfccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x48cfd0: 0x8f8489d8  lw          $a0, -0x7628($gp)
    ctx->pc = 0x48cfd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937048)));
    // 0x48cfd4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x48cfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x48cfd8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x48cfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x48cfdc: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x48cfdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x48cfe0: 0x104000c1  beqz        $v0, . + 4 + (0xC1 << 2)
    ctx->pc = 0x48CFE0u;
    {
        const bool branch_taken_0x48cfe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48CFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48CFE0u;
        // 0x48cfe4: 0xa0502d  daddu       $t2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48cfe0) {
            ctx->pc = 0x48D2E8u;
            goto label_48d2e8;
        }
    }
    ctx->pc = 0x48CFE8u;
    // 0x48cfe8: 0x6a1021  addu        $v0, $v1, $t2
    ctx->pc = 0x48cfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x48cfec: 0x2c422001  sltiu       $v0, $v0, 0x2001
    ctx->pc = 0x48cfecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8193) ? 1 : 0);
    // 0x48cff0: 0x14400041  bnez        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x48CFF0u;
    {
        const bool branch_taken_0x48cff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x48CFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48CFF0u;
        // 0x48cff4: 0x8f8789ac  lw          $a3, -0x7654($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937004)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48cff0) {
            ctx->pc = 0x48D0F8u;
            goto label_48d0f8;
        }
    }
    ctx->pc = 0x48CFF8u;
    // 0x48cff8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x48cff8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48cffc: 0x66480b  movn        $t1, $v1, $a2
    ctx->pc = 0x48cffcu;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 3));
    // 0x48d000: 0x1120003d  beqz        $t1, . + 4 + (0x3D << 2)
    ctx->pc = 0x48D000u;
    {
        const bool branch_taken_0x48d000 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x48d000) {
            ctx->pc = 0x48D0F8u;
            goto label_48d0f8;
        }
    }
    ctx->pc = 0x48D008u;
    // 0x48d008: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x48d008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x48d00c: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x48d00cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x48d010: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x48d010u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x10000000
    // 0x48d014: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x48d014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x48d018: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x48D018u;
    {
        const bool branch_taken_0x48d018 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x48D01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D018u;
        // 0x48d01c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d018) {
            ctx->pc = 0x48D050u;
            goto label_48d050;
        }
    }
    ctx->pc = 0x48D020u;
    // 0x48d020: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x48d020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x48d024: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x48d024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x48d028: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x48d028u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x48d02c: 0xf  sync
    ctx->pc = 0x48d02cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x48d030: 0x40f  sync.p
    ctx->pc = 0x48d030u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_48d034:
    // 0x48d034: 0x0  nop
    ctx->pc = 0x48d034u;
    // NOP
    // 0x48d038: 0x0  nop
    ctx->pc = 0x48d038u;
    // NOP
    // 0x48d03c: 0x0  nop
    ctx->pc = 0x48d03cu;
    // NOP
    // 0x48d040: 0x0  nop
    ctx->pc = 0x48d040u;
    // NOP
    // 0x48d044: 0x0  nop
    ctx->pc = 0x48d044u;
    // NOP
    // 0x48d048: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x48D048u;
    {
        const bool branch_taken_0x48d048 = (false);
        if (branch_taken_0x48d048) {
            ctx->pc = 0x48D034u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48d034;
        }
    }
    ctx->pc = 0x48D050u;
label_48d050:
    // 0x48d050: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x48d050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x48d054: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x48d054u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x48d058: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x48d058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x48d05c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x48d05cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x48d060: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x48d060u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 6)); // MMIO: 0x10000000
    // 0x48d064: 0x3484d080  ori         $a0, $a0, 0xD080
    ctx->pc = 0x48d064u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53376);
    // 0x48d068: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x48d068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x48d06c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x48d06cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x48d070: 0x8f8889a8  lw          $t0, -0x7658($gp)
    ctx->pc = 0x48d070u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x48d074: 0x3442d010  ori         $v0, $v0, 0xD010
    ctx->pc = 0x48d074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53264);
    // 0x48d078: 0x3463d020  ori         $v1, $v1, 0xD020
    ctx->pc = 0x48d078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53280);
    // 0x48d07c: 0x92902  srl         $a1, $t1, 4
    ctx->pc = 0x48d07cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 9), 4));
    // 0x48d080: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x48d080u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
    // 0x48d084: 0x8f8789ac  lw          $a3, -0x7654($gp)
    ctx->pc = 0x48d084u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937004)));
    // 0x48d088: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x48d088u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x48d08c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x48d08cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x48d090: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x48d090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x48d094: 0xac26d000  sw          $a2, -0x3000($at)
    ctx->pc = 0x48d094u;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 6)); // MMIO: 0x1000d000
    // 0x48d098: 0xf  sync
    ctx->pc = 0x48d098u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x48d09c: 0x40f  sync.p
    ctx->pc = 0x48d09cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x48d0a0: 0x8f848994  lw          $a0, -0x766C($gp)
    ctx->pc = 0x48d0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936980)));
    // 0x48d0a4: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x48D0A4u;
    {
        const bool branch_taken_0x48d0a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x48D0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D0A4u;
        // 0x48d0a8: 0x3c037000  lui         $v1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d0a4) {
            ctx->pc = 0x48D0D8u;
            goto label_48d0d8;
        }
    }
    ctx->pc = 0x48D0ACu;
    // 0x48d0ac: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x48d0acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x48d0b0: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x48d0b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x48d0b4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x48d0b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x48d0b8: 0x54430008  bnel        $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x48D0B8u;
    {
        const bool branch_taken_0x48d0b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x48d0b8) {
            ctx->pc = 0x48D0BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x48D0B8u;
            // 0x48d0bc: 0x8f8289ac  lw          $v0, -0x7654($gp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937004)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x48D0DCu;
            goto label_48d0dc;
        }
    }
    ctx->pc = 0x48D0C0u;
    // 0x48d0c0: 0x881023  subu        $v0, $a0, $t0
    ctx->pc = 0x48d0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x48d0c4: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x48d0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x48d0c8: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x48d0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x48d0cc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x48d0ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x48d0d0: 0xaf828994  sw          $v0, -0x766C($gp)
    ctx->pc = 0x48d0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936980), GPR_U32(ctx, 2));
    // 0x48d0d4: 0x0  nop
    ctx->pc = 0x48d0d4u;
    // NOP
label_48d0d8:
    // 0x48d0d8: 0x8f8289ac  lw          $v0, -0x7654($gp)
    ctx->pc = 0x48d0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937004)));
label_48d0dc:
    // 0x48d0dc: 0x8f8389a8  lw          $v1, -0x7658($gp)
    ctx->pc = 0x48d0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x48d0e0: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x48d0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x48d0e4: 0x38632000  xori        $v1, $v1, 0x2000
    ctx->pc = 0x48d0e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)8192);
    // 0x48d0e8: 0xaf8289ac  sw          $v0, -0x7654($gp)
    ctx->pc = 0x48d0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937004), GPR_U32(ctx, 2));
    // 0x48d0ec: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x48d0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
    // 0x48d0f0: 0xaf8389a8  sw          $v1, -0x7658($gp)
    ctx->pc = 0x48d0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937000), GPR_U32(ctx, 3));
    // 0x48d0f4: 0x8f8789ac  lw          $a3, -0x7654($gp)
    ctx->pc = 0x48d0f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937004)));
label_48d0f8:
    // 0x48d0f8: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x48d0f8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x48d0fc: 0x8f86898c  lw          $a2, -0x7674($gp)
    ctx->pc = 0x48d0fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
    // 0x48d100: 0xea1021  addu        $v0, $a3, $t2
    ctx->pc = 0x48d100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x48d104: 0x8f8489a8  lw          $a0, -0x7658($gp)
    ctx->pc = 0x48d104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x48d108: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x48d108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x48d10c: 0x8f8589f4  lw          $a1, -0x760C($gp)
    ctx->pc = 0x48d10cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937076)));
    // 0x48d110: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x48d110u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x48d114: 0xaf8289dc  sw          $v0, -0x7624($gp)
    ctx->pc = 0x48d114u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937052), GPR_U32(ctx, 2));
    // 0x48d118: 0xa81824  and         $v1, $a1, $t0
    ctx->pc = 0x48d118u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 8));
    // 0x48d11c: 0x107100bb  beq         $v1, $s1, . + 4 + (0xBB << 2)
    ctx->pc = 0x48D11Cu;
    {
        const bool branch_taken_0x48d11c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x48D120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D11Cu;
        // 0x48d120: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d11c) {
            ctx->pc = 0x48D40Cu;
            goto label_48d40c;
        }
    }
    ctx->pc = 0x48D124u;
    // 0x48d124: 0x111027  nor         $v0, $zero, $s1
    ctx->pc = 0x48d124u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 17)));
    // 0x48d128: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x48d128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x48d12c: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x48d12cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x48d130: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x48D130u;
    {
        const bool branch_taken_0x48d130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48D134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D130u;
        // 0x48d134: 0x8f8589f0  lw          $a1, -0x7610($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937072)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d130) {
            ctx->pc = 0x48D1A0u;
            goto label_48d1a0;
        }
    }
    ctx->pc = 0x48D138u;
    // 0x48d138: 0xc41823  subu        $v1, $a2, $a0
    ctx->pc = 0x48d138u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x48d13c: 0xe51023  subu        $v0, $a3, $a1
    ctx->pc = 0x48d13cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x48d140: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x48d140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x48d144: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x48d144u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x48d148: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x48d148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x48d14c: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x48D14Cu;
    {
        const bool branch_taken_0x48d14c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x48D150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D14Cu;
        // 0x48d150: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d14c) {
            ctx->pc = 0x48D180u;
            goto label_48d180;
        }
    }
    ctx->pc = 0x48D154u;
    // 0x48d154: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x48d154u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x48d158: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x48d158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x48d15c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x48d15cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x48d160: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x48d160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x48d164: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x48d164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x48d168: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x48d168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x48d16c: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x48d16cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x48d170: 0x70621b89  pcpyld      $v1, $v1, $v0
    ctx->pc = 0x48d170u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x48d174: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x48d174u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x48d178: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x48D178u;
    {
        const bool branch_taken_0x48d178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48D17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D178u;
        // 0x48d17c: 0x7c830000  sq          $v1, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d178) {
            ctx->pc = 0x48D188u;
            goto label_48d188;
        }
    }
    ctx->pc = 0x48D180u;
label_48d180:
    // 0x48d180: 0x24e2fff0  addiu       $v0, $a3, -0x10
    ctx->pc = 0x48d180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967280));
    // 0x48d184: 0xaf8289ac  sw          $v0, -0x7654($gp)
    ctx->pc = 0x48d184u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937004), GPR_U32(ctx, 2));
label_48d188:
    // 0x48d188: 0xaf8089f0  sw          $zero, -0x7610($gp)
    ctx->pc = 0x48d188u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937072), GPR_U32(ctx, 0));
    // 0x48d18c: 0x8f8389f4  lw          $v1, -0x760C($gp)
    ctx->pc = 0x48d18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937076)));
    // 0x48d190: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x48d190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x48d194: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x48d194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x48d198: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x48d198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x48d19c: 0xaf8389f4  sw          $v1, -0x760C($gp)
    ctx->pc = 0x48d19cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937076), GPR_U32(ctx, 3));
label_48d1a0:
    // 0x48d1a0: 0x8f8389f4  lw          $v1, -0x760C($gp)
    ctx->pc = 0x48d1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937076)));
    // 0x48d1a4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x48d1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x48d1a8: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x48d1a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x48d1ac: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x48d1acu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x48d1b0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x48d1b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x48d1b4: 0x10600087  beqz        $v1, . + 4 + (0x87 << 2)
    ctx->pc = 0x48D1B4u;
    {
        const bool branch_taken_0x48d1b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x48D1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D1B4u;
        // 0x48d1b8: 0x8f83898c  lw          $v1, -0x7674($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d1b4) {
            ctx->pc = 0x48D3D4u;
            goto label_48d3d4;
        }
    }
    ctx->pc = 0x48D1BCu;
    // 0x48d1bc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x48D1BCu;
    {
        const bool branch_taken_0x48d1bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x48D1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D1BCu;
        // 0x48d1c0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d1bc) {
            ctx->pc = 0x48D1D0u;
            goto label_48d1d0;
        }
    }
    ctx->pc = 0x48D1C4u;
    // 0x48d1c4: 0x8f8289a8  lw          $v0, -0x7658($gp)
    ctx->pc = 0x48d1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x48d1c8: 0x624823  subu        $t1, $v1, $v0
    ctx->pc = 0x48d1c8u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x48d1cc: 0x0  nop
    ctx->pc = 0x48d1ccu;
    // NOP
label_48d1d0:
    // 0x48d1d0: 0x1120003c  beqz        $t1, . + 4 + (0x3C << 2)
    ctx->pc = 0x48D1D0u;
    {
        const bool branch_taken_0x48d1d0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x48D1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D1D0u;
        // 0x48d1d4: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d1d0) {
            ctx->pc = 0x48D2C4u;
            goto label_48d2c4;
        }
    }
    ctx->pc = 0x48D1D8u;
    // 0x48d1d8: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x48d1d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x48d1dc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x48d1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x48d1e0: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x48d1e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x48d1e4: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x48D1E4u;
    {
        const bool branch_taken_0x48d1e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x48D1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D1E4u;
        // 0x48d1e8: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d1e4) {
            ctx->pc = 0x48D220u;
            goto label_48d220;
        }
    }
    ctx->pc = 0x48D1ECu;
    // 0x48d1ec: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x48d1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x48d1f0: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x48d1f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x48d1f4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x48d1f4u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x48d1f8: 0xf  sync
    ctx->pc = 0x48d1f8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x48d1fc: 0x40f  sync.p
    ctx->pc = 0x48d1fcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_48d200:
    // 0x48d200: 0x0  nop
    ctx->pc = 0x48d200u;
    // NOP
    // 0x48d204: 0x0  nop
    ctx->pc = 0x48d204u;
    // NOP
    // 0x48d208: 0x0  nop
    ctx->pc = 0x48d208u;
    // NOP
    // 0x48d20c: 0x0  nop
    ctx->pc = 0x48d20cu;
    // NOP
    // 0x48d210: 0x0  nop
    ctx->pc = 0x48d210u;
    // NOP
    // 0x48d214: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x48D214u;
    {
        const bool branch_taken_0x48d214 = (false);
        if (branch_taken_0x48d214) {
            ctx->pc = 0x48D200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48d200;
        }
    }
    ctx->pc = 0x48D21Cu;
    // 0x48d21c: 0x0  nop
    ctx->pc = 0x48d21cu;
    // NOP
label_48d220:
    // 0x48d220: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x48d220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x48d224: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x48d224u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x48d228: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x48d228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x48d22c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x48d22cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x48d230: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x48d230u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 6)); // MMIO: 0x10000000
    // 0x48d234: 0x3484d080  ori         $a0, $a0, 0xD080
    ctx->pc = 0x48d234u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53376);
    // 0x48d238: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x48d238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x48d23c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x48d23cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x48d240: 0x8f8889a8  lw          $t0, -0x7658($gp)
    ctx->pc = 0x48d240u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x48d244: 0x3442d010  ori         $v0, $v0, 0xD010
    ctx->pc = 0x48d244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53264);
    // 0x48d248: 0x3463d020  ori         $v1, $v1, 0xD020
    ctx->pc = 0x48d248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53280);
    // 0x48d24c: 0x92902  srl         $a1, $t1, 4
    ctx->pc = 0x48d24cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 9), 4));
    // 0x48d250: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x48d250u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
    // 0x48d254: 0x8f8789ac  lw          $a3, -0x7654($gp)
    ctx->pc = 0x48d254u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937004)));
    // 0x48d258: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x48d258u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x48d25c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x48d25cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x48d260: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x48d260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x48d264: 0xac26d000  sw          $a2, -0x3000($at)
    ctx->pc = 0x48d264u;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 6)); // MMIO: 0x1000d000
    // 0x48d268: 0xf  sync
    ctx->pc = 0x48d268u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x48d26c: 0x40f  sync.p
    ctx->pc = 0x48d26cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x48d270: 0x8f848994  lw          $a0, -0x766C($gp)
    ctx->pc = 0x48d270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936980)));
    // 0x48d274: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x48D274u;
    {
        const bool branch_taken_0x48d274 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x48D278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D274u;
        // 0x48d278: 0x3c037000  lui         $v1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d274) {
            ctx->pc = 0x48D2A8u;
            goto label_48d2a8;
        }
    }
    ctx->pc = 0x48D27Cu;
    // 0x48d27c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x48d27cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x48d280: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x48d280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x48d284: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x48d284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x48d288: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x48D288u;
    {
        const bool branch_taken_0x48d288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x48D28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D288u;
        // 0x48d28c: 0x8f8289ac  lw          $v0, -0x7654($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937004)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d288) {
            ctx->pc = 0x48D2ACu;
            goto label_48d2ac;
        }
    }
    ctx->pc = 0x48D290u;
    // 0x48d290: 0x881023  subu        $v0, $a0, $t0
    ctx->pc = 0x48d290u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x48d294: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x48d294u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x48d298: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x48d298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x48d29c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x48d29cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x48d2a0: 0xaf828994  sw          $v0, -0x766C($gp)
    ctx->pc = 0x48d2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936980), GPR_U32(ctx, 2));
    // 0x48d2a4: 0x0  nop
    ctx->pc = 0x48d2a4u;
    // NOP
label_48d2a8:
    // 0x48d2a8: 0x8f8289ac  lw          $v0, -0x7654($gp)
    ctx->pc = 0x48d2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937004)));
label_48d2ac:
    // 0x48d2ac: 0x8f8389a8  lw          $v1, -0x7658($gp)
    ctx->pc = 0x48d2acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x48d2b0: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x48d2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x48d2b4: 0x38632000  xori        $v1, $v1, 0x2000
    ctx->pc = 0x48d2b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)8192);
    // 0x48d2b8: 0xaf8289ac  sw          $v0, -0x7654($gp)
    ctx->pc = 0x48d2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937004), GPR_U32(ctx, 2));
    // 0x48d2bc: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x48d2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
    // 0x48d2c0: 0xaf8389a8  sw          $v1, -0x7658($gp)
    ctx->pc = 0x48d2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937000), GPR_U32(ctx, 3));
label_48d2c4:
    // 0x48d2c4: 0x8f8289ac  lw          $v0, -0x7654($gp)
    ctx->pc = 0x48d2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937004)));
    // 0x48d2c8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x48d2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x48d2cc: 0x8f8389f4  lw          $v1, -0x760C($gp)
    ctx->pc = 0x48d2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937076)));
    // 0x48d2d0: 0xaf8289f0  sw          $v0, -0x7610($gp)
    ctx->pc = 0x48d2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937072), GPR_U32(ctx, 2));
    // 0x48d2d4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x48d2d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x48d2d8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x48d2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x48d2dc: 0xaf8289ac  sw          $v0, -0x7654($gp)
    ctx->pc = 0x48d2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937004), GPR_U32(ctx, 2));
    // 0x48d2e0: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x48D2E0u;
    {
        const bool branch_taken_0x48d2e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48D2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D2E0u;
        // 0x48d2e4: 0xaf8389f4  sw          $v1, -0x760C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937076), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d2e0) {
            ctx->pc = 0x48D3D4u;
            goto label_48d3d4;
        }
    }
    ctx->pc = 0x48D2E8u;
label_48d2e8:
    // 0x48d2e8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x48d2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x48d2ec: 0x72027  nor         $a0, $zero, $a3
    ctx->pc = 0x48d2ecu;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 7)));
    // 0x48d2f0: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x48d2f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x48d2f4: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x48d2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x48d2f8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x48d2f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x48d2fc: 0xc123024  jal         func_48C090
    ctx->pc = 0x48D2FCu;
    SET_GPR_U32(ctx, 31, 0x48D304u);
    ctx->pc = 0x48D300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48D2FCu;
    // 0x48d300: 0x62800b  movn        $s0, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C090u, 0x48D2FCu, 0x48D304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48D304u;
label_48d304:
    // 0x48d304: 0x8f8289e0  lw          $v0, -0x7620($gp)
    ctx->pc = 0x48d304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937056)));
    // 0x48d308: 0x8f8789e4  lw          $a3, -0x761C($gp)
    ctx->pc = 0x48d308u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937060)));
    // 0x48d30c: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x48d30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x48d310: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x48d310u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x48d314: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x48D314u;
    {
        const bool branch_taken_0x48d314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x48D318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D314u;
        // 0x48d318: 0x8f8589dc  lw          $a1, -0x7624($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937052)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d314) {
            ctx->pc = 0x48D368u;
            goto label_48d368;
        }
    }
    ctx->pc = 0x48D31Cu;
    // 0x48d31c: 0x8f8289dc  lw          $v0, -0x7624($gp)
    ctx->pc = 0x48d31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937052)));
    // 0x48d320: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x48d320u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x48d324: 0x3463ffc0  ori         $v1, $v1, 0xFFC0
    ctx->pc = 0x48d324u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65472);
    // 0x48d328: 0x8f8489d8  lw          $a0, -0x7628($gp)
    ctx->pc = 0x48d328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937048)));
    // 0x48d32c: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x48d32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x48d330: 0x432824  and         $a1, $v0, $v1
    ctx->pc = 0x48d330u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x48d334: 0x24a60080  addiu       $a2, $a1, 0x80
    ctx->pc = 0x48d334u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x48d338: 0xc4202b  sltu        $a0, $a2, $a0
    ctx->pc = 0x48d338u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x48d33c: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x48D33Cu;
    {
        const bool branch_taken_0x48d33c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x48D340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D33Cu;
        // 0x48d340: 0x24a20078  addiu       $v0, $a1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d33c) {
            ctx->pc = 0x48D364u;
            goto label_48d364;
        }
    }
    ctx->pc = 0x48D344u;
    // 0x48d344: 0xaf8689dc  sw          $a2, -0x7624($gp)
    ctx->pc = 0x48d344u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937052), GPR_U32(ctx, 6));
    // 0x48d348: 0xaf8289e0  sw          $v0, -0x7620($gp)
    ctx->pc = 0x48d348u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937056), GPR_U32(ctx, 2));
    // 0x48d34c: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x48d34cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x48d350: 0xace50004  sw          $a1, 0x4($a3)
    ctx->pc = 0x48d350u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 5));
    // 0x48d354: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x48d354u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x48d358: 0xaf8589e4  sw          $a1, -0x761C($gp)
    ctx->pc = 0x48d358u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937060), GPR_U32(ctx, 5));
    // 0x48d35c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x48D35Cu;
    {
        const bool branch_taken_0x48d35c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48D360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D35Cu;
        // 0x48d360: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d35c) {
            ctx->pc = 0x48D368u;
            goto label_48d368;
        }
    }
    ctx->pc = 0x48D364u;
label_48d364:
    // 0x48d364: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x48d364u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48d368:
    // 0x48d368: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x48d368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x48d36c: 0x10a0001b  beqz        $a1, . + 4 + (0x1B << 2)
    ctx->pc = 0x48D36Cu;
    {
        const bool branch_taken_0x48d36c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x48D370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D36Cu;
        // 0x48d370: 0x51800b  movn        $s0, $v0, $s1 (Delay Slot)
        if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d36c) {
            ctx->pc = 0x48D3DCu;
            goto label_48d3dc;
        }
    }
    ctx->pc = 0x48D374u;
    // 0x48d374: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x48d374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x48d378: 0x24a4007f  addiu       $a0, $a1, 0x7F
    ctx->pc = 0x48d378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 127));
    // 0x48d37c: 0x3463ff80  ori         $v1, $v1, 0xFF80
    ctx->pc = 0x48d37cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65408);
    // 0x48d380: 0x102900  sll         $a1, $s0, 4
    ctx->pc = 0x48d380u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x48d384: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x48d384u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x48d388: 0x8f8289d8  lw          $v0, -0x7628($gp)
    ctx->pc = 0x48d388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937048)));
    // 0x48d38c: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x48d38cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x48d390: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x48d390u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x48d394: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x48D394u;
    {
        const bool branch_taken_0x48d394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48d394) {
            ctx->pc = 0x48D398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x48D394u;
            // 0x48d398: 0x2604ffff  addiu       $a0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x48D3E0u;
            goto label_48d3e0;
        }
    }
    ctx->pc = 0x48D39Cu;
    // 0x48d39c: 0x8f8289a8  lw          $v0, -0x7658($gp)
    ctx->pc = 0x48d39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x48d3a0: 0x24031101  addiu       $v1, $zero, 0x1101
    ctx->pc = 0x48d3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4353));
    // 0x48d3a4: 0xaf8589dc  sw          $a1, -0x7624($gp)
    ctx->pc = 0x48d3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937052), GPR_U32(ctx, 5));
    // 0x48d3a8: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x48d3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x48d3ac: 0xaf8389f4  sw          $v1, -0x760C($gp)
    ctx->pc = 0x48d3acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937076), GPR_U32(ctx, 3));
    // 0x48d3b0: 0xaf8489e8  sw          $a0, -0x7618($gp)
    ctx->pc = 0x48d3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937064), GPR_U32(ctx, 4));
    // 0x48d3b4: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x48D3B4u;
    {
        const bool branch_taken_0x48d3b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x48D3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D3B4u;
        // 0x48d3b8: 0xaf8489ac  sw          $a0, -0x7654($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937004), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d3b4) {
            ctx->pc = 0x48D3D4u;
            goto label_48d3d4;
        }
    }
    ctx->pc = 0x48D3BCu;
    // 0x48d3bc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x48d3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x48d3c0: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x48d3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x48d3c4: 0x34421101  ori         $v0, $v0, 0x1101
    ctx->pc = 0x48d3c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4353);
    // 0x48d3c8: 0xaf8389ac  sw          $v1, -0x7654($gp)
    ctx->pc = 0x48d3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937004), GPR_U32(ctx, 3));
    // 0x48d3cc: 0xaf8289f4  sw          $v0, -0x760C($gp)
    ctx->pc = 0x48d3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937076), GPR_U32(ctx, 2));
    // 0x48d3d0: 0xaf8489f0  sw          $a0, -0x7610($gp)
    ctx->pc = 0x48d3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937072), GPR_U32(ctx, 4));
label_48d3d4:
    // 0x48d3d4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x48D3D4u;
    {
        const bool branch_taken_0x48d3d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48D3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D3D4u;
        // 0x48d3d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d3d4) {
            ctx->pc = 0x48D40Cu;
            goto label_48d40c;
        }
    }
    ctx->pc = 0x48D3DCu;
label_48d3dc:
    // 0x48d3dc: 0x2604ffff  addiu       $a0, $s0, -0x1
    ctx->pc = 0x48d3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_48d3e0:
    // 0x48d3e0: 0x8f8389c8  lw          $v1, -0x7638($gp)
    ctx->pc = 0x48d3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937032)));
    // 0x48d3e4: 0x91800b  movn        $s0, $a0, $s1
    ctx->pc = 0x48d3e4u;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
    // 0x48d3e8: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x48d3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x48d3ec: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x48d3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x48d3f0: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x48d3f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x48d3f4: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x48D3F4u;
    {
        const bool branch_taken_0x48d3f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x48D3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D3F4u;
        // 0x48d3f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d3f4) {
            ctx->pc = 0x48D40Cu;
            goto label_48d40c;
        }
    }
    ctx->pc = 0x48D3FCu;
    // 0x48d3fc: 0xc123142  jal         func_48C508
    ctx->pc = 0x48D3FCu;
    SET_GPR_U32(ctx, 31, 0x48D404u);
    ctx->pc = 0x48D400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48D3FCu;
    // 0x48d400: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48C508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C508u, 0x48D3FCu, 0x48D404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48D404u;
label_48d404:
    // 0x48d404: 0x1000fedf  b           . + 4 + (-0x121 << 2)
    ctx->pc = 0x48D404u;
    {
        const bool branch_taken_0x48d404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48D408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D404u;
        // 0x48d408: 0x8f8489f4  lw          $a0, -0x760C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937076)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d404) {
            ctx->pc = 0x48CF84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48cf84;
        }
    }
    ctx->pc = 0x48D40Cu;
label_48d40c:
    // 0x48d40c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x48d40cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48d410: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48d410u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48d414: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48d414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48d418: 0x3e00008  jr          $ra
    ctx->pc = 0x48D418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48D41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D418u;
        // 0x48d41c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48D418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48D420u;
}
