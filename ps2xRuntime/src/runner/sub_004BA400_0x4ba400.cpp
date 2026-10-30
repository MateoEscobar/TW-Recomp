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

// Function: sub_004BA400
// Address: 0x4ba400 - 0x4ba7f0
void sub_004BA400_0x4ba400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BA400_0x4ba400");
#endif

    switch (ctx->pc) {
        case 0x4ba488u: goto label_4ba488;
        case 0x4ba494u: goto label_4ba494;
        case 0x4ba4f0u: goto label_4ba4f0;
        case 0x4ba520u: goto label_4ba520;
        case 0x4ba578u: goto label_4ba578;
        case 0x4ba5a8u: goto label_4ba5a8;
        case 0x4ba680u: goto label_4ba680;
        case 0x4ba710u: goto label_4ba710;
        default: break;
    }

    ctx->pc = 0x4ba400u;

    // 0x4ba400: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4ba400u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ba404: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4ba404u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4ba408: 0x2403c  dsll32      $t0, $v0, 0
    ctx->pc = 0x4ba408u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4ba40c: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x4ba40cu;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x4ba410: 0x2383f  dsra32      $a3, $v0, 0
    ctx->pc = 0x4ba410u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4ba414: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4ba414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4ba418: 0x100602d  daddu       $t4, $t0, $zero
    ctx->pc = 0x4ba418u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ba41c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x4ba41cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ba420: 0x2503c  dsll32      $t2, $v0, 0
    ctx->pc = 0x4ba420u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4ba424: 0xa503f  dsra32      $t2, $t2, 0
    ctx->pc = 0x4ba424u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 0));
    // 0x4ba428: 0x2483f  dsra32      $t1, $v0, 0
    ctx->pc = 0x4ba428u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4ba42c: 0x140682d  daddu       $t5, $t2, $zero
    ctx->pc = 0x4ba42cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ba430: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x4ba430u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x4ba434: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x4ba434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x4ba438: 0xe35824  and         $t3, $a3, $v1
    ctx->pc = 0x4ba438u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x4ba43c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4ba43cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4ba440: 0x1224824  and         $t1, $t1, $v0
    ctx->pc = 0x4ba440u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x4ba444: 0x12a1825  or          $v1, $t1, $t2
    ctx->pc = 0x4ba444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x4ba448: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x4BA448u;
    {
        const bool branch_taken_0x4ba448 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BA44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BA448u;
        // 0x4ba44c: 0xeb3826  xor         $a3, $a3, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba448) {
            ctx->pc = 0x4BA480u;
            goto label_4ba480;
        }
    }
    ctx->pc = 0x4BA450u;
    // 0x4ba450: 0x3c027fef  lui         $v0, 0x7FEF
    ctx->pc = 0x4ba450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32751 << 16));
    // 0x4ba454: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4ba454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4ba458: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x4ba458u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x4ba45c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4BA45Cu;
    {
        const bool branch_taken_0x4ba45c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BA460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BA45Cu;
        // 0x4ba460: 0xa1023  negu        $v0, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba45c) {
            ctx->pc = 0x4BA480u;
            goto label_4ba480;
        }
    }
    ctx->pc = 0x4BA464u;
    // 0x4ba464: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x4ba464u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x4ba468: 0x1421025  or          $v0, $t2, $v0
    ctx->pc = 0x4ba468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x4ba46c: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x4ba46cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x4ba470: 0x1221025  or          $v0, $t1, $v0
    ctx->pc = 0x4ba470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x4ba474: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x4ba474u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4ba478: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x4BA478u;
    {
        const bool branch_taken_0x4ba478 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BA47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BA478u;
        // 0x4ba47c: 0x127102a  slt         $v0, $t1, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba478) {
            ctx->pc = 0x4BA49Cu;
            goto label_4ba49c;
        }
    }
    ctx->pc = 0x4BA480u;
label_4ba480:
    // 0x4ba480: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BA480u;
    SET_GPR_U32(ctx, 31, 0x4BA488u);
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BA480u, 0x4BA488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BA488u;
label_4ba488:
    // 0x4ba488: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4ba488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ba48c: 0xc10b000  jal         func_42C000
    ctx->pc = 0x4BA48Cu;
    SET_GPR_U32(ctx, 31, 0x4BA494u);
    ctx->pc = 0x4BA490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BA48Cu;
    // 0x4ba490: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C000u, 0x4BA48Cu, 0x4BA494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BA494u;
label_4ba494:
    // 0x4ba494: 0x100000d4  b           . + 4 + (0xD4 << 2)
    ctx->pc = 0x4BA494u;
    {
        const bool branch_taken_0x4ba494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BA498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BA494u;
        // 0x4ba498: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba494) {
            ctx->pc = 0x4BA7E8u;
            goto label_4ba7e8;
        }
    }
    ctx->pc = 0x4BA49Cu;
label_4ba49c:
    // 0x4ba49c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4BA49Cu;
    {
        const bool branch_taken_0x4ba49c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BA4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BA49Cu;
        // 0x4ba4a0: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba49c) {
            ctx->pc = 0x4BA4C8u;
            goto label_4ba4c8;
        }
    }
    ctx->pc = 0x4BA4A4u;
    // 0x4ba4a4: 0xe9102a  slt         $v0, $a3, $t1
    ctx->pc = 0x4ba4a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x4ba4a8: 0x144000ce  bnez        $v0, . + 4 + (0xCE << 2)
    ctx->pc = 0x4BA4A8u;
    {
        const bool branch_taken_0x4ba4a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BA4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BA4A8u;
        // 0x4ba4ac: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba4a8) {
            ctx->pc = 0x4BA7E4u;
            goto label_4ba7e4;
        }
    }
    ctx->pc = 0x4BA4B0u;
    // 0x4ba4b0: 0x10a102b  sltu        $v0, $t0, $t2
    ctx->pc = 0x4ba4b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x4ba4b4: 0x544000cb  bnel        $v0, $zero, . + 4 + (0xCB << 2)
    ctx->pc = 0x4BA4B4u;
    {
        const bool branch_taken_0x4ba4b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ba4b4) {
            ctx->pc = 0x4BA4B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BA4B4u;
            // 0x4ba4b8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BA7E4u;
            goto label_4ba7e4;
        }
    }
    ctx->pc = 0x4BA4BCu;
    // 0x4ba4bc: 0x110a00bb  beq         $t0, $t2, . + 4 + (0xBB << 2)
    ctx->pc = 0x4BA4BCu;
    {
        const bool branch_taken_0x4ba4bc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 10));
        ctx->pc = 0x4BA4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BA4BCu;
        // 0x4ba4c0: 0xb1fc2  srl         $v1, $t3, 31 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 11), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba4bc) {
            ctx->pc = 0x4BA7ACu;
            goto label_4ba7ac;
        }
    }
    ctx->pc = 0x4BA4C4u;
    // 0x4ba4c4: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x4ba4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
label_4ba4c8:
    // 0x4ba4c8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4ba4c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4ba4cc: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x4ba4ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x4ba4d0: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x4BA4D0u;
    {
        const bool branch_taken_0x4ba4d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ba4d0) {
            ctx->pc = 0x4BA4D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BA4D0u;
            // 0x4ba4d4: 0x71503  sra         $v0, $a3, 20 (Delay Slot)
            SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BA544u;
            goto label_4ba544;
        }
    }
    ctx->pc = 0x4BA4D8u;
    // 0x4ba4d8: 0x14e0000e  bnez        $a3, . + 4 + (0xE << 2)
    ctx->pc = 0x4BA4D8u;
    {
        const bool branch_taken_0x4ba4d8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BA4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BA4D8u;
        // 0x4ba4dc: 0x712c0  sll         $v0, $a3, 11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba4d8) {
            ctx->pc = 0x4BA514u;
            goto label_4ba514;
        }
    }
    ctx->pc = 0x4BA4E0u;
    // 0x4ba4e0: 0x2405fbed  addiu       $a1, $zero, -0x413
    ctx->pc = 0x4ba4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966253));
    // 0x4ba4e4: 0x19800018  blez        $t4, . + 4 + (0x18 << 2)
    ctx->pc = 0x4BA4E4u;
    {
        const bool branch_taken_0x4ba4e4 = (GPR_S32(ctx, 12) <= 0);
        ctx->pc = 0x4BA4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BA4E4u;
        // 0x4ba4e8: 0x180102d  daddu       $v0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba4e4) {
            ctx->pc = 0x4BA548u;
            goto label_4ba548;
        }
    }
    ctx->pc = 0x4BA4ECu;
    // 0x4ba4ec: 0x0  nop
    ctx->pc = 0x4ba4ecu;
    // NOP
label_4ba4f0:
    // 0x4ba4f0: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x4ba4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x4ba4f4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4ba4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4ba4f8: 0x0  nop
    ctx->pc = 0x4ba4f8u;
    // NOP
    // 0x4ba4fc: 0x0  nop
    ctx->pc = 0x4ba4fcu;
    // NOP
    // 0x4ba500: 0x0  nop
    ctx->pc = 0x4ba500u;
    // NOP
    // 0x4ba504: 0x1c40fffa  bgtz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4BA504u;
    {
        const bool branch_taken_0x4ba504 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x4ba504) {
            ctx->pc = 0x4BA4F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ba4f0;
        }
    }
    ctx->pc = 0x4BA50Cu;
    // 0x4ba50c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x4BA50Cu;
    {
        const bool branch_taken_0x4ba50c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BA510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BA50Cu;
        // 0x4ba510: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba50c) {
            ctx->pc = 0x4BA54Cu;
            goto label_4ba54c;
        }
    }
    ctx->pc = 0x4BA514u;
label_4ba514:
    // 0x4ba514: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4BA514u;
    {
        const bool branch_taken_0x4ba514 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x4BA518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BA514u;
        // 0x4ba518: 0x2405fc02  addiu       $a1, $zero, -0x3FE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966274));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba514) {
            ctx->pc = 0x4BA548u;
            goto label_4ba548;
        }
    }
    ctx->pc = 0x4BA51Cu;
    // 0x4ba51c: 0x0  nop
    ctx->pc = 0x4ba51cu;
    // NOP
label_4ba520:
    // 0x4ba520: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x4ba520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x4ba524: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4ba524u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4ba528: 0x0  nop
    ctx->pc = 0x4ba528u;
    // NOP
    // 0x4ba52c: 0x0  nop
    ctx->pc = 0x4ba52cu;
    // NOP
    // 0x4ba530: 0x0  nop
    ctx->pc = 0x4ba530u;
    // NOP
    // 0x4ba534: 0x1c40fffa  bgtz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4BA534u;
    {
        const bool branch_taken_0x4ba534 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x4ba534) {
            ctx->pc = 0x4BA520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ba520;
        }
    }
    ctx->pc = 0x4BA53Cu;
    // 0x4ba53c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4BA53Cu;
    {
        const bool branch_taken_0x4ba53c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BA540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BA53Cu;
        // 0x4ba540: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba53c) {
            ctx->pc = 0x4BA54Cu;
            goto label_4ba54c;
        }
    }
    ctx->pc = 0x4BA544u;
label_4ba544:
    // 0x4ba544: 0x2445fc01  addiu       $a1, $v0, -0x3FF
    ctx->pc = 0x4ba544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966273));
label_4ba548:
    // 0x4ba548: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x4ba548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
label_4ba54c:
    // 0x4ba54c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4ba54cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4ba550: 0x49102a  slt         $v0, $v0, $t1
    ctx->pc = 0x4ba550u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x4ba554: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x4BA554u;
    {
        const bool branch_taken_0x4ba554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ba554) {
            ctx->pc = 0x4BA558u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BA554u;
            // 0x4ba558: 0x91503  sra         $v0, $t1, 20 (Delay Slot)
            SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 9), 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BA5CCu;
            goto label_4ba5cc;
        }
    }
    ctx->pc = 0x4BA55Cu;
    // 0x4ba55c: 0x1520000f  bnez        $t1, . + 4 + (0xF << 2)
    ctx->pc = 0x4BA55Cu;
    {
        const bool branch_taken_0x4ba55c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BA560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BA55Cu;
        // 0x4ba560: 0x912c0  sll         $v0, $t1, 11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba55c) {
            ctx->pc = 0x4BA59Cu;
            goto label_4ba59c;
        }
    }
    ctx->pc = 0x4BA564u;
    // 0x4ba564: 0x2404fbed  addiu       $a0, $zero, -0x413
    ctx->pc = 0x4ba564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966253));
    // 0x4ba568: 0x19a0001b  blez        $t5, . + 4 + (0x1B << 2)
    ctx->pc = 0x4BA568u;
    {
        const bool branch_taken_0x4ba568 = (GPR_S32(ctx, 13) <= 0);
        ctx->pc = 0x4BA56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BA568u;
        // 0x4ba56c: 0x1a0102d  daddu       $v0, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba568) {
            ctx->pc = 0x4BA5D8u;
            goto label_4ba5d8;
        }
    }
    ctx->pc = 0x4BA570u;
    // 0x4ba570: 0x28a3fc02  slti        $v1, $a1, -0x3FE
    ctx->pc = 0x4ba570u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294966274) ? 1 : 0);
    // 0x4ba574: 0x0  nop
    ctx->pc = 0x4ba574u;
    // NOP
label_4ba578:
    // 0x4ba578: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x4ba578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x4ba57c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4ba57cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4ba580: 0x0  nop
    ctx->pc = 0x4ba580u;
    // NOP
    // 0x4ba584: 0x0  nop
    ctx->pc = 0x4ba584u;
    // NOP
    // 0x4ba588: 0x0  nop
    ctx->pc = 0x4ba588u;
    // NOP
    // 0x4ba58c: 0x1c40fffa  bgtz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4BA58Cu;
    {
        const bool branch_taken_0x4ba58c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x4ba58c) {
            ctx->pc = 0x4BA578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ba578;
        }
    }
    ctx->pc = 0x4BA594u;
    // 0x4ba594: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x4BA594u;
    {
        const bool branch_taken_0x4ba594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ba594) {
            ctx->pc = 0x4BA5DCu;
            goto label_4ba5dc;
        }
    }
    ctx->pc = 0x4BA59Cu;
label_4ba59c:
    // 0x4ba59c: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x4BA59Cu;
    {
        const bool branch_taken_0x4ba59c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x4BA5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BA59Cu;
        // 0x4ba5a0: 0x2404fc02  addiu       $a0, $zero, -0x3FE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966274));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba59c) {
            ctx->pc = 0x4BA5D8u;
            goto label_4ba5d8;
        }
    }
    ctx->pc = 0x4BA5A4u;
    // 0x4ba5a4: 0x28a3fc02  slti        $v1, $a1, -0x3FE
    ctx->pc = 0x4ba5a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294966274) ? 1 : 0);
label_4ba5a8:
    // 0x4ba5a8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x4ba5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x4ba5ac: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4ba5acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4ba5b0: 0x0  nop
    ctx->pc = 0x4ba5b0u;
    // NOP
    // 0x4ba5b4: 0x0  nop
    ctx->pc = 0x4ba5b4u;
    // NOP
    // 0x4ba5b8: 0x0  nop
    ctx->pc = 0x4ba5b8u;
    // NOP
    // 0x4ba5bc: 0x1c40fffa  bgtz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4BA5BCu;
    {
        const bool branch_taken_0x4ba5bc = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x4ba5bc) {
            ctx->pc = 0x4BA5A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ba5a8;
        }
    }
    ctx->pc = 0x4BA5C4u;
    // 0x4ba5c4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4BA5C4u;
    {
        const bool branch_taken_0x4ba5c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ba5c4) {
            ctx->pc = 0x4BA5DCu;
            goto label_4ba5dc;
        }
    }
    ctx->pc = 0x4BA5CCu;
label_4ba5cc:
    // 0x4ba5cc: 0x28a3fc02  slti        $v1, $a1, -0x3FE
    ctx->pc = 0x4ba5ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294966274) ? 1 : 0);
    // 0x4ba5d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4BA5D0u;
    {
        const bool branch_taken_0x4ba5d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BA5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BA5D0u;
        // 0x4ba5d4: 0x2444fc01  addiu       $a0, $v0, -0x3FF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966273));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba5d0) {
            ctx->pc = 0x4BA5DCu;
            goto label_4ba5dc;
        }
    }
    ctx->pc = 0x4BA5D8u;
label_4ba5d8:
    // 0x4ba5d8: 0x28a3fc02  slti        $v1, $a1, -0x3FE
    ctx->pc = 0x4ba5d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294966274) ? 1 : 0);
label_4ba5dc:
    // 0x4ba5dc: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x4BA5DCu;
    {
        const bool branch_taken_0x4ba5dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BA5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BA5DCu;
        // 0x4ba5e0: 0x2402fc02  addiu       $v0, $zero, -0x3FE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966274));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba5dc) {
            ctx->pc = 0x4BA5FCu;
            goto label_4ba5fc;
        }
    }
    ctx->pc = 0x4BA5E4u;
    // 0x4ba5e4: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x4ba5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x4ba5e8: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x4ba5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x4ba5ec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4ba5ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4ba5f0: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x4ba5f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4ba5f4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4BA5F4u;
    {
        const bool branch_taken_0x4ba5f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BA5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BA5F4u;
        // 0x4ba5f8: 0x433825  or          $a3, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba5f4) {
            ctx->pc = 0x4BA628u;
            goto label_4ba628;
        }
    }
    ctx->pc = 0x4BA5FCu;
label_4ba5fc:
    // 0x4ba5fc: 0x453023  subu        $a2, $v0, $a1
    ctx->pc = 0x4ba5fcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4ba600: 0x28c30020  slti        $v1, $a2, 0x20
    ctx->pc = 0x4ba600u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x4ba604: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4BA604u;
    {
        const bool branch_taken_0x4ba604 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BA608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BA604u;
        // 0x4ba608: 0x61023  negu        $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba604) {
            ctx->pc = 0x4BA620u;
            goto label_4ba620;
        }
    }
    ctx->pc = 0x4BA60Cu;
    // 0x4ba60c: 0xc71804  sllv        $v1, $a3, $a2
    ctx->pc = 0x4ba60cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 6) & 0x1F));
    // 0x4ba610: 0x4c1006  srlv        $v0, $t4, $v0
    ctx->pc = 0x4ba610u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 2) & 0x1F));
    // 0x4ba614: 0xcc4004  sllv        $t0, $t4, $a2
    ctx->pc = 0x4ba614u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 6) & 0x1F));
    // 0x4ba618: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4BA618u;
    {
        const bool branch_taken_0x4ba618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BA61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BA618u;
        // 0x4ba61c: 0x623825  or          $a3, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba618) {
            ctx->pc = 0x4BA628u;
            goto label_4ba628;
        }
    }
    ctx->pc = 0x4BA620u;
label_4ba620:
    // 0x4ba620: 0xcc3804  sllv        $a3, $t4, $a2
    ctx->pc = 0x4ba620u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 6) & 0x1F));
    // 0x4ba624: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4ba624u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ba628:
    // 0x4ba628: 0x288cfc02  slti        $t4, $a0, -0x3FE
    ctx->pc = 0x4ba628u;
    SET_GPR_U64(ctx, 12, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294966274) ? 1 : 0);
    // 0x4ba62c: 0x15800007  bnez        $t4, . + 4 + (0x7 << 2)
    ctx->pc = 0x4BA62Cu;
    {
        const bool branch_taken_0x4ba62c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BA630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BA62Cu;
        // 0x4ba630: 0x2402fc02  addiu       $v0, $zero, -0x3FE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966274));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba62c) {
            ctx->pc = 0x4BA64Cu;
            goto label_4ba64c;
        }
    }
    ctx->pc = 0x4BA634u;
    // 0x4ba634: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x4ba634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x4ba638: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x4ba638u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x4ba63c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4ba63cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4ba640: 0x1221024  and         $v0, $t1, $v0
    ctx->pc = 0x4ba640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x4ba644: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4BA644u;
    {
        const bool branch_taken_0x4ba644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BA648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BA644u;
        // 0x4ba648: 0x434825  or          $t1, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba644) {
            ctx->pc = 0x4BA678u;
            goto label_4ba678;
        }
    }
    ctx->pc = 0x4BA64Cu;
label_4ba64c:
    // 0x4ba64c: 0x443023  subu        $a2, $v0, $a0
    ctx->pc = 0x4ba64cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4ba650: 0x28c30020  slti        $v1, $a2, 0x20
    ctx->pc = 0x4ba650u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x4ba654: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4BA654u;
    {
        const bool branch_taken_0x4ba654 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BA658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BA654u;
        // 0x4ba658: 0x61023  negu        $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba654) {
            ctx->pc = 0x4BA670u;
            goto label_4ba670;
        }
    }
    ctx->pc = 0x4BA65Cu;
    // 0x4ba65c: 0xc91804  sllv        $v1, $t1, $a2
    ctx->pc = 0x4ba65cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
    // 0x4ba660: 0x4d1006  srlv        $v0, $t5, $v0
    ctx->pc = 0x4ba660u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 13), GPR_U32(ctx, 2) & 0x1F));
    // 0x4ba664: 0xcd5004  sllv        $t2, $t5, $a2
    ctx->pc = 0x4ba664u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 13), GPR_U32(ctx, 6) & 0x1F));
    // 0x4ba668: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4BA668u;
    {
        const bool branch_taken_0x4ba668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BA66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BA668u;
        // 0x4ba66c: 0x624825  or          $t1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba668) {
            ctx->pc = 0x4BA678u;
            goto label_4ba678;
        }
    }
    ctx->pc = 0x4BA670u;
label_4ba670:
    // 0x4ba670: 0xcd4804  sllv        $t1, $t5, $a2
    ctx->pc = 0x4ba670u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 13), GPR_U32(ctx, 6) & 0x1F));
    // 0x4ba674: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x4ba674u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ba678:
    // 0x4ba678: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x4BA678u;
    {
        const bool branch_taken_0x4ba678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BA67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BA678u;
        // 0x4ba67c: 0xa43023  subu        $a2, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba678) {
            ctx->pc = 0x4BA6C0u;
            goto label_4ba6c0;
        }
    }
    ctx->pc = 0x4BA680u;
label_4ba680:
    // 0x4ba680: 0xe91823  subu        $v1, $a3, $t1
    ctx->pc = 0x4ba680u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x4ba684: 0x10a102b  sltu        $v0, $t0, $t2
    ctx->pc = 0x4ba684u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x4ba688: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4ba688u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4ba68c: 0x4610006  bgez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4BA68Cu;
    {
        const bool branch_taken_0x4ba68c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x4BA690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BA68Cu;
        // 0x4ba690: 0x10a2823  subu        $a1, $t0, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba68c) {
            ctx->pc = 0x4BA6A8u;
            goto label_4ba6a8;
        }
    }
    ctx->pc = 0x4BA694u;
    // 0x4ba694: 0x817c2  srl         $v0, $t0, 31
    ctx->pc = 0x4ba694u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x4ba698: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x4ba698u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x4ba69c: 0x623821  addu        $a3, $v1, $v0
    ctx->pc = 0x4ba69cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4ba6a0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4BA6A0u;
    {
        const bool branch_taken_0x4ba6a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BA6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BA6A0u;
        // 0x4ba6a4: 0x84040  sll         $t0, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba6a0) {
            ctx->pc = 0x4BA6C0u;
            goto label_4ba6c0;
        }
    }
    ctx->pc = 0x4BA6A8u;
label_4ba6a8:
    // 0x4ba6a8: 0x651025  or          $v0, $v1, $a1
    ctx->pc = 0x4ba6a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x4ba6ac: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x4BA6ACu;
    {
        const bool branch_taken_0x4ba6ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BA6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BA6ACu;
        // 0x4ba6b0: 0x31840  sll         $v1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba6ac) {
            ctx->pc = 0x4BA7A8u;
            goto label_4ba7a8;
        }
    }
    ctx->pc = 0x4BA6B4u;
    // 0x4ba6b4: 0x517c2  srl         $v0, $a1, 31
    ctx->pc = 0x4ba6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x4ba6b8: 0x623821  addu        $a3, $v1, $v0
    ctx->pc = 0x4ba6b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4ba6bc: 0x54040  sll         $t0, $a1, 1
    ctx->pc = 0x4ba6bcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_4ba6c0:
    // 0x4ba6c0: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x4ba6c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ba6c4: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x4BA6C4u;
    {
        const bool branch_taken_0x4ba6c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BA6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BA6C4u;
        // 0x4ba6c8: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba6c4) {
            ctx->pc = 0x4BA680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ba680;
        }
    }
    ctx->pc = 0x4BA6CCu;
    // 0x4ba6cc: 0xe91823  subu        $v1, $a3, $t1
    ctx->pc = 0x4ba6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x4ba6d0: 0x10a102b  sltu        $v0, $t0, $t2
    ctx->pc = 0x4ba6d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x4ba6d4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4ba6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4ba6d8: 0x4600003  bltz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4BA6D8u;
    {
        const bool branch_taken_0x4ba6d8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4BA6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BA6D8u;
        // 0x4ba6dc: 0x10a2823  subu        $a1, $t0, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba6d8) {
            ctx->pc = 0x4BA6E8u;
            goto label_4ba6e8;
        }
    }
    ctx->pc = 0x4BA6E0u;
    // 0x4ba6e0: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x4ba6e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ba6e4: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x4ba6e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4ba6e8:
    // 0x4ba6e8: 0xe81025  or          $v0, $a3, $t0
    ctx->pc = 0x4ba6e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x4ba6ec: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x4BA6ECu;
    {
        const bool branch_taken_0x4ba6ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BA6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BA6ECu;
        // 0x4ba6f0: 0xb1fc2  srl         $v1, $t3, 31 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 11), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba6ec) {
            ctx->pc = 0x4BA7ACu;
            goto label_4ba7ac;
        }
    }
    ctx->pc = 0x4BA6F4u;
    // 0x4ba6f4: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x4ba6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x4ba6f8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4ba6f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4ba6fc: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x4ba6fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x4ba700: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4BA700u;
    {
        const bool branch_taken_0x4ba700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ba700) {
            ctx->pc = 0x4BA734u;
            goto label_4ba734;
        }
    }
    ctx->pc = 0x4BA708u;
    // 0x4ba708: 0x3c05000f  lui         $a1, 0xF
    ctx->pc = 0x4ba708u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15 << 16));
    // 0x4ba70c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4ba70cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_4ba710:
    // 0x4ba710: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x4ba710u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x4ba714: 0x81fc2  srl         $v1, $t0, 31
    ctx->pc = 0x4ba714u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x4ba718: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x4ba718u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4ba71c: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x4ba71cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x4ba720: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x4ba720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x4ba724: 0xa7102a  slt         $v0, $a1, $a3
    ctx->pc = 0x4ba724u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x4ba728: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x4BA728u;
    {
        const bool branch_taken_0x4ba728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ba728) {
            ctx->pc = 0x4BA710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ba710;
        }
    }
    ctx->pc = 0x4BA730u;
    // 0x4ba730: 0x288cfc02  slti        $t4, $a0, -0x3FE
    ctx->pc = 0x4ba730u;
    SET_GPR_U64(ctx, 12, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294966274) ? 1 : 0);
label_4ba734:
    // 0x4ba734: 0x1580000c  bnez        $t4, . + 4 + (0xC << 2)
    ctx->pc = 0x4BA734u;
    {
        const bool branch_taken_0x4ba734 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BA738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BA734u;
        // 0x4ba738: 0x2402fc02  addiu       $v0, $zero, -0x3FE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966274));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba734) {
            ctx->pc = 0x4BA768u;
            goto label_4ba768;
        }
    }
    ctx->pc = 0x4BA73Cu;
    // 0x4ba73c: 0x248403ff  addiu       $a0, $a0, 0x3FF
    ctx->pc = 0x4ba73cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1023));
    // 0x4ba740: 0x3c02fff0  lui         $v0, 0xFFF0
    ctx->pc = 0x4ba740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65520 << 16));
    // 0x4ba744: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x4ba744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4ba748: 0x42500  sll         $a0, $a0, 20
    ctx->pc = 0x4ba748u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 20));
    // 0x4ba74c: 0x443825  or          $a3, $v0, $a0
    ctx->pc = 0x4ba74cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4ba750: 0xeb1825  or          $v1, $a3, $t3
    ctx->pc = 0x4ba750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 11));
    // 0x4ba754: 0x8103c  dsll32      $v0, $t0, 0
    ctx->pc = 0x4ba754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 0));
    // 0x4ba758: 0x3703c  dsll32      $t6, $v1, 0
    ctx->pc = 0x4ba758u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 3) << (32 + 0));
    // 0x4ba75c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x4ba75cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x4ba760: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x4BA760u;
    {
        const bool branch_taken_0x4ba760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BA764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BA760u;
        // 0x4ba764: 0x1c22025  or          $a0, $t6, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 14) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba760) {
            ctx->pc = 0x4BA7E0u;
            goto label_4ba7e0;
        }
    }
    ctx->pc = 0x4BA768u;
label_4ba768:
    // 0x4ba768: 0x443023  subu        $a2, $v0, $a0
    ctx->pc = 0x4ba768u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4ba76c: 0x28c30015  slti        $v1, $a2, 0x15
    ctx->pc = 0x4ba76cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x4ba770: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4BA770u;
    {
        const bool branch_taken_0x4ba770 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BA774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BA770u;
        // 0x4ba774: 0x61023  negu        $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba770) {
            ctx->pc = 0x4BA78Cu;
            goto label_4ba78c;
        }
    }
    ctx->pc = 0x4BA778u;
    // 0x4ba778: 0xc81806  srlv        $v1, $t0, $a2
    ctx->pc = 0x4ba778u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x4ba77c: 0x471004  sllv        $v0, $a3, $v0
    ctx->pc = 0x4ba77cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x4ba780: 0x624025  or          $t0, $v1, $v0
    ctx->pc = 0x4ba780u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4ba784: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x4BA784u;
    {
        const bool branch_taken_0x4ba784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BA788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BA784u;
        // 0x4ba788: 0xc73807  srav        $a3, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), GPR_U32(ctx, 6) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba784) {
            ctx->pc = 0x4BA7CCu;
            goto label_4ba7cc;
        }
    }
    ctx->pc = 0x4BA78Cu;
label_4ba78c:
    // 0x4ba78c: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x4ba78cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x4ba790: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4BA790u;
    {
        const bool branch_taken_0x4ba790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BA794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BA790u;
        // 0x4ba794: 0x61023  negu        $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba790) {
            ctx->pc = 0x4BA7C4u;
            goto label_4ba7c4;
        }
    }
    ctx->pc = 0x4BA798u;
    // 0x4ba798: 0xc81806  srlv        $v1, $t0, $a2
    ctx->pc = 0x4ba798u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x4ba79c: 0x471004  sllv        $v0, $a3, $v0
    ctx->pc = 0x4ba79cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x4ba7a0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x4BA7A0u;
    {
        const bool branch_taken_0x4ba7a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BA7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BA7A0u;
        // 0x4ba7a4: 0x434025  or          $t0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba7a0) {
            ctx->pc = 0x4BA7C8u;
            goto label_4ba7c8;
        }
    }
    ctx->pc = 0x4BA7A8u;
label_4ba7a8:
    // 0x4ba7a8: 0xb1fc2  srl         $v1, $t3, 31
    ctx->pc = 0x4ba7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 11), 31));
label_4ba7ac:
    // 0x4ba7ac: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4ba7acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x4ba7b0: 0x244210e0  addiu       $v0, $v0, 0x10E0
    ctx->pc = 0x4ba7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4320));
    // 0x4ba7b4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x4ba7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x4ba7b8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4ba7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4ba7bc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x4BA7BCu;
    {
        const bool branch_taken_0x4ba7bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BA7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BA7BCu;
        // 0x4ba7c0: 0xdc620000  ld          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba7bc) {
            ctx->pc = 0x4BA7E4u;
            goto label_4ba7e4;
        }
    }
    ctx->pc = 0x4BA7C4u;
label_4ba7c4:
    // 0x4ba7c4: 0xc74007  srav        $t0, $a3, $a2
    ctx->pc = 0x4ba7c4u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 7), GPR_U32(ctx, 6) & 0x1F));
label_4ba7c8:
    // 0x4ba7c8: 0x160382d  daddu       $a3, $t3, $zero
    ctx->pc = 0x4ba7c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_4ba7cc:
    // 0x4ba7cc: 0xeb1825  or          $v1, $a3, $t3
    ctx->pc = 0x4ba7ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 11));
    // 0x4ba7d0: 0x8103c  dsll32      $v0, $t0, 0
    ctx->pc = 0x4ba7d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 0));
    // 0x4ba7d4: 0x3783c  dsll32      $t7, $v1, 0
    ctx->pc = 0x4ba7d4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 3) << (32 + 0));
    // 0x4ba7d8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x4ba7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x4ba7dc: 0x1e22025  or          $a0, $t7, $v0
    ctx->pc = 0x4ba7dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 15) | GPR_U64(ctx, 2));
label_4ba7e0:
    // 0x4ba7e0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4ba7e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ba7e4:
    // 0x4ba7e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4ba7e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4ba7e8:
    // 0x4ba7e8: 0x3e00008  jr          $ra
    ctx->pc = 0x4BA7E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BA7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BA7E8u;
        // 0x4ba7ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BA7E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BA7F0u;
}
