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

// Function: sub_004A9158
// Address: 0x4a9158 - 0x4a9478
void sub_004A9158_0x4a9158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A9158_0x4a9158");
#endif

    switch (ctx->pc) {
        case 0x4a91c0u: goto label_4a91c0;
        case 0x4a9218u: goto label_4a9218;
        case 0x4a9228u: goto label_4a9228;
        case 0x4a9238u: goto label_4a9238;
        case 0x4a9248u: goto label_4a9248;
        case 0x4a9260u: goto label_4a9260;
        case 0x4a9298u: goto label_4a9298;
        case 0x4a9368u: goto label_4a9368;
        case 0x4a93a8u: goto label_4a93a8;
        case 0x4a93d8u: goto label_4a93d8;
        case 0x4a9408u: goto label_4a9408;
        case 0x4a9418u: goto label_4a9418;
        default: break;
    }

    ctx->pc = 0x4a9158u;

    // 0x4a9158: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x4a9158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
    // 0x4a915c: 0x7fb001b0  sq          $s0, 0x1B0($sp)
    ctx->pc = 0x4a915cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 16));
    // 0x4a9160: 0x7fb20190  sq          $s2, 0x190($sp)
    ctx->pc = 0x4a9160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 18));
    // 0x4a9164: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4a9164u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9168: 0x7fb101a0  sq          $s1, 0x1A0($sp)
    ctx->pc = 0x4a9168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 17));
    // 0x4a916c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4a916cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9170: 0x120000ba  beqz        $s0, . + 4 + (0xBA << 2)
    ctx->pc = 0x4A9170u;
    {
        const bool branch_taken_0x4a9170 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9170u;
        // 0x4a9174: 0x7fb30180  sq          $s3, 0x180($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9170) {
            ctx->pc = 0x4A945Cu;
            goto label_4a945c;
        }
    }
    ctx->pc = 0x4A9178u;
    // 0x4a9178: 0x24e20004  addiu       $v0, $a3, 0x4
    ctx->pc = 0x4a9178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x4a917c: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x4a917cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4a9180: 0x544000b7  bnel        $v0, $zero, . + 4 + (0xB7 << 2)
    ctx->pc = 0x4A9180u;
    {
        const bool branch_taken_0x4a9180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a9180) {
            ctx->pc = 0x4A9184u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A9180u;
            // 0x4a9184: 0x7bb001b0  lq          $s0, 0x1B0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 432)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A9460u;
            goto label_4a9460;
        }
    }
    ctx->pc = 0x4A9188u;
    // 0x4a9188: 0x109102b  sltu        $v0, $t0, $t1
    ctx->pc = 0x4a9188u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x4a918c: 0x104000b3  beqz        $v0, . + 4 + (0xB3 << 2)
    ctx->pc = 0x4A918Cu;
    {
        const bool branch_taken_0x4a918c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A918Cu;
        // 0x4a9190: 0x2e420006  sltiu       $v0, $s2, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a918c) {
            ctx->pc = 0x4A945Cu;
            goto label_4a945c;
        }
    }
    ctx->pc = 0x4A9194u;
    // 0x4a9194: 0x14400061  bnez        $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x4A9194u;
    {
        const bool branch_taken_0x4a9194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A9198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9194u;
        // 0x4a9198: 0x2e530002  sltiu       $s3, $s2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9194) {
            ctx->pc = 0x4A931Cu;
            goto label_4a931c;
        }
    }
    ctx->pc = 0x4A919Cu;
    // 0x4a919c: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x4a919cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x4a91a0: 0x462018  mult        $a0, $v0, $a2
    ctx->pc = 0x4a91a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x4a91a4: 0x1120000f  beqz        $t1, . + 4 + (0xF << 2)
    ctx->pc = 0x4A91A4u;
    {
        const bool branch_taken_0x4a91a4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A91A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A91A4u;
        // 0x4a91a8: 0x901821  addu        $v1, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a91a4) {
            ctx->pc = 0x4A91E4u;
            goto label_4a91e4;
        }
    }
    ctx->pc = 0x4A91ACu;
    // 0x4a91ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4a91acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a91b0: 0x94842  srl         $t1, $t1, 1
    ctx->pc = 0x4a91b0u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
    // 0x4a91b4: 0x11200009  beqz        $t1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4A91B4u;
    {
        const bool branch_taken_0x4a91b4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A91B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A91B4u;
        // 0x4a91b8: 0x27aa000c  addiu       $t2, $sp, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a91b4) {
            ctx->pc = 0x4A91DCu;
            goto label_4a91dc;
        }
    }
    ctx->pc = 0x4A91BCu;
    // 0x4a91bc: 0x0  nop
    ctx->pc = 0x4a91bcu;
    // NOP
label_4a91c0:
    // 0x4a91c0: 0x94842  srl         $t1, $t1, 1
    ctx->pc = 0x4a91c0u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
    // 0x4a91c4: 0x0  nop
    ctx->pc = 0x4a91c4u;
    // NOP
    // 0x4a91c8: 0x0  nop
    ctx->pc = 0x4a91c8u;
    // NOP
    // 0x4a91cc: 0x0  nop
    ctx->pc = 0x4a91ccu;
    // NOP
    // 0x4a91d0: 0x0  nop
    ctx->pc = 0x4a91d0u;
    // NOP
    // 0x4a91d4: 0x1520fffa  bnez        $t1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4A91D4u;
    {
        const bool branch_taken_0x4a91d4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A91D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A91D4u;
        // 0x4a91d8: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a91d4) {
            ctx->pc = 0x4A91C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a91c0;
        }
    }
    ctx->pc = 0x4A91DCu;
label_4a91dc:
    // 0x4a91dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4A91DCu;
    {
        const bool branch_taken_0x4a91dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A91E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A91DCu;
        // 0x4a91e0: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a91dc) {
            ctx->pc = 0x4A91F0u;
            goto label_4a91f0;
        }
    }
    ctx->pc = 0x4A91E4u;
label_4a91e4:
    // 0x4a91e4: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4a91e4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x4a91e8: 0x27aa000c  addiu       $t2, $sp, 0xC
    ctx->pc = 0x4a91e8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x4a91ec: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4a91ecu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
label_4a91f0:
    // 0x4a91f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4a91f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a91f4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x4a91f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a91f8: 0x1025804  sllv        $t3, $v0, $t0
    ctx->pc = 0x4a91f8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
    // 0x4a91fc: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x4a91fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x4a9200: 0xafab0008  sw          $t3, 0x8($sp)
    ctx->pc = 0x4a9200u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 11));
    // 0x4a9204: 0x140702d  daddu       $t6, $t2, $zero
    ctx->pc = 0x4a9204u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9208: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x4a9208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x4a920c: 0x2cc50004  sltiu       $a1, $a2, 0x4
    ctx->pc = 0x4a920cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x4a9210: 0x68880  sll         $s1, $a2, 2
    ctx->pc = 0x4a9210u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4a9214: 0x25cefff4  addiu       $t6, $t6, -0xC
    ctx->pc = 0x4a9214u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967284));
label_4a9218:
    // 0x4a9218: 0x8dc80000  lw          $t0, 0x0($t6)
    ctx->pc = 0x4a9218u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4a921c: 0x8dc40004  lw          $a0, 0x4($t6)
    ctx->pc = 0x4a921cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4)));
    // 0x4a9220: 0x8dcb0008  lw          $t3, 0x8($t6)
    ctx->pc = 0x4a9220u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 8)));
    // 0x4a9224: 0x100c82d  daddu       $t9, $t0, $zero
    ctx->pc = 0x4a9224u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4a9228:
    // 0x4a9228: 0x80c02d  daddu       $t8, $a0, $zero
    ctx->pc = 0x4a9228u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a922c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4A922Cu;
    {
        const bool branch_taken_0x4a922c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A922Cu;
        // 0x4a9230: 0xb7842  srl         $t7, $t3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a922c) {
            ctx->pc = 0x4A9244u;
            goto label_4a9244;
        }
    }
    ctx->pc = 0x4A9234u;
    // 0x4a9234: 0x0  nop
    ctx->pc = 0x4a9234u;
    // NOP
label_4a9238:
    // 0x4a9238: 0x88102b  sltu        $v0, $a0, $t0
    ctx->pc = 0x4a9238u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x4a923c: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x4A923Cu;
    {
        const bool branch_taken_0x4a923c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a923c) {
            ctx->pc = 0x4A92D0u;
            goto label_4a92d0;
        }
    }
    ctx->pc = 0x4A9244u;
label_4a9244:
    // 0x4a9244: 0x1071821  addu        $v1, $t0, $a3
    ctx->pc = 0x4a9244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_4a9248:
    // 0x4a9248: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4a9248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4a924c: 0x4b1024  and         $v0, $v0, $t3
    ctx->pc = 0x4a924cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 11));
    // 0x4a9250: 0x5040fff9  beql        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x4A9250u;
    {
        const bool branch_taken_0x4a9250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a9250) {
            ctx->pc = 0x4A9254u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A9250u;
            // 0x4a9254: 0x1064021  addu        $t0, $t0, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A9238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a9238;
        }
    }
    ctx->pc = 0x4A9258u;
    // 0x4a9258: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4A9258u;
    {
        const bool branch_taken_0x4a9258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A925Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9258u;
        // 0x4a925c: 0x871821  addu        $v1, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9258) {
            ctx->pc = 0x4A926Cu;
            goto label_4a926c;
        }
    }
    ctx->pc = 0x4A9260u;
label_4a9260:
    // 0x4a9260: 0x88102b  sltu        $v0, $a0, $t0
    ctx->pc = 0x4a9260u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x4a9264: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x4A9264u;
    {
        const bool branch_taken_0x4a9264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A9268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9264u;
        // 0x4a9268: 0x871821  addu        $v1, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9264) {
            ctx->pc = 0x4A92D0u;
            goto label_4a92d0;
        }
    }
    ctx->pc = 0x4A926Cu;
label_4a926c:
    // 0x4a926c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4a926cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4a9270: 0x4b1024  and         $v0, $v0, $t3
    ctx->pc = 0x4a9270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 11));
    // 0x4a9274: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4A9274u;
    {
        const bool branch_taken_0x4a9274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a9274) {
            ctx->pc = 0x4A9278u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A9274u;
            // 0x4a9278: 0x862023  subu        $a0, $a0, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A9260u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a9260;
        }
    }
    ctx->pc = 0x4A927Cu;
    // 0x4a927c: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x4a927cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9280: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x4a9280u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9284: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x4a9284u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9288: 0x1266021  addu        $t4, $t1, $a2
    ctx->pc = 0x4a9288u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x4a928c: 0x14a0000b  bnez        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x4A928Cu;
    {
        const bool branch_taken_0x4a928c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A9290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A928Cu;
        // 0x4a9290: 0x1066823  subu        $t5, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a928c) {
            ctx->pc = 0x4A92BCu;
            goto label_4a92bc;
        }
    }
    ctx->pc = 0x4A9294u;
    // 0x4a9294: 0x0  nop
    ctx->pc = 0x4a9294u;
    // NOP
label_4a9298:
    // 0x4a9298: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x4a9298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4a929c: 0x254afffc  addiu       $t2, $t2, -0x4
    ctx->pc = 0x4a929cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967292));
    // 0x4a92a0: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4a92a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4a92a4: 0x2d440004  sltiu       $a0, $t2, 0x4
    ctx->pc = 0x4a92a4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x4a92a8: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x4a92a8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x4a92ac: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x4a92acu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x4a92b0: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x4a92b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x4a92b4: 0x1080fff8  beqz        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x4A92B4u;
    {
        const bool branch_taken_0x4a92b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A92B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A92B4u;
        // 0x4a92b8: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a92b4) {
            ctx->pc = 0x4A9298u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a9298;
        }
    }
    ctx->pc = 0x4A92BCu;
label_4a92bc:
    // 0x4a92bc: 0x180402d  daddu       $t0, $t4, $zero
    ctx->pc = 0x4a92bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a92c0: 0x1a0202d  daddu       $a0, $t5, $zero
    ctx->pc = 0x4a92c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a92c4: 0x88102b  sltu        $v0, $a0, $t0
    ctx->pc = 0x4a92c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x4a92c8: 0x1040ffdf  beqz        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x4A92C8u;
    {
        const bool branch_taken_0x4a92c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A92CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A92C8u;
        // 0x4a92cc: 0x1071821  addu        $v1, $t0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a92c8) {
            ctx->pc = 0x4A9248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a9248;
        }
    }
    ctx->pc = 0x4A92D0u;
label_4a92d0:
    // 0x4a92d0: 0x11e00010  beqz        $t7, . + 4 + (0x10 << 2)
    ctx->pc = 0x4A92D0u;
    {
        const bool branch_taken_0x4a92d0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A92D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A92D0u;
        // 0x4a92d4: 0x1e0582d  daddu       $t3, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a92d0) {
            ctx->pc = 0x4A9314u;
            goto label_4a9314;
        }
    }
    ctx->pc = 0x4A92D8u;
    // 0x4a92d8: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x4a92d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x4a92dc: 0x2264821  addu        $t1, $s1, $a2
    ctx->pc = 0x4a92dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x4a92e0: 0x691021  addu        $v0, $v1, $t1
    ctx->pc = 0x4a92e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x4a92e4: 0x302102b  sltu        $v0, $t8, $v0
    ctx->pc = 0x4a92e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4a92e8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4A92E8u;
    {
        const bool branch_taken_0x4a92e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A92ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A92E8u;
        // 0x4a92ec: 0x1062023  subu        $a0, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a92e8) {
            ctx->pc = 0x4A9300u;
            goto label_4a9300;
        }
    }
    ctx->pc = 0x4A92F0u;
    // 0x4a92f0: 0xadc30000  sw          $v1, 0x0($t6)
    ctx->pc = 0x4a92f0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 3));
    // 0x4a92f4: 0xadd80004  sw          $t8, 0x4($t6)
    ctx->pc = 0x4a92f4u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4), GPR_U32(ctx, 24));
    // 0x4a92f8: 0xadcf0008  sw          $t7, 0x8($t6)
    ctx->pc = 0x4a92f8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8), GPR_U32(ctx, 15));
    // 0x4a92fc: 0x25ce000c  addiu       $t6, $t6, 0xC
    ctx->pc = 0x4a92fcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 12));
label_4a9300:
    // 0x4a9300: 0x320402d  daddu       $t0, $t9, $zero
    ctx->pc = 0x4a9300u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9304: 0x1091021  addu        $v0, $t0, $t1
    ctx->pc = 0x4a9304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x4a9308: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x4a9308u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4a930c: 0x1040ffc6  beqz        $v0, . + 4 + (-0x3A << 2)
    ctx->pc = 0x4A930Cu;
    {
        const bool branch_taken_0x4a930c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A930Cu;
        // 0x4a9310: 0x100c82d  daddu       $t9, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a930c) {
            ctx->pc = 0x4A9228u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a9228;
        }
    }
    ctx->pc = 0x4A9314u;
label_4a9314:
    // 0x4a9314: 0x55ddffc0  bnel        $t6, $sp, . + 4 + (-0x40 << 2)
    ctx->pc = 0x4A9314u;
    {
        const bool branch_taken_0x4a9314 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 29));
        if (branch_taken_0x4a9314) {
            ctx->pc = 0x4A9318u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A9314u;
            // 0x4a9318: 0x25cefff4  addiu       $t6, $t6, -0xC (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967284));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A9218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a9218;
        }
    }
    ctx->pc = 0x4A931Cu;
label_4a931c:
    // 0x4a931c: 0x56600050  bnel        $s3, $zero, . + 4 + (0x50 << 2)
    ctx->pc = 0x4A931Cu;
    {
        const bool branch_taken_0x4a931c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a931c) {
            ctx->pc = 0x4A9320u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A931Cu;
            // 0x4a9320: 0x7bb001b0  lq          $s0, 0x1B0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 432)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A9460u;
            goto label_4a9460;
        }
    }
    ctx->pc = 0x4A9324u;
    // 0x4a9324: 0x2643ffff  addiu       $v1, $s2, -0x1
    ctx->pc = 0x4a9324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x4a9328: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x4a9328u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4a932c: 0x2c620004  sltiu       $v0, $v1, 0x4
    ctx->pc = 0x4a932cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x4a9330: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x4a9330u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x4a9334: 0x62400b  movn        $t0, $v1, $v0
    ctx->pc = 0x4a9334u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 3));
    // 0x4a9338: 0x2072021  addu        $a0, $s0, $a3
    ctx->pc = 0x4a9338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x4a933c: 0x1061818  mult        $v1, $t0, $a2
    ctx->pc = 0x4a933cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4a9340: 0x100582d  daddu       $t3, $t0, $zero
    ctx->pc = 0x4a9340u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9344: 0x2568ffff  addiu       $t0, $t3, -0x1
    ctx->pc = 0x4a9344u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x4a9348: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x4a9348u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x4a934c: 0x66023  negu        $t4, $a2
    ctx->pc = 0x4a934cu;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x4a9350: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x4a9350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x4a9354: 0x1061818  mult        $v1, $t0, $a2
    ctx->pc = 0x4a9354u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4a9358: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x4a9358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x4a935c: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x4a935cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4a9360: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4a9360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4a9364: 0x0  nop
    ctx->pc = 0x4a9364u;
    // NOP
label_4a9368:
    // 0x4a9368: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4a9368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4a936c: 0x89102b  sltu        $v0, $a0, $t1
    ctx->pc = 0x4a936cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x4a9370: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A9370u;
    {
        const bool branch_taken_0x4a9370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a9370) {
            ctx->pc = 0x4A9374u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A9370u;
            // 0x4a9374: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A9384u;
            goto label_4a9384;
        }
    }
    ctx->pc = 0x4A9378u;
    // 0x4a9378: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x4a9378u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a937c: 0x100582d  daddu       $t3, $t0, $zero
    ctx->pc = 0x4a937cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9380: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x4a9380u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_4a9384:
    // 0x4a9384: 0x150afff8  bne         $t0, $t2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x4A9384u;
    {
        const bool branch_taken_0x4a9384 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 10));
        ctx->pc = 0x4A9388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9384u;
        // 0x4a9388: 0x6c1821  addu        $v1, $v1, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9384) {
            ctx->pc = 0x4A9368u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a9368;
        }
    }
    ctx->pc = 0x4A938Cu;
    // 0x4a938c: 0x1160000f  beqz        $t3, . + 4 + (0xF << 2)
    ctx->pc = 0x4A938Cu;
    {
        const bool branch_taken_0x4a938c = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A938Cu;
        // 0x4a9390: 0x1661818  mult        $v1, $t3, $a2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a938c) {
            ctx->pc = 0x4A93CCu;
            goto label_4a93cc;
        }
    }
    ctx->pc = 0x4A9394u;
    // 0x4a9394: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x4a9394u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9398: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x4a9398u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a939c: 0x2cc20004  sltiu       $v0, $a2, 0x4
    ctx->pc = 0x4a939cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x4a93a0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4A93A0u;
    {
        const bool branch_taken_0x4a93a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A93A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A93A0u;
        // 0x4a93a4: 0x704021  addu        $t0, $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a93a0) {
            ctx->pc = 0x4A93CCu;
            goto label_4a93cc;
        }
    }
    ctx->pc = 0x4A93A8u;
label_4a93a8:
    // 0x4a93a8: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x4a93a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4a93ac: 0x254afffc  addiu       $t2, $t2, -0x4
    ctx->pc = 0x4a93acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967292));
    // 0x4a93b0: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4a93b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4a93b4: 0x2d440004  sltiu       $a0, $t2, 0x4
    ctx->pc = 0x4a93b4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x4a93b8: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x4a93b8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x4a93bc: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x4a93bcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x4a93c0: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x4a93c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x4a93c4: 0x1080fff8  beqz        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x4A93C4u;
    {
        const bool branch_taken_0x4a93c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A93C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A93C4u;
        // 0x4a93c8: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a93c4) {
            ctx->pc = 0x4A93A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a93a8;
        }
    }
    ctx->pc = 0x4A93CCu;
label_4a93cc:
    // 0x4a93cc: 0x2645ffff  addiu       $a1, $s2, -0x1
    ctx->pc = 0x4a93ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x4a93d0: 0x10a00022  beqz        $a1, . + 4 + (0x22 << 2)
    ctx->pc = 0x4A93D0u;
    {
        const bool branch_taken_0x4a93d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A93D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A93D0u;
        // 0x4a93d4: 0x2062021  addu        $a0, $s0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a93d0) {
            ctx->pc = 0x4A945Cu;
            goto label_4a945c;
        }
    }
    ctx->pc = 0x4A93D8u;
label_4a93d8:
    // 0x4a93d8: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x4a93d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x4a93dc: 0x864023  subu        $t0, $a0, $a2
    ctx->pc = 0x4a93dcu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x4a93e0: 0x8c4c0000  lw          $t4, 0x0($v0)
    ctx->pc = 0x4a93e0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4a93e4: 0x1071821  addu        $v1, $t0, $a3
    ctx->pc = 0x4a93e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x4a93e8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4a93e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4a93ec: 0x867021  addu        $t6, $a0, $a2
    ctx->pc = 0x4a93ecu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x4a93f0: 0x182102b  sltu        $v0, $t4, $v0
    ctx->pc = 0x4a93f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4a93f4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x4A93F4u;
    {
        const bool branch_taken_0x4a93f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A93F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A93F4u;
        // 0x4a93f8: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a93f4) {
            ctx->pc = 0x4A9454u;
            goto label_4a9454;
        }
    }
    ctx->pc = 0x4A93FCu;
    // 0x4a93fc: 0x2ccd0004  sltiu       $t5, $a2, 0x4
    ctx->pc = 0x4a93fcu;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x4a9400: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x4a9400u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9404: 0x0  nop
    ctx->pc = 0x4a9404u;
    // NOP
label_4a9408:
    // 0x4a9408: 0x1064821  addu        $t1, $t0, $a2
    ctx->pc = 0x4a9408u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x4a940c: 0x15a0000b  bnez        $t5, . + 4 + (0xB << 2)
    ctx->pc = 0x4A940Cu;
    {
        const bool branch_taken_0x4a940c = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A9410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A940Cu;
        // 0x4a9410: 0x10a5823  subu        $t3, $t0, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a940c) {
            ctx->pc = 0x4A943Cu;
            goto label_4a943c;
        }
    }
    ctx->pc = 0x4A9414u;
    // 0x4a9414: 0x0  nop
    ctx->pc = 0x4a9414u;
    // NOP
label_4a9418:
    // 0x4a9418: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4a9418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4a941c: 0x254afffc  addiu       $t2, $t2, -0x4
    ctx->pc = 0x4a941cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967292));
    // 0x4a9420: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4a9420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4a9424: 0x2d440004  sltiu       $a0, $t2, 0x4
    ctx->pc = 0x4a9424u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x4a9428: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x4a9428u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x4a942c: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4a942cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4a9430: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x4a9430u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x4a9434: 0x1080fff8  beqz        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x4A9434u;
    {
        const bool branch_taken_0x4a9434 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9434u;
        // 0x4a9438: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9434) {
            ctx->pc = 0x4A9418u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a9418;
        }
    }
    ctx->pc = 0x4A943Cu;
label_4a943c:
    // 0x4a943c: 0x160402d  daddu       $t0, $t3, $zero
    ctx->pc = 0x4a943cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9440: 0x1071821  addu        $v1, $t0, $a3
    ctx->pc = 0x4a9440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x4a9444: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4a9444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4a9448: 0x182102b  sltu        $v0, $t4, $v0
    ctx->pc = 0x4a9448u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4a944c: 0x5440ffee  bnel        $v0, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x4A944Cu;
    {
        const bool branch_taken_0x4a944c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a944c) {
            ctx->pc = 0x4A9450u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A944Cu;
            // 0x4a9450: 0xc0502d  daddu       $t2, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A9408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a9408;
        }
    }
    ctx->pc = 0x4A9454u;
label_4a9454:
    // 0x4a9454: 0x14a0ffe0  bnez        $a1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x4A9454u;
    {
        const bool branch_taken_0x4a9454 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A9458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9454u;
        // 0x4a9458: 0x1c0202d  daddu       $a0, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9454) {
            ctx->pc = 0x4A93D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a93d8;
        }
    }
    ctx->pc = 0x4A945Cu;
label_4a945c:
    // 0x4a945c: 0x7bb001b0  lq          $s0, 0x1B0($sp)
    ctx->pc = 0x4a945cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_4a9460:
    // 0x4a9460: 0x7bb101a0  lq          $s1, 0x1A0($sp)
    ctx->pc = 0x4a9460u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x4a9464: 0x7bb20190  lq          $s2, 0x190($sp)
    ctx->pc = 0x4a9464u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x4a9468: 0x7bb30180  lq          $s3, 0x180($sp)
    ctx->pc = 0x4a9468u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x4a946c: 0x3e00008  jr          $ra
    ctx->pc = 0x4A946Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A9470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A946Cu;
        // 0x4a9470: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A946Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A9474u;
    // 0x4a9474: 0x0  nop
    ctx->pc = 0x4a9474u;
    // NOP
    ctx->pc = 0x4a9478u;
}
