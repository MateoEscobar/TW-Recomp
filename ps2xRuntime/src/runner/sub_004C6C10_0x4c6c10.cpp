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

// Function: sub_004C6C10
// Address: 0x4c6c10 - 0x4c6fd8
void sub_004C6C10_0x4c6c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C6C10_0x4c6c10");
#endif

    switch (ctx->pc) {
        case 0x4c6e38u: goto label_4c6e38;
        case 0x4c6eb0u: goto label_4c6eb0;
        case 0x4c6f74u: goto label_4c6f74;
        default: break;
    }

    ctx->pc = 0x4c6c10u;

    // 0x4c6c10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4c6c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4c6c14: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x4c6c14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c6c18: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x4c6c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x4c6c1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4c6c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4c6c20: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4c6c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4c6c24: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4c6c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4c6c28: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4c6c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4c6c2c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4c6c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4c6c30: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4c6c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4c6c34: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4c6c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4c6c38: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4c6c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4c6c3c: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x4c6c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x4c6c40: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4c6c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4c6c44: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4c6c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x4c6c48: 0x146200d7  bne         $v1, $v0, . + 4 + (0xD7 << 2)
    ctx->pc = 0x4C6C48u;
    {
        const bool branch_taken_0x4c6c48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4C6C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6C48u;
        // 0x4c6c4c: 0xa0f02d  daddu       $fp, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6c48) {
            ctx->pc = 0x4C6FA8u;
            goto label_4c6fa8;
        }
    }
    ctx->pc = 0x4C6C50u;
    // 0x4c6c50: 0x8fd10008  lw          $s1, 0x8($fp)
    ctx->pc = 0x4c6c50u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x4c6c54: 0x8d070028  lw          $a3, 0x28($t0)
    ctx->pc = 0x4c6c54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 40)));
    // 0x4c6c58: 0x8fd30004  lw          $s3, 0x4($fp)
    ctx->pc = 0x4c6c58u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x4c6c5c: 0x227102b  sltu        $v0, $s1, $a3
    ctx->pc = 0x4c6c5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x4c6c60: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4C6C60u;
    {
        const bool branch_taken_0x4c6c60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C6C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6C60u;
        // 0x4c6c64: 0x8fd20000  lw          $s2, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6c60) {
            ctx->pc = 0x4C6C8Cu;
            goto label_4c6c8c;
        }
    }
    ctx->pc = 0x4C6C68u;
    // 0x4c6c68: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x4c6c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x4c6c6c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4c6c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4c6c70: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x4c6c70u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x4c6c74: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4c6c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4c6c78: 0x621006  srlv        $v0, $v0, $v1
    ctx->pc = 0x4c6c78u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x4c6c7c: 0x2278823  subu        $s1, $s1, $a3
    ctx->pc = 0x4c6c7cu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x4c6c80: 0x242b024  and         $s6, $s2, $v0
    ctx->pc = 0x4c6c80u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x4c6c84: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x4C6C84u;
    {
        const bool branch_taken_0x4c6c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C6C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6C84u;
        // 0x4c6c88: 0xf29006  srlv        $s2, $s2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 18), GPR_U32(ctx, 7) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6c84) {
            ctx->pc = 0x4C6CC4u;
            goto label_4c6cc4;
        }
    }
    ctx->pc = 0x4C6C8Cu;
label_4c6c8c:
    // 0x4c6c8c: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x4c6c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4c6c90: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x4c6c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x4c6c94: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4c6c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4c6c98: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x4c6c98u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x4c6c9c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4c6c9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4c6ca0: 0x2262004  sllv        $a0, $a2, $s1
    ctx->pc = 0x4c6ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 17) & 0x1F));
    // 0x4c6ca4: 0x621006  srlv        $v0, $v0, $v1
    ctx->pc = 0x4c6ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x4c6ca8: 0x2442025  or          $a0, $s2, $a0
    ctx->pc = 0x4c6ca8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | GPR_U64(ctx, 4));
    // 0x4c6cac: 0xf11823  subu        $v1, $a3, $s1
    ctx->pc = 0x4c6cacu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 17)));
    // 0x4c6cb0: 0x24e5ffe0  addiu       $a1, $a3, -0x20
    ctx->pc = 0x4c6cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967264));
    // 0x4c6cb4: 0x82b024  and         $s6, $a0, $v0
    ctx->pc = 0x4c6cb4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4c6cb8: 0x669006  srlv        $s2, $a2, $v1
    ctx->pc = 0x4c6cb8u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
    // 0x4c6cbc: 0x2258823  subu        $s1, $s1, $a1
    ctx->pc = 0x4c6cbcu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x4c6cc0: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x4c6cc0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_4c6cc4:
    // 0x4c6cc4: 0x52c000b2  beql        $s6, $zero, . + 4 + (0xB2 << 2)
    ctx->pc = 0x4C6CC4u;
    {
        const bool branch_taken_0x4c6cc4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c6cc4) {
            ctx->pc = 0x4C6CC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C6CC4u;
            // 0x4c6cc8: 0x8d02002c  lw          $v0, 0x2C($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C6F90u;
            goto label_4c6f90;
        }
    }
    ctx->pc = 0x4C6CCCu;
    // 0x4c6ccc: 0x8d02000c  lw          $v0, 0xC($t0)
    ctx->pc = 0x4c6cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x4c6cd0: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x4C6CD0u;
    {
        const bool branch_taken_0x4c6cd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C6CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6CD0u;
        // 0x4c6cd4: 0x8d17002c  lw          $s7, 0x2C($t0) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6cd0) {
            ctx->pc = 0x4C6D9Cu;
            goto label_4c6d9c;
        }
    }
    ctx->pc = 0x4C6CD8u;
    // 0x4c6cd8: 0x8d070008  lw          $a3, 0x8($t0)
    ctx->pc = 0x4c6cd8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x4c6cdc: 0x24e5ffff  addiu       $a1, $a3, -0x1
    ctx->pc = 0x4c6cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x4c6ce0: 0x225102b  sltu        $v0, $s1, $a1
    ctx->pc = 0x4c6ce0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x4c6ce4: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x4C6CE4u;
    {
        const bool branch_taken_0x4c6ce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c6ce4) {
            ctx->pc = 0x4C6CE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C6CE4u;
            // 0x4c6ce8: 0x8e660000  lw          $a2, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C6D18u;
            goto label_4c6d18;
        }
    }
    ctx->pc = 0x4C6CECu;
    // 0x4c6cec: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x4c6cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x4c6cf0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4c6cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4c6cf4: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x4c6cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x4c6cf8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c6cf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c6cfc: 0x431806  srlv        $v1, $v1, $v0
    ctx->pc = 0x4c6cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x4c6d00: 0x26240001  addiu       $a0, $s1, 0x1
    ctx->pc = 0x4c6d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x4c6d04: 0x2431824  and         $v1, $s2, $v1
    ctx->pc = 0x4c6d04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & GPR_U64(ctx, 3));
    // 0x4c6d08: 0x878823  subu        $s1, $a0, $a3
    ctx->pc = 0x4c6d08u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x4c6d0c: 0x3075ffff  andi        $s5, $v1, 0xFFFF
    ctx->pc = 0x4c6d0cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x4c6d10: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x4C6D10u;
    {
        const bool branch_taken_0x4c6d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C6D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6D10u;
        // 0x4c6d14: 0xb29006  srlv        $s2, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 18), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6d10) {
            ctx->pc = 0x4C6D54u;
            goto label_4c6d54;
        }
    }
    ctx->pc = 0x4C6D18u;
label_4c6d18:
    // 0x4c6d18: 0x24040021  addiu       $a0, $zero, 0x21
    ctx->pc = 0x4c6d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x4c6d1c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4c6d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4c6d20: 0x872023  subu        $a0, $a0, $a3
    ctx->pc = 0x4c6d20u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x4c6d24: 0x2262804  sllv        $a1, $a2, $s1
    ctx->pc = 0x4c6d24u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 17) & 0x1F));
    // 0x4c6d28: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c6d28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c6d2c: 0x2452825  or          $a1, $s2, $a1
    ctx->pc = 0x4c6d2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) | GPR_U64(ctx, 5));
    // 0x4c6d30: 0x831806  srlv        $v1, $v1, $a0
    ctx->pc = 0x4c6d30u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x4c6d34: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x4c6d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x4c6d38: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x4c6d38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4c6d3c: 0xe21023  subu        $v0, $a3, $v0
    ctx->pc = 0x4c6d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4c6d40: 0x24e3ffdf  addiu       $v1, $a3, -0x21
    ctx->pc = 0x4c6d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967263));
    // 0x4c6d44: 0x469006  srlv        $s2, $a2, $v0
    ctx->pc = 0x4c6d44u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
    // 0x4c6d48: 0x30b5ffff  andi        $s5, $a1, 0xFFFF
    ctx->pc = 0x4c6d48u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x4c6d4c: 0x2238823  subu        $s1, $s1, $v1
    ctx->pc = 0x4c6d4cu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x4c6d50: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x4c6d50u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_4c6d54:
    // 0x4c6d54: 0x52a0002e  beql        $s5, $zero, . + 4 + (0x2E << 2)
    ctx->pc = 0x4C6D54u;
    {
        const bool branch_taken_0x4c6d54 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c6d54) {
            ctx->pc = 0x4C6D58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C6D54u;
            // 0x4c6d58: 0x8d03002c  lw          $v1, 0x2C($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C6E10u;
            goto label_4c6e10;
        }
    }
    ctx->pc = 0x4C6D5Cu;
    // 0x4c6d5c: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4C6D5Cu;
    {
        const bool branch_taken_0x4c6d5c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C6D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6D5Cu;
        // 0x4c6d60: 0x32430001  andi        $v1, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6d5c) {
            ctx->pc = 0x4C6D78u;
            goto label_4c6d78;
        }
    }
    ctx->pc = 0x4C6D64u;
    // 0x4c6d64: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x4c6d64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x4c6d68: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4C6D68u;
    {
        const bool branch_taken_0x4c6d68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C6D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6D68u;
        // 0x4c6d6c: 0x129042  srl         $s2, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6d68) {
            ctx->pc = 0x4C6D90u;
            goto label_4c6d90;
        }
    }
    ctx->pc = 0x4C6D70u;
    // 0x4c6d70: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x4C6D70u;
    {
        const bool branch_taken_0x4c6d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C6D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6D70u;
        // 0x4c6d74: 0x8d03002c  lw          $v1, 0x2C($t0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6d70) {
            ctx->pc = 0x4C6E10u;
            goto label_4c6e10;
        }
    }
    ctx->pc = 0x4C6D78u;
label_4c6d78:
    // 0x4c6d78: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4c6d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4c6d7c: 0x2411001f  addiu       $s1, $zero, 0x1F
    ctx->pc = 0x4c6d7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x4c6d80: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x4c6d80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x4c6d84: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x4c6d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x4c6d88: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x4C6D88u;
    {
        const bool branch_taken_0x4c6d88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C6D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6D88u;
        // 0x4c6d8c: 0x39042  srl         $s2, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6d88) {
            ctx->pc = 0x4C6E0Cu;
            goto label_4c6e0c;
        }
    }
    ctx->pc = 0x4C6D90u;
label_4c6d90:
    // 0x4c6d90: 0x151023  negu        $v0, $s5
    ctx->pc = 0x4c6d90u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 21)));
    // 0x4c6d94: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x4C6D94u;
    {
        const bool branch_taken_0x4c6d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C6D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6D94u;
        // 0x4c6d98: 0x3055ffff  andi        $s5, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6d94) {
            ctx->pc = 0x4C6E0Cu;
            goto label_4c6e0c;
        }
    }
    ctx->pc = 0x4C6D9Cu;
label_4c6d9c:
    // 0x4c6d9c: 0x8d070008  lw          $a3, 0x8($t0)
    ctx->pc = 0x4c6d9cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x4c6da0: 0x227102b  sltu        $v0, $s1, $a3
    ctx->pc = 0x4c6da0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x4c6da4: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x4C6DA4u;
    {
        const bool branch_taken_0x4c6da4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c6da4) {
            ctx->pc = 0x4C6DA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C6DA4u;
            // 0x4c6da8: 0x8e650000  lw          $a1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C6DD4u;
            goto label_4c6dd4;
        }
    }
    ctx->pc = 0x4C6DACu;
    // 0x4c6dac: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x4c6dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x4c6db0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4c6db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4c6db4: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x4c6db4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x4c6db8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4c6db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4c6dbc: 0x621006  srlv        $v0, $v0, $v1
    ctx->pc = 0x4c6dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x4c6dc0: 0x2278823  subu        $s1, $s1, $a3
    ctx->pc = 0x4c6dc0u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x4c6dc4: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x4c6dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x4c6dc8: 0x3055ffff  andi        $s5, $v0, 0xFFFF
    ctx->pc = 0x4c6dc8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4c6dcc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x4C6DCCu;
    {
        const bool branch_taken_0x4c6dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C6DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6DCCu;
        // 0x4c6dd0: 0xf29006  srlv        $s2, $s2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 18), GPR_U32(ctx, 7) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6dcc) {
            ctx->pc = 0x4C6E0Cu;
            goto label_4c6e0c;
        }
    }
    ctx->pc = 0x4C6DD4u;
label_4c6dd4:
    // 0x4c6dd4: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x4c6dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x4c6dd8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4c6dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4c6ddc: 0x872023  subu        $a0, $a0, $a3
    ctx->pc = 0x4c6ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x4c6de0: 0x2251804  sllv        $v1, $a1, $s1
    ctx->pc = 0x4c6de0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 17) & 0x1F));
    // 0x4c6de4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4c6de4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4c6de8: 0x821006  srlv        $v0, $v0, $a0
    ctx->pc = 0x4c6de8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x4c6dec: 0x2431825  or          $v1, $s2, $v1
    ctx->pc = 0x4c6decu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
    // 0x4c6df0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c6df0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c6df4: 0x24e4ffe0  addiu       $a0, $a3, -0x20
    ctx->pc = 0x4c6df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967264));
    // 0x4c6df8: 0xf11023  subu        $v0, $a3, $s1
    ctx->pc = 0x4c6df8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 17)));
    // 0x4c6dfc: 0x3075ffff  andi        $s5, $v1, 0xFFFF
    ctx->pc = 0x4c6dfcu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x4c6e00: 0x459006  srlv        $s2, $a1, $v0
    ctx->pc = 0x4c6e00u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 2) & 0x1F));
    // 0x4c6e04: 0x2248823  subu        $s1, $s1, $a0
    ctx->pc = 0x4c6e04u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x4c6e08: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x4c6e08u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_4c6e0c:
    // 0x4c6e0c: 0x8d03002c  lw          $v1, 0x2C($t0)
    ctx->pc = 0x4c6e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 44)));
label_4c6e10:
    // 0x4c6e10: 0x161040  sll         $v0, $s6, 1
    ctx->pc = 0x4c6e10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 1));
    // 0x4c6e14: 0xa6f50000  sh          $s5, 0x0($s7)
    ctx->pc = 0x4c6e14u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 0), (uint16_t)GPR_U32(ctx, 21));
    // 0x4c6e18: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x4c6e18u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x4c6e1c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4c6e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4c6e20: 0x26f70002  addiu       $s7, $s7, 0x2
    ctx->pc = 0x4c6e20u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 2));
    // 0x4c6e24: 0xad020004  sw          $v0, 0x4($t0)
    ctx->pc = 0x4c6e24u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
    // 0x4c6e28: 0x12c0005c  beqz        $s6, . + 4 + (0x5C << 2)
    ctx->pc = 0x4C6E28u;
    {
        const bool branch_taken_0x4c6e28 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C6E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6E28u;
        // 0x4c6e2c: 0xad030000  sw          $v1, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6e28) {
            ctx->pc = 0x4C6F9Cu;
            goto label_4c6f9c;
        }
    }
    ctx->pc = 0x4C6E30u;
    // 0x4c6e30: 0x2ec30009  sltiu       $v1, $s6, 0x9
    ctx->pc = 0x4c6e30u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x4c6e34: 0x0  nop
    ctx->pc = 0x4c6e34u;
    // NOP
label_4c6e38:
    // 0x4c6e38: 0x24140008  addiu       $s4, $zero, 0x8
    ctx->pc = 0x4c6e38u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4c6e3c: 0x2e220004  sltiu       $v0, $s1, 0x4
    ctx->pc = 0x4c6e3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x4c6e40: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4C6E40u;
    {
        const bool branch_taken_0x4c6e40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C6E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6E40u;
        // 0x4c6e44: 0x2c3a00b  movn        $s4, $s6, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6e40) {
            ctx->pc = 0x4C6E58u;
            goto label_4c6e58;
        }
    }
    ctx->pc = 0x4C6E48u;
    // 0x4c6e48: 0x3248000f  andi        $t0, $s2, 0xF
    ctx->pc = 0x4c6e48u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)15);
    // 0x4c6e4c: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x4c6e4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x4c6e50: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x4C6E50u;
    {
        const bool branch_taken_0x4c6e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C6E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6E50u;
        // 0x4c6e54: 0x129102  srl         $s2, $s2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6e50) {
            ctx->pc = 0x4C6E7Cu;
            goto label_4c6e7c;
        }
    }
    ctx->pc = 0x4C6E58u;
label_4c6e58:
    // 0x4c6e58: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x4c6e58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4c6e5c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4c6e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4c6e60: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x4c6e60u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x4c6e64: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x4c6e64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x4c6e68: 0x2241004  sllv        $v0, $a0, $s1
    ctx->pc = 0x4c6e68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 17) & 0x1F));
    // 0x4c6e6c: 0x2421025  or          $v0, $s2, $v0
    ctx->pc = 0x4c6e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x4c6e70: 0x2631001c  addiu       $s1, $s1, 0x1C
    ctx->pc = 0x4c6e70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x4c6e74: 0x649006  srlv        $s2, $a0, $v1
    ctx->pc = 0x4c6e74u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x4c6e78: 0x3048000f  andi        $t0, $v0, 0xF
    ctx->pc = 0x4c6e78u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_4c6e7c:
    // 0x4c6e7c: 0x11000038  beqz        $t0, . + 4 + (0x38 << 2)
    ctx->pc = 0x4C6E7Cu;
    {
        const bool branch_taken_0x4c6e7c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C6E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6E7Cu;
        // 0x4c6e80: 0x2690ffff  addiu       $s0, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6e7c) {
            ctx->pc = 0x4C6F60u;
            goto label_4c6f60;
        }
    }
    ctx->pc = 0x4C6E84u;
    // 0x4c6e84: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4c6e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4c6e88: 0x1202003c  beq         $s0, $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x4C6E88u;
    {
        const bool branch_taken_0x4c6e88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x4C6E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6E88u;
        // 0x4c6e8c: 0x2d42823  subu        $a1, $s6, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6e88) {
            ctx->pc = 0x4C6F7Cu;
            goto label_4c6f7c;
        }
    }
    ctx->pc = 0x4C6E90u;
    // 0x4c6e90: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x4c6e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x4c6e94: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4c6e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4c6e98: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x4c6e98u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x4c6e9c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4c6e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4c6ea0: 0x624806  srlv        $t1, $v0, $v1
    ctx->pc = 0x4c6ea0u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x4c6ea4: 0x250affe0  addiu       $t2, $t0, -0x20
    ctx->pc = 0x4c6ea4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967264));
    // 0x4c6ea8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x4c6ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4c6eac: 0x0  nop
    ctx->pc = 0x4c6eacu;
    // NOP
label_4c6eb0:
    // 0x4c6eb0: 0x228102b  sltu        $v0, $s1, $t0
    ctx->pc = 0x4c6eb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x4c6eb4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x4C6EB4u;
    {
        const bool branch_taken_0x4c6eb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c6eb4) {
            ctx->pc = 0x4C6EB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C6EB4u;
            // 0x4c6eb8: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C6ED4u;
            goto label_4c6ed4;
        }
    }
    ctx->pc = 0x4C6EBCu;
    // 0x4c6ebc: 0x2491024  and         $v0, $s2, $t1
    ctx->pc = 0x4c6ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 9));
    // 0x4c6ec0: 0x2288823  subu        $s1, $s1, $t0
    ctx->pc = 0x4c6ec0u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
    // 0x4c6ec4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4c6ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4c6ec8: 0x1129006  srlv        $s2, $s2, $t0
    ctx->pc = 0x4c6ec8u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 18), GPR_U32(ctx, 8) & 0x1F));
    // 0x4c6ecc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x4C6ECCu;
    {
        const bool branch_taken_0x4c6ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C6ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6ECCu;
        // 0x4c6ed0: 0x21c03  sra         $v1, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6ecc) {
            ctx->pc = 0x4C6EF8u;
            goto label_4c6ef8;
        }
    }
    ctx->pc = 0x4C6ED4u;
label_4c6ed4:
    // 0x4c6ed4: 0x1112023  subu        $a0, $t0, $s1
    ctx->pc = 0x4c6ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 17)));
    // 0x4c6ed8: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x4c6ed8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x4c6edc: 0x2221804  sllv        $v1, $v0, $s1
    ctx->pc = 0x4c6edcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
    // 0x4c6ee0: 0x2431825  or          $v1, $s2, $v1
    ctx->pc = 0x4c6ee0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
    // 0x4c6ee4: 0x22a8823  subu        $s1, $s1, $t2
    ctx->pc = 0x4c6ee4u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 10)));
    // 0x4c6ee8: 0x691824  and         $v1, $v1, $t1
    ctx->pc = 0x4c6ee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
    // 0x4c6eec: 0x829006  srlv        $s2, $v0, $a0
    ctx->pc = 0x4c6eecu;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x4c6ef0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4c6ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4c6ef4: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4c6ef4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_4c6ef8:
    // 0x4c6ef8: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x4C6EF8u;
    {
        const bool branch_taken_0x4c6ef8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C6EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6EF8u;
        // 0x4c6efc: 0x2a31021  addu        $v0, $s5, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6ef8) {
            ctx->pc = 0x4C6F44u;
            goto label_4c6f44;
        }
    }
    ctx->pc = 0x4C6F00u;
    // 0x4c6f00: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4C6F00u;
    {
        const bool branch_taken_0x4c6f00 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C6F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6F00u;
        // 0x4c6f04: 0x32470001  andi        $a3, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6f00) {
            ctx->pc = 0x4C6F1Cu;
            goto label_4c6f1c;
        }
    }
    ctx->pc = 0x4C6F08u;
    // 0x4c6f08: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x4c6f08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x4c6f0c: 0x14e00009  bnez        $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x4C6F0Cu;
    {
        const bool branch_taken_0x4c6f0c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C6F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6F0Cu;
        // 0x4c6f10: 0x129042  srl         $s2, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6f0c) {
            ctx->pc = 0x4C6F34u;
            goto label_4c6f34;
        }
    }
    ctx->pc = 0x4C6F14u;
    // 0x4c6f14: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4C6F14u;
    {
        const bool branch_taken_0x4c6f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C6F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6F14u;
        // 0x4c6f18: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6f14) {
            ctx->pc = 0x4C6F48u;
            goto label_4c6f48;
        }
    }
    ctx->pc = 0x4C6F1Cu;
label_4c6f1c:
    // 0x4c6f1c: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x4c6f1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4c6f20: 0x2411001f  addiu       $s1, $zero, 0x1F
    ctx->pc = 0x4c6f20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x4c6f24: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x4c6f24u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x4c6f28: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x4c6f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x4c6f2c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4C6F2Cu;
    {
        const bool branch_taken_0x4c6f2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C6F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6F2Cu;
        // 0x4c6f30: 0x79042  srl         $s2, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6f2c) {
            ctx->pc = 0x4C6F40u;
            goto label_4c6f40;
        }
    }
    ctx->pc = 0x4C6F34u;
label_4c6f34:
    // 0x4c6f34: 0x31023  negu        $v0, $v1
    ctx->pc = 0x4c6f34u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x4c6f38: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4c6f38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4c6f3c: 0x21c03  sra         $v1, $v0, 16
    ctx->pc = 0x4c6f3cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 16));
label_4c6f40:
    // 0x4c6f40: 0x2a31021  addu        $v0, $s5, $v1
    ctx->pc = 0x4c6f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_4c6f44:
    // 0x4c6f44: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x4c6f44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_4c6f48:
    // 0x4c6f48: 0x3055ffff  andi        $s5, $v0, 0xFFFF
    ctx->pc = 0x4c6f48u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4c6f4c: 0xa6f50000  sh          $s5, 0x0($s7)
    ctx->pc = 0x4c6f4cu;
    WRITE16(ADD32(GPR_U32(ctx, 23), 0), (uint16_t)GPR_U32(ctx, 21));
    // 0x4c6f50: 0x1606ffd7  bne         $s0, $a2, . + 4 + (-0x29 << 2)
    ctx->pc = 0x4C6F50u;
    {
        const bool branch_taken_0x4c6f50 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 6));
        ctx->pc = 0x4C6F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6F50u;
        // 0x4c6f54: 0x26f70002  addiu       $s7, $s7, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6f50) {
            ctx->pc = 0x4C6EB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c6eb0;
        }
    }
    ctx->pc = 0x4C6F58u;
    // 0x4c6f58: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x4C6F58u;
    {
        const bool branch_taken_0x4c6f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C6F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6F58u;
        // 0x4c6f5c: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6f58) {
            ctx->pc = 0x4C6F80u;
            goto label_4c6f80;
        }
    }
    ctx->pc = 0x4C6F60u;
label_4c6f60:
    // 0x4c6f60: 0x148040  sll         $s0, $s4, 1
    ctx->pc = 0x4c6f60u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x4c6f64: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x4c6f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c6f68: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4c6f68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c6f6c: 0xc1337b6  jal         func_4CDED8
    ctx->pc = 0x4C6F6Cu;
    SET_GPR_U32(ctx, 31, 0x4C6F74u);
    ctx->pc = 0x4C6F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C6F6Cu;
    // 0x4c6f70: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CDED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CDED8u, 0x4C6F6Cu, 0x4C6F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C6F74u;
label_4c6f74:
    // 0x4c6f74: 0x2f0b821  addu        $s7, $s7, $s0
    ctx->pc = 0x4c6f74u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
    // 0x4c6f78: 0x2d42823  subu        $a1, $s6, $s4
    ctx->pc = 0x4c6f78u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
label_4c6f7c:
    // 0x4c6f7c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x4c6f7cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4c6f80:
    // 0x4c6f80: 0x16c0ffad  bnez        $s6, . + 4 + (-0x53 << 2)
    ctx->pc = 0x4C6F80u;
    {
        const bool branch_taken_0x4c6f80 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C6F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6F80u;
        // 0x4c6f84: 0x2ec30009  sltiu       $v1, $s6, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6f80) {
            ctx->pc = 0x4C6E38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c6e38;
        }
    }
    ctx->pc = 0x4C6F88u;
    // 0x4c6f88: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4C6F88u;
    {
        const bool branch_taken_0x4c6f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C6F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6F88u;
        // 0x4c6f8c: 0xafd10008  sw          $s1, 0x8($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6f88) {
            ctx->pc = 0x4C6FA0u;
            goto label_4c6fa0;
        }
    }
    ctx->pc = 0x4C6F90u;
label_4c6f90:
    // 0x4c6f90: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x4c6f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x4c6f94: 0xad020004  sw          $v0, 0x4($t0)
    ctx->pc = 0x4c6f94u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
    // 0x4c6f98: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4c6f98u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
label_4c6f9c:
    // 0x4c6f9c: 0xafd10008  sw          $s1, 0x8($fp)
    ctx->pc = 0x4c6f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 17));
label_4c6fa0:
    // 0x4c6fa0: 0xafd30004  sw          $s3, 0x4($fp)
    ctx->pc = 0x4c6fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 19));
    // 0x4c6fa4: 0xafd20000  sw          $s2, 0x0($fp)
    ctx->pc = 0x4c6fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 18));
label_4c6fa8:
    // 0x4c6fa8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c6fa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c6fac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c6facu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c6fb0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4c6fb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c6fb4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4c6fb4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4c6fb8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4c6fb8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4c6fbc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4c6fbcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4c6fc0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4c6fc0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4c6fc4: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4c6fc4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4c6fc8: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4c6fc8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4c6fcc: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4c6fccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4c6fd0: 0x3e00008  jr          $ra
    ctx->pc = 0x4C6FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C6FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6FD0u;
        // 0x4c6fd4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C6FD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C6FD8u;
}
