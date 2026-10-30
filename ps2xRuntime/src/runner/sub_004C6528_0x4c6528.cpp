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

// Function: sub_004C6528
// Address: 0x4c6528 - 0x4c6760
void sub_004C6528_0x4c6528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C6528_0x4c6528");
#endif

    switch (ctx->pc) {
        case 0x4c6638u: goto label_4c6638;
        case 0x4c6724u: goto label_4c6724;
        default: break;
    }

    ctx->pc = 0x4c6528u;

    // 0x4c6528: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4c6528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4c652c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x4c652cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c6530: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4c6530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4c6534: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4c6534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4c6538: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4c6538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4c653c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4c653cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4c6540: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4c6540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4c6544: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4c6544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4c6548: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4c6548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x4c654c: 0x1462007d  bne         $v1, $v0, . + 4 + (0x7D << 2)
    ctx->pc = 0x4C654Cu;
    {
        const bool branch_taken_0x4c654c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4C6550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C654Cu;
        // 0x4c6550: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c654c) {
            ctx->pc = 0x4C6744u;
            goto label_4c6744;
        }
    }
    ctx->pc = 0x4C6554u;
    // 0x4c6554: 0x8e700008  lw          $s0, 0x8($s3)
    ctx->pc = 0x4c6554u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x4c6558: 0x8d070028  lw          $a3, 0x28($t0)
    ctx->pc = 0x4c6558u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 40)));
    // 0x4c655c: 0x8e720004  lw          $s2, 0x4($s3)
    ctx->pc = 0x4c655cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x4c6560: 0x207102b  sltu        $v0, $s0, $a3
    ctx->pc = 0x4c6560u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x4c6564: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4C6564u;
    {
        const bool branch_taken_0x4c6564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C6568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6564u;
        // 0x4c6568: 0x8e710000  lw          $s1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6564) {
            ctx->pc = 0x4C6590u;
            goto label_4c6590;
        }
    }
    ctx->pc = 0x4C656Cu;
    // 0x4c656c: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x4c656cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x4c6570: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4c6570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4c6574: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x4c6574u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x4c6578: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4c6578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4c657c: 0x621006  srlv        $v0, $v0, $v1
    ctx->pc = 0x4c657cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x4c6580: 0x2078023  subu        $s0, $s0, $a3
    ctx->pc = 0x4c6580u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x4c6584: 0x2224824  and         $t1, $s1, $v0
    ctx->pc = 0x4c6584u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x4c6588: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x4C6588u;
    {
        const bool branch_taken_0x4c6588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C658Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6588u;
        // 0x4c658c: 0xf18806  srlv        $s1, $s1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), GPR_U32(ctx, 7) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6588) {
            ctx->pc = 0x4C65C8u;
            goto label_4c65c8;
        }
    }
    ctx->pc = 0x4C6590u;
label_4c6590:
    // 0x4c6590: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x4c6590u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c6594: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x4c6594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x4c6598: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4c6598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4c659c: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x4c659cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x4c65a0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4c65a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4c65a4: 0x2062004  sllv        $a0, $a2, $s0
    ctx->pc = 0x4c65a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 16) & 0x1F));
    // 0x4c65a8: 0x621006  srlv        $v0, $v0, $v1
    ctx->pc = 0x4c65a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x4c65ac: 0x2242025  or          $a0, $s1, $a0
    ctx->pc = 0x4c65acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) | GPR_U64(ctx, 4));
    // 0x4c65b0: 0xf01823  subu        $v1, $a3, $s0
    ctx->pc = 0x4c65b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
    // 0x4c65b4: 0x24e5ffe0  addiu       $a1, $a3, -0x20
    ctx->pc = 0x4c65b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967264));
    // 0x4c65b8: 0x824824  and         $t1, $a0, $v0
    ctx->pc = 0x4c65b8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4c65bc: 0x668806  srlv        $s1, $a2, $v1
    ctx->pc = 0x4c65bcu;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
    // 0x4c65c0: 0x2058023  subu        $s0, $s0, $a1
    ctx->pc = 0x4c65c0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x4c65c4: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x4c65c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_4c65c8:
    // 0x4c65c8: 0x11200058  beqz        $t1, . + 4 + (0x58 << 2)
    ctx->pc = 0x4C65C8u;
    {
        const bool branch_taken_0x4c65c8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C65CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C65C8u;
        // 0x4c65cc: 0x8d02002c  lw          $v0, 0x2C($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c65c8) {
            ctx->pc = 0x4C672Cu;
            goto label_4c672c;
        }
    }
    ctx->pc = 0x4C65D0u;
    // 0x4c65d0: 0x491821  addu        $v1, $v0, $t1
    ctx->pc = 0x4c65d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x4c65d4: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x4c65d4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x4c65d8: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4C65D8u;
    {
        const bool branch_taken_0x4c65d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C65DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C65D8u;
        // 0x4c65dc: 0xad030004  sw          $v1, 0x4($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c65d8) {
            ctx->pc = 0x4C65F8u;
            goto label_4c65f8;
        }
    }
    ctx->pc = 0x4C65E0u;
    // 0x4c65e0: 0x32230001  andi        $v1, $s1, 0x1
    ctx->pc = 0x4c65e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x4c65e4: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x4c65e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x4c65e8: 0x1460003b  bnez        $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x4C65E8u;
    {
        const bool branch_taken_0x4c65e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C65ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C65E8u;
        // 0x4c65ec: 0x118842  srl         $s1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c65e8) {
            ctx->pc = 0x4C66D8u;
            goto label_4c66d8;
        }
    }
    ctx->pc = 0x4C65F0u;
    // 0x4c65f0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4C65F0u;
    {
        const bool branch_taken_0x4c65f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C65F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C65F0u;
        // 0x4c65f4: 0x8d050020  lw          $a1, 0x20($t0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c65f0) {
            ctx->pc = 0x4C6614u;
            goto label_4c6614;
        }
    }
    ctx->pc = 0x4C65F8u;
label_4c65f8:
    // 0x4c65f8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4c65f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c65fc: 0x2410001f  addiu       $s0, $zero, 0x1F
    ctx->pc = 0x4c65fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x4c6600: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x4c6600u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x4c6604: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x4c6604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x4c6608: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x4C6608u;
    {
        const bool branch_taken_0x4c6608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C660Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6608u;
        // 0x4c660c: 0x38842  srl         $s1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6608) {
            ctx->pc = 0x4C66D8u;
            goto label_4c66d8;
        }
    }
    ctx->pc = 0x4C6610u;
    // 0x4c6610: 0x8d050020  lw          $a1, 0x20($t0)
    ctx->pc = 0x4c6610u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
label_4c6614:
    // 0x4c6614: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x4c6614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x4c6618: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4c6618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4c661c: 0x8d07002c  lw          $a3, 0x2C($t0)
    ctx->pc = 0x4c661cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 44)));
    // 0x4c6620: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x4c6620u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4c6624: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4c6624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4c6628: 0x8d0b0024  lw          $t3, 0x24($t0)
    ctx->pc = 0x4c6628u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 36)));
    // 0x4c662c: 0x626006  srlv        $t4, $v0, $v1
    ctx->pc = 0x4c662cu;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x4c6630: 0x250a0010  addiu       $t2, $t0, 0x10
    ctx->pc = 0x4c6630u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x4c6634: 0x205102b  sltu        $v0, $s0, $a1
    ctx->pc = 0x4c6634u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_4c6638:
    // 0x4c6638: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4C6638u;
    {
        const bool branch_taken_0x4c6638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C663Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6638u;
        // 0x4c663c: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6638) {
            ctx->pc = 0x4C6670u;
            goto label_4c6670;
        }
    }
    ctx->pc = 0x4C6640u;
    // 0x4c6640: 0x22c1024  and         $v0, $s1, $t4
    ctx->pc = 0x4c6640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 12));
    // 0x4c6644: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x4c6644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x4c6648: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x4c6648u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4c664c: 0x30c3000f  andi        $v1, $a2, 0xF
    ctx->pc = 0x4c664cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x4c6650: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x4c6650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x4c6654: 0x63102  srl         $a2, $a2, 4
    ctx->pc = 0x4c6654u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
    // 0x4c6658: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x4c6658u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4c665c: 0x2068023  subu        $s0, $s0, $a2
    ctx->pc = 0x4c665cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x4c6660: 0xd18806  srlv        $s1, $s1, $a2
    ctx->pc = 0x4c6660u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), GPR_U32(ctx, 6) & 0x1F));
    // 0x4c6664: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x4c6664u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4c6668: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x4C6668u;
    {
        const bool branch_taken_0x4c6668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C666Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6668u;
        // 0x4c666c: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6668) {
            ctx->pc = 0x4C66C8u;
            goto label_4c66c8;
        }
    }
    ctx->pc = 0x4C6670u;
label_4c6670:
    // 0x4c6670: 0x8e480000  lw          $t0, 0x0($s2)
    ctx->pc = 0x4c6670u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c6674: 0x2081004  sllv        $v0, $t0, $s0
    ctx->pc = 0x4c6674u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 16) & 0x1F));
    // 0x4c6678: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x4c6678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x4c667c: 0x4c1024  and         $v0, $v0, $t4
    ctx->pc = 0x4c667cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 12));
    // 0x4c6680: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x4c6680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x4c6684: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x4c6684u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4c6688: 0x30c3000f  andi        $v1, $a2, 0xF
    ctx->pc = 0x4c6688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x4c668c: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x4c668cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x4c6690: 0x63102  srl         $a2, $a2, 4
    ctx->pc = 0x4c6690u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
    // 0x4c6694: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x4c6694u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4c6698: 0x206202b  sltu        $a0, $s0, $a2
    ctx->pc = 0x4c6698u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x4c669c: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x4c669cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4c66a0: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4C66A0u;
    {
        const bool branch_taken_0x4c66a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C66A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C66A0u;
        // 0x4c66a4: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c66a0) {
            ctx->pc = 0x4C66B4u;
            goto label_4c66b4;
        }
    }
    ctx->pc = 0x4C66A8u;
    // 0x4c66a8: 0x2068023  subu        $s0, $s0, $a2
    ctx->pc = 0x4c66a8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x4c66ac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4C66ACu;
    {
        const bool branch_taken_0x4c66ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C66B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C66ACu;
        // 0x4c66b0: 0xd18806  srlv        $s1, $s1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), GPR_U32(ctx, 6) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c66ac) {
            ctx->pc = 0x4C66C8u;
            goto label_4c66c8;
        }
    }
    ctx->pc = 0x4C66B4u;
label_4c66b4:
    // 0x4c66b4: 0xd01023  subu        $v0, $a2, $s0
    ctx->pc = 0x4c66b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x4c66b8: 0x24c3ffe0  addiu       $v1, $a2, -0x20
    ctx->pc = 0x4c66b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x4c66bc: 0x488806  srlv        $s1, $t0, $v0
    ctx->pc = 0x4c66bcu;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x4c66c0: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x4c66c0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x4c66c4: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x4c66c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_4c66c8:
    // 0x4c66c8: 0x1520ffdb  bnez        $t1, . + 4 + (-0x25 << 2)
    ctx->pc = 0x4C66C8u;
    {
        const bool branch_taken_0x4c66c8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C66CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C66C8u;
        // 0x4c66cc: 0x205102b  sltu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c66c8) {
            ctx->pc = 0x4C6638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c6638;
        }
    }
    ctx->pc = 0x4C66D0u;
    // 0x4c66d0: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x4C66D0u;
    {
        const bool branch_taken_0x4c66d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C66D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C66D0u;
        // 0x4c66d4: 0xae700008  sw          $s0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c66d0) {
            ctx->pc = 0x4C673Cu;
            goto label_4c673c;
        }
    }
    ctx->pc = 0x4C66D8u;
label_4c66d8:
    // 0x4c66d8: 0x2e020004  sltiu       $v0, $s0, 0x4
    ctx->pc = 0x4c66d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x4c66dc: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4C66DCu;
    {
        const bool branch_taken_0x4c66dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c66dc) {
            ctx->pc = 0x4C66E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C66DCu;
            // 0x4c66e0: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C66F4u;
            goto label_4c66f4;
        }
    }
    ctx->pc = 0x4C66E4u;
    // 0x4c66e4: 0x3225000f  andi        $a1, $s1, 0xF
    ctx->pc = 0x4c66e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)15);
    // 0x4c66e8: 0x2610fffc  addiu       $s0, $s0, -0x4
    ctx->pc = 0x4c66e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
    // 0x4c66ec: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x4C66ECu;
    {
        const bool branch_taken_0x4c66ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C66F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C66ECu;
        // 0x4c66f0: 0x118902  srl         $s1, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c66ec) {
            ctx->pc = 0x4C6714u;
            goto label_4c6714;
        }
    }
    ctx->pc = 0x4C66F4u;
label_4c66f4:
    // 0x4c66f4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4c66f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4c66f8: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x4c66f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x4c66fc: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x4c66fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x4c6700: 0x2041004  sllv        $v0, $a0, $s0
    ctx->pc = 0x4c6700u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 16) & 0x1F));
    // 0x4c6704: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x4c6704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x4c6708: 0x2610001c  addiu       $s0, $s0, 0x1C
    ctx->pc = 0x4c6708u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x4c670c: 0x648806  srlv        $s1, $a0, $v1
    ctx->pc = 0x4c670cu;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x4c6710: 0x3045000f  andi        $a1, $v0, 0xF
    ctx->pc = 0x4c6710u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_4c6714:
    // 0x4c6714: 0x8d04002c  lw          $a0, 0x2C($t0)
    ctx->pc = 0x4c6714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 44)));
    // 0x4c6718: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x4c6718u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x4c671c: 0xc13372a  jal         func_4CDCA8
    ctx->pc = 0x4C671Cu;
    SET_GPR_U32(ctx, 31, 0x4C6724u);
    ctx->pc = 0x4C6720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C671Cu;
    // 0x4c6720: 0x120302d  daddu       $a2, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CDCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CDCA8u, 0x4C671Cu, 0x4C6724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C6724u;
label_4c6724:
    // 0x4c6724: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4C6724u;
    {
        const bool branch_taken_0x4c6724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C6728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6724u;
        // 0x4c6728: 0xae700008  sw          $s0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6724) {
            ctx->pc = 0x4C673Cu;
            goto label_4c673c;
        }
    }
    ctx->pc = 0x4C672Cu;
label_4c672c:
    // 0x4c672c: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x4c672cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x4c6730: 0xad020004  sw          $v0, 0x4($t0)
    ctx->pc = 0x4c6730u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
    // 0x4c6734: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4c6734u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4c6738: 0xae700008  sw          $s0, 0x8($s3)
    ctx->pc = 0x4c6738u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 16));
label_4c673c:
    // 0x4c673c: 0xae720004  sw          $s2, 0x4($s3)
    ctx->pc = 0x4c673cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
    // 0x4c6740: 0xae710000  sw          $s1, 0x0($s3)
    ctx->pc = 0x4c6740u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
label_4c6744:
    // 0x4c6744: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c6744u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c6748: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c6748u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c674c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4c674cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c6750: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4c6750u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4c6754: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4c6754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4c6758: 0x3e00008  jr          $ra
    ctx->pc = 0x4C6758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C675Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6758u;
        // 0x4c675c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C6758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C6760u;
}
