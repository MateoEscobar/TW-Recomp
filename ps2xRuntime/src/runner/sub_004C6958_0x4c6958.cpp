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

// Function: sub_004C6958
// Address: 0x4c6958 - 0x4c6c10
void sub_004C6958_0x4c6958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C6958_0x4c6958");
#endif

    switch (ctx->pc) {
        case 0x4c6a68u: goto label_4c6a68;
        case 0x4c6bd4u: goto label_4c6bd4;
        default: break;
    }

    ctx->pc = 0x4c6958u;

    // 0x4c6958: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4c6958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4c695c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x4c695cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c6960: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4c6960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4c6964: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4c6964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4c6968: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4c6968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4c696c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4c696cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4c6970: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4c6970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4c6974: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4c6974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4c6978: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4c6978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x4c697c: 0x1462009d  bne         $v1, $v0, . + 4 + (0x9D << 2)
    ctx->pc = 0x4C697Cu;
    {
        const bool branch_taken_0x4c697c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4C6980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C697Cu;
        // 0x4c6980: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c697c) {
            ctx->pc = 0x4C6BF4u;
            goto label_4c6bf4;
        }
    }
    ctx->pc = 0x4C6984u;
    // 0x4c6984: 0x8e700008  lw          $s0, 0x8($s3)
    ctx->pc = 0x4c6984u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x4c6988: 0x8d070028  lw          $a3, 0x28($t0)
    ctx->pc = 0x4c6988u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 40)));
    // 0x4c698c: 0x8e720004  lw          $s2, 0x4($s3)
    ctx->pc = 0x4c698cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x4c6990: 0x207102b  sltu        $v0, $s0, $a3
    ctx->pc = 0x4c6990u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x4c6994: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4C6994u;
    {
        const bool branch_taken_0x4c6994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C6998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6994u;
        // 0x4c6998: 0x8e710000  lw          $s1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6994) {
            ctx->pc = 0x4C69C0u;
            goto label_4c69c0;
        }
    }
    ctx->pc = 0x4C699Cu;
    // 0x4c699c: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x4c699cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x4c69a0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4c69a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4c69a4: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x4c69a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x4c69a8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4c69a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4c69ac: 0x621006  srlv        $v0, $v0, $v1
    ctx->pc = 0x4c69acu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x4c69b0: 0x2078023  subu        $s0, $s0, $a3
    ctx->pc = 0x4c69b0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x4c69b4: 0x2224824  and         $t1, $s1, $v0
    ctx->pc = 0x4c69b4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x4c69b8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x4C69B8u;
    {
        const bool branch_taken_0x4c69b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C69BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C69B8u;
        // 0x4c69bc: 0xf18806  srlv        $s1, $s1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), GPR_U32(ctx, 7) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c69b8) {
            ctx->pc = 0x4C69F8u;
            goto label_4c69f8;
        }
    }
    ctx->pc = 0x4C69C0u;
label_4c69c0:
    // 0x4c69c0: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x4c69c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c69c4: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x4c69c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x4c69c8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4c69c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4c69cc: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x4c69ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x4c69d0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4c69d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4c69d4: 0x2062004  sllv        $a0, $a2, $s0
    ctx->pc = 0x4c69d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 16) & 0x1F));
    // 0x4c69d8: 0x621006  srlv        $v0, $v0, $v1
    ctx->pc = 0x4c69d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x4c69dc: 0x2242025  or          $a0, $s1, $a0
    ctx->pc = 0x4c69dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) | GPR_U64(ctx, 4));
    // 0x4c69e0: 0xf01823  subu        $v1, $a3, $s0
    ctx->pc = 0x4c69e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
    // 0x4c69e4: 0x24e5ffe0  addiu       $a1, $a3, -0x20
    ctx->pc = 0x4c69e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967264));
    // 0x4c69e8: 0x824824  and         $t1, $a0, $v0
    ctx->pc = 0x4c69e8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4c69ec: 0x668806  srlv        $s1, $a2, $v1
    ctx->pc = 0x4c69ecu;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
    // 0x4c69f0: 0x2058023  subu        $s0, $s0, $a1
    ctx->pc = 0x4c69f0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x4c69f4: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x4c69f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_4c69f8:
    // 0x4c69f8: 0x11200078  beqz        $t1, . + 4 + (0x78 << 2)
    ctx->pc = 0x4C69F8u;
    {
        const bool branch_taken_0x4c69f8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C69FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C69F8u;
        // 0x4c69fc: 0x8d02002c  lw          $v0, 0x2C($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c69f8) {
            ctx->pc = 0x4C6BDCu;
            goto label_4c6bdc;
        }
    }
    ctx->pc = 0x4C6A00u;
    // 0x4c6a00: 0x491821  addu        $v1, $v0, $t1
    ctx->pc = 0x4c6a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x4c6a04: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x4c6a04u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x4c6a08: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4C6A08u;
    {
        const bool branch_taken_0x4c6a08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C6A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6A08u;
        // 0x4c6a0c: 0xad030004  sw          $v1, 0x4($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6a08) {
            ctx->pc = 0x4C6A28u;
            goto label_4c6a28;
        }
    }
    ctx->pc = 0x4C6A10u;
    // 0x4c6a10: 0x32230001  andi        $v1, $s1, 0x1
    ctx->pc = 0x4c6a10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x4c6a14: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x4c6a14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x4c6a18: 0x14600049  bnez        $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x4C6A18u;
    {
        const bool branch_taken_0x4c6a18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C6A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6A18u;
        // 0x4c6a1c: 0x118842  srl         $s1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6a18) {
            ctx->pc = 0x4C6B40u;
            goto label_4c6b40;
        }
    }
    ctx->pc = 0x4C6A20u;
    // 0x4c6a20: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4C6A20u;
    {
        const bool branch_taken_0x4c6a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C6A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6A20u;
        // 0x4c6a24: 0x8d0d0020  lw          $t5, 0x20($t0) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6a20) {
            ctx->pc = 0x4C6A44u;
            goto label_4c6a44;
        }
    }
    ctx->pc = 0x4C6A28u;
label_4c6a28:
    // 0x4c6a28: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4c6a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c6a2c: 0x2410001f  addiu       $s0, $zero, 0x1F
    ctx->pc = 0x4c6a2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x4c6a30: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x4c6a30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x4c6a34: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x4c6a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x4c6a38: 0x14400041  bnez        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x4C6A38u;
    {
        const bool branch_taken_0x4c6a38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C6A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6A38u;
        // 0x4c6a3c: 0x38842  srl         $s1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6a38) {
            ctx->pc = 0x4C6B40u;
            goto label_4c6b40;
        }
    }
    ctx->pc = 0x4C6A40u;
    // 0x4c6a40: 0x8d0d0020  lw          $t5, 0x20($t0)
    ctx->pc = 0x4c6a40u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
label_4c6a44:
    // 0x4c6a44: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x4c6a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x4c6a48: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4c6a48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4c6a4c: 0x8d0a002c  lw          $t2, 0x2C($t0)
    ctx->pc = 0x4c6a4cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 44)));
    // 0x4c6a50: 0x6d1823  subu        $v1, $v1, $t5
    ctx->pc = 0x4c6a50u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x4c6a54: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4c6a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4c6a58: 0x8d0b0024  lw          $t3, 0x24($t0)
    ctx->pc = 0x4c6a58u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 36)));
    // 0x4c6a5c: 0x626006  srlv        $t4, $v0, $v1
    ctx->pc = 0x4c6a5cu;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x4c6a60: 0x25040010  addiu       $a0, $t0, 0x10
    ctx->pc = 0x4c6a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x4c6a64: 0x0  nop
    ctx->pc = 0x4c6a64u;
    // NOP
label_4c6a68:
    // 0x4c6a68: 0x20d102b  sltu        $v0, $s0, $t5
    ctx->pc = 0x4c6a68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x4c6a6c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4C6A6Cu;
    {
        const bool branch_taken_0x4c6a6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C6A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6A6Cu;
        // 0x4c6a70: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6a6c) {
            ctx->pc = 0x4C6A94u;
            goto label_4c6a94;
        }
    }
    ctx->pc = 0x4C6A74u;
    // 0x4c6a74: 0x22c1024  and         $v0, $s1, $t4
    ctx->pc = 0x4c6a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 12));
    // 0x4c6a78: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x4c6a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x4c6a7c: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x4c6a7cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4c6a80: 0x30c3000f  andi        $v1, $a2, 0xF
    ctx->pc = 0x4c6a80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x4c6a84: 0x63102  srl         $a2, $a2, 4
    ctx->pc = 0x4c6a84u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
    // 0x4c6a88: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x4c6a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4c6a8c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x4C6A8Cu;
    {
        const bool branch_taken_0x4c6a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C6A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6A8Cu;
        // 0x4c6a90: 0x80650000  lb          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6a8c) {
            ctx->pc = 0x4C6AC4u;
            goto label_4c6ac4;
        }
    }
    ctx->pc = 0x4C6A94u;
label_4c6a94:
    // 0x4c6a94: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x4c6a94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c6a98: 0x2071004  sllv        $v0, $a3, $s0
    ctx->pc = 0x4c6a98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 16) & 0x1F));
    // 0x4c6a9c: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x4c6a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x4c6aa0: 0x4c1024  and         $v0, $v0, $t4
    ctx->pc = 0x4c6aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 12));
    // 0x4c6aa4: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x4c6aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x4c6aa8: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x4c6aa8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4c6aac: 0x30c3000f  andi        $v1, $a2, 0xF
    ctx->pc = 0x4c6aacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x4c6ab0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x4c6ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4c6ab4: 0x63102  srl         $a2, $a2, 4
    ctx->pc = 0x4c6ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
    // 0x4c6ab8: 0x206102b  sltu        $v0, $s0, $a2
    ctx->pc = 0x4c6ab8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x4c6abc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4C6ABCu;
    {
        const bool branch_taken_0x4c6abc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C6AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6ABCu;
        // 0x4c6ac0: 0x80650000  lb          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6abc) {
            ctx->pc = 0x4C6AD0u;
            goto label_4c6ad0;
        }
    }
    ctx->pc = 0x4C6AC4u;
label_4c6ac4:
    // 0x4c6ac4: 0x2068023  subu        $s0, $s0, $a2
    ctx->pc = 0x4c6ac4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x4c6ac8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4C6AC8u;
    {
        const bool branch_taken_0x4c6ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C6ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6AC8u;
        // 0x4c6acc: 0xd18806  srlv        $s1, $s1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), GPR_U32(ctx, 6) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6ac8) {
            ctx->pc = 0x4C6AE4u;
            goto label_4c6ae4;
        }
    }
    ctx->pc = 0x4C6AD0u;
label_4c6ad0:
    // 0x4c6ad0: 0xd01023  subu        $v0, $a2, $s0
    ctx->pc = 0x4c6ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x4c6ad4: 0x24c3ffe0  addiu       $v1, $a2, -0x20
    ctx->pc = 0x4c6ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x4c6ad8: 0x478806  srlv        $s1, $a3, $v0
    ctx->pc = 0x4c6ad8u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x4c6adc: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x4c6adcu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x4c6ae0: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x4c6ae0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_4c6ae4:
    // 0x4c6ae4: 0x50a00012  beql        $a1, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x4C6AE4u;
    {
        const bool branch_taken_0x4c6ae4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c6ae4) {
            ctx->pc = 0x4C6AE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C6AE4u;
            // 0x4c6ae8: 0xa1450000  sb          $a1, 0x0($t2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C6B30u;
            goto label_4c6b30;
        }
    }
    ctx->pc = 0x4C6AECu;
    // 0x4c6aec: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4C6AECu;
    {
        const bool branch_taken_0x4c6aec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C6AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6AECu;
        // 0x4c6af0: 0x32230001  andi        $v1, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6aec) {
            ctx->pc = 0x4C6B08u;
            goto label_4c6b08;
        }
    }
    ctx->pc = 0x4C6AF4u;
    // 0x4c6af4: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x4c6af4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x4c6af8: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4C6AF8u;
    {
        const bool branch_taken_0x4c6af8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C6AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6AF8u;
        // 0x4c6afc: 0x118842  srl         $s1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6af8) {
            ctx->pc = 0x4C6B20u;
            goto label_4c6b20;
        }
    }
    ctx->pc = 0x4C6B00u;
    // 0x4c6b00: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4C6B00u;
    {
        const bool branch_taken_0x4c6b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C6B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6B00u;
        // 0x4c6b04: 0xa1450000  sb          $a1, 0x0($t2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6b00) {
            ctx->pc = 0x4C6B30u;
            goto label_4c6b30;
        }
    }
    ctx->pc = 0x4C6B08u;
label_4c6b08:
    // 0x4c6b08: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4c6b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c6b0c: 0x2410001f  addiu       $s0, $zero, 0x1F
    ctx->pc = 0x4c6b0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x4c6b10: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x4c6b10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x4c6b14: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x4c6b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x4c6b18: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4C6B18u;
    {
        const bool branch_taken_0x4c6b18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C6B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6B18u;
        // 0x4c6b1c: 0x38842  srl         $s1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6b18) {
            ctx->pc = 0x4C6B2Cu;
            goto label_4c6b2c;
        }
    }
    ctx->pc = 0x4C6B20u;
label_4c6b20:
    // 0x4c6b20: 0x51023  negu        $v0, $a1
    ctx->pc = 0x4c6b20u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x4c6b24: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x4c6b24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x4c6b28: 0x22e03  sra         $a1, $v0, 24
    ctx->pc = 0x4c6b28u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 24));
label_4c6b2c:
    // 0x4c6b2c: 0xa1450000  sb          $a1, 0x0($t2)
    ctx->pc = 0x4c6b2cu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 5));
label_4c6b30:
    // 0x4c6b30: 0x1520ffcd  bnez        $t1, . + 4 + (-0x33 << 2)
    ctx->pc = 0x4C6B30u;
    {
        const bool branch_taken_0x4c6b30 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C6B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6B30u;
        // 0x4c6b34: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6b30) {
            ctx->pc = 0x4C6A68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c6a68;
        }
    }
    ctx->pc = 0x4C6B38u;
    // 0x4c6b38: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x4C6B38u;
    {
        const bool branch_taken_0x4c6b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C6B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6B38u;
        // 0x4c6b3c: 0xae700008  sw          $s0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6b38) {
            ctx->pc = 0x4C6BECu;
            goto label_4c6bec;
        }
    }
    ctx->pc = 0x4C6B40u;
label_4c6b40:
    // 0x4c6b40: 0x2e020004  sltiu       $v0, $s0, 0x4
    ctx->pc = 0x4c6b40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x4c6b44: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4C6B44u;
    {
        const bool branch_taken_0x4c6b44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c6b44) {
            ctx->pc = 0x4C6B48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C6B44u;
            // 0x4c6b48: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C6B5Cu;
            goto label_4c6b5c;
        }
    }
    ctx->pc = 0x4C6B4Cu;
    // 0x4c6b4c: 0x3225000f  andi        $a1, $s1, 0xF
    ctx->pc = 0x4c6b4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)15);
    // 0x4c6b50: 0x2610fffc  addiu       $s0, $s0, -0x4
    ctx->pc = 0x4c6b50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
    // 0x4c6b54: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x4C6B54u;
    {
        const bool branch_taken_0x4c6b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C6B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6B54u;
        // 0x4c6b58: 0x118902  srl         $s1, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6b54) {
            ctx->pc = 0x4C6B7Cu;
            goto label_4c6b7c;
        }
    }
    ctx->pc = 0x4C6B5Cu;
label_4c6b5c:
    // 0x4c6b5c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4c6b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4c6b60: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x4c6b60u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x4c6b64: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x4c6b64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x4c6b68: 0x2041004  sllv        $v0, $a0, $s0
    ctx->pc = 0x4c6b68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 16) & 0x1F));
    // 0x4c6b6c: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x4c6b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x4c6b70: 0x2610001c  addiu       $s0, $s0, 0x1C
    ctx->pc = 0x4c6b70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x4c6b74: 0x648806  srlv        $s1, $a0, $v1
    ctx->pc = 0x4c6b74u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x4c6b78: 0x3045000f  andi        $a1, $v0, 0xF
    ctx->pc = 0x4c6b78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_4c6b7c:
    // 0x4c6b7c: 0x50a00012  beql        $a1, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x4C6B7Cu;
    {
        const bool branch_taken_0x4c6b7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c6b7c) {
            ctx->pc = 0x4C6B80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C6B7Cu;
            // 0x4c6b80: 0x8d04002c  lw          $a0, 0x2C($t0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C6BC8u;
            goto label_4c6bc8;
        }
    }
    ctx->pc = 0x4C6B84u;
    // 0x4c6b84: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4C6B84u;
    {
        const bool branch_taken_0x4c6b84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C6B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6B84u;
        // 0x4c6b88: 0x32230001  andi        $v1, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6b84) {
            ctx->pc = 0x4C6BA0u;
            goto label_4c6ba0;
        }
    }
    ctx->pc = 0x4C6B8Cu;
    // 0x4c6b8c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x4c6b8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x4c6b90: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4C6B90u;
    {
        const bool branch_taken_0x4c6b90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C6B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6B90u;
        // 0x4c6b94: 0x118842  srl         $s1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6b90) {
            ctx->pc = 0x4C6BB8u;
            goto label_4c6bb8;
        }
    }
    ctx->pc = 0x4C6B98u;
    // 0x4c6b98: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4C6B98u;
    {
        const bool branch_taken_0x4c6b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C6B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6B98u;
        // 0x4c6b9c: 0x8d04002c  lw          $a0, 0x2C($t0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6b98) {
            ctx->pc = 0x4C6BC8u;
            goto label_4c6bc8;
        }
    }
    ctx->pc = 0x4C6BA0u;
label_4c6ba0:
    // 0x4c6ba0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4c6ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c6ba4: 0x2410001f  addiu       $s0, $zero, 0x1F
    ctx->pc = 0x4c6ba4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x4c6ba8: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x4c6ba8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x4c6bac: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x4c6bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x4c6bb0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4C6BB0u;
    {
        const bool branch_taken_0x4c6bb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C6BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6BB0u;
        // 0x4c6bb4: 0x38842  srl         $s1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6bb0) {
            ctx->pc = 0x4C6BC4u;
            goto label_4c6bc4;
        }
    }
    ctx->pc = 0x4C6BB8u;
label_4c6bb8:
    // 0x4c6bb8: 0x51023  negu        $v0, $a1
    ctx->pc = 0x4c6bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x4c6bbc: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x4c6bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x4c6bc0: 0x22e03  sra         $a1, $v0, 24
    ctx->pc = 0x4c6bc0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 24));
label_4c6bc4:
    // 0x4c6bc4: 0x8d04002c  lw          $a0, 0x2C($t0)
    ctx->pc = 0x4c6bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 44)));
label_4c6bc8:
    // 0x4c6bc8: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x4c6bc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x4c6bcc: 0xc13372a  jal         func_4CDCA8
    ctx->pc = 0x4C6BCCu;
    SET_GPR_U32(ctx, 31, 0x4C6BD4u);
    ctx->pc = 0x4C6BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C6BCCu;
    // 0x4c6bd0: 0x120302d  daddu       $a2, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CDCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CDCA8u, 0x4C6BCCu, 0x4C6BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C6BD4u;
label_4c6bd4:
    // 0x4c6bd4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4C6BD4u;
    {
        const bool branch_taken_0x4c6bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C6BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6BD4u;
        // 0x4c6bd8: 0xae700008  sw          $s0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6bd4) {
            ctx->pc = 0x4C6BECu;
            goto label_4c6bec;
        }
    }
    ctx->pc = 0x4C6BDCu;
label_4c6bdc:
    // 0x4c6bdc: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x4c6bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x4c6be0: 0xad020004  sw          $v0, 0x4($t0)
    ctx->pc = 0x4c6be0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
    // 0x4c6be4: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4c6be4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4c6be8: 0xae700008  sw          $s0, 0x8($s3)
    ctx->pc = 0x4c6be8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 16));
label_4c6bec:
    // 0x4c6bec: 0xae720004  sw          $s2, 0x4($s3)
    ctx->pc = 0x4c6becu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
    // 0x4c6bf0: 0xae710000  sw          $s1, 0x0($s3)
    ctx->pc = 0x4c6bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
label_4c6bf4:
    // 0x4c6bf4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c6bf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c6bf8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c6bf8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c6bfc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4c6bfcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c6c00: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4c6c00u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4c6c04: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4c6c04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4c6c08: 0x3e00008  jr          $ra
    ctx->pc = 0x4C6C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C6C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6C08u;
        // 0x4c6c0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C6C08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C6C10u;
}
