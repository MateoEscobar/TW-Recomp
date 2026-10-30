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

// Function: sub_004B5A20
// Address: 0x4b5a20 - 0x4b5c38
void sub_004B5A20_0x4b5a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B5A20_0x4b5a20");
#endif

    switch (ctx->pc) {
        case 0x4b5ab0u: goto label_4b5ab0;
        case 0x4b5b28u: goto label_4b5b28;
        case 0x4b5b54u: goto label_4b5b54;
        case 0x4b5b70u: goto label_4b5b70;
        case 0x4b5be8u: goto label_4b5be8;
        default: break;
    }

    ctx->pc = 0x4b5a20u;

    // 0x4b5a20: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x4b5a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x4b5a24: 0xa0702d  daddu       $t6, $a1, $zero
    ctx->pc = 0x4b5a24u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b5a28: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x4b5a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x4b5a2c: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x4b5a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x4b5a30: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4b5a30u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b5a34: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x4b5a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x4b5a38: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x4b5a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x4b5a3c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x4b5a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x4b5a40: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4b5a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4b5a44: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x4b5a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x4b5a48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b5a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4b5a4c: 0x8dd00010  lw          $s0, 0x10($t6)
    ctx->pc = 0x4b5a4cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x4b5a50: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x4b5a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x4b5a54: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x4b5a54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x4b5a58: 0x1440006c  bnez        $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x4B5A58u;
    {
        const bool branch_taken_0x4b5a58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B5A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B5A58u;
        // 0x4b5a5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b5a58) {
            ctx->pc = 0x4B5C0Cu;
            goto label_4b5c0c;
        }
    }
    ctx->pc = 0x4B5A60u;
    // 0x4b5a60: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x4b5a60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x4b5a64: 0x25cb0014  addiu       $t3, $t6, 0x14
    ctx->pc = 0x4b5a64u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 14), 20));
    // 0x4b5a68: 0x103880  sll         $a3, $s0, 2
    ctx->pc = 0x4b5a68u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x4b5a6c: 0x26910014  addiu       $s1, $s4, 0x14
    ctx->pc = 0x4b5a6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
    // 0x4b5a70: 0x1679821  addu        $s3, $t3, $a3
    ctx->pc = 0x4b5a70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x4b5a74: 0x2274021  addu        $t0, $s1, $a3
    ctx->pc = 0x4b5a74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x4b5a78: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x4b5a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4b5a7c: 0x8d0d0000  lw          $t5, 0x0($t0)
    ctx->pc = 0x4b5a7cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4b5a80: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x4b5a80u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b5a84: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4b5a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4b5a88: 0x1a2001b  divu        $zero, $t5, $v0
    ctx->pc = 0x4b5a88u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 13) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 13) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,13); } }
    // 0x4b5a8c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x4B5A8Cu;
    {
        const bool branch_taken_0x4b5a8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b5a8c) {
            ctx->pc = 0x4B5A90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B5A8Cu;
            // 0x4b5a90: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B5A94u;
            goto label_4b5a94;
        }
    }
    ctx->pc = 0x4B5A94u;
label_4b5a94:
    // 0x4b5a94: 0xa812  mflo        $s5
    ctx->pc = 0x4b5a94u;
    SET_GPR_U64(ctx, 21, ctx->lo);
    // 0x4b5a98: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x4b5a98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b5a9c: 0x1240002a  beqz        $s2, . + 4 + (0x2A << 2)
    ctx->pc = 0x4B5A9Cu;
    {
        const bool branch_taken_0x4b5a9c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B5AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B5A9Cu;
        // 0x4b5aa0: 0x160b02d  daddu       $s6, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b5a9c) {
            ctx->pc = 0x4B5B48u;
            goto label_4b5b48;
        }
    }
    ctx->pc = 0x4B5AA4u;
    // 0x4b5aa4: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x4b5aa4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b5aa8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x4b5aa8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b5aac: 0x0  nop
    ctx->pc = 0x4b5aacu;
    // NOP
label_4b5ab0:
    // 0x4b5ab0: 0x8d640000  lw          $a0, 0x0($t3)
    ctx->pc = 0x4b5ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4b5ab4: 0x8d460000  lw          $a2, 0x0($t2)
    ctx->pc = 0x4b5ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4b5ab8: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x4b5ab8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x4b5abc: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x4b5abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x4b5ac0: 0x26b382b  sltu        $a3, $s3, $t3
    ctx->pc = 0x4b5ac0u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x4b5ac4: 0x522818  mult        $a1, $v0, $s2
    ctx->pc = 0x4b5ac4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x4b5ac8: 0x42402  srl         $a0, $a0, 16
    ctx->pc = 0x4b5ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x4b5acc: 0x922018  mult        $a0, $a0, $s2
    ctx->pc = 0x4b5accu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x4b5ad0: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x4b5ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x4b5ad4: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x4b5ad4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4b5ad8: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x4b5ad8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x4b5adc: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x4b5adcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4b5ae0: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x4b5ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4b5ae4: 0x824821  addu        $t1, $a0, $v0
    ctx->pc = 0x4b5ae4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4b5ae8: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x4b5ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x4b5aec: 0x63402  srl         $a2, $a2, 16
    ctx->pc = 0x4b5aecu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 16));
    // 0x4b5af0: 0x3122ffff  andi        $v0, $t1, 0xFFFF
    ctx->pc = 0x4b5af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x4b5af4: 0x36403  sra         $t4, $v1, 16
    ctx->pc = 0x4b5af4u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4b5af8: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x4b5af8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4b5afc: 0xcc2821  addu        $a1, $a2, $t4
    ctx->pc = 0x4b5afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x4b5b00: 0xa5430000  sh          $v1, 0x0($t2)
    ctx->pc = 0x4b5b00u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b5b04: 0xa5450002  sh          $a1, 0x2($t2)
    ctx->pc = 0x4b5b04u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x4b5b08: 0x91c02  srl         $v1, $t1, 16
    ctx->pc = 0x4b5b08u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x4b5b0c: 0x56403  sra         $t4, $a1, 16
    ctx->pc = 0x4b5b0cu;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 5), 16));
    // 0x4b5b10: 0x10e0ffe7  beqz        $a3, . + 4 + (-0x19 << 2)
    ctx->pc = 0x4B5B10u;
    {
        const bool branch_taken_0x4b5b10 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B5B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B5B10u;
        // 0x4b5b14: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b5b10) {
            ctx->pc = 0x4B5AB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b5ab0;
        }
    }
    ctx->pc = 0x4B5B18u;
    // 0x4b5b18: 0x15a0000c  bnez        $t5, . + 4 + (0xC << 2)
    ctx->pc = 0x4B5B18u;
    {
        const bool branch_taken_0x4b5b18 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B5B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B5B18u;
        // 0x4b5b1c: 0x1c0282d  daddu       $a1, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b5b18) {
            ctx->pc = 0x4B5B4Cu;
            goto label_4b5b4c;
        }
    }
    ctx->pc = 0x4B5B20u;
    // 0x4b5b20: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4B5B20u;
    {
        const bool branch_taken_0x4b5b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B5B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B5B20u;
        // 0x4b5b24: 0x2508fffc  addiu       $t0, $t0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b5b20) {
            ctx->pc = 0x4B5B2Cu;
            goto label_4b5b2c;
        }
    }
    ctx->pc = 0x4B5B28u;
label_4b5b28:
    // 0x4b5b28: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x4b5b28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_4b5b2c:
    // 0x4b5b2c: 0x228102b  sltu        $v0, $s1, $t0
    ctx->pc = 0x4b5b2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x4b5b30: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B5B30u;
    {
        const bool branch_taken_0x4b5b30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b5b30) {
            ctx->pc = 0x4B5B34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B5B30u;
            // 0x4b5b34: 0xae900010  sw          $s0, 0x10($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B5B48u;
            goto label_4b5b48;
        }
    }
    ctx->pc = 0x4B5B38u;
    // 0x4b5b38: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4b5b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4b5b3c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4B5B3Cu;
    {
        const bool branch_taken_0x4b5b3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B5B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B5B3Cu;
        // 0x4b5b40: 0x2508fffc  addiu       $t0, $t0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b5b3c) {
            ctx->pc = 0x4B5B28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b5b28;
        }
    }
    ctx->pc = 0x4B5B44u;
    // 0x4b5b44: 0xae900010  sw          $s0, 0x10($s4)
    ctx->pc = 0x4b5b44u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 16));
label_4b5b48:
    // 0x4b5b48: 0x1c0282d  daddu       $a1, $t6, $zero
    ctx->pc = 0x4b5b48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_4b5b4c:
    // 0x4b5b4c: 0xc12d132  jal         func_4B44C8
    ctx->pc = 0x4B5B4Cu;
    SET_GPR_U32(ctx, 31, 0x4B5B54u);
    ctx->pc = 0x4B5B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B5B4Cu;
    // 0x4b5b50: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B44C8u, 0x4B5B4Cu, 0x4B5B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B5B54u;
label_4b5b54:
    // 0x4b5b54: 0x440002c  bltz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x4B5B54u;
    {
        const bool branch_taken_0x4b5b54 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4B5B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B5B54u;
        // 0x4b5b58: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b5b54) {
            ctx->pc = 0x4B5C08u;
            goto label_4b5c08;
        }
    }
    ctx->pc = 0x4B5B5Cu;
    // 0x4b5b5c: 0x26b20001  addiu       $s2, $s5, 0x1
    ctx->pc = 0x4b5b5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x4b5b60: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x4b5b60u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b5b64: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x4b5b64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b5b68: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x4b5b68u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b5b6c: 0x103880  sll         $a3, $s0, 2
    ctx->pc = 0x4b5b6cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_4b5b70:
    // 0x4b5b70: 0x8d640000  lw          $a0, 0x0($t3)
    ctx->pc = 0x4b5b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4b5b74: 0x8d450000  lw          $a1, 0x0($t2)
    ctx->pc = 0x4b5b74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4b5b78: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x4b5b78u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x4b5b7c: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x4b5b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x4b5b80: 0x43402  srl         $a2, $a0, 16
    ctx->pc = 0x4b5b80u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x4b5b84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4b5b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4b5b88: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x4b5b88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4b5b8c: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x4b5b8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x4b5b90: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x4b5b90u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4b5b94: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x4b5b94u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4b5b98: 0xc24821  addu        $t1, $a2, $v0
    ctx->pc = 0x4b5b98u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4b5b9c: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x4b5b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x4b5ba0: 0x3122ffff  andi        $v0, $t1, 0xFFFF
    ctx->pc = 0x4b5ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x4b5ba4: 0x52c02  srl         $a1, $a1, 16
    ctx->pc = 0x4b5ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x4b5ba8: 0x36403  sra         $t4, $v1, 16
    ctx->pc = 0x4b5ba8u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4b5bac: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x4b5bacu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4b5bb0: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x4b5bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x4b5bb4: 0xa5430000  sh          $v1, 0x0($t2)
    ctx->pc = 0x4b5bb4u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b5bb8: 0xa5450002  sh          $a1, 0x2($t2)
    ctx->pc = 0x4b5bb8u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x4b5bbc: 0x91c02  srl         $v1, $t1, 16
    ctx->pc = 0x4b5bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x4b5bc0: 0x56403  sra         $t4, $a1, 16
    ctx->pc = 0x4b5bc0u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 5), 16));
    // 0x4b5bc4: 0x26b102b  sltu        $v0, $s3, $t3
    ctx->pc = 0x4b5bc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x4b5bc8: 0x1040ffe9  beqz        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x4B5BC8u;
    {
        const bool branch_taken_0x4b5bc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B5BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B5BC8u;
        // 0x4b5bcc: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b5bc8) {
            ctx->pc = 0x4B5B70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b5b70;
        }
    }
    ctx->pc = 0x4B5BD0u;
    // 0x4b5bd0: 0x2274021  addu        $t0, $s1, $a3
    ctx->pc = 0x4b5bd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x4b5bd4: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4b5bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4b5bd8: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4B5BD8u;
    {
        const bool branch_taken_0x4b5bd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B5BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B5BD8u;
        // 0x4b5bdc: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b5bd8) {
            ctx->pc = 0x4B5C0Cu;
            goto label_4b5c0c;
        }
    }
    ctx->pc = 0x4B5BE0u;
    // 0x4b5be0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4B5BE0u;
    {
        const bool branch_taken_0x4b5be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B5BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B5BE0u;
        // 0x4b5be4: 0x2508fffc  addiu       $t0, $t0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b5be0) {
            ctx->pc = 0x4B5BECu;
            goto label_4b5bec;
        }
    }
    ctx->pc = 0x4B5BE8u;
label_4b5be8:
    // 0x4b5be8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x4b5be8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_4b5bec:
    // 0x4b5bec: 0x228102b  sltu        $v0, $s1, $t0
    ctx->pc = 0x4b5becu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x4b5bf0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B5BF0u;
    {
        const bool branch_taken_0x4b5bf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b5bf0) {
            ctx->pc = 0x4B5BF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B5BF0u;
            // 0x4b5bf4: 0xae900010  sw          $s0, 0x10($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B5C08u;
            goto label_4b5c08;
        }
    }
    ctx->pc = 0x4B5BF8u;
    // 0x4b5bf8: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4b5bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4b5bfc: 0x5040fffa  beql        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4B5BFCu;
    {
        const bool branch_taken_0x4b5bfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b5bfc) {
            ctx->pc = 0x4B5C00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B5BFCu;
            // 0x4b5c00: 0x2508fffc  addiu       $t0, $t0, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B5BE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b5be8;
        }
    }
    ctx->pc = 0x4B5C04u;
    // 0x4b5c04: 0xae900010  sw          $s0, 0x10($s4)
    ctx->pc = 0x4b5c04u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 16));
label_4b5c08:
    // 0x4b5c08: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x4b5c08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4b5c0c:
    // 0x4b5c0c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x4b5c0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4b5c10: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x4b5c10u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4b5c14: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x4b5c14u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4b5c18: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x4b5c18u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b5c1c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x4b5c1cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b5c20: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4b5c20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b5c24: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x4b5c24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b5c28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b5c28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b5c2c: 0x3e00008  jr          $ra
    ctx->pc = 0x4B5C2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B5C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B5C2Cu;
        // 0x4b5c30: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B5C2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B5C34u;
    // 0x4b5c34: 0x0  nop
    ctx->pc = 0x4b5c34u;
    // NOP
    ctx->pc = 0x4b5c38u;
}
