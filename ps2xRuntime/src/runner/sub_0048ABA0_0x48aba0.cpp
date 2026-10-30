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

// Function: sub_0048ABA0
// Address: 0x48aba0 - 0x48b200
void sub_0048ABA0_0x48aba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048ABA0_0x48aba0");
#endif

    switch (ctx->pc) {
        case 0x48ac48u: goto label_48ac48;
        case 0x48ac80u: goto label_48ac80;
        case 0x48ad3cu: goto label_48ad3c;
        case 0x48adc0u: goto label_48adc0;
        case 0x48adf8u: goto label_48adf8;
        case 0x48aea4u: goto label_48aea4;
        case 0x48af70u: goto label_48af70;
        case 0x48afa8u: goto label_48afa8;
        case 0x48b068u: goto label_48b068;
        case 0x48b0b8u: goto label_48b0b8;
        case 0x48b0f0u: goto label_48b0f0;
        case 0x48b1a0u: goto label_48b1a0;
        default: break;
    }

    ctx->pc = 0x48aba0u;

    // 0x48aba0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x48aba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x48aba4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x48aba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48aba8: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x48aba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
    // 0x48abac: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x48abacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x48abb0: 0x120f02d  daddu       $fp, $t1, $zero
    ctx->pc = 0x48abb0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48abb4: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x48abb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x48abb8: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x48abb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x48abbc: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x48abbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x48abc0: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x48abc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x48abc4: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x48abc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x48abc8: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x48abc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x48abcc: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x48abccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
    // 0x48abd0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x48abd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x48abd4: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x48abd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x48abd8: 0xafa80004  sw          $t0, 0x4($sp)
    ctx->pc = 0x48abd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 8));
    // 0x48abdc: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x48abdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x48abe0: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x48abe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x48abe4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x48abe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x48abe8: 0x14c200c9  bne         $a2, $v0, . + 4 + (0xC9 << 2)
    ctx->pc = 0x48ABE8u;
    {
        const bool branch_taken_0x48abe8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x48ABECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48ABE8u;
        // 0x48abec: 0x8fc50014  lw          $a1, 0x14($fp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48abe8) {
            ctx->pc = 0x48AF10u;
            goto label_48af10;
        }
    }
    ctx->pc = 0x48ABF0u;
    // 0x48abf0: 0x14e300c8  bne         $a3, $v1, . + 4 + (0xC8 << 2)
    ctx->pc = 0x48ABF0u;
    {
        const bool branch_taken_0x48abf0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        ctx->pc = 0x48ABF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48ABF0u;
        // 0x48abf4: 0x8fc3000c  lw          $v1, 0xC($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48abf0) {
            ctx->pc = 0x48AF14u;
            goto label_48af14;
        }
    }
    ctx->pc = 0x48ABF8u;
    // 0x48abf8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x48abf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x48abfc: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x48ABFCu;
    {
        const bool branch_taken_0x48abfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x48AC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48ABFCu;
        // 0x48ac00: 0x28620009  slti        $v0, $v1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x48abfc) {
            ctx->pc = 0x48AC2Cu;
            goto label_48ac2c;
        }
    }
    ctx->pc = 0x48AC04u;
    // 0x48ac04: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x48AC04u;
    {
        const bool branch_taken_0x48ac04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48ac04) {
            ctx->pc = 0x48AC08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x48AC04u;
            // 0x48ac08: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
            ctx->in_delay_slot = false;
            ctx->pc = 0x48AC1Cu;
            goto label_48ac1c;
        }
    }
    ctx->pc = 0x48AC0Cu;
    // 0x48ac0c: 0x10660007  beq         $v1, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x48AC0Cu;
    {
        const bool branch_taken_0x48ac0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x48AC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48AC0Cu;
        // 0x48ac10: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ac0c) {
            ctx->pc = 0x48AC2Cu;
            goto label_48ac2c;
        }
    }
    ctx->pc = 0x48AC14u;
    // 0x48ac14: 0x1000016d  b           . + 4 + (0x16D << 2)
    ctx->pc = 0x48AC14u;
    {
        const bool branch_taken_0x48ac14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48AC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48AC14u;
        // 0x48ac18: 0x7bb100c0  lq          $s1, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ac14) {
            ctx->pc = 0x48B1CCu;
            goto label_48b1cc;
        }
    }
    ctx->pc = 0x48AC1Cu;
label_48ac1c:
    // 0x48ac1c: 0x10620062  beq         $v1, $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x48AC1Cu;
    {
        const bool branch_taken_0x48ac1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x48AC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48AC1Cu;
        // 0x48ac20: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ac1c) {
            ctx->pc = 0x48ADA8u;
            goto label_48ada8;
        }
    }
    ctx->pc = 0x48AC24u;
    // 0x48ac24: 0x10000169  b           . + 4 + (0x169 << 2)
    ctx->pc = 0x48AC24u;
    {
        const bool branch_taken_0x48ac24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48AC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48AC24u;
        // 0x48ac28: 0x7bb100c0  lq          $s1, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ac24) {
            ctx->pc = 0x48B1CCu;
            goto label_48b1cc;
        }
    }
    ctx->pc = 0x48AC2Cu;
label_48ac2c:
    // 0x48ac2c: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x48ac2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x48ac30: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x48ac30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x48ac34: 0x8fc60018  lw          $a2, 0x18($fp)
    ctx->pc = 0x48ac34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x48ac38: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x48ac38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x48ac3c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x48ac3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x48ac40: 0x10620160  beq         $v1, $v0, . + 4 + (0x160 << 2)
    ctx->pc = 0x48AC40u;
    {
        const bool branch_taken_0x48ac40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x48AC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48AC40u;
        // 0x48ac44: 0xafa6000c  sw          $a2, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ac40) {
            ctx->pc = 0x48B1C4u;
            goto label_48b1c4;
        }
    }
    ctx->pc = 0x48AC48u;
label_48ac48:
    // 0x48ac48: 0x2477ffff  addiu       $s7, $v1, -0x1
    ctx->pc = 0x48ac48u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x48ac4c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x48ac4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x48ac50: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x48ac50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48ac54: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x48ac54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48ac58: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x48ac58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48ac5c: 0x8fd20004  lw          $s2, 0x4($fp)
    ctx->pc = 0x48ac5cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x48ac60: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x48ac60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48ac64: 0x202b021  addu        $s6, $s0, $v0
    ctx->pc = 0x48ac64u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x48ac68: 0x12400047  beqz        $s2, . + 4 + (0x47 << 2)
    ctx->pc = 0x48AC68u;
    {
        const bool branch_taken_0x48ac68 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x48AC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48AC68u;
        // 0x48ac6c: 0x223a821  addu        $s5, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ac68) {
            ctx->pc = 0x48AD88u;
            goto label_48ad88;
        }
    }
    ctx->pc = 0x48AC70u;
    // 0x48ac70: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x48ac70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x48ac74: 0x2454ee08  addiu       $s4, $v0, -0x11F8
    ctx->pc = 0x48ac74u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962696));
    // 0x48ac78: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x48ac78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x48ac7c: 0x0  nop
    ctx->pc = 0x48ac7cu;
    // NOP
label_48ac80:
    // 0x48ac80: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x48ac80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x48ac84: 0x8fa6000c  lw          $a2, 0xC($sp)
    ctx->pc = 0x48ac84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x48ac88: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x48ac88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x48ac8c: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x48ac8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x48ac90: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x48ac90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x48ac94: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x48ac94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x48ac98: 0x8f888668  lw          $t0, -0x7998($gp)
    ctx->pc = 0x48ac98u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936168)));
    // 0x48ac9c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x48ac9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x48aca0: 0x90440001  lbu         $a0, 0x1($v0)
    ctx->pc = 0x48aca0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x48aca4: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x48aca4u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x48aca8: 0x8ca94000  lw          $t1, 0x4000($a1)
    ctx->pc = 0x48aca8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16384)));
    // 0x48acac: 0xe31807  srav        $v1, $v1, $a3
    ctx->pc = 0x48acacu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 7) & 0x1F));
    // 0x48acb0: 0x90450002  lbu         $a1, 0x2($v0)
    ctx->pc = 0x48acb0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x48acb4: 0xe42007  srav        $a0, $a0, $a3
    ctx->pc = 0x48acb4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 7) & 0x1F));
    // 0x48acb8: 0x90460003  lbu         $a2, 0x3($v0)
    ctx->pc = 0x48acb8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x48acbc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x48acbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x48acc0: 0xe52807  srav        $a1, $a1, $a3
    ctx->pc = 0x48acc0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 7) & 0x1F));
    // 0x48acc4: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x48acc4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x48acc8: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x48acc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x48accc: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x48acccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x48acd0: 0xe63007  srav        $a2, $a2, $a3
    ctx->pc = 0x48acd0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 7) & 0x1F));
    // 0x48acd4: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x48acd4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x48acd8: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x48acd8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x48acdc: 0xb42821  addu        $a1, $a1, $s4
    ctx->pc = 0x48acdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x48ace0: 0xdc870000  ld          $a3, 0x0($a0)
    ctx->pc = 0x48ace0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x48ace4: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x48ace4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x48ace8: 0xdca40000  ld          $a0, 0x0($a1)
    ctx->pc = 0x48ace8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x48acec: 0x210f8  dsll        $v0, $v0, 3
    ctx->pc = 0x48acecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 3);
    // 0x48acf0: 0x738b8  dsll        $a3, $a3, 2
    ctx->pc = 0x48acf0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 2);
    // 0x48acf4: 0xd43021  addu        $a2, $a2, $s4
    ctx->pc = 0x48acf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 20)));
    // 0x48acf8: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x48acf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x48acfc: 0x42078  dsll        $a0, $a0, 1
    ctx->pc = 0x48acfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 1);
    // 0x48ad00: 0xdcc30000  ld          $v1, 0x0($a2)
    ctx->pc = 0x48ad00u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x48ad04: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x48ad04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x48ad08: 0x15000003  bnez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x48AD08u;
    {
        const bool branch_taken_0x48ad08 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x48AD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48AD08u;
        // 0x48ad0c: 0x432825  or          $a1, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ad08) {
            ctx->pc = 0x48AD18u;
            goto label_48ad18;
        }
    }
    ctx->pc = 0x48AD10u;
    // 0x48ad10: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x48AD10u;
    {
        const bool branch_taken_0x48ad10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48AD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48AD10u;
        // 0x48ad14: 0x91220018  lbu         $v0, 0x18($t1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ad10) {
            ctx->pc = 0x48AD3Cu;
            goto label_48ad3c;
        }
    }
    ctx->pc = 0x48AD18u;
label_48ad18:
    // 0x48ad18: 0x30a2000f  andi        $v0, $a1, 0xF
    ctx->pc = 0x48ad18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x48ad1c: 0x2506ffff  addiu       $a2, $t0, -0x1
    ctx->pc = 0x48ad1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x48ad20: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x48ad20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x48ad24: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x48ad24u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x48ad28: 0x5293a  dsrl        $a1, $a1, 4
    ctx->pc = 0x48ad28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 4);
    // 0x48ad2c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x48ad2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x48ad30: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x48ad30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x48ad34: 0xc122d88  jal         func_48B620
    ctx->pc = 0x48AD34u;
    SET_GPR_U32(ctx, 31, 0x48AD3Cu);
    ctx->pc = 0x48AD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48AD34u;
    // 0x48ad38: 0x8c44001c  lw          $a0, 0x1C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B620u, 0x48AD34u, 0x48AD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48AD3Cu;
label_48ad3c:
    // 0x48ad3c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x48ad3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x48ad40: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x48ad40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x48ad44: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x48AD44u;
    {
        const bool branch_taken_0x48ad44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48AD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48AD44u;
        // 0x48ad48: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ad44) {
            ctx->pc = 0x48AD68u;
            goto label_48ad68;
        }
    }
    ctx->pc = 0x48AD4Cu;
    // 0x48ad4c: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x48ad4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x48ad50: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x48ad50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x48ad54: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x48ad54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x48ad58: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x48ad58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x48ad5c: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x48ad5cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x48ad60: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x48AD60u;
    {
        const bool branch_taken_0x48ad60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48AD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48AD60u;
        // 0x48ad64: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ad60) {
            ctx->pc = 0x48AD78u;
            goto label_48ad78;
        }
    }
    ctx->pc = 0x48AD68u;
label_48ad68:
    // 0x48ad68: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x48ad68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x48ad6c: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x48ad6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x48ad70: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x48ad70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x48ad74: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x48ad74u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_48ad78:
    // 0x48ad78: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x48ad78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x48ad7c: 0x272102b  sltu        $v0, $s3, $s2
    ctx->pc = 0x48ad7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x48ad80: 0x5440ffbf  bnel        $v0, $zero, . + 4 + (-0x41 << 2)
    ctx->pc = 0x48AD80u;
    {
        const bool branch_taken_0x48ad80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48ad80) {
            ctx->pc = 0x48AD84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x48AD80u;
            // 0x48ad84: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x48AC80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48ac80;
        }
    }
    ctx->pc = 0x48AD88u;
label_48ad88:
    // 0x48ad88: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x48ad88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x48ad8c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x48ad8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48ad90: 0x2e0182d  daddu       $v1, $s7, $zero
    ctx->pc = 0x48ad90u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48ad94: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x48ad94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x48ad98: 0x1462ffab  bne         $v1, $v0, . + 4 + (-0x55 << 2)
    ctx->pc = 0x48AD98u;
    {
        const bool branch_taken_0x48ad98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x48AD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48AD98u;
        // 0x48ad9c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ad98) {
            ctx->pc = 0x48AC48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48ac48;
        }
    }
    ctx->pc = 0x48ADA0u;
    // 0x48ada0: 0x10000109  b           . + 4 + (0x109 << 2)
    ctx->pc = 0x48ADA0u;
    {
        const bool branch_taken_0x48ada0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48ADA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48ADA0u;
        // 0x48ada4: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ada0) {
            ctx->pc = 0x48B1C8u;
            goto label_48b1c8;
        }
    }
    ctx->pc = 0x48ADA8u;
label_48ada8:
    // 0x48ada8: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x48ada8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x48adac: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x48adacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x48adb0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x48adb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x48adb4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x48adb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x48adb8: 0x10620104  beq         $v1, $v0, . + 4 + (0x104 << 2)
    ctx->pc = 0x48ADB8u;
    {
        const bool branch_taken_0x48adb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x48ADBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48ADB8u;
        // 0x48adbc: 0x7bb100c0  lq          $s1, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48adb8) {
            ctx->pc = 0x48B1CCu;
            goto label_48b1cc;
        }
    }
    ctx->pc = 0x48ADC0u;
label_48adc0:
    // 0x48adc0: 0x2477ffff  addiu       $s7, $v1, -0x1
    ctx->pc = 0x48adc0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x48adc4: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x48adc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x48adc8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x48adc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48adcc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x48adccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48add0: 0x8fd20004  lw          $s2, 0x4($fp)
    ctx->pc = 0x48add0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x48add4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x48add4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48add8: 0xa2b021  addu        $s6, $a1, $v0
    ctx->pc = 0x48add8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x48addc: 0x12400044  beqz        $s2, . + 4 + (0x44 << 2)
    ctx->pc = 0x48ADDCu;
    {
        const bool branch_taken_0x48addc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x48ADE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48ADDCu;
        // 0x48ade0: 0x223a821  addu        $s5, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48addc) {
            ctx->pc = 0x48AEF0u;
            goto label_48aef0;
        }
    }
    ctx->pc = 0x48ADE4u;
    // 0x48ade4: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x48ade4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x48ade8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x48ade8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48adec: 0x2454ee08  addiu       $s4, $v0, -0x11F8
    ctx->pc = 0x48adecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962696));
    // 0x48adf0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x48adf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x48adf4: 0x0  nop
    ctx->pc = 0x48adf4u;
    // NOP
label_48adf8:
    // 0x48adf8: 0x8f888668  lw          $t0, -0x7998($gp)
    ctx->pc = 0x48adf8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936168)));
    // 0x48adfc: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x48adfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x48ae00: 0x9203fffc  lbu         $v1, -0x4($s0)
    ctx->pc = 0x48ae00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294967292)));
    // 0x48ae04: 0x9204fffd  lbu         $a0, -0x3($s0)
    ctx->pc = 0x48ae04u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294967293)));
    // 0x48ae08: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x48ae08u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x48ae0c: 0x9205fffe  lbu         $a1, -0x2($s0)
    ctx->pc = 0x48ae0cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294967294)));
    // 0x48ae10: 0xe31807  srav        $v1, $v1, $a3
    ctx->pc = 0x48ae10u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 7) & 0x1F));
    // 0x48ae14: 0xe42007  srav        $a0, $a0, $a3
    ctx->pc = 0x48ae14u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 7) & 0x1F));
    // 0x48ae18: 0x9206ffff  lbu         $a2, -0x1($s0)
    ctx->pc = 0x48ae18u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294967295)));
    // 0x48ae1c: 0xe52807  srav        $a1, $a1, $a3
    ctx->pc = 0x48ae1cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 7) & 0x1F));
    // 0x48ae20: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x48ae20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x48ae24: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x48ae24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x48ae28: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x48ae28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x48ae2c: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x48ae2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x48ae30: 0xe63007  srav        $a2, $a2, $a3
    ctx->pc = 0x48ae30u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 7) & 0x1F));
    // 0x48ae34: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x48ae34u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x48ae38: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x48ae38u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x48ae3c: 0xdc870000  ld          $a3, 0x0($a0)
    ctx->pc = 0x48ae3cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x48ae40: 0xb42821  addu        $a1, $a1, $s4
    ctx->pc = 0x48ae40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x48ae44: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x48ae44u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x48ae48: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x48ae48u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x48ae4c: 0x210f8  dsll        $v0, $v0, 3
    ctx->pc = 0x48ae4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 3);
    // 0x48ae50: 0x738b8  dsll        $a3, $a3, 2
    ctx->pc = 0x48ae50u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 2);
    // 0x48ae54: 0x31878  dsll        $v1, $v1, 1
    ctx->pc = 0x48ae54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 1);
    // 0x48ae58: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x48ae58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x48ae5c: 0xd43021  addu        $a2, $a2, $s4
    ctx->pc = 0x48ae5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 20)));
    // 0x48ae60: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x48ae60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x48ae64: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x48ae64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x48ae68: 0xdcc40000  ld          $a0, 0x0($a2)
    ctx->pc = 0x48ae68u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x48ae6c: 0x8ca34000  lw          $v1, 0x4000($a1)
    ctx->pc = 0x48ae6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16384)));
    // 0x48ae70: 0x15000003  bnez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x48AE70u;
    {
        const bool branch_taken_0x48ae70 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x48AE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48AE70u;
        // 0x48ae74: 0x442825  or          $a1, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ae70) {
            ctx->pc = 0x48AE80u;
            goto label_48ae80;
        }
    }
    ctx->pc = 0x48AE78u;
    // 0x48ae78: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x48AE78u;
    {
        const bool branch_taken_0x48ae78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48AE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48AE78u;
        // 0x48ae7c: 0x90620018  lbu         $v0, 0x18($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ae78) {
            ctx->pc = 0x48AEA4u;
            goto label_48aea4;
        }
    }
    ctx->pc = 0x48AE80u;
label_48ae80:
    // 0x48ae80: 0x30a2000f  andi        $v0, $a1, 0xF
    ctx->pc = 0x48ae80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x48ae84: 0x2506ffff  addiu       $a2, $t0, -0x1
    ctx->pc = 0x48ae84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x48ae88: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x48ae88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x48ae8c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x48ae8cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x48ae90: 0x5293a  dsrl        $a1, $a1, 4
    ctx->pc = 0x48ae90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 4);
    // 0x48ae94: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x48ae94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x48ae98: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x48ae98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x48ae9c: 0xc122d88  jal         func_48B620
    ctx->pc = 0x48AE9Cu;
    SET_GPR_U32(ctx, 31, 0x48AEA4u);
    ctx->pc = 0x48AEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48AE9Cu;
    // 0x48aea0: 0x8c44001c  lw          $a0, 0x1C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B620u, 0x48AE9Cu, 0x48AEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48AEA4u;
label_48aea4:
    // 0x48aea4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x48aea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x48aea8: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x48aea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x48aeac: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x48AEACu;
    {
        const bool branch_taken_0x48aeac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48AEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48AEACu;
        // 0x48aeb0: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48aeac) {
            ctx->pc = 0x48AED0u;
            goto label_48aed0;
        }
    }
    ctx->pc = 0x48AEB4u;
    // 0x48aeb4: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x48aeb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x48aeb8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x48aeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x48aebc: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x48aebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x48aec0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x48aec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x48aec4: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x48aec4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x48aec8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x48AEC8u;
    {
        const bool branch_taken_0x48aec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48AECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48AEC8u;
        // 0x48aecc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48aec8) {
            ctx->pc = 0x48AEE0u;
            goto label_48aee0;
        }
    }
    ctx->pc = 0x48AED0u;
label_48aed0:
    // 0x48aed0: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x48aed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x48aed4: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x48aed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x48aed8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x48aed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x48aedc: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x48aedcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_48aee0:
    // 0x48aee0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x48aee0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x48aee4: 0x272102b  sltu        $v0, $s3, $s2
    ctx->pc = 0x48aee4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x48aee8: 0x5440ffc3  bnel        $v0, $zero, . + 4 + (-0x3D << 2)
    ctx->pc = 0x48AEE8u;
    {
        const bool branch_taken_0x48aee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48aee8) {
            ctx->pc = 0x48AEECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x48AEE8u;
            // 0x48aeec: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x48ADF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48adf8;
        }
    }
    ctx->pc = 0x48AEF0u;
label_48aef0:
    // 0x48aef0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x48aef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x48aef4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x48aef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48aef8: 0x2e0182d  daddu       $v1, $s7, $zero
    ctx->pc = 0x48aef8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48aefc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x48aefcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x48af00: 0x1462ffaf  bne         $v1, $v0, . + 4 + (-0x51 << 2)
    ctx->pc = 0x48AF00u;
    {
        const bool branch_taken_0x48af00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x48AF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48AF00u;
        // 0x48af04: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48af00) {
            ctx->pc = 0x48ADC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48adc0;
        }
    }
    ctx->pc = 0x48AF08u;
    // 0x48af08: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x48AF08u;
    {
        const bool branch_taken_0x48af08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48AF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48AF08u;
        // 0x48af0c: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48af08) {
            ctx->pc = 0x48B1C8u;
            goto label_48b1c8;
        }
    }
    ctx->pc = 0x48AF10u;
label_48af10:
    // 0x48af10: 0x8fc3000c  lw          $v1, 0xC($fp)
    ctx->pc = 0x48af10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_48af14:
    // 0x48af14: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x48af14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x48af18: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x48AF18u;
    {
        const bool branch_taken_0x48af18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x48AF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48AF18u;
        // 0x48af1c: 0x28620009  slti        $v0, $v1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x48af18) {
            ctx->pc = 0x48AF4Cu;
            goto label_48af4c;
        }
    }
    ctx->pc = 0x48AF20u;
    // 0x48af20: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x48AF20u;
    {
        const bool branch_taken_0x48af20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48AF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48AF20u;
        // 0x48af24: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48af20) {
            ctx->pc = 0x48AF38u;
            goto label_48af38;
        }
    }
    ctx->pc = 0x48AF28u;
    // 0x48af28: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x48AF28u;
    {
        const bool branch_taken_0x48af28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x48AF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48AF28u;
        // 0x48af2c: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48af28) {
            ctx->pc = 0x48AF4Cu;
            goto label_48af4c;
        }
    }
    ctx->pc = 0x48AF30u;
    // 0x48af30: 0x100000a6  b           . + 4 + (0xA6 << 2)
    ctx->pc = 0x48AF30u;
    {
        const bool branch_taken_0x48af30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48AF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48AF30u;
        // 0x48af34: 0x7bb100c0  lq          $s1, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48af30) {
            ctx->pc = 0x48B1CCu;
            goto label_48b1cc;
        }
    }
    ctx->pc = 0x48AF38u;
label_48af38:
    // 0x48af38: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x48af38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x48af3c: 0x10620055  beq         $v1, $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x48AF3Cu;
    {
        const bool branch_taken_0x48af3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x48AF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48AF3Cu;
        // 0x48af40: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48af3c) {
            ctx->pc = 0x48B094u;
            goto label_48b094;
        }
    }
    ctx->pc = 0x48AF44u;
    // 0x48af44: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x48AF44u;
    {
        const bool branch_taken_0x48af44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48AF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48AF44u;
        // 0x48af48: 0x7bb100c0  lq          $s1, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48af44) {
            ctx->pc = 0x48B1CCu;
            goto label_48b1cc;
        }
    }
    ctx->pc = 0x48AF4Cu;
label_48af4c:
    // 0x48af4c: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x48af4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x48af50: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x48af50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x48af54: 0x8fc60018  lw          $a2, 0x18($fp)
    ctx->pc = 0x48af54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x48af58: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x48af58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x48af5c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x48af5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x48af60: 0x10620098  beq         $v1, $v0, . + 4 + (0x98 << 2)
    ctx->pc = 0x48AF60u;
    {
        const bool branch_taken_0x48af60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x48AF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48AF60u;
        // 0x48af64: 0xafa60010  sw          $a2, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48af60) {
            ctx->pc = 0x48B1C4u;
            goto label_48b1c4;
        }
    }
    ctx->pc = 0x48AF68u;
    // 0x48af68: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x48af68u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    // 0x48af6c: 0x3673ffff  ori         $s3, $s3, 0xFFFF
    ctx->pc = 0x48af6cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
label_48af70:
    // 0x48af70: 0x2477ffff  addiu       $s7, $v1, -0x1
    ctx->pc = 0x48af70u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x48af74: 0x8fd20004  lw          $s2, 0x4($fp)
    ctx->pc = 0x48af74u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x48af78: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x48af78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x48af7c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x48af7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48af80: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x48af80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48af84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x48af84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48af88: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x48af88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x48af8c: 0x202b021  addu        $s6, $s0, $v0
    ctx->pc = 0x48af8cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x48af90: 0x1253003a  beq         $s2, $s3, . + 4 + (0x3A << 2)
    ctx->pc = 0x48AF90u;
    {
        const bool branch_taken_0x48af90 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 19));
        ctx->pc = 0x48AF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48AF90u;
        // 0x48af94: 0x223a821  addu        $s5, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48af90) {
            ctx->pc = 0x48B07Cu;
            goto label_48b07c;
        }
    }
    ctx->pc = 0x48AF98u;
    // 0x48af98: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x48af98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x48af9c: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x48af9cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x48afa0: 0x2454ee08  addiu       $s4, $v0, -0x11F8
    ctx->pc = 0x48afa0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962696));
    // 0x48afa4: 0x0  nop
    ctx->pc = 0x48afa4u;
    // NOP
label_48afa8:
    // 0x48afa8: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x48afa8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x48afac: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x48afacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48afb0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x48afb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x48afb4: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x48afb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x48afb8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x48afb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x48afbc: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x48afbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x48afc0: 0x8f888668  lw          $t0, -0x7998($gp)
    ctx->pc = 0x48afc0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936168)));
    // 0x48afc4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x48afc4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x48afc8: 0x90440001  lbu         $a0, 0x1($v0)
    ctx->pc = 0x48afc8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x48afcc: 0x1483823  subu        $a3, $t2, $t0
    ctx->pc = 0x48afccu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x48afd0: 0x8ca94000  lw          $t1, 0x4000($a1)
    ctx->pc = 0x48afd0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16384)));
    // 0x48afd4: 0xe31807  srav        $v1, $v1, $a3
    ctx->pc = 0x48afd4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 7) & 0x1F));
    // 0x48afd8: 0x90450002  lbu         $a1, 0x2($v0)
    ctx->pc = 0x48afd8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x48afdc: 0xe42007  srav        $a0, $a0, $a3
    ctx->pc = 0x48afdcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 7) & 0x1F));
    // 0x48afe0: 0x90460003  lbu         $a2, 0x3($v0)
    ctx->pc = 0x48afe0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x48afe4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x48afe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x48afe8: 0xe52807  srav        $a1, $a1, $a3
    ctx->pc = 0x48afe8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 7) & 0x1F));
    // 0x48afec: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x48afecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x48aff0: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x48aff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x48aff4: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x48aff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x48aff8: 0xe63007  srav        $a2, $a2, $a3
    ctx->pc = 0x48aff8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 7) & 0x1F));
    // 0x48affc: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x48affcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x48b000: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x48b000u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x48b004: 0xb42821  addu        $a1, $a1, $s4
    ctx->pc = 0x48b004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x48b008: 0xdc870000  ld          $a3, 0x0($a0)
    ctx->pc = 0x48b008u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x48b00c: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x48b00cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x48b010: 0xdca40000  ld          $a0, 0x0($a1)
    ctx->pc = 0x48b010u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x48b014: 0x210f8  dsll        $v0, $v0, 3
    ctx->pc = 0x48b014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 3);
    // 0x48b018: 0x738b8  dsll        $a3, $a3, 2
    ctx->pc = 0x48b018u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 2);
    // 0x48b01c: 0xd43021  addu        $a2, $a2, $s4
    ctx->pc = 0x48b01cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 20)));
    // 0x48b020: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x48b020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x48b024: 0x42078  dsll        $a0, $a0, 1
    ctx->pc = 0x48b024u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 1);
    // 0x48b028: 0xdcc30000  ld          $v1, 0x0($a2)
    ctx->pc = 0x48b028u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x48b02c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x48b02cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x48b030: 0x15000003  bnez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x48B030u;
    {
        const bool branch_taken_0x48b030 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x48B034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B030u;
        // 0x48b034: 0x432825  or          $a1, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b030) {
            ctx->pc = 0x48B040u;
            goto label_48b040;
        }
    }
    ctx->pc = 0x48B038u;
    // 0x48b038: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x48B038u;
    {
        const bool branch_taken_0x48b038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48B03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B038u;
        // 0x48b03c: 0x91220018  lbu         $v0, 0x18($t1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b038) {
            ctx->pc = 0x48B06Cu;
            goto label_48b06c;
        }
    }
    ctx->pc = 0x48B040u;
label_48b040:
    // 0x48b040: 0x30a2000f  andi        $v0, $a1, 0xF
    ctx->pc = 0x48b040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x48b044: 0x2506ffff  addiu       $a2, $t0, -0x1
    ctx->pc = 0x48b044u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x48b048: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x48b048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x48b04c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x48b04cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x48b050: 0x5293a  dsrl        $a1, $a1, 4
    ctx->pc = 0x48b050u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 4);
    // 0x48b054: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x48b054u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x48b058: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x48b058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x48b05c: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x48b05cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x48b060: 0xc122d88  jal         func_48B620
    ctx->pc = 0x48B060u;
    SET_GPR_U32(ctx, 31, 0x48B068u);
    ctx->pc = 0x48B064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48B060u;
    // 0x48b064: 0x7faa0030  sq          $t2, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B620u, 0x48B060u, 0x48B068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48B068u;
label_48b068:
    // 0x48b068: 0x7baa0030  lq          $t2, 0x30($sp)
    ctx->pc = 0x48b068u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_48b06c:
    // 0x48b06c: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x48b06cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x48b070: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x48b070u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x48b074: 0x1653ffcc  bne         $s2, $s3, . + 4 + (-0x34 << 2)
    ctx->pc = 0x48B074u;
    {
        const bool branch_taken_0x48b074 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x48B078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B074u;
        // 0x48b078: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b074) {
            ctx->pc = 0x48AFA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48afa8;
        }
    }
    ctx->pc = 0x48B07Cu;
label_48b07c:
    // 0x48b07c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x48b07cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48b080: 0x2e0182d  daddu       $v1, $s7, $zero
    ctx->pc = 0x48b080u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48b084: 0x1473ffba  bne         $v1, $s3, . + 4 + (-0x46 << 2)
    ctx->pc = 0x48B084u;
    {
        const bool branch_taken_0x48b084 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        ctx->pc = 0x48B088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B084u;
        // 0x48b088: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b084) {
            ctx->pc = 0x48AF70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48af70;
        }
    }
    ctx->pc = 0x48B08Cu;
    // 0x48b08c: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x48B08Cu;
    {
        const bool branch_taken_0x48b08c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48B090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B08Cu;
        // 0x48b090: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b08c) {
            ctx->pc = 0x48B1C8u;
            goto label_48b1c8;
        }
    }
    ctx->pc = 0x48B094u;
label_48b094:
    // 0x48b094: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x48b094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x48b098: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x48b098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x48b09c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x48b09cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x48b0a0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x48b0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x48b0a4: 0x10620049  beq         $v1, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x48B0A4u;
    {
        const bool branch_taken_0x48b0a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x48B0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B0A4u;
        // 0x48b0a8: 0x7bb100c0  lq          $s1, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b0a4) {
            ctx->pc = 0x48B1CCu;
            goto label_48b1cc;
        }
    }
    ctx->pc = 0x48B0ACu;
    // 0x48b0ac: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x48b0acu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    // 0x48b0b0: 0x3673ffff  ori         $s3, $s3, 0xFFFF
    ctx->pc = 0x48b0b0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x48b0b4: 0x0  nop
    ctx->pc = 0x48b0b4u;
    // NOP
label_48b0b8:
    // 0x48b0b8: 0x2477ffff  addiu       $s7, $v1, -0x1
    ctx->pc = 0x48b0b8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x48b0bc: 0x8fd20004  lw          $s2, 0x4($fp)
    ctx->pc = 0x48b0bcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x48b0c0: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x48b0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x48b0c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x48b0c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48b0c8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x48b0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48b0cc: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x48b0ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x48b0d0: 0xa2b021  addu        $s6, $a1, $v0
    ctx->pc = 0x48b0d0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x48b0d4: 0x12530037  beq         $s2, $s3, . + 4 + (0x37 << 2)
    ctx->pc = 0x48B0D4u;
    {
        const bool branch_taken_0x48b0d4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 19));
        ctx->pc = 0x48B0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B0D4u;
        // 0x48b0d8: 0x223a821  addu        $s5, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b0d4) {
            ctx->pc = 0x48B1B4u;
            goto label_48b1b4;
        }
    }
    ctx->pc = 0x48B0DCu;
    // 0x48b0dc: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x48b0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x48b0e0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x48b0e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48b0e4: 0x2454ee08  addiu       $s4, $v0, -0x11F8
    ctx->pc = 0x48b0e4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962696));
    // 0x48b0e8: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x48b0e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x48b0ec: 0x0  nop
    ctx->pc = 0x48b0ecu;
    // NOP
label_48b0f0:
    // 0x48b0f0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x48b0f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x48b0f4: 0x8f888668  lw          $t0, -0x7998($gp)
    ctx->pc = 0x48b0f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936168)));
    // 0x48b0f8: 0x9203fffc  lbu         $v1, -0x4($s0)
    ctx->pc = 0x48b0f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294967292)));
    // 0x48b0fc: 0x9204fffd  lbu         $a0, -0x3($s0)
    ctx->pc = 0x48b0fcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294967293)));
    // 0x48b100: 0x1283823  subu        $a3, $t1, $t0
    ctx->pc = 0x48b100u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x48b104: 0x9205fffe  lbu         $a1, -0x2($s0)
    ctx->pc = 0x48b104u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294967294)));
    // 0x48b108: 0xe31807  srav        $v1, $v1, $a3
    ctx->pc = 0x48b108u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 7) & 0x1F));
    // 0x48b10c: 0xe42007  srav        $a0, $a0, $a3
    ctx->pc = 0x48b10cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 7) & 0x1F));
    // 0x48b110: 0x9206ffff  lbu         $a2, -0x1($s0)
    ctx->pc = 0x48b110u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294967295)));
    // 0x48b114: 0xe52807  srav        $a1, $a1, $a3
    ctx->pc = 0x48b114u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 7) & 0x1F));
    // 0x48b118: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x48b118u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x48b11c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x48b11cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x48b120: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x48b120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x48b124: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x48b124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x48b128: 0xe63007  srav        $a2, $a2, $a3
    ctx->pc = 0x48b128u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 7) & 0x1F));
    // 0x48b12c: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x48b12cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x48b130: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x48b130u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x48b134: 0xdc870000  ld          $a3, 0x0($a0)
    ctx->pc = 0x48b134u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x48b138: 0xb42821  addu        $a1, $a1, $s4
    ctx->pc = 0x48b138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x48b13c: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x48b13cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x48b140: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x48b140u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x48b144: 0x210f8  dsll        $v0, $v0, 3
    ctx->pc = 0x48b144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 3);
    // 0x48b148: 0x738b8  dsll        $a3, $a3, 2
    ctx->pc = 0x48b148u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 2);
    // 0x48b14c: 0x31878  dsll        $v1, $v1, 1
    ctx->pc = 0x48b14cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 1);
    // 0x48b150: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x48b150u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x48b154: 0xd43021  addu        $a2, $a2, $s4
    ctx->pc = 0x48b154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 20)));
    // 0x48b158: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x48b158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x48b15c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x48b15cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x48b160: 0xdcc40000  ld          $a0, 0x0($a2)
    ctx->pc = 0x48b160u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x48b164: 0x8ca34000  lw          $v1, 0x4000($a1)
    ctx->pc = 0x48b164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16384)));
    // 0x48b168: 0x15000003  bnez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x48B168u;
    {
        const bool branch_taken_0x48b168 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x48B16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B168u;
        // 0x48b16c: 0x442825  or          $a1, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b168) {
            ctx->pc = 0x48B178u;
            goto label_48b178;
        }
    }
    ctx->pc = 0x48B170u;
    // 0x48b170: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x48B170u;
    {
        const bool branch_taken_0x48b170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48B174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B170u;
        // 0x48b174: 0x90620018  lbu         $v0, 0x18($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b170) {
            ctx->pc = 0x48B1A4u;
            goto label_48b1a4;
        }
    }
    ctx->pc = 0x48B178u;
label_48b178:
    // 0x48b178: 0x30a2000f  andi        $v0, $a1, 0xF
    ctx->pc = 0x48b178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x48b17c: 0x2506ffff  addiu       $a2, $t0, -0x1
    ctx->pc = 0x48b17cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x48b180: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x48b180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x48b184: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x48b184u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x48b188: 0x5293a  dsrl        $a1, $a1, 4
    ctx->pc = 0x48b188u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 4);
    // 0x48b18c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x48b18cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x48b190: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x48b190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x48b194: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x48b194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x48b198: 0xc122d88  jal         func_48B620
    ctx->pc = 0x48B198u;
    SET_GPR_U32(ctx, 31, 0x48B1A0u);
    ctx->pc = 0x48B19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48B198u;
    // 0x48b19c: 0x7fa90020  sq          $t1, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B620u, 0x48B198u, 0x48B1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48B1A0u;
label_48b1a0:
    // 0x48b1a0: 0x7ba90020  lq          $t1, 0x20($sp)
    ctx->pc = 0x48b1a0u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_48b1a4:
    // 0x48b1a4: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x48b1a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x48b1a8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x48b1a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x48b1ac: 0x1653ffd0  bne         $s2, $s3, . + 4 + (-0x30 << 2)
    ctx->pc = 0x48B1ACu;
    {
        const bool branch_taken_0x48b1ac = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x48B1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B1ACu;
        // 0x48b1b0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b1ac) {
            ctx->pc = 0x48B0F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48b0f0;
        }
    }
    ctx->pc = 0x48B1B4u;
label_48b1b4:
    // 0x48b1b4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x48b1b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48b1b8: 0x2e0182d  daddu       $v1, $s7, $zero
    ctx->pc = 0x48b1b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48b1bc: 0x1473ffbe  bne         $v1, $s3, . + 4 + (-0x42 << 2)
    ctx->pc = 0x48B1BCu;
    {
        const bool branch_taken_0x48b1bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        ctx->pc = 0x48B1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B1BCu;
        // 0x48b1c0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b1bc) {
            ctx->pc = 0x48B0B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48b0b8;
        }
    }
    ctx->pc = 0x48B1C4u;
label_48b1c4:
    // 0x48b1c4: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x48b1c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_48b1c8:
    // 0x48b1c8: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x48b1c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_48b1cc:
    // 0x48b1cc: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x48b1ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x48b1d0: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x48b1d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x48b1d4: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x48b1d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x48b1d8: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x48b1d8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x48b1dc: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x48b1dcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x48b1e0: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x48b1e0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x48b1e4: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x48b1e4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x48b1e8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x48b1e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x48b1ec: 0x3e00008  jr          $ra
    ctx->pc = 0x48B1ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48B1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B1ECu;
        // 0x48b1f0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48B1ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48B1F4u;
    // 0x48b1f4: 0x0  nop
    ctx->pc = 0x48b1f4u;
    // NOP
    // 0x48b1f8: 0xaf84c000  sw          $a0, -0x4000($gp)
    ctx->pc = 0x48b1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950912), GPR_U32(ctx, 4));
    // 0x48b1fc: 0x0  nop
    ctx->pc = 0x48b1fcu;
    // NOP
    ctx->pc = 0x48b200u;
}
