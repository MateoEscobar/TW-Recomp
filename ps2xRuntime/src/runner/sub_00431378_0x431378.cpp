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

// Function: sub_00431378
// Address: 0x431378 - 0x431540
void sub_00431378_0x431378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00431378_0x431378");
#endif

    switch (ctx->pc) {
        case 0x4314b8u: goto label_4314b8;
        case 0x4314f0u: goto label_4314f0;
        case 0x431520u: goto label_431520;
        default: break;
    }

    ctx->pc = 0x431378u;

    // 0x431378: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x431378u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43137c: 0xa43825  or          $a3, $a1, $a0
    ctx->pc = 0x43137cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x431380: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x431380u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x431384: 0x30e20007  andi        $v0, $a3, 0x7
    ctx->pc = 0x431384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)7);
    // 0x431388: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x431388u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x43138c: 0x14400058  bnez        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x43138Cu;
    {
        const bool branch_taken_0x43138c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x431390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43138Cu;
        // 0x431390: 0x30e2000f  andi        $v0, $a3, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x43138c) {
            ctx->pc = 0x4314F0u;
            goto label_4314f0;
        }
    }
    ctx->pc = 0x431394u;
    // 0x431394: 0x142480a  movz        $t1, $t2, $v0
    ctx->pc = 0x431394u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 10));
    // 0x431398: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x431398u;
    {
        const bool branch_taken_0x431398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43139Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431398u;
        // 0x43139c: 0xc9102b  sltu        $v0, $a2, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x431398) {
            ctx->pc = 0x431454u;
            goto label_431454;
        }
    }
    ctx->pc = 0x4313A0u;
    // 0x4313a0: 0x14400053  bnez        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x4313A0u;
    {
        const bool branch_taken_0x4313a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4313a0) {
            ctx->pc = 0x4314F0u;
            goto label_4314f0;
        }
    }
    ctx->pc = 0x4313A8u;
    // 0x4313a8: 0x34078080  ori         $a3, $zero, 0x8080
    ctx->pc = 0x4313a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x4313ac: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x4313acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x4313b0: 0x34e78080  ori         $a3, $a3, 0x8080
    ctx->pc = 0x4313b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32896);
    // 0x4313b4: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x4313b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x4313b8: 0x34e78080  ori         $a3, $a3, 0x8080
    ctx->pc = 0x4313b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32896);
    // 0x4313bc: 0x73a78  dsll        $a3, $a3, 9
    ctx->pc = 0x4313bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 9);
    // 0x4313c0: 0x34e70101  ori         $a3, $a3, 0x101
    ctx->pc = 0x4313c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)257);
    // 0x4313c4: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x4313c4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4313c8: 0x70e74b89  pcpyld      $t1, $a3, $a3
    ctx->pc = 0x4313c8u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 7)));
    // 0x4313cc: 0x70031ce9  pnor        $v1, $zero, $v1
    ctx->pc = 0x4313ccu;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x4313d0: 0x34078080  ori         $a3, $zero, 0x8080
    ctx->pc = 0x4313d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x4313d4: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x4313d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x4313d8: 0x34e78080  ori         $a3, $a3, 0x8080
    ctx->pc = 0x4313d8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32896);
    // 0x4313dc: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x4313dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x4313e0: 0x34e78080  ori         $a3, $a3, 0x8080
    ctx->pc = 0x4313e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32896);
    // 0x4313e4: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x4313e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x4313e8: 0x34e78080  ori         $a3, $a3, 0x8080
    ctx->pc = 0x4313e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32896);
    // 0x4313ec: 0x70691248  psubb       $v0, $v1, $t1
    ctx->pc = 0x4313ecu;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 3), GPR_VEC(ctx, 9)));
    // 0x4313f0: 0x70e75389  pcpyld      $t2, $a3, $a3
    ctx->pc = 0x4313f0u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 7)));
    // 0x4313f4: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x4313f4u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x4313f8: 0x704a1489  pand        $v0, $v0, $t2
    ctx->pc = 0x4313f8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x4313fc: 0x70441ba9  pcpyud      $v1, $v0, $a0
    ctx->pc = 0x4313fcu;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x431400: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x431400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x431404: 0x14600039  bnez        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x431404u;
    {
        const bool branch_taken_0x431404 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x431408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431404u;
        // 0x431408: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431404) {
            ctx->pc = 0x4314ECu;
            goto label_4314ec;
        }
    }
    ctx->pc = 0x43140Cu;
    // 0x43140c: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x43140cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x431410: 0x24c6fff0  addiu       $a2, $a2, -0x10
    ctx->pc = 0x431410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x431414: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x431414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x431418: 0x2cc20010  sltiu       $v0, $a2, 0x10
    ctx->pc = 0x431418u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x43141c: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x43141cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x431420: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x431420u;
    {
        const bool branch_taken_0x431420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x431424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431420u;
        // 0x431424: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431420) {
            ctx->pc = 0x4314ECu;
            goto label_4314ec;
        }
    }
    ctx->pc = 0x431428u;
    // 0x431428: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x431428u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x43142c: 0x70021ce9  pnor        $v1, $zero, $v0
    ctx->pc = 0x43142cu;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x431430: 0x70491248  psubb       $v0, $v0, $t1
    ctx->pc = 0x431430u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x431434: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x431434u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x431438: 0x704a1489  pand        $v0, $v0, $t2
    ctx->pc = 0x431438u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x43143c: 0x70441ba9  pcpyud      $v1, $v0, $a0
    ctx->pc = 0x43143cu;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x431440: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x431440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x431444: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x431444u;
    {
        const bool branch_taken_0x431444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x431444) {
            ctx->pc = 0x431448u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x431444u;
            // 0x431448: 0x78a30000  lq          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4314B8u;
            goto label_4314b8;
        }
    }
    ctx->pc = 0x43144Cu;
    // 0x43144c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x43144Cu;
    {
        const bool branch_taken_0x43144c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x431450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43144Cu;
        // 0x431450: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43144c) {
            ctx->pc = 0x4314F0u;
            goto label_4314f0;
        }
    }
    ctx->pc = 0x431454u;
label_431454:
    // 0x431454: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x431454u;
    {
        const bool branch_taken_0x431454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x431454) {
            ctx->pc = 0x4314F0u;
            goto label_4314f0;
        }
    }
    ctx->pc = 0x43145Cu;
    // 0x43145c: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x43145cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x431460: 0x34098080  ori         $t1, $zero, 0x8080
    ctx->pc = 0x431460u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x431464: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x431464u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x431468: 0x35298080  ori         $t1, $t1, 0x8080
    ctx->pc = 0x431468u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32896);
    // 0x43146c: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x43146cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x431470: 0x35298080  ori         $t1, $t1, 0x8080
    ctx->pc = 0x431470u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32896);
    // 0x431474: 0x94a78  dsll        $t1, $t1, 9
    ctx->pc = 0x431474u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 9);
    // 0x431478: 0x35290101  ori         $t1, $t1, 0x101
    ctx->pc = 0x431478u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)257);
    // 0x43147c: 0x340a8080  ori         $t2, $zero, 0x8080
    ctx->pc = 0x43147cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x431480: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x431480u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x431484: 0x354a8080  ori         $t2, $t2, 0x8080
    ctx->pc = 0x431484u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32896);
    // 0x431488: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x431488u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x43148c: 0x354a8080  ori         $t2, $t2, 0x8080
    ctx->pc = 0x43148cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32896);
    // 0x431490: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x431490u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x431494: 0x354a8080  ori         $t2, $t2, 0x8080
    ctx->pc = 0x431494u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32896);
    // 0x431498: 0x69102f  dsubu       $v0, $v1, $t1
    ctx->pc = 0x431498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) - GPR_U64(ctx, 9));
    // 0x43149c: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x43149cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x4314a0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4314a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4314a4: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x4314a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x4314a8: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x4314A8u;
    {
        const bool branch_taken_0x4314a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4314ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4314A8u;
        // 0x4314ac: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4314a8) {
            ctx->pc = 0x4314ECu;
            goto label_4314ec;
        }
    }
    ctx->pc = 0x4314B0u;
    // 0x4314b0: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x4314b0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4314b4: 0x0  nop
    ctx->pc = 0x4314b4u;
    // NOP
label_4314b8:
    // 0x4314b8: 0x24c6fff8  addiu       $a2, $a2, -0x8
    ctx->pc = 0x4314b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x4314bc: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x4314bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x4314c0: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x4314c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x4314c4: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x4314c4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    // 0x4314c8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4314C8u;
    {
        const bool branch_taken_0x4314c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4314CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4314C8u;
        // 0x4314cc: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4314c8) {
            ctx->pc = 0x4314ECu;
            goto label_4314ec;
        }
    }
    ctx->pc = 0x4314D0u;
    // 0x4314d0: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x4314d0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4314d4: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x4314d4u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x4314d8: 0x49102f  dsubu       $v0, $v0, $t1
    ctx->pc = 0x4314d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 9));
    // 0x4314dc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4314dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4314e0: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x4314e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x4314e4: 0x5040fff4  beql        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x4314E4u;
    {
        const bool branch_taken_0x4314e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4314e4) {
            ctx->pc = 0x4314E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4314E4u;
            // 0x4314e8: 0xdca30000  ld          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4314B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4314b8;
        }
    }
    ctx->pc = 0x4314ECu;
label_4314ec:
    // 0x4314ec: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x4314ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4314f0:
    // 0x4314f0: 0x10c00011  beqz        $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x4314F0u;
    {
        const bool branch_taken_0x4314f0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4314F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4314F0u;
        // 0x4314f4: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4314f0) {
            ctx->pc = 0x431538u;
            goto label_431538;
        }
    }
    ctx->pc = 0x4314F8u;
    // 0x4314f8: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x4314f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4314fc: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x4314fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x431500: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x431500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x431504: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x431504u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x431508: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x431508u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x43150c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x43150Cu;
    {
        const bool branch_taken_0x43150c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x431510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43150Cu;
        // 0x431510: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43150c) {
            ctx->pc = 0x4314F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4314f0;
        }
    }
    ctx->pc = 0x431514u;
    // 0x431514: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x431514u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x431518: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x431518u;
    {
        const bool branch_taken_0x431518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43151Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431518u;
        // 0x43151c: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431518) {
            ctx->pc = 0x431538u;
            goto label_431538;
        }
    }
    ctx->pc = 0x431520u;
label_431520:
    // 0x431520: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x431520u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x431524: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x431524u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x431528: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x431528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x43152c: 0x0  nop
    ctx->pc = 0x43152cu;
    // NOP
    // 0x431530: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x431530u;
    {
        const bool branch_taken_0x431530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x431534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431530u;
        // 0x431534: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431530) {
            ctx->pc = 0x431520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_431520;
        }
    }
    ctx->pc = 0x431538u;
label_431538:
    // 0x431538: 0x3e00008  jr          $ra
    ctx->pc = 0x431538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43153Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431538u;
        // 0x43153c: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x431538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x431540u;
}
