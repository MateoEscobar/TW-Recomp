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

// Function: sub_004C5F30
// Address: 0x4c5f30 - 0x4c6240
void sub_004C5F30_0x4c5f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C5F30_0x4c5f30");
#endif

    switch (ctx->pc) {
        case 0x4c6060u: goto label_4c6060;
        case 0x4c61f0u: goto label_4c61f0;
        default: break;
    }

    ctx->pc = 0x4c5f30u;

    // 0x4c5f30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4c5f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4c5f34: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x4c5f34u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c5f38: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4c5f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4c5f3c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4c5f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4c5f40: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x4c5f40u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c5f44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4c5f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4c5f48: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4c5f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4c5f4c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4c5f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4c5f50: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4c5f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4c5f54: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4c5f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4c5f58: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x4c5f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x4c5f5c: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4c5f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4c5f60: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x4c5f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x4c5f64: 0x146200ab  bne         $v1, $v0, . + 4 + (0xAB << 2)
    ctx->pc = 0x4C5F64u;
    {
        const bool branch_taken_0x4c5f64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4C5F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5F64u;
        // 0x4c5f68: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5f64) {
            ctx->pc = 0x4C6214u;
            goto label_4c6214;
        }
    }
    ctx->pc = 0x4C5F6Cu;
    // 0x4c5f6c: 0x8eb00008  lw          $s0, 0x8($s5)
    ctx->pc = 0x4c5f6cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x4c5f70: 0x8d270028  lw          $a3, 0x28($t1)
    ctx->pc = 0x4c5f70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 40)));
    // 0x4c5f74: 0x8eb20004  lw          $s2, 0x4($s5)
    ctx->pc = 0x4c5f74u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x4c5f78: 0x207102b  sltu        $v0, $s0, $a3
    ctx->pc = 0x4c5f78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x4c5f7c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4C5F7Cu;
    {
        const bool branch_taken_0x4c5f7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C5F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5F7Cu;
        // 0x4c5f80: 0x8eb10000  lw          $s1, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5f7c) {
            ctx->pc = 0x4C5FA8u;
            goto label_4c5fa8;
        }
    }
    ctx->pc = 0x4C5F84u;
    // 0x4c5f84: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x4c5f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x4c5f88: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4c5f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4c5f8c: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x4c5f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x4c5f90: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4c5f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4c5f94: 0x621006  srlv        $v0, $v0, $v1
    ctx->pc = 0x4c5f94u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x4c5f98: 0x2078023  subu        $s0, $s0, $a3
    ctx->pc = 0x4c5f98u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x4c5f9c: 0x2224024  and         $t0, $s1, $v0
    ctx->pc = 0x4c5f9cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x4c5fa0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x4C5FA0u;
    {
        const bool branch_taken_0x4c5fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C5FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5FA0u;
        // 0x4c5fa4: 0xf18806  srlv        $s1, $s1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), GPR_U32(ctx, 7) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5fa0) {
            ctx->pc = 0x4C5FE0u;
            goto label_4c5fe0;
        }
    }
    ctx->pc = 0x4C5FA8u;
label_4c5fa8:
    // 0x4c5fa8: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x4c5fa8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c5fac: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x4c5facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x4c5fb0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4c5fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4c5fb4: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x4c5fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x4c5fb8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4c5fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4c5fbc: 0x2062004  sllv        $a0, $a2, $s0
    ctx->pc = 0x4c5fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 16) & 0x1F));
    // 0x4c5fc0: 0x621006  srlv        $v0, $v0, $v1
    ctx->pc = 0x4c5fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x4c5fc4: 0x2242025  or          $a0, $s1, $a0
    ctx->pc = 0x4c5fc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) | GPR_U64(ctx, 4));
    // 0x4c5fc8: 0xf01823  subu        $v1, $a3, $s0
    ctx->pc = 0x4c5fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
    // 0x4c5fcc: 0x24e5ffe0  addiu       $a1, $a3, -0x20
    ctx->pc = 0x4c5fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967264));
    // 0x4c5fd0: 0x824024  and         $t0, $a0, $v0
    ctx->pc = 0x4c5fd0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4c5fd4: 0x668806  srlv        $s1, $a2, $v1
    ctx->pc = 0x4c5fd4u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
    // 0x4c5fd8: 0x2058023  subu        $s0, $s0, $a1
    ctx->pc = 0x4c5fd8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x4c5fdc: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x4c5fdcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_4c5fe0:
    // 0x4c5fe0: 0x11000085  beqz        $t0, . + 4 + (0x85 << 2)
    ctx->pc = 0x4C5FE0u;
    {
        const bool branch_taken_0x4c5fe0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C5FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5FE0u;
        // 0x4c5fe4: 0x252f0010  addiu       $t7, $t1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5fe0) {
            ctx->pc = 0x4C61F8u;
            goto label_4c61f8;
        }
    }
    ctx->pc = 0x4C5FE8u;
    // 0x4c5fe8: 0x8d22002c  lw          $v0, 0x2C($t1)
    ctx->pc = 0x4c5fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 44)));
    // 0x4c5fec: 0x8d380020  lw          $t8, 0x20($t1)
    ctx->pc = 0x4c5fecu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x4c5ff0: 0x481821  addu        $v1, $v0, $t0
    ctx->pc = 0x4c5ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x4c5ff4: 0x40702d  daddu       $t6, $v0, $zero
    ctx->pc = 0x4c5ff4u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c5ff8: 0xad230004  sw          $v1, 0x4($t1)
    ctx->pc = 0x4c5ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 3));
    // 0x4c5ffc: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x4c5ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x4c6000: 0x8d2d0024  lw          $t5, 0x24($t1)
    ctx->pc = 0x4c6000u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 36)));
    // 0x4c6004: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4C6004u;
    {
        const bool branch_taken_0x4c6004 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C6008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6004u;
        // 0x4c6008: 0x8e930180  lw          $s3, 0x180($s4) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6004) {
            ctx->pc = 0x4C6024u;
            goto label_4c6024;
        }
    }
    ctx->pc = 0x4C600Cu;
    // 0x4c600c: 0x32230001  andi        $v1, $s1, 0x1
    ctx->pc = 0x4c600cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x4c6010: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x4c6010u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x4c6014: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4C6014u;
    {
        const bool branch_taken_0x4c6014 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C6018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6014u;
        // 0x4c6018: 0x118842  srl         $s1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6014) {
            ctx->pc = 0x4C603Cu;
            goto label_4c603c;
        }
    }
    ctx->pc = 0x4C601Cu;
    // 0x4c601c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x4C601Cu;
    {
        const bool branch_taken_0x4c601c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C6020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C601Cu;
        // 0x4c6020: 0x24190020  addiu       $t9, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c601c) {
            ctx->pc = 0x4C6048u;
            goto label_4c6048;
        }
    }
    ctx->pc = 0x4C6024u;
label_4c6024:
    // 0x4c6024: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4c6024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c6028: 0x2410001f  addiu       $s0, $zero, 0x1F
    ctx->pc = 0x4c6028u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x4c602c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x4c602cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x4c6030: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x4c6030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x4c6034: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4C6034u;
    {
        const bool branch_taken_0x4c6034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C6038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6034u;
        // 0x4c6038: 0x38842  srl         $s1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6034) {
            ctx->pc = 0x4C6044u;
            goto label_4c6044;
        }
    }
    ctx->pc = 0x4C603Cu;
label_4c603c:
    // 0x4c603c: 0x81023  negu        $v0, $t0
    ctx->pc = 0x4c603cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 8)));
    // 0x4c6040: 0x2448ffec  addiu       $t0, $v0, -0x14
    ctx->pc = 0x4c6040u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
label_4c6044:
    // 0x4c6044: 0x24190020  addiu       $t9, $zero, 0x20
    ctx->pc = 0x4c6044u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_4c6048:
    // 0x4c6048: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x4c6048u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x4c604c: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x4c604cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x4c6050: 0x3381023  subu        $v0, $t9, $t8
    ctx->pc = 0x4c6050u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 24)));
    // 0x4c6054: 0x4a6006  srlv        $t4, $t2, $v0
    ctx->pc = 0x4c6054u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 2) & 0x1F));
    // 0x4c6058: 0x26960100  addiu       $s6, $s4, 0x100
    ctx->pc = 0x4c6058u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 256));
    // 0x4c605c: 0x268b0140  addiu       $t3, $s4, 0x140
    ctx->pc = 0x4c605cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 20), 320));
label_4c6060:
    // 0x4c6060: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x4c6060u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x4c6064: 0x2c41021  addu        $v0, $s6, $a0
    ctx->pc = 0x4c6064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
    // 0x4c6068: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4c6068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4c606c: 0x202182b  sltu        $v1, $s0, $v0
    ctx->pc = 0x4c606cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4c6070: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x4C6070u;
    {
        const bool branch_taken_0x4c6070 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C6074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6070u;
        // 0x4c6074: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6070) {
            ctx->pc = 0x4C60B8u;
            goto label_4c60b8;
        }
    }
    ctx->pc = 0x4C6078u;
    // 0x4c6078: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x4c6078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x4c607c: 0x3221023  subu        $v0, $t9, $v0
    ctx->pc = 0x4c607cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
    // 0x4c6080: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4c6080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c6084: 0x4a1006  srlv        $v0, $t2, $v0
    ctx->pc = 0x4c6084u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 2) & 0x1F));
    // 0x4c6088: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x4c6088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x4c608c: 0x132100  sll         $a0, $s3, 4
    ctx->pc = 0x4c608cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x4c6090: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4c6090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4c6094: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x4c6094u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4c6098: 0x30a2000f  andi        $v0, $a1, 0xF
    ctx->pc = 0x4c6098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x4c609c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4c609cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4c60a0: 0x52902  srl         $a1, $a1, 4
    ctx->pc = 0x4c60a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 4));
    // 0x4c60a4: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x4c60a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x4c60a8: 0x2058023  subu        $s0, $s0, $a1
    ctx->pc = 0x4c60a8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x4c60ac: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x4c60acu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4c60b0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x4C60B0u;
    {
        const bool branch_taken_0x4c60b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C60B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C60B0u;
        // 0x4c60b4: 0xb18806  srlv        $s1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c60b0) {
            ctx->pc = 0x4C6120u;
            goto label_4c6120;
        }
    }
    ctx->pc = 0x4C60B8u;
label_4c60b8:
    // 0x4c60b8: 0x1641821  addu        $v1, $t3, $a0
    ctx->pc = 0x4c60b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x4c60bc: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x4c60bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c60c0: 0x3222023  subu        $a0, $t9, $v0
    ctx->pc = 0x4c60c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
    // 0x4c60c4: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x4c60c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4c60c8: 0x2061004  sllv        $v0, $a2, $s0
    ctx->pc = 0x4c60c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 16) & 0x1F));
    // 0x4c60cc: 0x8a2006  srlv        $a0, $t2, $a0
    ctx->pc = 0x4c60ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 4) & 0x1F));
    // 0x4c60d0: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x4c60d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x4c60d4: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x4c60d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x4c60d8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4c60d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4c60dc: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x4c60dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4c60e0: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x4c60e0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c60e4: 0x30a2000f  andi        $v0, $a1, 0xF
    ctx->pc = 0x4c60e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x4c60e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4c60e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4c60ec: 0x52902  srl         $a1, $a1, 4
    ctx->pc = 0x4c60ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 4));
    // 0x4c60f0: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x4c60f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x4c60f4: 0x205182b  sltu        $v1, $s0, $a1
    ctx->pc = 0x4c60f4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x4c60f8: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4C60F8u;
    {
        const bool branch_taken_0x4c60f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C60FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C60F8u;
        // 0x4c60fc: 0x90440000  lbu         $a0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c60f8) {
            ctx->pc = 0x4C610Cu;
            goto label_4c610c;
        }
    }
    ctx->pc = 0x4C6100u;
    // 0x4c6100: 0x2058023  subu        $s0, $s0, $a1
    ctx->pc = 0x4c6100u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x4c6104: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4C6104u;
    {
        const bool branch_taken_0x4c6104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C6108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6104u;
        // 0x4c6108: 0xb18806  srlv        $s1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6104) {
            ctx->pc = 0x4C6120u;
            goto label_4c6120;
        }
    }
    ctx->pc = 0x4C610Cu;
label_4c610c:
    // 0x4c610c: 0xb01023  subu        $v0, $a1, $s0
    ctx->pc = 0x4c610cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x4c6110: 0x24a3ffe0  addiu       $v1, $a1, -0x20
    ctx->pc = 0x4c6110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
    // 0x4c6114: 0x468806  srlv        $s1, $a2, $v0
    ctx->pc = 0x4c6114u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
    // 0x4c6118: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x4c6118u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x4c611c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x4c611cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_4c6120:
    // 0x4c6120: 0x218102b  sltu        $v0, $s0, $t8
    ctx->pc = 0x4c6120u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 24)) ? 1 : 0);
    // 0x4c6124: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4C6124u;
    {
        const bool branch_taken_0x4c6124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C6128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6124u;
        // 0x4c6128: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6124) {
            ctx->pc = 0x4C614Cu;
            goto label_4c614c;
        }
    }
    ctx->pc = 0x4C612Cu;
    // 0x4c612c: 0x22c1024  and         $v0, $s1, $t4
    ctx->pc = 0x4c612cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 12));
    // 0x4c6130: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x4c6130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x4c6134: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x4c6134u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4c6138: 0x30a3000f  andi        $v1, $a1, 0xF
    ctx->pc = 0x4c6138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x4c613c: 0x52902  srl         $a1, $a1, 4
    ctx->pc = 0x4c613cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 4));
    // 0x4c6140: 0x1e31821  addu        $v1, $t7, $v1
    ctx->pc = 0x4c6140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 3)));
    // 0x4c6144: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x4C6144u;
    {
        const bool branch_taken_0x4c6144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C6148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6144u;
        // 0x4c6148: 0x90670000  lbu         $a3, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6144) {
            ctx->pc = 0x4C617Cu;
            goto label_4c617c;
        }
    }
    ctx->pc = 0x4C614Cu;
label_4c614c:
    // 0x4c614c: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x4c614cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c6150: 0x2061004  sllv        $v0, $a2, $s0
    ctx->pc = 0x4c6150u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 16) & 0x1F));
    // 0x4c6154: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x4c6154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x4c6158: 0x4c1024  and         $v0, $v0, $t4
    ctx->pc = 0x4c6158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 12));
    // 0x4c615c: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x4c615cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x4c6160: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x4c6160u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4c6164: 0x30a3000f  andi        $v1, $a1, 0xF
    ctx->pc = 0x4c6164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x4c6168: 0x1e31821  addu        $v1, $t7, $v1
    ctx->pc = 0x4c6168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 3)));
    // 0x4c616c: 0x52902  srl         $a1, $a1, 4
    ctx->pc = 0x4c616cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 4));
    // 0x4c6170: 0x205102b  sltu        $v0, $s0, $a1
    ctx->pc = 0x4c6170u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x4c6174: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4C6174u;
    {
        const bool branch_taken_0x4c6174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C6178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6174u;
        // 0x4c6178: 0x90670000  lbu         $a3, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6174) {
            ctx->pc = 0x4C6188u;
            goto label_4c6188;
        }
    }
    ctx->pc = 0x4C617Cu;
label_4c617c:
    // 0x4c617c: 0x2058023  subu        $s0, $s0, $a1
    ctx->pc = 0x4c617cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x4c6180: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4C6180u;
    {
        const bool branch_taken_0x4c6180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C6184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6180u;
        // 0x4c6184: 0xb18806  srlv        $s1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6180) {
            ctx->pc = 0x4C619Cu;
            goto label_4c619c;
        }
    }
    ctx->pc = 0x4C6188u;
label_4c6188:
    // 0x4c6188: 0xb01023  subu        $v0, $a1, $s0
    ctx->pc = 0x4c6188u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x4c618c: 0x24a3ffe0  addiu       $v1, $a1, -0x20
    ctx->pc = 0x4c618cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
    // 0x4c6190: 0x468806  srlv        $s1, $a2, $v0
    ctx->pc = 0x4c6190u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
    // 0x4c6194: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x4c6194u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x4c6198: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x4c6198u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_4c619c:
    // 0x4c619c: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x4c619cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x4c61a0: 0x1c0282d  daddu       $a1, $t6, $zero
    ctx->pc = 0x4c61a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c61a4: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x4c61a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x4c61a8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x4c61a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x4c61ac: 0x30820080  andi        $v0, $a0, 0x80
    ctx->pc = 0x4c61acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
    // 0x4c61b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4C61B0u;
    {
        const bool branch_taken_0x4c61b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C61B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C61B0u;
        // 0x4c61b4: 0x24ae0001  addiu       $t6, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c61b0) {
            ctx->pc = 0x4C61C8u;
            goto label_4c61c8;
        }
    }
    ctx->pc = 0x4C61B8u;
    // 0x4c61b8: 0x3082007f  andi        $v0, $a0, 0x7F
    ctx->pc = 0x4c61b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)127);
    // 0x4c61bc: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4c61bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4c61c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4C61C0u;
    {
        const bool branch_taken_0x4c61c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C61C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C61C0u;
        // 0x4c61c4: 0x2442ff80  addiu       $v0, $v0, -0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c61c0) {
            ctx->pc = 0x4C61CCu;
            goto label_4c61cc;
        }
    }
    ctx->pc = 0x4C61C8u;
label_4c61c8:
    // 0x4c61c8: 0x34820080  ori         $v0, $a0, 0x80
    ctx->pc = 0x4c61c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)128);
label_4c61cc:
    // 0x4c61cc: 0x1d00ffa4  bgtz        $t0, . + 4 + (-0x5C << 2)
    ctx->pc = 0x4C61CCu;
    {
        const bool branch_taken_0x4c61cc = (GPR_S32(ctx, 8) > 0);
        ctx->pc = 0x4C61D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C61CCu;
        // 0x4c61d0: 0xa0a20000  sb          $v0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c61cc) {
            ctx->pc = 0x4C6060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c6060;
        }
    }
    ctx->pc = 0x4C61D4u;
    // 0x4c61d4: 0x2902ffea  slti        $v0, $t0, -0x16
    ctx->pc = 0x4c61d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)4294967274) ? 1 : 0);
    // 0x4c61d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4C61D8u;
    {
        const bool branch_taken_0x4c61d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C61DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C61D8u;
        // 0x4c61dc: 0x25060015  addiu       $a2, $t0, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c61d8) {
            ctx->pc = 0x4C61F0u;
            goto label_4c61f0;
        }
    }
    ctx->pc = 0x4C61E0u;
    // 0x4c61e0: 0x8d24002c  lw          $a0, 0x2C($t1)
    ctx->pc = 0x4c61e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 44)));
    // 0x4c61e4: 0x63023  negu        $a2, $a2
    ctx->pc = 0x4c61e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x4c61e8: 0xc13372a  jal         func_4CDCA8
    ctx->pc = 0x4C61E8u;
    SET_GPR_U32(ctx, 31, 0x4C61F0u);
    ctx->pc = 0x4C61ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C61E8u;
    // 0x4c61ec: 0x90850000  lbu         $a1, 0x0($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CDCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CDCA8u, 0x4C61E8u, 0x4C61F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C61F0u;
label_4c61f0:
    // 0x4c61f0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4C61F0u;
    {
        const bool branch_taken_0x4c61f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C61F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C61F0u;
        // 0x4c61f4: 0xae930180  sw          $s3, 0x180($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 384), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c61f0) {
            ctx->pc = 0x4C6208u;
            goto label_4c6208;
        }
    }
    ctx->pc = 0x4C61F8u;
label_4c61f8:
    // 0x4c61f8: 0x8d22002c  lw          $v0, 0x2C($t1)
    ctx->pc = 0x4c61f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 44)));
    // 0x4c61fc: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x4c61fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x4c6200: 0xad220004  sw          $v0, 0x4($t1)
    ctx->pc = 0x4c6200u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 2));
    // 0x4c6204: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x4c6204u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
label_4c6208:
    // 0x4c6208: 0xaeb00008  sw          $s0, 0x8($s5)
    ctx->pc = 0x4c6208u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 16));
    // 0x4c620c: 0xaeb20004  sw          $s2, 0x4($s5)
    ctx->pc = 0x4c620cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 18));
    // 0x4c6210: 0xaeb10000  sw          $s1, 0x0($s5)
    ctx->pc = 0x4c6210u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 17));
label_4c6214:
    // 0x4c6214: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c6214u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c6218: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c6218u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c621c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4c621cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c6220: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4c6220u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4c6224: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4c6224u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4c6228: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4c6228u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4c622c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4c622cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4c6230: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x4c6230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4c6234: 0x3e00008  jr          $ra
    ctx->pc = 0x4C6234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C6238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6234u;
        // 0x4c6238: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C6234u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C623Cu;
    // 0x4c623c: 0x0  nop
    ctx->pc = 0x4c623cu;
    // NOP
    ctx->pc = 0x4c6240u;
}
