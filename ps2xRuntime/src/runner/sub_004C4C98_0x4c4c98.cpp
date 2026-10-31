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

// Function: sub_004C4C98
// Address: 0x4c4c98 - 0x4c5c50
void sub_004C4C98_0x4c4c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C4C98_0x4c4c98");
#endif

    switch (ctx->pc) {
        case 0x4c4d48u: goto label_4c4d48;
        case 0x4c4de8u: goto label_4c4de8;
        case 0x4c4e78u: goto label_4c4e78;
        case 0x4c4f20u: goto label_4c4f20;
        case 0x4c4f60u: goto label_4c4f60;
        case 0x4c4f90u: goto label_4c4f90;
        case 0x4c5018u: goto label_4c5018;
        case 0x4c5058u: goto label_4c5058;
        case 0x4c5088u: goto label_4c5088;
        case 0x4c5110u: goto label_4c5110;
        case 0x4c5150u: goto label_4c5150;
        case 0x4c5180u: goto label_4c5180;
        case 0x4c5208u: goto label_4c5208;
        case 0x4c5248u: goto label_4c5248;
        case 0x4c5278u: goto label_4c5278;
        case 0x4c5298u: goto label_4c5298;
        case 0x4c52f0u: goto label_4c52f0;
        case 0x4c5330u: goto label_4c5330;
        case 0x4c5360u: goto label_4c5360;
        case 0x4c53e8u: goto label_4c53e8;
        case 0x4c5428u: goto label_4c5428;
        case 0x4c5458u: goto label_4c5458;
        case 0x4c54e0u: goto label_4c54e0;
        case 0x4c5520u: goto label_4c5520;
        case 0x4c5550u: goto label_4c5550;
        case 0x4c55d8u: goto label_4c55d8;
        case 0x4c5618u: goto label_4c5618;
        case 0x4c5648u: goto label_4c5648;
        case 0x4c56d8u: goto label_4c56d8;
        case 0x4c5718u: goto label_4c5718;
        case 0x4c5748u: goto label_4c5748;
        case 0x4c57d0u: goto label_4c57d0;
        case 0x4c5810u: goto label_4c5810;
        case 0x4c5840u: goto label_4c5840;
        case 0x4c58a0u: goto label_4c58a0;
        case 0x4c58e0u: goto label_4c58e0;
        case 0x4c5910u: goto label_4c5910;
        case 0x4c5998u: goto label_4c5998;
        case 0x4c59d8u: goto label_4c59d8;
        case 0x4c5a08u: goto label_4c5a08;
        case 0x4c5a90u: goto label_4c5a90;
        case 0x4c5ad0u: goto label_4c5ad0;
        case 0x4c5b00u: goto label_4c5b00;
        case 0x4c5b98u: goto label_4c5b98;
        case 0x4c5bf8u: goto label_4c5bf8;
        default: break;
    }

    ctx->pc = 0x4c4c98u;

    // 0x4c4c98: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4c4c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x4c4c9c: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x4c4c9cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c4ca0: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x4c4ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x4c4ca4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x4c4ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x4c4ca8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x4c4ca8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c4cac: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x4c4cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x4c4cb0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x4c4cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x4c4cb4: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x4c4cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x4c4cb8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x4c4cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x4c4cbc: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x4c4cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x4c4cc0: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x4c4cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x4c4cc4: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x4c4cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x4c4cc8: 0x8ea80008  lw          $t0, 0x8($s5)
    ctx->pc = 0x4c4cc8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x4c4ccc: 0x8eae0004  lw          $t6, 0x4($s5)
    ctx->pc = 0x4c4cccu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x4c4cd0: 0x2d020004  sltiu       $v0, $t0, 0x4
    ctx->pc = 0x4c4cd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x4c4cd4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4C4CD4u;
    {
        const bool branch_taken_0x4c4cd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C4CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4CD4u;
        // 0x4c4cd8: 0x8eaa0000  lw          $t2, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4cd4) {
            ctx->pc = 0x4C4CECu;
            goto label_4c4cec;
        }
    }
    ctx->pc = 0x4C4CDCu;
    // 0x4c4cdc: 0x3149000f  andi        $t1, $t2, 0xF
    ctx->pc = 0x4c4cdcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)15);
    // 0x4c4ce0: 0x2508fffc  addiu       $t0, $t0, -0x4
    ctx->pc = 0x4c4ce0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
    // 0x4c4ce4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x4C4CE4u;
    {
        const bool branch_taken_0x4c4ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C4CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4CE4u;
        // 0x4c4ce8: 0xa5102  srl         $t2, $t2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4ce4) {
            ctx->pc = 0x4C4D10u;
            goto label_4c4d10;
        }
    }
    ctx->pc = 0x4C4CECu;
label_4c4cec:
    // 0x4c4cec: 0x8dc40000  lw          $a0, 0x0($t6)
    ctx->pc = 0x4c4cecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4c4cf0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4c4cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4c4cf4: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x4c4cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x4c4cf8: 0x25ce0004  addiu       $t6, $t6, 0x4
    ctx->pc = 0x4c4cf8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
    // 0x4c4cfc: 0x1041004  sllv        $v0, $a0, $t0
    ctx->pc = 0x4c4cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 8) & 0x1F));
    // 0x4c4d00: 0x1421025  or          $v0, $t2, $v0
    ctx->pc = 0x4c4d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x4c4d04: 0x2508001c  addiu       $t0, $t0, 0x1C
    ctx->pc = 0x4c4d04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 28));
    // 0x4c4d08: 0x645006  srlv        $t2, $a0, $v1
    ctx->pc = 0x4c4d08u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x4c4d0c: 0x3049000f  andi        $t1, $v0, 0xF
    ctx->pc = 0x4c4d0cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_4c4d10:
    // 0x4c4d10: 0x3c040053  lui         $a0, 0x53
    ctx->pc = 0x4c4d10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
    // 0x4c4d14: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4c4d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x4c4d18: 0x248427e0  addiu       $a0, $a0, 0x27E0
    ctx->pc = 0x4c4d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10208));
    // 0x4c4d1c: 0x24422078  addiu       $v0, $v0, 0x2078
    ctx->pc = 0x4c4d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8312));
    // 0x4c4d20: 0x91880  sll         $v1, $t1, 2
    ctx->pc = 0x4c4d20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x4c4d24: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x4c4d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x4c4d28: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4c4d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4c4d2c: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x4c4d2cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4c4d30: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4c4d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4c4d34: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x4c4d34u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x4c4d38: 0x1520000c  bnez        $t1, . + 4 + (0xC << 2)
    ctx->pc = 0x4C4D38u;
    {
        const bool branch_taken_0x4c4d38 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C4D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4D38u;
        // 0x4c4d3c: 0xad640000  sw          $a0, 0x0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4d38) {
            ctx->pc = 0x4C4D6Cu;
            goto label_4c4d6c;
        }
    }
    ctx->pc = 0x4C4D40u;
    // 0x4c4d40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4c4d40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c4d44: 0xe51021  addu        $v0, $a3, $a1
    ctx->pc = 0x4c4d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_4c4d48:
    // 0x4c4d48: 0xa0450000  sb          $a1, 0x0($v0)
    ctx->pc = 0x4c4d48u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x4c4d4c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4c4d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4c4d50: 0x2ca20010  sltiu       $v0, $a1, 0x10
    ctx->pc = 0x4c4d50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x4c4d54: 0x0  nop
    ctx->pc = 0x4c4d54u;
    // NOP
    // 0x4c4d58: 0x0  nop
    ctx->pc = 0x4c4d58u;
    // NOP
    // 0x4c4d5c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4C4D5Cu;
    {
        const bool branch_taken_0x4c4d5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C4D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4D5Cu;
        // 0x4c4d60: 0xe51021  addu        $v0, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4d5c) {
            ctx->pc = 0x4C4D48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c4d48;
        }
    }
    ctx->pc = 0x4C4D64u;
    // 0x4c4d64: 0x100003ad  b           . + 4 + (0x3AD << 2)
    ctx->pc = 0x4C4D64u;
    {
        const bool branch_taken_0x4c4d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C4D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4D64u;
        // 0x4c4d68: 0xaea80008  sw          $t0, 0x8($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4d64) {
            ctx->pc = 0x4C5C1Cu;
            goto label_4c5c1c;
        }
    }
    ctx->pc = 0x4C4D6Cu;
label_4c4d6c:
    // 0x4c4d6c: 0x11000006  beqz        $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4C4D6Cu;
    {
        const bool branch_taken_0x4c4d6c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C4D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4D6Cu;
        // 0x4c4d70: 0x31430001  andi        $v1, $t2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4d6c) {
            ctx->pc = 0x4C4D88u;
            goto label_4c4d88;
        }
    }
    ctx->pc = 0x4C4D74u;
    // 0x4c4d74: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x4c4d74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x4c4d78: 0x14600374  bnez        $v1, . + 4 + (0x374 << 2)
    ctx->pc = 0x4C4D78u;
    {
        const bool branch_taken_0x4c4d78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C4D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4D78u;
        // 0x4c4d7c: 0xa5042  srl         $t2, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4d78) {
            ctx->pc = 0x4C5B4Cu;
            goto label_4c5b4c;
        }
    }
    ctx->pc = 0x4C4D80u;
    // 0x4c4d80: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4C4D80u;
    {
        const bool branch_taken_0x4c4d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C4D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4D80u;
        // 0x4c4d84: 0x2d020002  sltiu       $v0, $t0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4d80) {
            ctx->pc = 0x4C4DA4u;
            goto label_4c4da4;
        }
    }
    ctx->pc = 0x4C4D88u;
label_4c4d88:
    // 0x4c4d88: 0x8dc30000  lw          $v1, 0x0($t6)
    ctx->pc = 0x4c4d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4c4d8c: 0x2408001f  addiu       $t0, $zero, 0x1F
    ctx->pc = 0x4c4d8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x4c4d90: 0x25ce0004  addiu       $t6, $t6, 0x4
    ctx->pc = 0x4c4d90u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
    // 0x4c4d94: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x4c4d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x4c4d98: 0x1440036c  bnez        $v0, . + 4 + (0x36C << 2)
    ctx->pc = 0x4C4D98u;
    {
        const bool branch_taken_0x4c4d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C4D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4D98u;
        // 0x4c4d9c: 0x35042  srl         $t2, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4d98) {
            ctx->pc = 0x4C5B4Cu;
            goto label_4c5b4c;
        }
    }
    ctx->pc = 0x4C4DA0u;
    // 0x4c4da0: 0x2d020002  sltiu       $v0, $t0, 0x2
    ctx->pc = 0x4c4da0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_4c4da4:
    // 0x4c4da4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4C4DA4u;
    {
        const bool branch_taken_0x4c4da4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c4da4) {
            ctx->pc = 0x4C4DA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C4DA4u;
            // 0x4c4da8: 0x8dc40000  lw          $a0, 0x0($t6) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C4DBCu;
            goto label_4c4dbc;
        }
    }
    ctx->pc = 0x4C4DACu;
    // 0x4c4dac: 0x314f0003  andi        $t7, $t2, 0x3
    ctx->pc = 0x4c4dacu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)3);
    // 0x4c4db0: 0x2508fffe  addiu       $t0, $t0, -0x2
    ctx->pc = 0x4c4db0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967294));
    // 0x4c4db4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x4C4DB4u;
    {
        const bool branch_taken_0x4c4db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C4DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4DB4u;
        // 0x4c4db8: 0xa5082  srl         $t2, $t2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4db4) {
            ctx->pc = 0x4C4DDCu;
            goto label_4c4ddc;
        }
    }
    ctx->pc = 0x4C4DBCu;
label_4c4dbc:
    // 0x4c4dbc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4c4dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4c4dc0: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x4c4dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x4c4dc4: 0x25ce0004  addiu       $t6, $t6, 0x4
    ctx->pc = 0x4c4dc4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
    // 0x4c4dc8: 0x1041004  sllv        $v0, $a0, $t0
    ctx->pc = 0x4c4dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 8) & 0x1F));
    // 0x4c4dcc: 0x1421025  or          $v0, $t2, $v0
    ctx->pc = 0x4c4dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x4c4dd0: 0x2508001e  addiu       $t0, $t0, 0x1E
    ctx->pc = 0x4c4dd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 30));
    // 0x4c4dd4: 0x645006  srlv        $t2, $a0, $v1
    ctx->pc = 0x4c4dd4u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x4c4dd8: 0x304f0003  andi        $t7, $v0, 0x3
    ctx->pc = 0x4c4dd8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_4c4ddc:
    // 0x4c4ddc: 0x15e0001c  bnez        $t7, . + 4 + (0x1C << 2)
    ctx->pc = 0x4C4DDCu;
    {
        const bool branch_taken_0x4c4ddc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C4DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4DDCu;
        // 0x4c4de0: 0x27b90010  addiu       $t9, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4ddc) {
            ctx->pc = 0x4C4E50u;
            goto label_4c4e50;
        }
    }
    ctx->pc = 0x4C4DE4u;
    // 0x4c4de4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4c4de4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c4de8:
    // 0x4c4de8: 0x11000006  beqz        $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4C4DE8u;
    {
        const bool branch_taken_0x4c4de8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C4DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4DE8u;
        // 0x4c4dec: 0x31430001  andi        $v1, $t2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4de8) {
            ctx->pc = 0x4C4E04u;
            goto label_4c4e04;
        }
    }
    ctx->pc = 0x4C4DF0u;
    // 0x4c4df0: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x4c4df0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x4c4df4: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4C4DF4u;
    {
        const bool branch_taken_0x4c4df4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C4DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4DF4u;
        // 0x4c4df8: 0xa5042  srl         $t2, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4df4) {
            ctx->pc = 0x4C4E1Cu;
            goto label_4c4e1c;
        }
    }
    ctx->pc = 0x4C4DFCu;
    // 0x4c4dfc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4C4DFCu;
    {
        const bool branch_taken_0x4c4dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C4E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4DFCu;
        // 0x4c4e00: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4dfc) {
            ctx->pc = 0x4C4E30u;
            goto label_4c4e30;
        }
    }
    ctx->pc = 0x4C4E04u;
label_4c4e04:
    // 0x4c4e04: 0x8dc30000  lw          $v1, 0x0($t6)
    ctx->pc = 0x4c4e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4c4e08: 0x2408001f  addiu       $t0, $zero, 0x1F
    ctx->pc = 0x4c4e08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x4c4e0c: 0x25ce0004  addiu       $t6, $t6, 0x4
    ctx->pc = 0x4c4e0cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
    // 0x4c4e10: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x4c4e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x4c4e14: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4C4E14u;
    {
        const bool branch_taken_0x4c4e14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C4E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4E14u;
        // 0x4c4e18: 0x35042  srl         $t2, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4e14) {
            ctx->pc = 0x4C4E2Cu;
            goto label_4c4e2c;
        }
    }
    ctx->pc = 0x4C4E1Cu;
label_4c4e1c:
    // 0x4c4e1c: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x4c4e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4c4e20: 0xa0e50001  sb          $a1, 0x1($a3)
    ctx->pc = 0x4c4e20u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x4c4e24: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4C4E24u;
    {
        const bool branch_taken_0x4c4e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C4E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4E24u;
        // 0x4c4e28: 0xa0e20000  sb          $v0, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4e24) {
            ctx->pc = 0x4C4E38u;
            goto label_4c4e38;
        }
    }
    ctx->pc = 0x4C4E2Cu;
label_4c4e2c:
    // 0x4c4e2c: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x4c4e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_4c4e30:
    // 0x4c4e30: 0xa0e50000  sb          $a1, 0x0($a3)
    ctx->pc = 0x4c4e30u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x4c4e34: 0xa0e20001  sb          $v0, 0x1($a3)
    ctx->pc = 0x4c4e34u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 2));
label_4c4e38:
    // 0x4c4e38: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x4c4e38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x4c4e3c: 0x2ca20010  sltiu       $v0, $a1, 0x10
    ctx->pc = 0x4c4e3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x4c4e40: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x4C4E40u;
    {
        const bool branch_taken_0x4c4e40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C4E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4E40u;
        // 0x4c4e44: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4e40) {
            ctx->pc = 0x4C4DE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c4de8;
        }
    }
    ctx->pc = 0x4C4E48u;
    // 0x4c4e48: 0x10000374  b           . + 4 + (0x374 << 2)
    ctx->pc = 0x4C4E48u;
    {
        const bool branch_taken_0x4c4e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C4E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4E48u;
        // 0x4c4e4c: 0xaea80008  sw          $t0, 0x8($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4e48) {
            ctx->pc = 0x4C5C1Cu;
            goto label_4c5c1c;
        }
    }
    ctx->pc = 0x4C4E50u;
label_4c4e50:
    // 0x4c4e50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4c4e50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c4e54: 0x27ab0012  addiu       $t3, $sp, 0x12
    ctx->pc = 0x4c4e54u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 18));
    // 0x4c4e58: 0x27b30014  addiu       $s3, $sp, 0x14
    ctx->pc = 0x4c4e58u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x4c4e5c: 0x27b40016  addiu       $s4, $sp, 0x16
    ctx->pc = 0x4c4e5cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 22));
    // 0x4c4e60: 0x27b20018  addiu       $s2, $sp, 0x18
    ctx->pc = 0x4c4e60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x4c4e64: 0x27b6001a  addiu       $s6, $sp, 0x1A
    ctx->pc = 0x4c4e64u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 26));
    // 0x4c4e68: 0x27b7001c  addiu       $s7, $sp, 0x1C
    ctx->pc = 0x4c4e68u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x4c4e6c: 0x27be001e  addiu       $fp, $sp, 0x1E
    ctx->pc = 0x4c4e6cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 30));
    // 0x4c4e70: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4c4e70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4c4e74: 0x320202d  daddu       $a0, $t9, $zero
    ctx->pc = 0x4c4e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
label_4c4e78:
    // 0x4c4e78: 0x11000006  beqz        $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4C4E78u;
    {
        const bool branch_taken_0x4c4e78 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C4E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4E78u;
        // 0x4c4e7c: 0x31430001  andi        $v1, $t2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4e78) {
            ctx->pc = 0x4C4E94u;
            goto label_4c4e94;
        }
    }
    ctx->pc = 0x4C4E80u;
    // 0x4c4e80: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x4c4e80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x4c4e84: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4C4E84u;
    {
        const bool branch_taken_0x4c4e84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C4E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4E84u;
        // 0x4c4e88: 0xa5042  srl         $t2, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4e84) {
            ctx->pc = 0x4C4EACu;
            goto label_4c4eac;
        }
    }
    ctx->pc = 0x4C4E8Cu;
    // 0x4c4e8c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4C4E8Cu;
    {
        const bool branch_taken_0x4c4e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C4E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4E8Cu;
        // 0x4c4e90: 0xa0850000  sb          $a1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4e8c) {
            ctx->pc = 0x4C4EBCu;
            goto label_4c4ebc;
        }
    }
    ctx->pc = 0x4C4E94u;
label_4c4e94:
    // 0x4c4e94: 0x8dc30000  lw          $v1, 0x0($t6)
    ctx->pc = 0x4c4e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4c4e98: 0x2408001f  addiu       $t0, $zero, 0x1F
    ctx->pc = 0x4c4e98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x4c4e9c: 0x25ce0004  addiu       $t6, $t6, 0x4
    ctx->pc = 0x4c4e9cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
    // 0x4c4ea0: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x4c4ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x4c4ea4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4C4EA4u;
    {
        const bool branch_taken_0x4c4ea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C4EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4EA4u;
        // 0x4c4ea8: 0x35042  srl         $t2, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4ea4) {
            ctx->pc = 0x4C4EB8u;
            goto label_4c4eb8;
        }
    }
    ctx->pc = 0x4C4EACu;
label_4c4eac:
    // 0x4c4eac: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x4c4eacu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x4c4eb0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4C4EB0u;
    {
        const bool branch_taken_0x4c4eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C4EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4EB0u;
        // 0x4c4eb4: 0xa0850001  sb          $a1, 0x1($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4eb0) {
            ctx->pc = 0x4C4EC0u;
            goto label_4c4ec0;
        }
    }
    ctx->pc = 0x4C4EB8u;
label_4c4eb8:
    // 0x4c4eb8: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x4c4eb8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
label_4c4ebc:
    // 0x4c4ebc: 0xa0860001  sb          $a2, 0x1($a0)
    ctx->pc = 0x4c4ebcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 6));
label_4c4ec0:
    // 0x4c4ec0: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x4c4ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x4c4ec4: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x4c4ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x4c4ec8: 0x2ca20010  sltiu       $v0, $a1, 0x10
    ctx->pc = 0x4c4ec8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x4c4ecc: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x4C4ECCu;
    {
        const bool branch_taken_0x4c4ecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C4ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4ECCu;
        // 0x4c4ed0: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4ecc) {
            ctx->pc = 0x4C4E78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c4e78;
        }
    }
    ctx->pc = 0x4C4ED4u;
    // 0x4c4ed4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4c4ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4c4ed8: 0x15e200f3  bne         $t7, $v0, . + 4 + (0xF3 << 2)
    ctx->pc = 0x4C4ED8u;
    {
        const bool branch_taken_0x4c4ed8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 2));
        ctx->pc = 0x4C4EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4ED8u;
        // 0x4c4edc: 0x2d020003  sltiu       $v0, $t0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4ed8) {
            ctx->pc = 0x4C52A8u;
            goto label_4c52a8;
        }
    }
    ctx->pc = 0x4C4EE0u;
    // 0x4c4ee0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4C4EE0u;
    {
        const bool branch_taken_0x4c4ee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c4ee0) {
            ctx->pc = 0x4C4EE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C4EE0u;
            // 0x4c4ee4: 0x8dc20000  lw          $v0, 0x0($t6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C4EF0u;
            goto label_4c4ef0;
        }
    }
    ctx->pc = 0x4C4EE8u;
    // 0x4c4ee8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4C4EE8u;
    {
        const bool branch_taken_0x4c4ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C4EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4EE8u;
        // 0x4c4eec: 0x31430007  andi        $v1, $t2, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4ee8) {
            ctx->pc = 0x4C4EFCu;
            goto label_4c4efc;
        }
    }
    ctx->pc = 0x4C4EF0u;
label_4c4ef0:
    // 0x4c4ef0: 0x1021004  sllv        $v0, $v0, $t0
    ctx->pc = 0x4c4ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
    // 0x4c4ef4: 0x1421025  or          $v0, $t2, $v0
    ctx->pc = 0x4c4ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x4c4ef8: 0x30430007  andi        $v1, $v0, 0x7
    ctx->pc = 0x4c4ef8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_4c4efc:
    // 0x4c4efc: 0x60602d  daddu       $t4, $v1, $zero
    ctx->pc = 0x4c4efcu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c4f00: 0x24ef0004  addiu       $t7, $a3, 0x4
    ctx->pc = 0x4c4f00u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x4c4f04: 0x24f0000c  addiu       $s0, $a3, 0xC
    ctx->pc = 0x4c4f04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
    // 0x4c4f08: 0x320482d  daddu       $t1, $t9, $zero
    ctx->pc = 0x4c4f08u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c4f0c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x4c4f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4c4f10: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4c4f10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4c4f14: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x4c4f14u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c4f18: 0x24ed0008  addiu       $t5, $a3, 0x8
    ctx->pc = 0x4c4f18u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x4c4f1c: 0x31820001  andi        $v0, $t4, 0x1
    ctx->pc = 0x4c4f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)1);
label_4c4f20:
    // 0x4c4f20: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4C4F20u;
    {
        const bool branch_taken_0x4c4f20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C4F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4F20u;
        // 0x4c4f24: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4f20) {
            ctx->pc = 0x4C4F38u;
            goto label_4c4f38;
        }
    }
    ctx->pc = 0x4C4F28u;
    // 0x4c4f28: 0x91620000  lbu         $v0, 0x0($t3)
    ctx->pc = 0x4c4f28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4c4f2c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x4c4f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x4c4f30: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4C4F30u;
    {
        const bool branch_taken_0x4c4f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C4F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4F30u;
        // 0x4c4f34: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4f30) {
            ctx->pc = 0x4C4F44u;
            goto label_4c4f44;
        }
    }
    ctx->pc = 0x4C4F38u;
label_4c4f38:
    // 0x4c4f38: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x4c4f38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4c4f3c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x4c4f3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x4c4f40: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x4c4f40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_4c4f44:
    // 0x4c4f44: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x4c4f44u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4c4f48: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x4c4f48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x4c4f4c: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x4C4F4Cu;
    {
        const bool branch_taken_0x4c4f4c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C4F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4F4Cu;
        // 0x4c4f50: 0xc6042  srl         $t4, $t4, 1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 12), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4f4c) {
            ctx->pc = 0x4C4F84u;
            goto label_4c4f84;
        }
    }
    ctx->pc = 0x4C4F54u;
    // 0x4c4f54: 0x14a0fff2  bnez        $a1, . + 4 + (-0xE << 2)
    ctx->pc = 0x4C4F54u;
    {
        const bool branch_taken_0x4c4f54 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C4F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4F54u;
        // 0x4c4f58: 0x31820001  andi        $v0, $t4, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4f54) {
            ctx->pc = 0x4C4F20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c4f20;
        }
    }
    ctx->pc = 0x4C4F5Cu;
    // 0x4c4f5c: 0x0  nop
    ctx->pc = 0x4c4f5cu;
    // NOP
label_4c4f60:
    // 0x4c4f60: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x4c4f60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4c4f64: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x4c4f64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x4c4f68: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x4c4f68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x4c4f6c: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x4c4f6cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4c4f70: 0x0  nop
    ctx->pc = 0x4c4f70u;
    // NOP
    // 0x4c4f74: 0x14c0fffa  bnez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4C4F74u;
    {
        const bool branch_taken_0x4c4f74 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C4F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4F74u;
        // 0x4c4f78: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4f74) {
            ctx->pc = 0x4C4F60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c4f60;
        }
    }
    ctx->pc = 0x4C4F7Cu;
    // 0x4c4f7c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4C4F7Cu;
    {
        const bool branch_taken_0x4c4f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C4F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4F7Cu;
        // 0x4c4f80: 0x103102b  sltu        $v0, $t0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4f7c) {
            ctx->pc = 0x4C4FB0u;
            goto label_4c4fb0;
        }
    }
    ctx->pc = 0x4C4F84u;
label_4c4f84:
    // 0x4c4f84: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x4C4F84u;
    {
        const bool branch_taken_0x4c4f84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C4F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4F84u;
        // 0x4c4f88: 0x103102b  sltu        $v0, $t0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4f84) {
            ctx->pc = 0x4C4FB0u;
            goto label_4c4fb0;
        }
    }
    ctx->pc = 0x4C4F8Cu;
    // 0x4c4f8c: 0x0  nop
    ctx->pc = 0x4c4f8cu;
    // NOP
label_4c4f90:
    // 0x4c4f90: 0x91620000  lbu         $v0, 0x0($t3)
    ctx->pc = 0x4c4f90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4c4f94: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x4c4f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x4c4f98: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x4c4f98u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x4c4f9c: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x4c4f9cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4c4fa0: 0x0  nop
    ctx->pc = 0x4c4fa0u;
    // NOP
    // 0x4c4fa4: 0x14a0fffa  bnez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4C4FA4u;
    {
        const bool branch_taken_0x4c4fa4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C4FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4FA4u;
        // 0x4c4fa8: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4fa4) {
            ctx->pc = 0x4C4F90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c4f90;
        }
    }
    ctx->pc = 0x4C4FACu;
    // 0x4c4fac: 0x103102b  sltu        $v0, $t0, $v1
    ctx->pc = 0x4c4facu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4c4fb0:
    // 0x4c4fb0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4C4FB0u;
    {
        const bool branch_taken_0x4c4fb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c4fb0) {
            ctx->pc = 0x4C4FB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C4FB0u;
            // 0x4c4fb4: 0x8dc20000  lw          $v0, 0x0($t6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C4FC4u;
            goto label_4c4fc4;
        }
    }
    ctx->pc = 0x4C4FB8u;
    // 0x4c4fb8: 0x1034023  subu        $t0, $t0, $v1
    ctx->pc = 0x4c4fb8u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x4c4fbc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4C4FBCu;
    {
        const bool branch_taken_0x4c4fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C4FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4FBCu;
        // 0x4c4fc0: 0x6a5006  srlv        $t2, $t2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 3) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4fbc) {
            ctx->pc = 0x4C4FD8u;
            goto label_4c4fd8;
        }
    }
    ctx->pc = 0x4C4FC4u;
label_4c4fc4:
    // 0x4c4fc4: 0x2464ffe0  addiu       $a0, $v1, -0x20
    ctx->pc = 0x4c4fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
    // 0x4c4fc8: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x4c4fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x4c4fcc: 0x25ce0004  addiu       $t6, $t6, 0x4
    ctx->pc = 0x4c4fccu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
    // 0x4c4fd0: 0x625006  srlv        $t2, $v0, $v1
    ctx->pc = 0x4c4fd0u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x4c4fd4: 0x1044023  subu        $t0, $t0, $a0
    ctx->pc = 0x4c4fd4u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_4c4fd8:
    // 0x4c4fd8: 0x2d020003  sltiu       $v0, $t0, 0x3
    ctx->pc = 0x4c4fd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x4c4fdc: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4C4FDCu;
    {
        const bool branch_taken_0x4c4fdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c4fdc) {
            ctx->pc = 0x4C4FE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C4FDCu;
            // 0x4c4fe0: 0x8dc20000  lw          $v0, 0x0($t6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C4FECu;
            goto label_4c4fec;
        }
    }
    ctx->pc = 0x4C4FE4u;
    // 0x4c4fe4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4C4FE4u;
    {
        const bool branch_taken_0x4c4fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C4FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4FE4u;
        // 0x4c4fe8: 0x31430007  andi        $v1, $t2, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4fe4) {
            ctx->pc = 0x4C4FF8u;
            goto label_4c4ff8;
        }
    }
    ctx->pc = 0x4C4FECu;
label_4c4fec:
    // 0x4c4fec: 0x1021004  sllv        $v0, $v0, $t0
    ctx->pc = 0x4c4fecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
    // 0x4c4ff0: 0x1421025  or          $v0, $t2, $v0
    ctx->pc = 0x4c4ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x4c4ff4: 0x30430007  andi        $v1, $v0, 0x7
    ctx->pc = 0x4c4ff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_4c4ff8:
    // 0x4c4ff8: 0x60602d  daddu       $t4, $v1, $zero
    ctx->pc = 0x4c4ff8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c4ffc: 0x1e0282d  daddu       $a1, $t7, $zero
    ctx->pc = 0x4c4ffcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c5000: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x4c5000u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c5004: 0x280582d  daddu       $t3, $s4, $zero
    ctx->pc = 0x4c5004u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c5008: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x4c5008u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4c500c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x4c500cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4c5010: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x4c5010u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c5014: 0x31820001  andi        $v0, $t4, 0x1
    ctx->pc = 0x4c5014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)1);
label_4c5018:
    // 0x4c5018: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4C5018u;
    {
        const bool branch_taken_0x4c5018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C501Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5018u;
        // 0x4c501c: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5018) {
            ctx->pc = 0x4C5030u;
            goto label_4c5030;
        }
    }
    ctx->pc = 0x4C5020u;
    // 0x4c5020: 0x91620000  lbu         $v0, 0x0($t3)
    ctx->pc = 0x4c5020u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4c5024: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x4c5024u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x4c5028: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4C5028u;
    {
        const bool branch_taken_0x4c5028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C502Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5028u;
        // 0x4c502c: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5028) {
            ctx->pc = 0x4C503Cu;
            goto label_4c503c;
        }
    }
    ctx->pc = 0x4C5030u;
label_4c5030:
    // 0x4c5030: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x4c5030u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4c5034: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x4c5034u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x4c5038: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x4c5038u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_4c503c:
    // 0x4c503c: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x4c503cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4c5040: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4c5040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4c5044: 0x10e0000d  beqz        $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x4C5044u;
    {
        const bool branch_taken_0x4c5044 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C5048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5044u;
        // 0x4c5048: 0xc6042  srl         $t4, $t4, 1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 12), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5044) {
            ctx->pc = 0x4C507Cu;
            goto label_4c507c;
        }
    }
    ctx->pc = 0x4C504Cu;
    // 0x4c504c: 0x14c0fff2  bnez        $a2, . + 4 + (-0xE << 2)
    ctx->pc = 0x4C504Cu;
    {
        const bool branch_taken_0x4c504c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C5050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C504Cu;
        // 0x4c5050: 0x31820001  andi        $v0, $t4, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c504c) {
            ctx->pc = 0x4C5018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c5018;
        }
    }
    ctx->pc = 0x4C5054u;
    // 0x4c5054: 0x0  nop
    ctx->pc = 0x4c5054u;
    // NOP
label_4c5058:
    // 0x4c5058: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x4c5058u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4c505c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x4c505cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x4c5060: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x4c5060u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x4c5064: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x4c5064u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4c5068: 0x0  nop
    ctx->pc = 0x4c5068u;
    // NOP
    // 0x4c506c: 0x14e0fffa  bnez        $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4C506Cu;
    {
        const bool branch_taken_0x4c506c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C5070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C506Cu;
        // 0x4c5070: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c506c) {
            ctx->pc = 0x4C5058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c5058;
        }
    }
    ctx->pc = 0x4C5074u;
    // 0x4c5074: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4C5074u;
    {
        const bool branch_taken_0x4c5074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C5078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5074u;
        // 0x4c5078: 0x103102b  sltu        $v0, $t0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5074) {
            ctx->pc = 0x4C50A8u;
            goto label_4c50a8;
        }
    }
    ctx->pc = 0x4C507Cu;
label_4c507c:
    // 0x4c507c: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x4C507Cu;
    {
        const bool branch_taken_0x4c507c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C5080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C507Cu;
        // 0x4c5080: 0x103102b  sltu        $v0, $t0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c507c) {
            ctx->pc = 0x4C50A8u;
            goto label_4c50a8;
        }
    }
    ctx->pc = 0x4C5084u;
    // 0x4c5084: 0x0  nop
    ctx->pc = 0x4c5084u;
    // NOP
label_4c5088:
    // 0x4c5088: 0x91620000  lbu         $v0, 0x0($t3)
    ctx->pc = 0x4c5088u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4c508c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x4c508cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x4c5090: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x4c5090u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x4c5094: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x4c5094u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4c5098: 0x0  nop
    ctx->pc = 0x4c5098u;
    // NOP
    // 0x4c509c: 0x14c0fffa  bnez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4C509Cu;
    {
        const bool branch_taken_0x4c509c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C50A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C509Cu;
        // 0x4c50a0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c509c) {
            ctx->pc = 0x4C5088u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c5088;
        }
    }
    ctx->pc = 0x4C50A4u;
    // 0x4c50a4: 0x103102b  sltu        $v0, $t0, $v1
    ctx->pc = 0x4c50a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4c50a8:
    // 0x4c50a8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4C50A8u;
    {
        const bool branch_taken_0x4c50a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c50a8) {
            ctx->pc = 0x4C50ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C50A8u;
            // 0x4c50ac: 0x8dc20000  lw          $v0, 0x0($t6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C50BCu;
            goto label_4c50bc;
        }
    }
    ctx->pc = 0x4C50B0u;
    // 0x4c50b0: 0x1034023  subu        $t0, $t0, $v1
    ctx->pc = 0x4c50b0u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x4c50b4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4C50B4u;
    {
        const bool branch_taken_0x4c50b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C50B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C50B4u;
        // 0x4c50b8: 0x6a5006  srlv        $t2, $t2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 3) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c50b4) {
            ctx->pc = 0x4C50D0u;
            goto label_4c50d0;
        }
    }
    ctx->pc = 0x4C50BCu;
label_4c50bc:
    // 0x4c50bc: 0x2464ffe0  addiu       $a0, $v1, -0x20
    ctx->pc = 0x4c50bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
    // 0x4c50c0: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x4c50c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x4c50c4: 0x25ce0004  addiu       $t6, $t6, 0x4
    ctx->pc = 0x4c50c4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
    // 0x4c50c8: 0x625006  srlv        $t2, $v0, $v1
    ctx->pc = 0x4c50c8u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x4c50cc: 0x1044023  subu        $t0, $t0, $a0
    ctx->pc = 0x4c50ccu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_4c50d0:
    // 0x4c50d0: 0x2d020003  sltiu       $v0, $t0, 0x3
    ctx->pc = 0x4c50d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x4c50d4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4C50D4u;
    {
        const bool branch_taken_0x4c50d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c50d4) {
            ctx->pc = 0x4C50D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C50D4u;
            // 0x4c50d8: 0x8dc20000  lw          $v0, 0x0($t6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C50E4u;
            goto label_4c50e4;
        }
    }
    ctx->pc = 0x4C50DCu;
    // 0x4c50dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4C50DCu;
    {
        const bool branch_taken_0x4c50dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C50E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C50DCu;
        // 0x4c50e0: 0x31430007  andi        $v1, $t2, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c50dc) {
            ctx->pc = 0x4C50F0u;
            goto label_4c50f0;
        }
    }
    ctx->pc = 0x4C50E4u;
label_4c50e4:
    // 0x4c50e4: 0x1021004  sllv        $v0, $v0, $t0
    ctx->pc = 0x4c50e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
    // 0x4c50e8: 0x1421025  or          $v0, $t2, $v0
    ctx->pc = 0x4c50e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x4c50ec: 0x30430007  andi        $v1, $v0, 0x7
    ctx->pc = 0x4c50ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_4c50f0:
    // 0x4c50f0: 0x60602d  daddu       $t4, $v1, $zero
    ctx->pc = 0x4c50f0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c50f4: 0x1a0282d  daddu       $a1, $t5, $zero
    ctx->pc = 0x4c50f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c50f8: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x4c50f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c50fc: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x4c50fcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c5100: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x4c5100u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4c5104: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x4c5104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4c5108: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x4c5108u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c510c: 0x31820001  andi        $v0, $t4, 0x1
    ctx->pc = 0x4c510cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)1);
label_4c5110:
    // 0x4c5110: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4C5110u;
    {
        const bool branch_taken_0x4c5110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C5114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5110u;
        // 0x4c5114: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5110) {
            ctx->pc = 0x4C5128u;
            goto label_4c5128;
        }
    }
    ctx->pc = 0x4C5118u;
    // 0x4c5118: 0x91620000  lbu         $v0, 0x0($t3)
    ctx->pc = 0x4c5118u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4c511c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x4c511cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x4c5120: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4C5120u;
    {
        const bool branch_taken_0x4c5120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C5124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5120u;
        // 0x4c5124: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5120) {
            ctx->pc = 0x4C5134u;
            goto label_4c5134;
        }
    }
    ctx->pc = 0x4C5128u;
label_4c5128:
    // 0x4c5128: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x4c5128u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4c512c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x4c512cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x4c5130: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x4c5130u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_4c5134:
    // 0x4c5134: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x4c5134u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4c5138: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4c5138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4c513c: 0x10e0000d  beqz        $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x4C513Cu;
    {
        const bool branch_taken_0x4c513c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C5140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C513Cu;
        // 0x4c5140: 0xc6042  srl         $t4, $t4, 1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 12), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c513c) {
            ctx->pc = 0x4C5174u;
            goto label_4c5174;
        }
    }
    ctx->pc = 0x4C5144u;
    // 0x4c5144: 0x14c0fff2  bnez        $a2, . + 4 + (-0xE << 2)
    ctx->pc = 0x4C5144u;
    {
        const bool branch_taken_0x4c5144 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C5148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5144u;
        // 0x4c5148: 0x31820001  andi        $v0, $t4, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5144) {
            ctx->pc = 0x4C5110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c5110;
        }
    }
    ctx->pc = 0x4C514Cu;
    // 0x4c514c: 0x0  nop
    ctx->pc = 0x4c514cu;
    // NOP
label_4c5150:
    // 0x4c5150: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x4c5150u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4c5154: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x4c5154u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x4c5158: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x4c5158u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x4c515c: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x4c515cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4c5160: 0x0  nop
    ctx->pc = 0x4c5160u;
    // NOP
    // 0x4c5164: 0x14e0fffa  bnez        $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4C5164u;
    {
        const bool branch_taken_0x4c5164 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C5168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5164u;
        // 0x4c5168: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5164) {
            ctx->pc = 0x4C5150u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c5150;
        }
    }
    ctx->pc = 0x4C516Cu;
    // 0x4c516c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4C516Cu;
    {
        const bool branch_taken_0x4c516c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C5170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C516Cu;
        // 0x4c5170: 0x103102b  sltu        $v0, $t0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c516c) {
            ctx->pc = 0x4C51A0u;
            goto label_4c51a0;
        }
    }
    ctx->pc = 0x4C5174u;
label_4c5174:
    // 0x4c5174: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x4C5174u;
    {
        const bool branch_taken_0x4c5174 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C5178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5174u;
        // 0x4c5178: 0x103102b  sltu        $v0, $t0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5174) {
            ctx->pc = 0x4C51A0u;
            goto label_4c51a0;
        }
    }
    ctx->pc = 0x4C517Cu;
    // 0x4c517c: 0x0  nop
    ctx->pc = 0x4c517cu;
    // NOP
label_4c5180:
    // 0x4c5180: 0x91620000  lbu         $v0, 0x0($t3)
    ctx->pc = 0x4c5180u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4c5184: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x4c5184u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x4c5188: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x4c5188u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x4c518c: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x4c518cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4c5190: 0x0  nop
    ctx->pc = 0x4c5190u;
    // NOP
    // 0x4c5194: 0x14c0fffa  bnez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4C5194u;
    {
        const bool branch_taken_0x4c5194 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C5198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5194u;
        // 0x4c5198: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5194) {
            ctx->pc = 0x4C5180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c5180;
        }
    }
    ctx->pc = 0x4C519Cu;
    // 0x4c519c: 0x103102b  sltu        $v0, $t0, $v1
    ctx->pc = 0x4c519cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4c51a0:
    // 0x4c51a0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4C51A0u;
    {
        const bool branch_taken_0x4c51a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c51a0) {
            ctx->pc = 0x4C51A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C51A0u;
            // 0x4c51a4: 0x8dc20000  lw          $v0, 0x0($t6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C51B4u;
            goto label_4c51b4;
        }
    }
    ctx->pc = 0x4C51A8u;
    // 0x4c51a8: 0x1034023  subu        $t0, $t0, $v1
    ctx->pc = 0x4c51a8u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x4c51ac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4C51ACu;
    {
        const bool branch_taken_0x4c51ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C51B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C51ACu;
        // 0x4c51b0: 0x6a5006  srlv        $t2, $t2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 3) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c51ac) {
            ctx->pc = 0x4C51C8u;
            goto label_4c51c8;
        }
    }
    ctx->pc = 0x4C51B4u;
label_4c51b4:
    // 0x4c51b4: 0x2464ffe0  addiu       $a0, $v1, -0x20
    ctx->pc = 0x4c51b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
    // 0x4c51b8: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x4c51b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x4c51bc: 0x25ce0004  addiu       $t6, $t6, 0x4
    ctx->pc = 0x4c51bcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
    // 0x4c51c0: 0x625006  srlv        $t2, $v0, $v1
    ctx->pc = 0x4c51c0u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x4c51c4: 0x1044023  subu        $t0, $t0, $a0
    ctx->pc = 0x4c51c4u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_4c51c8:
    // 0x4c51c8: 0x2d020003  sltiu       $v0, $t0, 0x3
    ctx->pc = 0x4c51c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x4c51cc: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4C51CCu;
    {
        const bool branch_taken_0x4c51cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c51cc) {
            ctx->pc = 0x4C51D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C51CCu;
            // 0x4c51d0: 0x8dc20000  lw          $v0, 0x0($t6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C51DCu;
            goto label_4c51dc;
        }
    }
    ctx->pc = 0x4C51D4u;
    // 0x4c51d4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4C51D4u;
    {
        const bool branch_taken_0x4c51d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C51D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C51D4u;
        // 0x4c51d8: 0x31430007  andi        $v1, $t2, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c51d4) {
            ctx->pc = 0x4C51E8u;
            goto label_4c51e8;
        }
    }
    ctx->pc = 0x4C51DCu;
label_4c51dc:
    // 0x4c51dc: 0x1021004  sllv        $v0, $v0, $t0
    ctx->pc = 0x4c51dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
    // 0x4c51e0: 0x1421025  or          $v0, $t2, $v0
    ctx->pc = 0x4c51e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x4c51e4: 0x30430007  andi        $v1, $v0, 0x7
    ctx->pc = 0x4c51e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_4c51e8:
    // 0x4c51e8: 0x60602d  daddu       $t4, $v1, $zero
    ctx->pc = 0x4c51e8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c51ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4c51ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c51f0: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x4c51f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c51f4: 0x3c0582d  daddu       $t3, $fp, $zero
    ctx->pc = 0x4c51f4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c51f8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x4c51f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4c51fc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x4c51fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4c5200: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x4c5200u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c5204: 0x31820001  andi        $v0, $t4, 0x1
    ctx->pc = 0x4c5204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)1);
label_4c5208:
    // 0x4c5208: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4C5208u;
    {
        const bool branch_taken_0x4c5208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C520Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5208u;
        // 0x4c520c: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5208) {
            ctx->pc = 0x4C5220u;
            goto label_4c5220;
        }
    }
    ctx->pc = 0x4C5210u;
    // 0x4c5210: 0x91620000  lbu         $v0, 0x0($t3)
    ctx->pc = 0x4c5210u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4c5214: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x4c5214u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x4c5218: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4C5218u;
    {
        const bool branch_taken_0x4c5218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C521Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5218u;
        // 0x4c521c: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5218) {
            ctx->pc = 0x4C522Cu;
            goto label_4c522c;
        }
    }
    ctx->pc = 0x4C5220u;
label_4c5220:
    // 0x4c5220: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x4c5220u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4c5224: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x4c5224u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x4c5228: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x4c5228u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_4c522c:
    // 0x4c522c: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x4c522cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4c5230: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4c5230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4c5234: 0x10e0000d  beqz        $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x4C5234u;
    {
        const bool branch_taken_0x4c5234 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C5238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5234u;
        // 0x4c5238: 0xc6042  srl         $t4, $t4, 1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 12), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5234) {
            ctx->pc = 0x4C526Cu;
            goto label_4c526c;
        }
    }
    ctx->pc = 0x4C523Cu;
    // 0x4c523c: 0x14c0fff2  bnez        $a2, . + 4 + (-0xE << 2)
    ctx->pc = 0x4C523Cu;
    {
        const bool branch_taken_0x4c523c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C5240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C523Cu;
        // 0x4c5240: 0x31820001  andi        $v0, $t4, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c523c) {
            ctx->pc = 0x4C5208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c5208;
        }
    }
    ctx->pc = 0x4C5244u;
    // 0x4c5244: 0x0  nop
    ctx->pc = 0x4c5244u;
    // NOP
label_4c5248:
    // 0x4c5248: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x4c5248u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4c524c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x4c524cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x4c5250: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x4c5250u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x4c5254: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x4c5254u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4c5258: 0x0  nop
    ctx->pc = 0x4c5258u;
    // NOP
    // 0x4c525c: 0x14e0fffa  bnez        $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4C525Cu;
    {
        const bool branch_taken_0x4c525c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C5260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C525Cu;
        // 0x4c5260: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c525c) {
            ctx->pc = 0x4C5248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c5248;
        }
    }
    ctx->pc = 0x4C5264u;
    // 0x4c5264: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4C5264u;
    {
        const bool branch_taken_0x4c5264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C5268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5264u;
        // 0x4c5268: 0x103102b  sltu        $v0, $t0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5264) {
            ctx->pc = 0x4C5298u;
            goto label_4c5298;
        }
    }
    ctx->pc = 0x4C526Cu;
label_4c526c:
    // 0x4c526c: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x4C526Cu;
    {
        const bool branch_taken_0x4c526c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C5270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C526Cu;
        // 0x4c5270: 0x103102b  sltu        $v0, $t0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c526c) {
            ctx->pc = 0x4C5298u;
            goto label_4c5298;
        }
    }
    ctx->pc = 0x4C5274u;
    // 0x4c5274: 0x0  nop
    ctx->pc = 0x4c5274u;
    // NOP
label_4c5278:
    // 0x4c5278: 0x91620000  lbu         $v0, 0x0($t3)
    ctx->pc = 0x4c5278u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4c527c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x4c527cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x4c5280: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x4c5280u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x4c5284: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x4c5284u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4c5288: 0x0  nop
    ctx->pc = 0x4c5288u;
    // NOP
    // 0x4c528c: 0x14c0fffa  bnez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4C528Cu;
    {
        const bool branch_taken_0x4c528c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C5290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C528Cu;
        // 0x4c5290: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c528c) {
            ctx->pc = 0x4C5278u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c5278;
        }
    }
    ctx->pc = 0x4C5294u;
    // 0x4c5294: 0x103102b  sltu        $v0, $t0, $v1
    ctx->pc = 0x4c5294u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4c5298:
    // 0x4c5298: 0x50400224  beql        $v0, $zero, . + 4 + (0x224 << 2)
    ctx->pc = 0x4C5298u;
    {
        const bool branch_taken_0x4c5298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c5298) {
            ctx->pc = 0x4C529Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C5298u;
            // 0x4c529c: 0x1034023  subu        $t0, $t0, $v1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C5B2Cu;
            goto label_4c5b2c;
        }
    }
    ctx->pc = 0x4C52A0u;
    // 0x4c52a0: 0x10000224  b           . + 4 + (0x224 << 2)
    ctx->pc = 0x4C52A0u;
    {
        const bool branch_taken_0x4c52a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C52A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C52A0u;
        // 0x4c52a4: 0x8dc20000  lw          $v0, 0x0($t6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c52a0) {
            ctx->pc = 0x4C5B34u;
            goto label_4c5b34;
        }
    }
    ctx->pc = 0x4C52A8u;
label_4c52a8:
    // 0x4c52a8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4C52A8u;
    {
        const bool branch_taken_0x4c52a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c52a8) {
            ctx->pc = 0x4C52ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C52A8u;
            // 0x4c52ac: 0x8dc20000  lw          $v0, 0x0($t6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C52B8u;
            goto label_4c52b8;
        }
    }
    ctx->pc = 0x4C52B0u;
    // 0x4c52b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4C52B0u;
    {
        const bool branch_taken_0x4c52b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C52B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C52B0u;
        // 0x4c52b4: 0x31430007  andi        $v1, $t2, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c52b0) {
            ctx->pc = 0x4C52C4u;
            goto label_4c52c4;
        }
    }
    ctx->pc = 0x4C52B8u;
label_4c52b8:
    // 0x4c52b8: 0x1021004  sllv        $v0, $v0, $t0
    ctx->pc = 0x4c52b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
    // 0x4c52bc: 0x1421025  or          $v0, $t2, $v0
    ctx->pc = 0x4c52bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x4c52c0: 0x30430007  andi        $v1, $v0, 0x7
    ctx->pc = 0x4c52c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_4c52c4:
    // 0x4c52c4: 0x60682d  daddu       $t5, $v1, $zero
    ctx->pc = 0x4c52c4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c52c8: 0x160602d  daddu       $t4, $t3, $zero
    ctx->pc = 0x4c52c8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c52cc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4c52ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c52d0: 0x320582d  daddu       $t3, $t9, $zero
    ctx->pc = 0x4c52d0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c52d4: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x4c52d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4c52d8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x4c52d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4c52dc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x4c52dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c52e0: 0x27b80004  addiu       $t8, $sp, 0x4
    ctx->pc = 0x4c52e0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x4c52e4: 0x27b00008  addiu       $s0, $sp, 0x8
    ctx->pc = 0x4c52e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x4c52e8: 0x27b1000c  addiu       $s1, $sp, 0xC
    ctx->pc = 0x4c52e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x4c52ec: 0x31a20001  andi        $v0, $t5, 0x1
    ctx->pc = 0x4c52ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)1);
label_4c52f0:
    // 0x4c52f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4C52F0u;
    {
        const bool branch_taken_0x4c52f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C52F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C52F0u;
        // 0x4c52f4: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c52f0) {
            ctx->pc = 0x4C5308u;
            goto label_4c5308;
        }
    }
    ctx->pc = 0x4C52F8u;
    // 0x4c52f8: 0x91820000  lbu         $v0, 0x0($t4)
    ctx->pc = 0x4c52f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4c52fc: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x4c52fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x4c5300: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4C5300u;
    {
        const bool branch_taken_0x4c5300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C5304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5300u;
        // 0x4c5304: 0x258c0001  addiu       $t4, $t4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5300) {
            ctx->pc = 0x4C5314u;
            goto label_4c5314;
        }
    }
    ctx->pc = 0x4C5308u;
label_4c5308:
    // 0x4c5308: 0x91620000  lbu         $v0, 0x0($t3)
    ctx->pc = 0x4c5308u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4c530c: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x4c530cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x4c5310: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x4c5310u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_4c5314:
    // 0x4c5314: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x4c5314u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4c5318: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4c5318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4c531c: 0x1120000d  beqz        $t1, . + 4 + (0xD << 2)
    ctx->pc = 0x4C531Cu;
    {
        const bool branch_taken_0x4c531c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C5320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C531Cu;
        // 0x4c5320: 0xd6842  srl         $t5, $t5, 1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 13), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c531c) {
            ctx->pc = 0x4C5354u;
            goto label_4c5354;
        }
    }
    ctx->pc = 0x4C5324u;
    // 0x4c5324: 0x14c0fff2  bnez        $a2, . + 4 + (-0xE << 2)
    ctx->pc = 0x4C5324u;
    {
        const bool branch_taken_0x4c5324 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C5328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5324u;
        // 0x4c5328: 0x31a20001  andi        $v0, $t5, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5324) {
            ctx->pc = 0x4C52F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c52f0;
        }
    }
    ctx->pc = 0x4C532Cu;
    // 0x4c532c: 0x0  nop
    ctx->pc = 0x4c532cu;
    // NOP
label_4c5330:
    // 0x4c5330: 0x91620000  lbu         $v0, 0x0($t3)
    ctx->pc = 0x4c5330u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4c5334: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x4c5334u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x4c5338: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x4c5338u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x4c533c: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x4c533cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4c5340: 0x0  nop
    ctx->pc = 0x4c5340u;
    // NOP
    // 0x4c5344: 0x1520fffa  bnez        $t1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4C5344u;
    {
        const bool branch_taken_0x4c5344 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C5348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5344u;
        // 0x4c5348: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5344) {
            ctx->pc = 0x4C5330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c5330;
        }
    }
    ctx->pc = 0x4C534Cu;
    // 0x4c534c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4C534Cu;
    {
        const bool branch_taken_0x4c534c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C5350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C534Cu;
        // 0x4c5350: 0x103102b  sltu        $v0, $t0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c534c) {
            ctx->pc = 0x4C5380u;
            goto label_4c5380;
        }
    }
    ctx->pc = 0x4C5354u;
label_4c5354:
    // 0x4c5354: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x4C5354u;
    {
        const bool branch_taken_0x4c5354 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C5358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5354u;
        // 0x4c5358: 0x103102b  sltu        $v0, $t0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5354) {
            ctx->pc = 0x4C5380u;
            goto label_4c5380;
        }
    }
    ctx->pc = 0x4C535Cu;
    // 0x4c535c: 0x0  nop
    ctx->pc = 0x4c535cu;
    // NOP
label_4c5360:
    // 0x4c5360: 0x91820000  lbu         $v0, 0x0($t4)
    ctx->pc = 0x4c5360u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4c5364: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x4c5364u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x4c5368: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x4c5368u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x4c536c: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x4c536cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4c5370: 0x0  nop
    ctx->pc = 0x4c5370u;
    // NOP
    // 0x4c5374: 0x14c0fffa  bnez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4C5374u;
    {
        const bool branch_taken_0x4c5374 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C5378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5374u;
        // 0x4c5378: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5374) {
            ctx->pc = 0x4C5360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c5360;
        }
    }
    ctx->pc = 0x4C537Cu;
    // 0x4c537c: 0x103102b  sltu        $v0, $t0, $v1
    ctx->pc = 0x4c537cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4c5380:
    // 0x4c5380: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4C5380u;
    {
        const bool branch_taken_0x4c5380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c5380) {
            ctx->pc = 0x4C5384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C5380u;
            // 0x4c5384: 0x8dc20000  lw          $v0, 0x0($t6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C5394u;
            goto label_4c5394;
        }
    }
    ctx->pc = 0x4C5388u;
    // 0x4c5388: 0x1034023  subu        $t0, $t0, $v1
    ctx->pc = 0x4c5388u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x4c538c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4C538Cu;
    {
        const bool branch_taken_0x4c538c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C5390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C538Cu;
        // 0x4c5390: 0x6a5006  srlv        $t2, $t2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 3) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c538c) {
            ctx->pc = 0x4C53A8u;
            goto label_4c53a8;
        }
    }
    ctx->pc = 0x4C5394u;
label_4c5394:
    // 0x4c5394: 0x2464ffe0  addiu       $a0, $v1, -0x20
    ctx->pc = 0x4c5394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
    // 0x4c5398: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x4c5398u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x4c539c: 0x25ce0004  addiu       $t6, $t6, 0x4
    ctx->pc = 0x4c539cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
    // 0x4c53a0: 0x625006  srlv        $t2, $v0, $v1
    ctx->pc = 0x4c53a0u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x4c53a4: 0x1044023  subu        $t0, $t0, $a0
    ctx->pc = 0x4c53a4u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_4c53a8:
    // 0x4c53a8: 0x2d020003  sltiu       $v0, $t0, 0x3
    ctx->pc = 0x4c53a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x4c53ac: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4C53ACu;
    {
        const bool branch_taken_0x4c53ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c53ac) {
            ctx->pc = 0x4C53B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C53ACu;
            // 0x4c53b0: 0x8dc20000  lw          $v0, 0x0($t6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C53BCu;
            goto label_4c53bc;
        }
    }
    ctx->pc = 0x4C53B4u;
    // 0x4c53b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4C53B4u;
    {
        const bool branch_taken_0x4c53b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C53B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C53B4u;
        // 0x4c53b8: 0x31430007  andi        $v1, $t2, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c53b4) {
            ctx->pc = 0x4C53C8u;
            goto label_4c53c8;
        }
    }
    ctx->pc = 0x4C53BCu;
label_4c53bc:
    // 0x4c53bc: 0x1021004  sllv        $v0, $v0, $t0
    ctx->pc = 0x4c53bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
    // 0x4c53c0: 0x1421025  or          $v0, $t2, $v0
    ctx->pc = 0x4c53c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x4c53c4: 0x30430007  andi        $v1, $v0, 0x7
    ctx->pc = 0x4c53c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_4c53c8:
    // 0x4c53c8: 0x60682d  daddu       $t5, $v1, $zero
    ctx->pc = 0x4c53c8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c53cc: 0x260582d  daddu       $t3, $s3, $zero
    ctx->pc = 0x4c53ccu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c53d0: 0x280602d  daddu       $t4, $s4, $zero
    ctx->pc = 0x4c53d0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c53d4: 0x300282d  daddu       $a1, $t8, $zero
    ctx->pc = 0x4c53d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c53d8: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x4c53d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4c53dc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x4c53dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4c53e0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x4c53e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c53e4: 0x31a20001  andi        $v0, $t5, 0x1
    ctx->pc = 0x4c53e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)1);
label_4c53e8:
    // 0x4c53e8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4C53E8u;
    {
        const bool branch_taken_0x4c53e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C53ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C53E8u;
        // 0x4c53ec: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c53e8) {
            ctx->pc = 0x4C5400u;
            goto label_4c5400;
        }
    }
    ctx->pc = 0x4C53F0u;
    // 0x4c53f0: 0x91820000  lbu         $v0, 0x0($t4)
    ctx->pc = 0x4c53f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4c53f4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x4c53f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x4c53f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4C53F8u;
    {
        const bool branch_taken_0x4c53f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C53FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C53F8u;
        // 0x4c53fc: 0x258c0001  addiu       $t4, $t4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c53f8) {
            ctx->pc = 0x4C540Cu;
            goto label_4c540c;
        }
    }
    ctx->pc = 0x4C5400u;
label_4c5400:
    // 0x4c5400: 0x91620000  lbu         $v0, 0x0($t3)
    ctx->pc = 0x4c5400u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4c5404: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x4c5404u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x4c5408: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x4c5408u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_4c540c:
    // 0x4c540c: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x4c540cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4c5410: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4c5410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4c5414: 0x1120000d  beqz        $t1, . + 4 + (0xD << 2)
    ctx->pc = 0x4C5414u;
    {
        const bool branch_taken_0x4c5414 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C5418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5414u;
        // 0x4c5418: 0xd6842  srl         $t5, $t5, 1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 13), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5414) {
            ctx->pc = 0x4C544Cu;
            goto label_4c544c;
        }
    }
    ctx->pc = 0x4C541Cu;
    // 0x4c541c: 0x14c0fff2  bnez        $a2, . + 4 + (-0xE << 2)
    ctx->pc = 0x4C541Cu;
    {
        const bool branch_taken_0x4c541c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C5420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C541Cu;
        // 0x4c5420: 0x31a20001  andi        $v0, $t5, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c541c) {
            ctx->pc = 0x4C53E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c53e8;
        }
    }
    ctx->pc = 0x4C5424u;
    // 0x4c5424: 0x0  nop
    ctx->pc = 0x4c5424u;
    // NOP
label_4c5428:
    // 0x4c5428: 0x91620000  lbu         $v0, 0x0($t3)
    ctx->pc = 0x4c5428u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4c542c: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x4c542cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x4c5430: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x4c5430u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x4c5434: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x4c5434u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4c5438: 0x0  nop
    ctx->pc = 0x4c5438u;
    // NOP
    // 0x4c543c: 0x1520fffa  bnez        $t1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4C543Cu;
    {
        const bool branch_taken_0x4c543c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C5440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C543Cu;
        // 0x4c5440: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c543c) {
            ctx->pc = 0x4C5428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c5428;
        }
    }
    ctx->pc = 0x4C5444u;
    // 0x4c5444: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4C5444u;
    {
        const bool branch_taken_0x4c5444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C5448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5444u;
        // 0x4c5448: 0x103102b  sltu        $v0, $t0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5444) {
            ctx->pc = 0x4C5478u;
            goto label_4c5478;
        }
    }
    ctx->pc = 0x4C544Cu;
label_4c544c:
    // 0x4c544c: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x4C544Cu;
    {
        const bool branch_taken_0x4c544c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C5450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C544Cu;
        // 0x4c5450: 0x103102b  sltu        $v0, $t0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c544c) {
            ctx->pc = 0x4C5478u;
            goto label_4c5478;
        }
    }
    ctx->pc = 0x4C5454u;
    // 0x4c5454: 0x0  nop
    ctx->pc = 0x4c5454u;
    // NOP
label_4c5458:
    // 0x4c5458: 0x91820000  lbu         $v0, 0x0($t4)
    ctx->pc = 0x4c5458u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4c545c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x4c545cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x4c5460: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x4c5460u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x4c5464: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x4c5464u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4c5468: 0x0  nop
    ctx->pc = 0x4c5468u;
    // NOP
    // 0x4c546c: 0x14c0fffa  bnez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4C546Cu;
    {
        const bool branch_taken_0x4c546c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C5470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C546Cu;
        // 0x4c5470: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c546c) {
            ctx->pc = 0x4C5458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c5458;
        }
    }
    ctx->pc = 0x4C5474u;
    // 0x4c5474: 0x103102b  sltu        $v0, $t0, $v1
    ctx->pc = 0x4c5474u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4c5478:
    // 0x4c5478: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4C5478u;
    {
        const bool branch_taken_0x4c5478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c5478) {
            ctx->pc = 0x4C547Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C5478u;
            // 0x4c547c: 0x8dc20000  lw          $v0, 0x0($t6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C548Cu;
            goto label_4c548c;
        }
    }
    ctx->pc = 0x4C5480u;
    // 0x4c5480: 0x1034023  subu        $t0, $t0, $v1
    ctx->pc = 0x4c5480u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x4c5484: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4C5484u;
    {
        const bool branch_taken_0x4c5484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C5488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5484u;
        // 0x4c5488: 0x6a5006  srlv        $t2, $t2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 3) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5484) {
            ctx->pc = 0x4C54A0u;
            goto label_4c54a0;
        }
    }
    ctx->pc = 0x4C548Cu;
label_4c548c:
    // 0x4c548c: 0x2464ffe0  addiu       $a0, $v1, -0x20
    ctx->pc = 0x4c548cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
    // 0x4c5490: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x4c5490u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x4c5494: 0x25ce0004  addiu       $t6, $t6, 0x4
    ctx->pc = 0x4c5494u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
    // 0x4c5498: 0x625006  srlv        $t2, $v0, $v1
    ctx->pc = 0x4c5498u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x4c549c: 0x1044023  subu        $t0, $t0, $a0
    ctx->pc = 0x4c549cu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_4c54a0:
    // 0x4c54a0: 0x2d020003  sltiu       $v0, $t0, 0x3
    ctx->pc = 0x4c54a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x4c54a4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4C54A4u;
    {
        const bool branch_taken_0x4c54a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c54a4) {
            ctx->pc = 0x4C54A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C54A4u;
            // 0x4c54a8: 0x8dc20000  lw          $v0, 0x0($t6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C54B4u;
            goto label_4c54b4;
        }
    }
    ctx->pc = 0x4C54ACu;
    // 0x4c54ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4C54ACu;
    {
        const bool branch_taken_0x4c54ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C54B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C54ACu;
        // 0x4c54b0: 0x31430007  andi        $v1, $t2, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c54ac) {
            ctx->pc = 0x4C54C0u;
            goto label_4c54c0;
        }
    }
    ctx->pc = 0x4C54B4u;
label_4c54b4:
    // 0x4c54b4: 0x1021004  sllv        $v0, $v0, $t0
    ctx->pc = 0x4c54b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
    // 0x4c54b8: 0x1421025  or          $v0, $t2, $v0
    ctx->pc = 0x4c54b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x4c54bc: 0x30430007  andi        $v1, $v0, 0x7
    ctx->pc = 0x4c54bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_4c54c0:
    // 0x4c54c0: 0x60682d  daddu       $t5, $v1, $zero
    ctx->pc = 0x4c54c0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c54c4: 0x2c0602d  daddu       $t4, $s6, $zero
    ctx->pc = 0x4c54c4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c54c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4c54c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c54cc: 0x240582d  daddu       $t3, $s2, $zero
    ctx->pc = 0x4c54ccu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c54d0: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x4c54d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4c54d4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x4c54d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4c54d8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x4c54d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c54dc: 0x31a20001  andi        $v0, $t5, 0x1
    ctx->pc = 0x4c54dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)1);
label_4c54e0:
    // 0x4c54e0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4C54E0u;
    {
        const bool branch_taken_0x4c54e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C54E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C54E0u;
        // 0x4c54e4: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c54e0) {
            ctx->pc = 0x4C54F8u;
            goto label_4c54f8;
        }
    }
    ctx->pc = 0x4C54E8u;
    // 0x4c54e8: 0x91820000  lbu         $v0, 0x0($t4)
    ctx->pc = 0x4c54e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4c54ec: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x4c54ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x4c54f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4C54F0u;
    {
        const bool branch_taken_0x4c54f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C54F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C54F0u;
        // 0x4c54f4: 0x258c0001  addiu       $t4, $t4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c54f0) {
            ctx->pc = 0x4C5504u;
            goto label_4c5504;
        }
    }
    ctx->pc = 0x4C54F8u;
label_4c54f8:
    // 0x4c54f8: 0x91620000  lbu         $v0, 0x0($t3)
    ctx->pc = 0x4c54f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4c54fc: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x4c54fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x4c5500: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x4c5500u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_4c5504:
    // 0x4c5504: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x4c5504u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4c5508: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4c5508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4c550c: 0x1120000d  beqz        $t1, . + 4 + (0xD << 2)
    ctx->pc = 0x4C550Cu;
    {
        const bool branch_taken_0x4c550c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C5510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C550Cu;
        // 0x4c5510: 0xd6842  srl         $t5, $t5, 1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 13), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c550c) {
            ctx->pc = 0x4C5544u;
            goto label_4c5544;
        }
    }
    ctx->pc = 0x4C5514u;
    // 0x4c5514: 0x14c0fff2  bnez        $a2, . + 4 + (-0xE << 2)
    ctx->pc = 0x4C5514u;
    {
        const bool branch_taken_0x4c5514 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C5518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5514u;
        // 0x4c5518: 0x31a20001  andi        $v0, $t5, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5514) {
            ctx->pc = 0x4C54E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c54e0;
        }
    }
    ctx->pc = 0x4C551Cu;
    // 0x4c551c: 0x0  nop
    ctx->pc = 0x4c551cu;
    // NOP
label_4c5520:
    // 0x4c5520: 0x91620000  lbu         $v0, 0x0($t3)
    ctx->pc = 0x4c5520u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4c5524: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x4c5524u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x4c5528: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x4c5528u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x4c552c: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x4c552cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4c5530: 0x0  nop
    ctx->pc = 0x4c5530u;
    // NOP
    // 0x4c5534: 0x1520fffa  bnez        $t1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4C5534u;
    {
        const bool branch_taken_0x4c5534 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C5538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5534u;
        // 0x4c5538: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5534) {
            ctx->pc = 0x4C5520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c5520;
        }
    }
    ctx->pc = 0x4C553Cu;
    // 0x4c553c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4C553Cu;
    {
        const bool branch_taken_0x4c553c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C5540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C553Cu;
        // 0x4c5540: 0x103102b  sltu        $v0, $t0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c553c) {
            ctx->pc = 0x4C5570u;
            goto label_4c5570;
        }
    }
    ctx->pc = 0x4C5544u;
label_4c5544:
    // 0x4c5544: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x4C5544u;
    {
        const bool branch_taken_0x4c5544 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C5548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5544u;
        // 0x4c5548: 0x103102b  sltu        $v0, $t0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5544) {
            ctx->pc = 0x4C5570u;
            goto label_4c5570;
        }
    }
    ctx->pc = 0x4C554Cu;
    // 0x4c554c: 0x0  nop
    ctx->pc = 0x4c554cu;
    // NOP
label_4c5550:
    // 0x4c5550: 0x91820000  lbu         $v0, 0x0($t4)
    ctx->pc = 0x4c5550u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4c5554: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x4c5554u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x4c5558: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x4c5558u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x4c555c: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x4c555cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4c5560: 0x0  nop
    ctx->pc = 0x4c5560u;
    // NOP
    // 0x4c5564: 0x14c0fffa  bnez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4C5564u;
    {
        const bool branch_taken_0x4c5564 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C5568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5564u;
        // 0x4c5568: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5564) {
            ctx->pc = 0x4C5550u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c5550;
        }
    }
    ctx->pc = 0x4C556Cu;
    // 0x4c556c: 0x103102b  sltu        $v0, $t0, $v1
    ctx->pc = 0x4c556cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4c5570:
    // 0x4c5570: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4C5570u;
    {
        const bool branch_taken_0x4c5570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c5570) {
            ctx->pc = 0x4C5574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C5570u;
            // 0x4c5574: 0x8dc20000  lw          $v0, 0x0($t6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C5584u;
            goto label_4c5584;
        }
    }
    ctx->pc = 0x4C5578u;
    // 0x4c5578: 0x1034023  subu        $t0, $t0, $v1
    ctx->pc = 0x4c5578u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x4c557c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4C557Cu;
    {
        const bool branch_taken_0x4c557c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C5580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C557Cu;
        // 0x4c5580: 0x6a5006  srlv        $t2, $t2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 3) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c557c) {
            ctx->pc = 0x4C5598u;
            goto label_4c5598;
        }
    }
    ctx->pc = 0x4C5584u;
label_4c5584:
    // 0x4c5584: 0x2464ffe0  addiu       $a0, $v1, -0x20
    ctx->pc = 0x4c5584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
    // 0x4c5588: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x4c5588u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x4c558c: 0x25ce0004  addiu       $t6, $t6, 0x4
    ctx->pc = 0x4c558cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
    // 0x4c5590: 0x625006  srlv        $t2, $v0, $v1
    ctx->pc = 0x4c5590u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x4c5594: 0x1044023  subu        $t0, $t0, $a0
    ctx->pc = 0x4c5594u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_4c5598:
    // 0x4c5598: 0x2d020003  sltiu       $v0, $t0, 0x3
    ctx->pc = 0x4c5598u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x4c559c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4C559Cu;
    {
        const bool branch_taken_0x4c559c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c559c) {
            ctx->pc = 0x4C55A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C559Cu;
            // 0x4c55a0: 0x8dc20000  lw          $v0, 0x0($t6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C55ACu;
            goto label_4c55ac;
        }
    }
    ctx->pc = 0x4C55A4u;
    // 0x4c55a4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4C55A4u;
    {
        const bool branch_taken_0x4c55a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C55A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C55A4u;
        // 0x4c55a8: 0x31430007  andi        $v1, $t2, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c55a4) {
            ctx->pc = 0x4C55B8u;
            goto label_4c55b8;
        }
    }
    ctx->pc = 0x4C55ACu;
label_4c55ac:
    // 0x4c55ac: 0x1021004  sllv        $v0, $v0, $t0
    ctx->pc = 0x4c55acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
    // 0x4c55b0: 0x1421025  or          $v0, $t2, $v0
    ctx->pc = 0x4c55b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x4c55b4: 0x30430007  andi        $v1, $v0, 0x7
    ctx->pc = 0x4c55b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_4c55b8:
    // 0x4c55b8: 0x60682d  daddu       $t5, $v1, $zero
    ctx->pc = 0x4c55b8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c55bc: 0x2e0582d  daddu       $t3, $s7, $zero
    ctx->pc = 0x4c55bcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c55c0: 0x3c0602d  daddu       $t4, $fp, $zero
    ctx->pc = 0x4c55c0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c55c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4c55c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c55c8: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x4c55c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4c55cc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x4c55ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4c55d0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x4c55d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c55d4: 0x31a20001  andi        $v0, $t5, 0x1
    ctx->pc = 0x4c55d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)1);
label_4c55d8:
    // 0x4c55d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4C55D8u;
    {
        const bool branch_taken_0x4c55d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C55DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C55D8u;
        // 0x4c55dc: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c55d8) {
            ctx->pc = 0x4C55F0u;
            goto label_4c55f0;
        }
    }
    ctx->pc = 0x4C55E0u;
    // 0x4c55e0: 0x91820000  lbu         $v0, 0x0($t4)
    ctx->pc = 0x4c55e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4c55e4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x4c55e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x4c55e8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4C55E8u;
    {
        const bool branch_taken_0x4c55e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C55ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C55E8u;
        // 0x4c55ec: 0x258c0001  addiu       $t4, $t4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c55e8) {
            ctx->pc = 0x4C55FCu;
            goto label_4c55fc;
        }
    }
    ctx->pc = 0x4C55F0u;
label_4c55f0:
    // 0x4c55f0: 0x91620000  lbu         $v0, 0x0($t3)
    ctx->pc = 0x4c55f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4c55f4: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x4c55f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x4c55f8: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x4c55f8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_4c55fc:
    // 0x4c55fc: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x4c55fcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4c5600: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4c5600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4c5604: 0x1120000d  beqz        $t1, . + 4 + (0xD << 2)
    ctx->pc = 0x4C5604u;
    {
        const bool branch_taken_0x4c5604 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C5608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5604u;
        // 0x4c5608: 0xd6842  srl         $t5, $t5, 1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 13), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5604) {
            ctx->pc = 0x4C563Cu;
            goto label_4c563c;
        }
    }
    ctx->pc = 0x4C560Cu;
    // 0x4c560c: 0x14c0fff2  bnez        $a2, . + 4 + (-0xE << 2)
    ctx->pc = 0x4C560Cu;
    {
        const bool branch_taken_0x4c560c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C5610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C560Cu;
        // 0x4c5610: 0x31a20001  andi        $v0, $t5, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c560c) {
            ctx->pc = 0x4C55D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c55d8;
        }
    }
    ctx->pc = 0x4C5614u;
    // 0x4c5614: 0x0  nop
    ctx->pc = 0x4c5614u;
    // NOP
label_4c5618:
    // 0x4c5618: 0x91620000  lbu         $v0, 0x0($t3)
    ctx->pc = 0x4c5618u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4c561c: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x4c561cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x4c5620: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x4c5620u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x4c5624: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x4c5624u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4c5628: 0x0  nop
    ctx->pc = 0x4c5628u;
    // NOP
    // 0x4c562c: 0x1520fffa  bnez        $t1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4C562Cu;
    {
        const bool branch_taken_0x4c562c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C5630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C562Cu;
        // 0x4c5630: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c562c) {
            ctx->pc = 0x4C5618u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c5618;
        }
    }
    ctx->pc = 0x4C5634u;
    // 0x4c5634: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4C5634u;
    {
        const bool branch_taken_0x4c5634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C5638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5634u;
        // 0x4c5638: 0x103102b  sltu        $v0, $t0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5634) {
            ctx->pc = 0x4C5668u;
            goto label_4c5668;
        }
    }
    ctx->pc = 0x4C563Cu;
label_4c563c:
    // 0x4c563c: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x4C563Cu;
    {
        const bool branch_taken_0x4c563c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C5640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C563Cu;
        // 0x4c5640: 0x103102b  sltu        $v0, $t0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c563c) {
            ctx->pc = 0x4C5668u;
            goto label_4c5668;
        }
    }
    ctx->pc = 0x4C5644u;
    // 0x4c5644: 0x0  nop
    ctx->pc = 0x4c5644u;
    // NOP
label_4c5648:
    // 0x4c5648: 0x91820000  lbu         $v0, 0x0($t4)
    ctx->pc = 0x4c5648u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4c564c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x4c564cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x4c5650: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x4c5650u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x4c5654: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x4c5654u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4c5658: 0x0  nop
    ctx->pc = 0x4c5658u;
    // NOP
    // 0x4c565c: 0x14c0fffa  bnez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4C565Cu;
    {
        const bool branch_taken_0x4c565c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C5660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C565Cu;
        // 0x4c5660: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c565c) {
            ctx->pc = 0x4C5648u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c5648;
        }
    }
    ctx->pc = 0x4C5664u;
    // 0x4c5664: 0x103102b  sltu        $v0, $t0, $v1
    ctx->pc = 0x4c5664u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4c5668:
    // 0x4c5668: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4C5668u;
    {
        const bool branch_taken_0x4c5668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c5668) {
            ctx->pc = 0x4C566Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C5668u;
            // 0x4c566c: 0x8dc20000  lw          $v0, 0x0($t6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C567Cu;
            goto label_4c567c;
        }
    }
    ctx->pc = 0x4C5670u;
    // 0x4c5670: 0x1034023  subu        $t0, $t0, $v1
    ctx->pc = 0x4c5670u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x4c5674: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4C5674u;
    {
        const bool branch_taken_0x4c5674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C5678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5674u;
        // 0x4c5678: 0x6a5006  srlv        $t2, $t2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 3) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5674) {
            ctx->pc = 0x4C5690u;
            goto label_4c5690;
        }
    }
    ctx->pc = 0x4C567Cu;
label_4c567c:
    // 0x4c567c: 0x2464ffe0  addiu       $a0, $v1, -0x20
    ctx->pc = 0x4c567cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
    // 0x4c5680: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x4c5680u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x4c5684: 0x25ce0004  addiu       $t6, $t6, 0x4
    ctx->pc = 0x4c5684u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
    // 0x4c5688: 0x625006  srlv        $t2, $v0, $v1
    ctx->pc = 0x4c5688u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x4c568c: 0x1044023  subu        $t0, $t0, $a0
    ctx->pc = 0x4c568cu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_4c5690:
    // 0x4c5690: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4c5690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4c5694: 0x15e20073  bne         $t7, $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x4C5694u;
    {
        const bool branch_taken_0x4c5694 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 2));
        ctx->pc = 0x4C5698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5694u;
        // 0x4c5698: 0x2d020007  sltiu       $v0, $t0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5694) {
            ctx->pc = 0x4C5864u;
            goto label_4c5864;
        }
    }
    ctx->pc = 0x4C569Cu;
    // 0x4c569c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4C569Cu;
    {
        const bool branch_taken_0x4c569c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c569c) {
            ctx->pc = 0x4C56A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C569Cu;
            // 0x4c56a0: 0x8dc20000  lw          $v0, 0x0($t6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C56ACu;
            goto label_4c56ac;
        }
    }
    ctx->pc = 0x4C56A4u;
    // 0x4c56a4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4C56A4u;
    {
        const bool branch_taken_0x4c56a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C56A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C56A4u;
        // 0x4c56a8: 0x3143007f  andi        $v1, $t2, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c56a4) {
            ctx->pc = 0x4C56B8u;
            goto label_4c56b8;
        }
    }
    ctx->pc = 0x4C56ACu;
label_4c56ac:
    // 0x4c56ac: 0x1021004  sllv        $v0, $v0, $t0
    ctx->pc = 0x4c56acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
    // 0x4c56b0: 0x1421025  or          $v0, $t2, $v0
    ctx->pc = 0x4c56b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x4c56b4: 0x3043007f  andi        $v1, $v0, 0x7F
    ctx->pc = 0x4c56b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
label_4c56b8:
    // 0x4c56b8: 0x60602d  daddu       $t4, $v1, $zero
    ctx->pc = 0x4c56b8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c56bc: 0x300582d  daddu       $t3, $t8, $zero
    ctx->pc = 0x4c56bcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c56c0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4c56c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c56c4: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x4c56c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4c56c8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x4c56c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4c56cc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x4c56ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c56d0: 0x24ed0008  addiu       $t5, $a3, 0x8
    ctx->pc = 0x4c56d0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x4c56d4: 0x31820001  andi        $v0, $t4, 0x1
    ctx->pc = 0x4c56d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)1);
label_4c56d8:
    // 0x4c56d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4C56D8u;
    {
        const bool branch_taken_0x4c56d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C56DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C56D8u;
        // 0x4c56dc: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c56d8) {
            ctx->pc = 0x4C56F0u;
            goto label_4c56f0;
        }
    }
    ctx->pc = 0x4C56E0u;
    // 0x4c56e0: 0x91620000  lbu         $v0, 0x0($t3)
    ctx->pc = 0x4c56e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4c56e4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x4c56e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x4c56e8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4C56E8u;
    {
        const bool branch_taken_0x4c56e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C56ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C56E8u;
        // 0x4c56ec: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c56e8) {
            ctx->pc = 0x4C56FCu;
            goto label_4c56fc;
        }
    }
    ctx->pc = 0x4C56F0u;
label_4c56f0:
    // 0x4c56f0: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x4c56f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c56f4: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x4c56f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x4c56f8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4c56f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_4c56fc:
    // 0x4c56fc: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x4c56fcu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4c5700: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x4c5700u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x4c5704: 0x1120000d  beqz        $t1, . + 4 + (0xD << 2)
    ctx->pc = 0x4C5704u;
    {
        const bool branch_taken_0x4c5704 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C5708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5704u;
        // 0x4c5708: 0xc6042  srl         $t4, $t4, 1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 12), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5704) {
            ctx->pc = 0x4C573Cu;
            goto label_4c573c;
        }
    }
    ctx->pc = 0x4C570Cu;
    // 0x4c570c: 0x14c0fff2  bnez        $a2, . + 4 + (-0xE << 2)
    ctx->pc = 0x4C570Cu;
    {
        const bool branch_taken_0x4c570c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C5710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C570Cu;
        // 0x4c5710: 0x31820001  andi        $v0, $t4, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c570c) {
            ctx->pc = 0x4C56D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c56d8;
        }
    }
    ctx->pc = 0x4C5714u;
    // 0x4c5714: 0x0  nop
    ctx->pc = 0x4c5714u;
    // NOP
label_4c5718:
    // 0x4c5718: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x4c5718u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c571c: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x4c571cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x4c5720: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4c5720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4c5724: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x4c5724u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4c5728: 0x0  nop
    ctx->pc = 0x4c5728u;
    // NOP
    // 0x4c572c: 0x1520fffa  bnez        $t1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4C572Cu;
    {
        const bool branch_taken_0x4c572c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C5730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C572Cu;
        // 0x4c5730: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c572c) {
            ctx->pc = 0x4C5718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c5718;
        }
    }
    ctx->pc = 0x4C5734u;
    // 0x4c5734: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4C5734u;
    {
        const bool branch_taken_0x4c5734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C5738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5734u;
        // 0x4c5738: 0x103102b  sltu        $v0, $t0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5734) {
            ctx->pc = 0x4C5768u;
            goto label_4c5768;
        }
    }
    ctx->pc = 0x4C573Cu;
label_4c573c:
    // 0x4c573c: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x4C573Cu;
    {
        const bool branch_taken_0x4c573c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C5740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C573Cu;
        // 0x4c5740: 0x103102b  sltu        $v0, $t0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c573c) {
            ctx->pc = 0x4C5768u;
            goto label_4c5768;
        }
    }
    ctx->pc = 0x4C5744u;
    // 0x4c5744: 0x0  nop
    ctx->pc = 0x4c5744u;
    // NOP
label_4c5748:
    // 0x4c5748: 0x91620000  lbu         $v0, 0x0($t3)
    ctx->pc = 0x4c5748u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4c574c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x4c574cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x4c5750: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x4c5750u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x4c5754: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x4c5754u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4c5758: 0x0  nop
    ctx->pc = 0x4c5758u;
    // NOP
    // 0x4c575c: 0x14c0fffa  bnez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4C575Cu;
    {
        const bool branch_taken_0x4c575c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C5760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C575Cu;
        // 0x4c5760: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c575c) {
            ctx->pc = 0x4C5748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c5748;
        }
    }
    ctx->pc = 0x4C5764u;
    // 0x4c5764: 0x103102b  sltu        $v0, $t0, $v1
    ctx->pc = 0x4c5764u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4c5768:
    // 0x4c5768: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4C5768u;
    {
        const bool branch_taken_0x4c5768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c5768) {
            ctx->pc = 0x4C576Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C5768u;
            // 0x4c576c: 0x8dc20000  lw          $v0, 0x0($t6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C577Cu;
            goto label_4c577c;
        }
    }
    ctx->pc = 0x4C5770u;
    // 0x4c5770: 0x1034023  subu        $t0, $t0, $v1
    ctx->pc = 0x4c5770u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x4c5774: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4C5774u;
    {
        const bool branch_taken_0x4c5774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C5778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5774u;
        // 0x4c5778: 0x6a5006  srlv        $t2, $t2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 3) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5774) {
            ctx->pc = 0x4C5790u;
            goto label_4c5790;
        }
    }
    ctx->pc = 0x4C577Cu;
label_4c577c:
    // 0x4c577c: 0x2464ffe0  addiu       $a0, $v1, -0x20
    ctx->pc = 0x4c577cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
    // 0x4c5780: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x4c5780u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x4c5784: 0x25ce0004  addiu       $t6, $t6, 0x4
    ctx->pc = 0x4c5784u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
    // 0x4c5788: 0x625006  srlv        $t2, $v0, $v1
    ctx->pc = 0x4c5788u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x4c578c: 0x1044023  subu        $t0, $t0, $a0
    ctx->pc = 0x4c578cu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_4c5790:
    // 0x4c5790: 0x2d020007  sltiu       $v0, $t0, 0x7
    ctx->pc = 0x4c5790u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x4c5794: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4C5794u;
    {
        const bool branch_taken_0x4c5794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c5794) {
            ctx->pc = 0x4C5798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C5794u;
            // 0x4c5798: 0x8dc20000  lw          $v0, 0x0($t6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C57A4u;
            goto label_4c57a4;
        }
    }
    ctx->pc = 0x4C579Cu;
    // 0x4c579c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4C579Cu;
    {
        const bool branch_taken_0x4c579c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C57A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C579Cu;
        // 0x4c57a0: 0x3143007f  andi        $v1, $t2, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c579c) {
            ctx->pc = 0x4C57B0u;
            goto label_4c57b0;
        }
    }
    ctx->pc = 0x4C57A4u;
label_4c57a4:
    // 0x4c57a4: 0x1021004  sllv        $v0, $v0, $t0
    ctx->pc = 0x4c57a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
    // 0x4c57a8: 0x1421025  or          $v0, $t2, $v0
    ctx->pc = 0x4c57a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x4c57ac: 0x3043007f  andi        $v1, $v0, 0x7F
    ctx->pc = 0x4c57acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
label_4c57b0:
    // 0x4c57b0: 0x60602d  daddu       $t4, $v1, $zero
    ctx->pc = 0x4c57b0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c57b4: 0x1a0282d  daddu       $a1, $t5, $zero
    ctx->pc = 0x4c57b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c57b8: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x4c57b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c57bc: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x4c57bcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c57c0: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x4c57c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4c57c4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x4c57c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4c57c8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x4c57c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c57cc: 0x31820001  andi        $v0, $t4, 0x1
    ctx->pc = 0x4c57ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)1);
label_4c57d0:
    // 0x4c57d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4C57D0u;
    {
        const bool branch_taken_0x4c57d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C57D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C57D0u;
        // 0x4c57d4: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c57d0) {
            ctx->pc = 0x4C57E8u;
            goto label_4c57e8;
        }
    }
    ctx->pc = 0x4C57D8u;
    // 0x4c57d8: 0x91620000  lbu         $v0, 0x0($t3)
    ctx->pc = 0x4c57d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4c57dc: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x4c57dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x4c57e0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4C57E0u;
    {
        const bool branch_taken_0x4c57e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C57E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C57E0u;
        // 0x4c57e4: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c57e0) {
            ctx->pc = 0x4C57F4u;
            goto label_4c57f4;
        }
    }
    ctx->pc = 0x4C57E8u;
label_4c57e8:
    // 0x4c57e8: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x4c57e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4c57ec: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x4c57ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x4c57f0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x4c57f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_4c57f4:
    // 0x4c57f4: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x4c57f4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4c57f8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4c57f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4c57fc: 0x10e0000d  beqz        $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x4C57FCu;
    {
        const bool branch_taken_0x4c57fc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C5800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C57FCu;
        // 0x4c5800: 0xc6042  srl         $t4, $t4, 1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 12), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c57fc) {
            ctx->pc = 0x4C5834u;
            goto label_4c5834;
        }
    }
    ctx->pc = 0x4C5804u;
    // 0x4c5804: 0x14c0fff2  bnez        $a2, . + 4 + (-0xE << 2)
    ctx->pc = 0x4C5804u;
    {
        const bool branch_taken_0x4c5804 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C5808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5804u;
        // 0x4c5808: 0x31820001  andi        $v0, $t4, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5804) {
            ctx->pc = 0x4C57D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c57d0;
        }
    }
    ctx->pc = 0x4C580Cu;
    // 0x4c580c: 0x0  nop
    ctx->pc = 0x4c580cu;
    // NOP
label_4c5810:
    // 0x4c5810: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x4c5810u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4c5814: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x4c5814u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x4c5818: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x4c5818u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x4c581c: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x4c581cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4c5820: 0x0  nop
    ctx->pc = 0x4c5820u;
    // NOP
    // 0x4c5824: 0x14e0fffa  bnez        $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4C5824u;
    {
        const bool branch_taken_0x4c5824 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C5828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5824u;
        // 0x4c5828: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5824) {
            ctx->pc = 0x4C5810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c5810;
        }
    }
    ctx->pc = 0x4C582Cu;
    // 0x4c582c: 0x1000fe9a  b           . + 4 + (-0x166 << 2)
    ctx->pc = 0x4C582Cu;
    {
        const bool branch_taken_0x4c582c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C5830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C582Cu;
        // 0x4c5830: 0x103102b  sltu        $v0, $t0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c582c) {
            ctx->pc = 0x4C5298u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c5298;
        }
    }
    ctx->pc = 0x4C5834u;
label_4c5834:
    // 0x4c5834: 0x10c0fe98  beqz        $a2, . + 4 + (-0x168 << 2)
    ctx->pc = 0x4C5834u;
    {
        const bool branch_taken_0x4c5834 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C5838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5834u;
        // 0x4c5838: 0x103102b  sltu        $v0, $t0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5834) {
            ctx->pc = 0x4C5298u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c5298;
        }
    }
    ctx->pc = 0x4C583Cu;
    // 0x4c583c: 0x0  nop
    ctx->pc = 0x4c583cu;
    // NOP
label_4c5840:
    // 0x4c5840: 0x91620000  lbu         $v0, 0x0($t3)
    ctx->pc = 0x4c5840u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4c5844: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x4c5844u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x4c5848: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x4c5848u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x4c584c: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x4c584cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4c5850: 0x0  nop
    ctx->pc = 0x4c5850u;
    // NOP
    // 0x4c5854: 0x14c0fffa  bnez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4C5854u;
    {
        const bool branch_taken_0x4c5854 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C5858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5854u;
        // 0x4c5858: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5854) {
            ctx->pc = 0x4C5840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c5840;
        }
    }
    ctx->pc = 0x4C585Cu;
    // 0x4c585c: 0x1000fe8e  b           . + 4 + (-0x172 << 2)
    ctx->pc = 0x4C585Cu;
    {
        const bool branch_taken_0x4c585c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C5860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C585Cu;
        // 0x4c5860: 0x103102b  sltu        $v0, $t0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c585c) {
            ctx->pc = 0x4C5298u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c5298;
        }
    }
    ctx->pc = 0x4C5864u;
label_4c5864:
    // 0x4c5864: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4C5864u;
    {
        const bool branch_taken_0x4c5864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c5864) {
            ctx->pc = 0x4C5868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C5864u;
            // 0x4c5868: 0x8dc20000  lw          $v0, 0x0($t6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C5874u;
            goto label_4c5874;
        }
    }
    ctx->pc = 0x4C586Cu;
    // 0x4c586c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4C586Cu;
    {
        const bool branch_taken_0x4c586c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C5870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C586Cu;
        // 0x4c5870: 0x3143007f  andi        $v1, $t2, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c586c) {
            ctx->pc = 0x4C5880u;
            goto label_4c5880;
        }
    }
    ctx->pc = 0x4C5874u;
label_4c5874:
    // 0x4c5874: 0x1021004  sllv        $v0, $v0, $t0
    ctx->pc = 0x4c5874u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
    // 0x4c5878: 0x1421025  or          $v0, $t2, $v0
    ctx->pc = 0x4c5878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x4c587c: 0x3043007f  andi        $v1, $v0, 0x7F
    ctx->pc = 0x4c587cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
label_4c5880:
    // 0x4c5880: 0x60682d  daddu       $t5, $v1, $zero
    ctx->pc = 0x4c5880u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c5884: 0x300602d  daddu       $t4, $t8, $zero
    ctx->pc = 0x4c5884u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c5888: 0x320302d  daddu       $a2, $t9, $zero
    ctx->pc = 0x4c5888u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c588c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4c588cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c5890: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x4c5890u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4c5894: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x4c5894u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4c5898: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x4c5898u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c589c: 0x31a20001  andi        $v0, $t5, 0x1
    ctx->pc = 0x4c589cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)1);
label_4c58a0:
    // 0x4c58a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4C58A0u;
    {
        const bool branch_taken_0x4c58a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C58A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C58A0u;
        // 0x4c58a4: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c58a0) {
            ctx->pc = 0x4C58B8u;
            goto label_4c58b8;
        }
    }
    ctx->pc = 0x4C58A8u;
    // 0x4c58a8: 0x91820000  lbu         $v0, 0x0($t4)
    ctx->pc = 0x4c58a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4c58ac: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x4c58acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x4c58b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4C58B0u;
    {
        const bool branch_taken_0x4c58b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C58B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C58B0u;
        // 0x4c58b4: 0x258c0001  addiu       $t4, $t4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c58b0) {
            ctx->pc = 0x4C58C4u;
            goto label_4c58c4;
        }
    }
    ctx->pc = 0x4C58B8u;
label_4c58b8:
    // 0x4c58b8: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x4c58b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c58bc: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x4c58bcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x4c58c0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4c58c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_4c58c4:
    // 0x4c58c4: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x4c58c4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4c58c8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x4c58c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x4c58cc: 0x1160000d  beqz        $t3, . + 4 + (0xD << 2)
    ctx->pc = 0x4C58CCu;
    {
        const bool branch_taken_0x4c58cc = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C58D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C58CCu;
        // 0x4c58d0: 0xd6842  srl         $t5, $t5, 1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 13), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c58cc) {
            ctx->pc = 0x4C5904u;
            goto label_4c5904;
        }
    }
    ctx->pc = 0x4C58D4u;
    // 0x4c58d4: 0x1520fff2  bnez        $t1, . + 4 + (-0xE << 2)
    ctx->pc = 0x4C58D4u;
    {
        const bool branch_taken_0x4c58d4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C58D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C58D4u;
        // 0x4c58d8: 0x31a20001  andi        $v0, $t5, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c58d4) {
            ctx->pc = 0x4C58A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c58a0;
        }
    }
    ctx->pc = 0x4C58DCu;
    // 0x4c58dc: 0x0  nop
    ctx->pc = 0x4c58dcu;
    // NOP
label_4c58e0:
    // 0x4c58e0: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x4c58e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c58e4: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x4c58e4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x4c58e8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4c58e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4c58ec: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x4c58ecu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4c58f0: 0x0  nop
    ctx->pc = 0x4c58f0u;
    // NOP
    // 0x4c58f4: 0x1560fffa  bnez        $t3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4C58F4u;
    {
        const bool branch_taken_0x4c58f4 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C58F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C58F4u;
        // 0x4c58f8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c58f4) {
            ctx->pc = 0x4C58E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c58e0;
        }
    }
    ctx->pc = 0x4C58FCu;
    // 0x4c58fc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4C58FCu;
    {
        const bool branch_taken_0x4c58fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C5900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C58FCu;
        // 0x4c5900: 0x103102b  sltu        $v0, $t0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c58fc) {
            ctx->pc = 0x4C5930u;
            goto label_4c5930;
        }
    }
    ctx->pc = 0x4C5904u;
label_4c5904:
    // 0x4c5904: 0x1120000a  beqz        $t1, . + 4 + (0xA << 2)
    ctx->pc = 0x4C5904u;
    {
        const bool branch_taken_0x4c5904 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C5908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5904u;
        // 0x4c5908: 0x103102b  sltu        $v0, $t0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5904) {
            ctx->pc = 0x4C5930u;
            goto label_4c5930;
        }
    }
    ctx->pc = 0x4C590Cu;
    // 0x4c590c: 0x0  nop
    ctx->pc = 0x4c590cu;
    // NOP
label_4c5910:
    // 0x4c5910: 0x91820000  lbu         $v0, 0x0($t4)
    ctx->pc = 0x4c5910u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4c5914: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x4c5914u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x4c5918: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x4c5918u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x4c591c: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x4c591cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4c5920: 0x0  nop
    ctx->pc = 0x4c5920u;
    // NOP
    // 0x4c5924: 0x1520fffa  bnez        $t1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4C5924u;
    {
        const bool branch_taken_0x4c5924 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C5928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5924u;
        // 0x4c5928: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5924) {
            ctx->pc = 0x4C5910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c5910;
        }
    }
    ctx->pc = 0x4C592Cu;
    // 0x4c592c: 0x103102b  sltu        $v0, $t0, $v1
    ctx->pc = 0x4c592cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4c5930:
    // 0x4c5930: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4C5930u;
    {
        const bool branch_taken_0x4c5930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c5930) {
            ctx->pc = 0x4C5934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C5930u;
            // 0x4c5934: 0x8dc20000  lw          $v0, 0x0($t6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C5944u;
            goto label_4c5944;
        }
    }
    ctx->pc = 0x4C5938u;
    // 0x4c5938: 0x1034023  subu        $t0, $t0, $v1
    ctx->pc = 0x4c5938u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x4c593c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4C593Cu;
    {
        const bool branch_taken_0x4c593c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C5940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C593Cu;
        // 0x4c5940: 0x6a5006  srlv        $t2, $t2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 3) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c593c) {
            ctx->pc = 0x4C5958u;
            goto label_4c5958;
        }
    }
    ctx->pc = 0x4C5944u;
label_4c5944:
    // 0x4c5944: 0x2464ffe0  addiu       $a0, $v1, -0x20
    ctx->pc = 0x4c5944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
    // 0x4c5948: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x4c5948u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x4c594c: 0x25ce0004  addiu       $t6, $t6, 0x4
    ctx->pc = 0x4c594cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
    // 0x4c5950: 0x625006  srlv        $t2, $v0, $v1
    ctx->pc = 0x4c5950u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x4c5954: 0x1044023  subu        $t0, $t0, $a0
    ctx->pc = 0x4c5954u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_4c5958:
    // 0x4c5958: 0x2d020007  sltiu       $v0, $t0, 0x7
    ctx->pc = 0x4c5958u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x4c595c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4C595Cu;
    {
        const bool branch_taken_0x4c595c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c595c) {
            ctx->pc = 0x4C5960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C595Cu;
            // 0x4c5960: 0x8dc20000  lw          $v0, 0x0($t6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C596Cu;
            goto label_4c596c;
        }
    }
    ctx->pc = 0x4C5964u;
    // 0x4c5964: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4C5964u;
    {
        const bool branch_taken_0x4c5964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C5968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5964u;
        // 0x4c5968: 0x3143007f  andi        $v1, $t2, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5964) {
            ctx->pc = 0x4C5978u;
            goto label_4c5978;
        }
    }
    ctx->pc = 0x4C596Cu;
label_4c596c:
    // 0x4c596c: 0x1021004  sllv        $v0, $v0, $t0
    ctx->pc = 0x4c596cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
    // 0x4c5970: 0x1421025  or          $v0, $t2, $v0
    ctx->pc = 0x4c5970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x4c5974: 0x3043007f  andi        $v1, $v0, 0x7F
    ctx->pc = 0x4c5974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
label_4c5978:
    // 0x4c5978: 0x60682d  daddu       $t5, $v1, $zero
    ctx->pc = 0x4c5978u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c597c: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x4c597cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c5980: 0x220602d  daddu       $t4, $s1, $zero
    ctx->pc = 0x4c5980u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c5984: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4c5984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c5988: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x4c5988u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4c598c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x4c598cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4c5990: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x4c5990u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c5994: 0x31a20001  andi        $v0, $t5, 0x1
    ctx->pc = 0x4c5994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)1);
label_4c5998:
    // 0x4c5998: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4C5998u;
    {
        const bool branch_taken_0x4c5998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C599Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5998u;
        // 0x4c599c: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5998) {
            ctx->pc = 0x4C59B0u;
            goto label_4c59b0;
        }
    }
    ctx->pc = 0x4C59A0u;
    // 0x4c59a0: 0x91820000  lbu         $v0, 0x0($t4)
    ctx->pc = 0x4c59a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4c59a4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x4c59a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x4c59a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4C59A8u;
    {
        const bool branch_taken_0x4c59a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C59ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C59A8u;
        // 0x4c59ac: 0x258c0001  addiu       $t4, $t4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c59a8) {
            ctx->pc = 0x4C59BCu;
            goto label_4c59bc;
        }
    }
    ctx->pc = 0x4C59B0u;
label_4c59b0:
    // 0x4c59b0: 0x91620000  lbu         $v0, 0x0($t3)
    ctx->pc = 0x4c59b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4c59b4: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x4c59b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x4c59b8: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x4c59b8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_4c59bc:
    // 0x4c59bc: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x4c59bcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4c59c0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4c59c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4c59c4: 0x1120000d  beqz        $t1, . + 4 + (0xD << 2)
    ctx->pc = 0x4C59C4u;
    {
        const bool branch_taken_0x4c59c4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C59C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C59C4u;
        // 0x4c59c8: 0xd6842  srl         $t5, $t5, 1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 13), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c59c4) {
            ctx->pc = 0x4C59FCu;
            goto label_4c59fc;
        }
    }
    ctx->pc = 0x4C59CCu;
    // 0x4c59cc: 0x14c0fff2  bnez        $a2, . + 4 + (-0xE << 2)
    ctx->pc = 0x4C59CCu;
    {
        const bool branch_taken_0x4c59cc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C59D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C59CCu;
        // 0x4c59d0: 0x31a20001  andi        $v0, $t5, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c59cc) {
            ctx->pc = 0x4C5998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c5998;
        }
    }
    ctx->pc = 0x4C59D4u;
    // 0x4c59d4: 0x0  nop
    ctx->pc = 0x4c59d4u;
    // NOP
label_4c59d8:
    // 0x4c59d8: 0x91620000  lbu         $v0, 0x0($t3)
    ctx->pc = 0x4c59d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4c59dc: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x4c59dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x4c59e0: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x4c59e0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x4c59e4: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x4c59e4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4c59e8: 0x0  nop
    ctx->pc = 0x4c59e8u;
    // NOP
    // 0x4c59ec: 0x1520fffa  bnez        $t1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4C59ECu;
    {
        const bool branch_taken_0x4c59ec = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C59F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C59ECu;
        // 0x4c59f0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c59ec) {
            ctx->pc = 0x4C59D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c59d8;
        }
    }
    ctx->pc = 0x4C59F4u;
    // 0x4c59f4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4C59F4u;
    {
        const bool branch_taken_0x4c59f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C59F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C59F4u;
        // 0x4c59f8: 0x103102b  sltu        $v0, $t0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c59f4) {
            ctx->pc = 0x4C5A28u;
            goto label_4c5a28;
        }
    }
    ctx->pc = 0x4C59FCu;
label_4c59fc:
    // 0x4c59fc: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x4C59FCu;
    {
        const bool branch_taken_0x4c59fc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C5A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C59FCu;
        // 0x4c5a00: 0x103102b  sltu        $v0, $t0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c59fc) {
            ctx->pc = 0x4C5A28u;
            goto label_4c5a28;
        }
    }
    ctx->pc = 0x4C5A04u;
    // 0x4c5a04: 0x0  nop
    ctx->pc = 0x4c5a04u;
    // NOP
label_4c5a08:
    // 0x4c5a08: 0x91820000  lbu         $v0, 0x0($t4)
    ctx->pc = 0x4c5a08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4c5a0c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x4c5a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x4c5a10: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x4c5a10u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x4c5a14: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x4c5a14u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4c5a18: 0x0  nop
    ctx->pc = 0x4c5a18u;
    // NOP
    // 0x4c5a1c: 0x14c0fffa  bnez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4C5A1Cu;
    {
        const bool branch_taken_0x4c5a1c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C5A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5A1Cu;
        // 0x4c5a20: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5a1c) {
            ctx->pc = 0x4C5A08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c5a08;
        }
    }
    ctx->pc = 0x4C5A24u;
    // 0x4c5a24: 0x103102b  sltu        $v0, $t0, $v1
    ctx->pc = 0x4c5a24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4c5a28:
    // 0x4c5a28: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4C5A28u;
    {
        const bool branch_taken_0x4c5a28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c5a28) {
            ctx->pc = 0x4C5A2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C5A28u;
            // 0x4c5a2c: 0x8dc20000  lw          $v0, 0x0($t6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C5A3Cu;
            goto label_4c5a3c;
        }
    }
    ctx->pc = 0x4C5A30u;
    // 0x4c5a30: 0x1034023  subu        $t0, $t0, $v1
    ctx->pc = 0x4c5a30u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x4c5a34: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4C5A34u;
    {
        const bool branch_taken_0x4c5a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C5A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5A34u;
        // 0x4c5a38: 0x6a5006  srlv        $t2, $t2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 3) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5a34) {
            ctx->pc = 0x4C5A50u;
            goto label_4c5a50;
        }
    }
    ctx->pc = 0x4C5A3Cu;
label_4c5a3c:
    // 0x4c5a3c: 0x2464ffe0  addiu       $a0, $v1, -0x20
    ctx->pc = 0x4c5a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
    // 0x4c5a40: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x4c5a40u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x4c5a44: 0x25ce0004  addiu       $t6, $t6, 0x4
    ctx->pc = 0x4c5a44u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
    // 0x4c5a48: 0x625006  srlv        $t2, $v0, $v1
    ctx->pc = 0x4c5a48u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x4c5a4c: 0x1044023  subu        $t0, $t0, $a0
    ctx->pc = 0x4c5a4cu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_4c5a50:
    // 0x4c5a50: 0x2d02000f  sltiu       $v0, $t0, 0xF
    ctx->pc = 0x4c5a50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x4c5a54: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4C5A54u;
    {
        const bool branch_taken_0x4c5a54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c5a54) {
            ctx->pc = 0x4C5A58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C5A54u;
            // 0x4c5a58: 0x8dc20000  lw          $v0, 0x0($t6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C5A64u;
            goto label_4c5a64;
        }
    }
    ctx->pc = 0x4C5A5Cu;
    // 0x4c5a5c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4C5A5Cu;
    {
        const bool branch_taken_0x4c5a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C5A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5A5Cu;
        // 0x4c5a60: 0x31437fff  andi        $v1, $t2, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5a5c) {
            ctx->pc = 0x4C5A70u;
            goto label_4c5a70;
        }
    }
    ctx->pc = 0x4C5A64u;
label_4c5a64:
    // 0x4c5a64: 0x1021004  sllv        $v0, $v0, $t0
    ctx->pc = 0x4c5a64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
    // 0x4c5a68: 0x1421025  or          $v0, $t2, $v0
    ctx->pc = 0x4c5a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x4c5a6c: 0x30437fff  andi        $v1, $v0, 0x7FFF
    ctx->pc = 0x4c5a6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
label_4c5a70:
    // 0x4c5a70: 0x60582d  daddu       $t3, $v1, $zero
    ctx->pc = 0x4c5a70u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c5a74: 0x320302d  daddu       $a2, $t9, $zero
    ctx->pc = 0x4c5a74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c5a78: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x4c5a78u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c5a7c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x4c5a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4c5a80: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x4c5a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4c5a84: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x4c5a84u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c5a88: 0x31620001  andi        $v0, $t3, 0x1
    ctx->pc = 0x4c5a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x4c5a8c: 0x0  nop
    ctx->pc = 0x4c5a8cu;
    // NOP
label_4c5a90:
    // 0x4c5a90: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4C5A90u;
    {
        const bool branch_taken_0x4c5a90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C5A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5A90u;
        // 0x4c5a94: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5a90) {
            ctx->pc = 0x4C5AA8u;
            goto label_4c5aa8;
        }
    }
    ctx->pc = 0x4C5A98u;
    // 0x4c5a98: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x4c5a98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4c5a9c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x4c5a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x4c5aa0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4C5AA0u;
    {
        const bool branch_taken_0x4c5aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C5AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5AA0u;
        // 0x4c5aa4: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5aa0) {
            ctx->pc = 0x4C5AB4u;
            goto label_4c5ab4;
        }
    }
    ctx->pc = 0x4C5AA8u;
label_4c5aa8:
    // 0x4c5aa8: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x4c5aa8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4c5aac: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x4c5aacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x4c5ab0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x4c5ab0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_4c5ab4:
    // 0x4c5ab4: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x4c5ab4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4c5ab8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x4c5ab8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x4c5abc: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x4C5ABCu;
    {
        const bool branch_taken_0x4c5abc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C5AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5ABCu;
        // 0x4c5ac0: 0xb5842  srl         $t3, $t3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5abc) {
            ctx->pc = 0x4C5AF4u;
            goto label_4c5af4;
        }
    }
    ctx->pc = 0x4C5AC4u;
    // 0x4c5ac4: 0x1480fff2  bnez        $a0, . + 4 + (-0xE << 2)
    ctx->pc = 0x4C5AC4u;
    {
        const bool branch_taken_0x4c5ac4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C5AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5AC4u;
        // 0x4c5ac8: 0x31620001  andi        $v0, $t3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5ac4) {
            ctx->pc = 0x4C5A90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c5a90;
        }
    }
    ctx->pc = 0x4C5ACCu;
    // 0x4c5acc: 0x0  nop
    ctx->pc = 0x4c5accu;
    // NOP
label_4c5ad0:
    // 0x4c5ad0: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x4c5ad0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4c5ad4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x4c5ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x4c5ad8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x4c5ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x4c5adc: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x4c5adcu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4c5ae0: 0x0  nop
    ctx->pc = 0x4c5ae0u;
    // NOP
    // 0x4c5ae4: 0x14a0fffa  bnez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4C5AE4u;
    {
        const bool branch_taken_0x4c5ae4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C5AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5AE4u;
        // 0x4c5ae8: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5ae4) {
            ctx->pc = 0x4C5AD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c5ad0;
        }
    }
    ctx->pc = 0x4C5AECu;
    // 0x4c5aec: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4C5AECu;
    {
        const bool branch_taken_0x4c5aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C5AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5AECu;
        // 0x4c5af0: 0x103102b  sltu        $v0, $t0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5aec) {
            ctx->pc = 0x4C5B20u;
            goto label_4c5b20;
        }
    }
    ctx->pc = 0x4C5AF4u;
label_4c5af4:
    // 0x4c5af4: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x4C5AF4u;
    {
        const bool branch_taken_0x4c5af4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C5AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5AF4u;
        // 0x4c5af8: 0x103102b  sltu        $v0, $t0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5af4) {
            ctx->pc = 0x4C5B20u;
            goto label_4c5b20;
        }
    }
    ctx->pc = 0x4C5AFCu;
    // 0x4c5afc: 0x0  nop
    ctx->pc = 0x4c5afcu;
    // NOP
label_4c5b00:
    // 0x4c5b00: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x4c5b00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4c5b04: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x4c5b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x4c5b08: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x4c5b08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x4c5b0c: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x4c5b0cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4c5b10: 0x0  nop
    ctx->pc = 0x4c5b10u;
    // NOP
    // 0x4c5b14: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4C5B14u;
    {
        const bool branch_taken_0x4c5b14 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C5B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5B14u;
        // 0x4c5b18: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5b14) {
            ctx->pc = 0x4C5B00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c5b00;
        }
    }
    ctx->pc = 0x4C5B1Cu;
    // 0x4c5b1c: 0x103102b  sltu        $v0, $t0, $v1
    ctx->pc = 0x4c5b1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4c5b20:
    // 0x4c5b20: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4C5B20u;
    {
        const bool branch_taken_0x4c5b20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c5b20) {
            ctx->pc = 0x4C5B24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C5B20u;
            // 0x4c5b24: 0x8dc20000  lw          $v0, 0x0($t6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C5B34u;
            goto label_4c5b34;
        }
    }
    ctx->pc = 0x4C5B28u;
    // 0x4c5b28: 0x1034023  subu        $t0, $t0, $v1
    ctx->pc = 0x4c5b28u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_4c5b2c:
    // 0x4c5b2c: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x4C5B2Cu;
    {
        const bool branch_taken_0x4c5b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C5B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5B2Cu;
        // 0x4c5b30: 0x6a5006  srlv        $t2, $t2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 3) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5b2c) {
            ctx->pc = 0x4C5C18u;
            goto label_4c5c18;
        }
    }
    ctx->pc = 0x4C5B34u;
label_4c5b34:
    // 0x4c5b34: 0x2464ffe0  addiu       $a0, $v1, -0x20
    ctx->pc = 0x4c5b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
    // 0x4c5b38: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x4c5b38u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x4c5b3c: 0x25ce0004  addiu       $t6, $t6, 0x4
    ctx->pc = 0x4c5b3cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
    // 0x4c5b40: 0x625006  srlv        $t2, $v0, $v1
    ctx->pc = 0x4c5b40u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x4c5b44: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x4C5B44u;
    {
        const bool branch_taken_0x4c5b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C5B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5B44u;
        // 0x4c5b48: 0x1044023  subu        $t0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5b44) {
            ctx->pc = 0x4C5C18u;
            goto label_4c5c18;
        }
    }
    ctx->pc = 0x4C5B4Cu;
label_4c5b4c:
    // 0x4c5b4c: 0x2d020003  sltiu       $v0, $t0, 0x3
    ctx->pc = 0x4c5b4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x4c5b50: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4C5B50u;
    {
        const bool branch_taken_0x4c5b50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c5b50) {
            ctx->pc = 0x4C5B54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C5B50u;
            // 0x4c5b54: 0x8dc40000  lw          $a0, 0x0($t6) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C5B68u;
            goto label_4c5b68;
        }
    }
    ctx->pc = 0x4C5B58u;
    // 0x4c5b58: 0x31460007  andi        $a2, $t2, 0x7
    ctx->pc = 0x4c5b58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)7);
    // 0x4c5b5c: 0x2508fffd  addiu       $t0, $t0, -0x3
    ctx->pc = 0x4c5b5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967293));
    // 0x4c5b60: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x4C5B60u;
    {
        const bool branch_taken_0x4c5b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C5B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5B60u;
        // 0x4c5b64: 0xa50c2  srl         $t2, $t2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5b60) {
            ctx->pc = 0x4C5B88u;
            goto label_4c5b88;
        }
    }
    ctx->pc = 0x4C5B68u;
label_4c5b68:
    // 0x4c5b68: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4c5b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4c5b6c: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x4c5b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x4c5b70: 0x25ce0004  addiu       $t6, $t6, 0x4
    ctx->pc = 0x4c5b70u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
    // 0x4c5b74: 0x1041004  sllv        $v0, $a0, $t0
    ctx->pc = 0x4c5b74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 8) & 0x1F));
    // 0x4c5b78: 0x1421025  or          $v0, $t2, $v0
    ctx->pc = 0x4c5b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x4c5b7c: 0x2508001d  addiu       $t0, $t0, 0x1D
    ctx->pc = 0x4c5b7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 29));
    // 0x4c5b80: 0x645006  srlv        $t2, $a0, $v1
    ctx->pc = 0x4c5b80u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x4c5b84: 0x30460007  andi        $a2, $v0, 0x7
    ctx->pc = 0x4c5b84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_4c5b88:
    // 0x4c5b88: 0x3409ffff  ori         $t1, $zero, 0xFFFF
    ctx->pc = 0x4c5b88u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x4c5b8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4c5b8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c5b90: 0x240c0004  addiu       $t4, $zero, 0x4
    ctx->pc = 0x4c5b90u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4c5b94: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x4c5b94u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c5b98:
    // 0x4c5b98: 0x2d020004  sltiu       $v0, $t0, 0x4
    ctx->pc = 0x4c5b98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x4c5b9c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4C5B9Cu;
    {
        const bool branch_taken_0x4c5b9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c5b9c) {
            ctx->pc = 0x4C5BA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C5B9Cu;
            // 0x4c5ba0: 0x8dc20000  lw          $v0, 0x0($t6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C5BB4u;
            goto label_4c5bb4;
        }
    }
    ctx->pc = 0x4C5BA4u;
    // 0x4c5ba4: 0x3144000f  andi        $a0, $t2, 0xF
    ctx->pc = 0x4c5ba4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)15);
    // 0x4c5ba8: 0x2508fffc  addiu       $t0, $t0, -0x4
    ctx->pc = 0x4c5ba8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
    // 0x4c5bac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4C5BACu;
    {
        const bool branch_taken_0x4c5bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C5BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5BACu;
        // 0x4c5bb0: 0xa5102  srl         $t2, $t2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5bac) {
            ctx->pc = 0x4C5BD0u;
            goto label_4c5bd0;
        }
    }
    ctx->pc = 0x4C5BB4u;
label_4c5bb4:
    // 0x4c5bb4: 0x1882023  subu        $a0, $t4, $t0
    ctx->pc = 0x4c5bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
    // 0x4c5bb8: 0x25ce0004  addiu       $t6, $t6, 0x4
    ctx->pc = 0x4c5bb8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
    // 0x4c5bbc: 0x1021804  sllv        $v1, $v0, $t0
    ctx->pc = 0x4c5bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
    // 0x4c5bc0: 0x1431825  or          $v1, $t2, $v1
    ctx->pc = 0x4c5bc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) | GPR_U64(ctx, 3));
    // 0x4c5bc4: 0x2508001c  addiu       $t0, $t0, 0x1C
    ctx->pc = 0x4c5bc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 28));
    // 0x4c5bc8: 0x825006  srlv        $t2, $v0, $a0
    ctx->pc = 0x4c5bc8u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x4c5bcc: 0x3064000f  andi        $a0, $v1, 0xF
    ctx->pc = 0x4c5bccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_4c5bd0:
    // 0x4c5bd0: 0xe51021  addu        $v0, $a3, $a1
    ctx->pc = 0x4c5bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x4c5bd4: 0x8b1804  sllv        $v1, $t3, $a0
    ctx->pc = 0x4c5bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 4) & 0x1F));
    // 0x4c5bd8: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x4c5bd8u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x4c5bdc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4c5bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4c5be0: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x4c5be0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x4c5be4: 0xc5102b  sltu        $v0, $a2, $a1
    ctx->pc = 0x4c5be4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x4c5be8: 0x1040ffeb  beqz        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x4C5BE8u;
    {
        const bool branch_taken_0x4c5be8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C5BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5BE8u;
        // 0x4c5bec: 0x1234824  and         $t1, $t1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5be8) {
            ctx->pc = 0x4C5B98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c5b98;
        }
    }
    ctx->pc = 0x4C5BF0u;
    // 0x4c5bf0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4c5bf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c5bf4: 0x0  nop
    ctx->pc = 0x4c5bf4u;
    // NOP
label_4c5bf8:
    // 0x4c5bf8: 0x31220001  andi        $v0, $t1, 0x1
    ctx->pc = 0x4c5bf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
    // 0x4c5bfc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4C5BFCu;
    {
        const bool branch_taken_0x4c5bfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C5C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5BFCu;
        // 0x4c5c00: 0x94842  srl         $t1, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5bfc) {
            ctx->pc = 0x4C5C10u;
            goto label_4c5c10;
        }
    }
    ctx->pc = 0x4C5C04u;
    // 0x4c5c04: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x4c5c04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x4c5c08: 0xe61021  addu        $v0, $a3, $a2
    ctx->pc = 0x4c5c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x4c5c0c: 0xa0450000  sb          $a1, 0x0($v0)
    ctx->pc = 0x4c5c0cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 5));
label_4c5c10:
    // 0x4c5c10: 0x1520fff9  bnez        $t1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x4C5C10u;
    {
        const bool branch_taken_0x4c5c10 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C5C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5C10u;
        // 0x4c5c14: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5c10) {
            ctx->pc = 0x4C5BF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c5bf8;
        }
    }
    ctx->pc = 0x4C5C18u;
label_4c5c18:
    // 0x4c5c18: 0xaea80008  sw          $t0, 0x8($s5)
    ctx->pc = 0x4c5c18u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 8));
label_4c5c1c:
    // 0x4c5c1c: 0xaeae0004  sw          $t6, 0x4($s5)
    ctx->pc = 0x4c5c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 14));
    // 0x4c5c20: 0xaeaa0000  sw          $t2, 0x0($s5)
    ctx->pc = 0x4c5c20u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 10));
    // 0x4c5c24: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x4c5c24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4c5c28: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x4c5c28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4c5c2c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x4c5c2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4c5c30: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x4c5c30u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4c5c34: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x4c5c34u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4c5c38: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x4c5c38u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4c5c3c: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x4c5c3cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4c5c40: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x4c5c40u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4c5c44: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x4c5c44u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4c5c48: 0x3e00008  jr          $ra
    ctx->pc = 0x4C5C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C5C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5C48u;
        // 0x4c5c4c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C5C48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C5C50u;
}
