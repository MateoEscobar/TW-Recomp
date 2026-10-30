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

// Function: sub_004C5C50
// Address: 0x4c5c50 - 0x4c5f30
void sub_004C5C50_0x4c5c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C5C50_0x4c5c50");
#endif

    switch (ctx->pc) {
        case 0x4c5d70u: goto label_4c5d70;
        case 0x4c5e18u: goto label_4c5e18;
        case 0x4c5e40u: goto label_4c5e40;
        case 0x4c5e68u: goto label_4c5e68;
        case 0x4c5ef0u: goto label_4c5ef0;
        default: break;
    }

    ctx->pc = 0x4c5c50u;

    // 0x4c5c50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4c5c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4c5c54: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x4c5c54u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c5c58: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4c5c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4c5c5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4c5c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4c5c60: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4c5c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4c5c64: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4c5c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4c5c68: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4c5c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4c5c6c: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4c5c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4c5c70: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x4c5c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x4c5c74: 0x146200a6  bne         $v1, $v0, . + 4 + (0xA6 << 2)
    ctx->pc = 0x4C5C74u;
    {
        const bool branch_taken_0x4c5c74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4C5C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5C74u;
        // 0x4c5c78: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5c74) {
            ctx->pc = 0x4C5F10u;
            goto label_4c5f10;
        }
    }
    ctx->pc = 0x4C5C7Cu;
    // 0x4c5c7c: 0x8e700008  lw          $s0, 0x8($s3)
    ctx->pc = 0x4c5c7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x4c5c80: 0x8d270028  lw          $a3, 0x28($t1)
    ctx->pc = 0x4c5c80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 40)));
    // 0x4c5c84: 0x8e720004  lw          $s2, 0x4($s3)
    ctx->pc = 0x4c5c84u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x4c5c88: 0x207102b  sltu        $v0, $s0, $a3
    ctx->pc = 0x4c5c88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x4c5c8c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4C5C8Cu;
    {
        const bool branch_taken_0x4c5c8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C5C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5C8Cu;
        // 0x4c5c90: 0x8e710000  lw          $s1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5c8c) {
            ctx->pc = 0x4C5CB8u;
            goto label_4c5cb8;
        }
    }
    ctx->pc = 0x4C5C94u;
    // 0x4c5c94: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x4c5c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x4c5c98: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4c5c98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4c5c9c: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x4c5c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x4c5ca0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4c5ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4c5ca4: 0x621006  srlv        $v0, $v0, $v1
    ctx->pc = 0x4c5ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x4c5ca8: 0x2078023  subu        $s0, $s0, $a3
    ctx->pc = 0x4c5ca8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x4c5cac: 0x2225024  and         $t2, $s1, $v0
    ctx->pc = 0x4c5cacu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x4c5cb0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x4C5CB0u;
    {
        const bool branch_taken_0x4c5cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C5CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5CB0u;
        // 0x4c5cb4: 0xf18806  srlv        $s1, $s1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), GPR_U32(ctx, 7) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5cb0) {
            ctx->pc = 0x4C5CF0u;
            goto label_4c5cf0;
        }
    }
    ctx->pc = 0x4C5CB8u;
label_4c5cb8:
    // 0x4c5cb8: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x4c5cb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c5cbc: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x4c5cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x4c5cc0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4c5cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4c5cc4: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x4c5cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x4c5cc8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4c5cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4c5ccc: 0x2062004  sllv        $a0, $a2, $s0
    ctx->pc = 0x4c5cccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 16) & 0x1F));
    // 0x4c5cd0: 0x621006  srlv        $v0, $v0, $v1
    ctx->pc = 0x4c5cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x4c5cd4: 0x2242025  or          $a0, $s1, $a0
    ctx->pc = 0x4c5cd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) | GPR_U64(ctx, 4));
    // 0x4c5cd8: 0xf01823  subu        $v1, $a3, $s0
    ctx->pc = 0x4c5cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
    // 0x4c5cdc: 0x24e5ffe0  addiu       $a1, $a3, -0x20
    ctx->pc = 0x4c5cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967264));
    // 0x4c5ce0: 0x825024  and         $t2, $a0, $v0
    ctx->pc = 0x4c5ce0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4c5ce4: 0x668806  srlv        $s1, $a2, $v1
    ctx->pc = 0x4c5ce4u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
    // 0x4c5ce8: 0x2058023  subu        $s0, $s0, $a1
    ctx->pc = 0x4c5ce8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x4c5cec: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x4c5cecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_4c5cf0:
    // 0x4c5cf0: 0x11400081  beqz        $t2, . + 4 + (0x81 << 2)
    ctx->pc = 0x4C5CF0u;
    {
        const bool branch_taken_0x4c5cf0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C5CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5CF0u;
        // 0x4c5cf4: 0x8d22002c  lw          $v0, 0x2C($t1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5cf0) {
            ctx->pc = 0x4C5EF8u;
            goto label_4c5ef8;
        }
    }
    ctx->pc = 0x4C5CF8u;
    // 0x4c5cf8: 0x4a1821  addu        $v1, $v0, $t2
    ctx->pc = 0x4c5cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x4c5cfc: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x4c5cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x4c5d00: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4C5D00u;
    {
        const bool branch_taken_0x4c5d00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C5D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5D00u;
        // 0x4c5d04: 0xad230004  sw          $v1, 0x4($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5d00) {
            ctx->pc = 0x4C5D20u;
            goto label_4c5d20;
        }
    }
    ctx->pc = 0x4C5D08u;
    // 0x4c5d08: 0x32230001  andi        $v1, $s1, 0x1
    ctx->pc = 0x4c5d08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x4c5d0c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x4c5d0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x4c5d10: 0x14600065  bnez        $v1, . + 4 + (0x65 << 2)
    ctx->pc = 0x4C5D10u;
    {
        const bool branch_taken_0x4c5d10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C5D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5D10u;
        // 0x4c5d14: 0x118842  srl         $s1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5d10) {
            ctx->pc = 0x4C5EA8u;
            goto label_4c5ea8;
        }
    }
    ctx->pc = 0x4C5D18u;
    // 0x4c5d18: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4C5D18u;
    {
        const bool branch_taken_0x4c5d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C5D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5D18u;
        // 0x4c5d1c: 0x252d0010  addiu       $t5, $t1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5d18) {
            ctx->pc = 0x4C5D3Cu;
            goto label_4c5d3c;
        }
    }
    ctx->pc = 0x4C5D20u;
label_4c5d20:
    // 0x4c5d20: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4c5d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c5d24: 0x2410001f  addiu       $s0, $zero, 0x1F
    ctx->pc = 0x4c5d24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x4c5d28: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x4c5d28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x4c5d2c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x4c5d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x4c5d30: 0x1440005d  bnez        $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x4C5D30u;
    {
        const bool branch_taken_0x4c5d30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C5D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5D30u;
        // 0x4c5d34: 0x38842  srl         $s1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5d30) {
            ctx->pc = 0x4C5EA8u;
            goto label_4c5ea8;
        }
    }
    ctx->pc = 0x4C5D38u;
    // 0x4c5d38: 0x252d0010  addiu       $t5, $t1, 0x10
    ctx->pc = 0x4c5d38u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
label_4c5d3c:
    // 0x4c5d3c: 0x91250020  lbu         $a1, 0x20($t1)
    ctx->pc = 0x4c5d3cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x4c5d40: 0x8d28002c  lw          $t0, 0x2C($t1)
    ctx->pc = 0x4c5d40u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 44)));
    // 0x4c5d44: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x4c5d44u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c5d48: 0x1140006e  beqz        $t2, . + 4 + (0x6E << 2)
    ctx->pc = 0x4C5D48u;
    {
        const bool branch_taken_0x4c5d48 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C5D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5D48u;
        // 0x4c5d4c: 0x8d2c0024  lw          $t4, 0x24($t1) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5d48) {
            ctx->pc = 0x4C5F04u;
            goto label_4c5f04;
        }
    }
    ctx->pc = 0x4C5D50u;
    // 0x4c5d50: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x4c5d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x4c5d54: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4c5d54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4c5d58: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x4c5d58u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4c5d5c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c5d5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c5d60: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x4c5d60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x4c5d64: 0x435806  srlv        $t3, $v1, $v0
    ctx->pc = 0x4c5d64u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x4c5d68: 0x24842088  addiu       $a0, $a0, 0x2088
    ctx->pc = 0x4c5d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8328));
    // 0x4c5d6c: 0x205102b  sltu        $v0, $s0, $a1
    ctx->pc = 0x4c5d6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_4c5d70:
    // 0x4c5d70: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x4C5D70u;
    {
        const bool branch_taken_0x4c5d70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c5d70) {
            ctx->pc = 0x4C5D74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C5D70u;
            // 0x4c5d74: 0x8e490000  lw          $t1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C5D98u;
            goto label_4c5d98;
        }
    }
    ctx->pc = 0x4C5D78u;
    // 0x4c5d78: 0x22b1024  and         $v0, $s1, $t3
    ctx->pc = 0x4c5d78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 11));
    // 0x4c5d7c: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x4c5d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x4c5d80: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x4c5d80u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4c5d84: 0x30c3000f  andi        $v1, $a2, 0xF
    ctx->pc = 0x4c5d84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x4c5d88: 0x63102  srl         $a2, $a2, 4
    ctx->pc = 0x4c5d88u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
    // 0x4c5d8c: 0x1a31821  addu        $v1, $t5, $v1
    ctx->pc = 0x4c5d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x4c5d90: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4C5D90u;
    {
        const bool branch_taken_0x4c5d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C5D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5D90u;
        // 0x4c5d94: 0x90670000  lbu         $a3, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5d90) {
            ctx->pc = 0x4C5DC4u;
            goto label_4c5dc4;
        }
    }
    ctx->pc = 0x4C5D98u;
label_4c5d98:
    // 0x4c5d98: 0x2091004  sllv        $v0, $t1, $s0
    ctx->pc = 0x4c5d98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 16) & 0x1F));
    // 0x4c5d9c: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x4c5d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x4c5da0: 0x4b1024  and         $v0, $v0, $t3
    ctx->pc = 0x4c5da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 11));
    // 0x4c5da4: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x4c5da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x4c5da8: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x4c5da8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4c5dac: 0x30c3000f  andi        $v1, $a2, 0xF
    ctx->pc = 0x4c5dacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x4c5db0: 0x1a31821  addu        $v1, $t5, $v1
    ctx->pc = 0x4c5db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x4c5db4: 0x63102  srl         $a2, $a2, 4
    ctx->pc = 0x4c5db4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
    // 0x4c5db8: 0x206102b  sltu        $v0, $s0, $a2
    ctx->pc = 0x4c5db8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x4c5dbc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4C5DBCu;
    {
        const bool branch_taken_0x4c5dbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C5DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5DBCu;
        // 0x4c5dc0: 0x90670000  lbu         $a3, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5dbc) {
            ctx->pc = 0x4C5DD0u;
            goto label_4c5dd0;
        }
    }
    ctx->pc = 0x4C5DC4u;
label_4c5dc4:
    // 0x4c5dc4: 0x2068023  subu        $s0, $s0, $a2
    ctx->pc = 0x4c5dc4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x4c5dc8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4C5DC8u;
    {
        const bool branch_taken_0x4c5dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C5DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5DC8u;
        // 0x4c5dcc: 0xd18806  srlv        $s1, $s1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), GPR_U32(ctx, 6) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5dc8) {
            ctx->pc = 0x4C5DE4u;
            goto label_4c5de4;
        }
    }
    ctx->pc = 0x4C5DD0u;
label_4c5dd0:
    // 0x4c5dd0: 0xd01023  subu        $v0, $a2, $s0
    ctx->pc = 0x4c5dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x4c5dd4: 0x24c3ffe0  addiu       $v1, $a2, -0x20
    ctx->pc = 0x4c5dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x4c5dd8: 0x498806  srlv        $s1, $t1, $v0
    ctx->pc = 0x4c5dd8u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 2) & 0x1F));
    // 0x4c5ddc: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x4c5ddcu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x4c5de0: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x4c5de0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_4c5de4:
    // 0x4c5de4: 0x2ce2000c  sltiu       $v0, $a3, 0xC
    ctx->pc = 0x4c5de4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x4c5de8: 0x54400028  bnel        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x4C5DE8u;
    {
        const bool branch_taken_0x4c5de8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c5de8) {
            ctx->pc = 0x4C5DECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C5DE8u;
            // 0x4c5dec: 0xa1070000  sb          $a3, 0x0($t0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C5E8Cu;
            goto label_4c5e8c;
        }
    }
    ctx->pc = 0x4C5DF0u;
    // 0x4c5df0: 0xe41821  addu        $v1, $a3, $a0
    ctx->pc = 0x4c5df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x4c5df4: 0xe1200  sll         $v0, $t6, 8
    ctx->pc = 0x4c5df4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), 8));
    // 0x4c5df8: 0x1c23025  or          $a2, $t6, $v0
    ctx->pc = 0x4c5df8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 14) | GPR_U64(ctx, 2));
    // 0x4c5dfc: 0x9067fff4  lbu         $a3, -0xC($v1)
    ctx->pc = 0x4c5dfcu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294967284)));
    // 0x4c5e00: 0x61400  sll         $v0, $a2, 16
    ctx->pc = 0x4c5e00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x4c5e04: 0x31030003  andi        $v1, $t0, 0x3
    ctx->pc = 0x4c5e04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
    // 0x4c5e08: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x4c5e08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x4c5e0c: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x4C5E0Cu;
    {
        const bool branch_taken_0x4c5e0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C5E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5E0Cu;
        // 0x4c5e10: 0x1475023  subu        $t2, $t2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5e0c) {
            ctx->pc = 0x4C5E68u;
            goto label_4c5e68;
        }
    }
    ctx->pc = 0x4C5E14u;
    // 0x4c5e14: 0x0  nop
    ctx->pc = 0x4c5e14u;
    // NOP
label_4c5e18:
    // 0x4c5e18: 0x24e2ffff  addiu       $v0, $a3, -0x1
    ctx->pc = 0x4c5e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x4c5e1c: 0xa1060000  sb          $a2, 0x0($t0)
    ctx->pc = 0x4c5e1cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x4c5e20: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x4c5e20u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x4c5e24: 0x0  nop
    ctx->pc = 0x4c5e24u;
    // NOP
    // 0x4c5e28: 0x0  nop
    ctx->pc = 0x4c5e28u;
    // NOP
    // 0x4c5e2c: 0x14e0fffa  bnez        $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4C5E2Cu;
    {
        const bool branch_taken_0x4c5e2c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C5E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5E2Cu;
        // 0x4c5e30: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5e2c) {
            ctx->pc = 0x4C5E18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c5e18;
        }
    }
    ctx->pc = 0x4C5E34u;
    // 0x4c5e34: 0x10e00018  beqz        $a3, . + 4 + (0x18 << 2)
    ctx->pc = 0x4C5E34u;
    {
        const bool branch_taken_0x4c5e34 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c5e34) {
            ctx->pc = 0x4C5E98u;
            goto label_4c5e98;
        }
    }
    ctx->pc = 0x4C5E3Cu;
    // 0x4c5e3c: 0x0  nop
    ctx->pc = 0x4c5e3cu;
    // NOP
label_4c5e40:
    // 0x4c5e40: 0x24e2ffff  addiu       $v0, $a3, -0x1
    ctx->pc = 0x4c5e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x4c5e44: 0xa1060000  sb          $a2, 0x0($t0)
    ctx->pc = 0x4c5e44u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x4c5e48: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x4c5e48u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x4c5e4c: 0x0  nop
    ctx->pc = 0x4c5e4cu;
    // NOP
    // 0x4c5e50: 0x0  nop
    ctx->pc = 0x4c5e50u;
    // NOP
    // 0x4c5e54: 0x14e0fffa  bnez        $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4C5E54u;
    {
        const bool branch_taken_0x4c5e54 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C5E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5E54u;
        // 0x4c5e58: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5e54) {
            ctx->pc = 0x4C5E40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c5e40;
        }
    }
    ctx->pc = 0x4C5E5Cu;
    // 0x4c5e5c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x4C5E5Cu;
    {
        const bool branch_taken_0x4c5e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c5e5c) {
            ctx->pc = 0x4C5E98u;
            goto label_4c5e98;
        }
    }
    ctx->pc = 0x4C5E64u;
    // 0x4c5e64: 0x0  nop
    ctx->pc = 0x4c5e64u;
    // NOP
label_4c5e68:
    // 0x4c5e68: 0x24e2fffc  addiu       $v0, $a3, -0x4
    ctx->pc = 0x4c5e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
    // 0x4c5e6c: 0xad060000  sw          $a2, 0x0($t0)
    ctx->pc = 0x4c5e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
    // 0x4c5e70: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x4c5e70u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x4c5e74: 0x0  nop
    ctx->pc = 0x4c5e74u;
    // NOP
    // 0x4c5e78: 0x0  nop
    ctx->pc = 0x4c5e78u;
    // NOP
    // 0x4c5e7c: 0x14e0fffa  bnez        $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4C5E7Cu;
    {
        const bool branch_taken_0x4c5e7c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C5E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5E7Cu;
        // 0x4c5e80: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5e7c) {
            ctx->pc = 0x4C5E68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c5e68;
        }
    }
    ctx->pc = 0x4C5E84u;
    // 0x4c5e84: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4C5E84u;
    {
        const bool branch_taken_0x4c5e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c5e84) {
            ctx->pc = 0x4C5E98u;
            goto label_4c5e98;
        }
    }
    ctx->pc = 0x4C5E8Cu;
label_4c5e8c:
    // 0x4c5e8c: 0xe0702d  daddu       $t6, $a3, $zero
    ctx->pc = 0x4c5e8cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c5e90: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x4c5e90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x4c5e94: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x4c5e94u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
label_4c5e98:
    // 0x4c5e98: 0x1540ffb5  bnez        $t2, . + 4 + (-0x4B << 2)
    ctx->pc = 0x4C5E98u;
    {
        const bool branch_taken_0x4c5e98 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C5E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5E98u;
        // 0x4c5e9c: 0x205102b  sltu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5e98) {
            ctx->pc = 0x4C5D70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c5d70;
        }
    }
    ctx->pc = 0x4C5EA0u;
    // 0x4c5ea0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x4C5EA0u;
    {
        const bool branch_taken_0x4c5ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C5EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5EA0u;
        // 0x4c5ea4: 0xae700008  sw          $s0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5ea0) {
            ctx->pc = 0x4C5F08u;
            goto label_4c5f08;
        }
    }
    ctx->pc = 0x4C5EA8u;
label_4c5ea8:
    // 0x4c5ea8: 0x2e020004  sltiu       $v0, $s0, 0x4
    ctx->pc = 0x4c5ea8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x4c5eac: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4C5EACu;
    {
        const bool branch_taken_0x4c5eac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c5eac) {
            ctx->pc = 0x4C5EB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C5EACu;
            // 0x4c5eb0: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C5EC4u;
            goto label_4c5ec4;
        }
    }
    ctx->pc = 0x4C5EB4u;
    // 0x4c5eb4: 0x3225000f  andi        $a1, $s1, 0xF
    ctx->pc = 0x4c5eb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)15);
    // 0x4c5eb8: 0x2610fffc  addiu       $s0, $s0, -0x4
    ctx->pc = 0x4c5eb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
    // 0x4c5ebc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x4C5EBCu;
    {
        const bool branch_taken_0x4c5ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C5EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5EBCu;
        // 0x4c5ec0: 0x118902  srl         $s1, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5ebc) {
            ctx->pc = 0x4C5EE4u;
            goto label_4c5ee4;
        }
    }
    ctx->pc = 0x4C5EC4u;
label_4c5ec4:
    // 0x4c5ec4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4c5ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4c5ec8: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x4c5ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x4c5ecc: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x4c5eccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x4c5ed0: 0x2041004  sllv        $v0, $a0, $s0
    ctx->pc = 0x4c5ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 16) & 0x1F));
    // 0x4c5ed4: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x4c5ed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x4c5ed8: 0x2610001c  addiu       $s0, $s0, 0x1C
    ctx->pc = 0x4c5ed8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x4c5edc: 0x648806  srlv        $s1, $a0, $v1
    ctx->pc = 0x4c5edcu;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x4c5ee0: 0x3045000f  andi        $a1, $v0, 0xF
    ctx->pc = 0x4c5ee0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_4c5ee4:
    // 0x4c5ee4: 0x8d24002c  lw          $a0, 0x2C($t1)
    ctx->pc = 0x4c5ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 44)));
    // 0x4c5ee8: 0xc13372a  jal         func_4CDCA8
    ctx->pc = 0x4C5EE8u;
    SET_GPR_U32(ctx, 31, 0x4C5EF0u);
    ctx->pc = 0x4C5EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C5EE8u;
    // 0x4c5eec: 0x140302d  daddu       $a2, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CDCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CDCA8u, 0x4C5EE8u, 0x4C5EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C5EF0u;
label_4c5ef0:
    // 0x4c5ef0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4C5EF0u;
    {
        const bool branch_taken_0x4c5ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C5EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5EF0u;
        // 0x4c5ef4: 0xae700008  sw          $s0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5ef0) {
            ctx->pc = 0x4C5F08u;
            goto label_4c5f08;
        }
    }
    ctx->pc = 0x4C5EF8u;
label_4c5ef8:
    // 0x4c5ef8: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x4c5ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x4c5efc: 0xad220004  sw          $v0, 0x4($t1)
    ctx->pc = 0x4c5efcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 2));
    // 0x4c5f00: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x4c5f00u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
label_4c5f04:
    // 0x4c5f04: 0xae700008  sw          $s0, 0x8($s3)
    ctx->pc = 0x4c5f04u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 16));
label_4c5f08:
    // 0x4c5f08: 0xae720004  sw          $s2, 0x4($s3)
    ctx->pc = 0x4c5f08u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
    // 0x4c5f0c: 0xae710000  sw          $s1, 0x0($s3)
    ctx->pc = 0x4c5f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
label_4c5f10:
    // 0x4c5f10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c5f10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c5f14: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c5f14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c5f18: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4c5f18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c5f1c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4c5f1cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4c5f20: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4c5f20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4c5f24: 0x3e00008  jr          $ra
    ctx->pc = 0x4C5F24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C5F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5F24u;
        // 0x4c5f28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C5F24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C5F2Cu;
    // 0x4c5f2c: 0x0  nop
    ctx->pc = 0x4c5f2cu;
    // NOP
    ctx->pc = 0x4c5f30u;
}
