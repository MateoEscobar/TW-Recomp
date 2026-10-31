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

// Function: sub_004311B0
// Address: 0x4311b0 - 0x431378
void sub_004311B0_0x4311b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004311B0_0x4311b0");
#endif

    switch (ctx->pc) {
        case 0x4311b8u: goto label_4311b8;
        case 0x431244u: goto label_431244;
        case 0x4312e0u: goto label_4312e0;
        case 0x431340u: goto label_431340;
        default: break;
    }

    ctx->pc = 0x4311b0u;

    // 0x4311b0: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x4311B0u;
    {
        const bool branch_taken_0x4311b0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x4311B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4311B0u;
        // 0x4311b4: 0x851825  or          $v1, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4311b0) {
            ctx->pc = 0x4311C0u;
            goto label_4311c0;
        }
    }
    ctx->pc = 0x4311B8u;
label_4311b8:
    // 0x4311b8: 0x3e00008  jr          $ra
    ctx->pc = 0x4311B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4311BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4311B8u;
        // 0x4311bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4311B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4311C0u;
label_4311c0:
    // 0x4311c0: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x4311c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x4311c4: 0x14400059  bnez        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x4311C4u;
    {
        const bool branch_taken_0x4311c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4311C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4311C4u;
        // 0x4311c8: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4311c4) {
            ctx->pc = 0x43132Cu;
            goto label_43132c;
        }
    }
    ctx->pc = 0x4311CCu;
    // 0x4311cc: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x4311ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x4311d0: 0x2cc70010  sltiu       $a3, $a2, 0x10
    ctx->pc = 0x4311d0u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x4311d4: 0x34098080  ori         $t1, $zero, 0x8080
    ctx->pc = 0x4311d4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x4311d8: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x4311d8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x4311dc: 0x35298080  ori         $t1, $t1, 0x8080
    ctx->pc = 0x4311dcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32896);
    // 0x4311e0: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x4311e0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x4311e4: 0x35298080  ori         $t1, $t1, 0x8080
    ctx->pc = 0x4311e4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32896);
    // 0x4311e8: 0x94a78  dsll        $t1, $t1, 9
    ctx->pc = 0x4311e8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 9);
    // 0x4311ec: 0x35290101  ori         $t1, $t1, 0x101
    ctx->pc = 0x4311ecu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)257);
    // 0x4311f0: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4311f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4311f4: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x4311F4u;
    {
        const bool branch_taken_0x4311f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4311F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4311F4u;
        // 0x4311f8: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4311f4) {
            ctx->pc = 0x4312A0u;
            goto label_4312a0;
        }
    }
    ctx->pc = 0x4311FCu;
    // 0x4311fc: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x4311fcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x431200: 0x71295389  pcpyld      $t2, $t1, $t1
    ctx->pc = 0x431200u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x431204: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x431204u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x431208: 0x34088080  ori         $t0, $zero, 0x8080
    ctx->pc = 0x431208u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x43120c: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x43120cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x431210: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x431210u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x431214: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x431214u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x431218: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x431218u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x43121c: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x43121cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x431220: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x431220u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x431224: 0x70621848  psubw       $v1, $v1, $v0
    ctx->pc = 0x431224u;
    SET_GPR_VEC(ctx, 3, PS2_PSUBW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x431228: 0x71084b89  pcpyld      $t1, $t0, $t0
    ctx->pc = 0x431228u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8)));
    // 0x43122c: 0x706413a9  pcpyud      $v0, $v1, $a0
    ctx->pc = 0x43122cu;
    SET_GPR_VEC(ctx, 2, _mm_unpackhi_epi64(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x431230: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x431230u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x431234: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x431234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x431238: 0x1460003c  bnez        $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x431238u;
    {
        const bool branch_taken_0x431238 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x43123Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431238u;
        // 0x43123c: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431238) {
            ctx->pc = 0x43132Cu;
            goto label_43132c;
        }
    }
    ctx->pc = 0x431240u;
    // 0x431240: 0x24c6fff0  addiu       $a2, $a2, -0x10
    ctx->pc = 0x431240u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
label_431244:
    // 0x431244: 0x10c0ffdc  beqz        $a2, . + 4 + (-0x24 << 2)
    ctx->pc = 0x431244u;
    {
        const bool branch_taken_0x431244 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x431244) {
            ctx->pc = 0x4311B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4311b8;
        }
    }
    ctx->pc = 0x43124Cu;
    // 0x43124c: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x43124cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x431250: 0x70021ce9  pnor        $v1, $zero, $v0
    ctx->pc = 0x431250u;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x431254: 0x704a1248  psubb       $v0, $v0, $t2
    ctx->pc = 0x431254u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x431258: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x431258u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x43125c: 0x70491c89  pand        $v1, $v0, $t1
    ctx->pc = 0x43125cu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x431260: 0x706413a9  pcpyud      $v0, $v1, $a0
    ctx->pc = 0x431260u;
    SET_GPR_VEC(ctx, 2, _mm_unpackhi_epi64(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x431264: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x431264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x431268: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x431268u;
    {
        const bool branch_taken_0x431268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43126Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431268u;
        // 0x43126c: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431268) {
            ctx->pc = 0x4311B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4311b8;
        }
    }
    ctx->pc = 0x431270u;
    // 0x431270: 0x2cc20010  sltiu       $v0, $a2, 0x10
    ctx->pc = 0x431270u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x431274: 0x78e30000  lq          $v1, 0x0($a3)
    ctx->pc = 0x431274u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x431278: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x431278u;
    {
        const bool branch_taken_0x431278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43127Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431278u;
        // 0x43127c: 0x25080010  addiu       $t0, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431278) {
            ctx->pc = 0x431320u;
            goto label_431320;
        }
    }
    ctx->pc = 0x431280u;
    // 0x431280: 0x79020000  lq          $v0, 0x0($t0)
    ctx->pc = 0x431280u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x431284: 0x70621848  psubw       $v1, $v1, $v0
    ctx->pc = 0x431284u;
    SET_GPR_VEC(ctx, 3, PS2_PSUBW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x431288: 0x706413a9  pcpyud      $v0, $v1, $a0
    ctx->pc = 0x431288u;
    SET_GPR_VEC(ctx, 2, _mm_unpackhi_epi64(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x43128c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x43128cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x431290: 0x5040ffec  beql        $v0, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x431290u;
    {
        const bool branch_taken_0x431290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x431290) {
            ctx->pc = 0x431294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x431290u;
            // 0x431294: 0x24c6fff0  addiu       $a2, $a2, -0x10 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
            ctx->in_delay_slot = false;
            ctx->pc = 0x431244u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_431244;
        }
    }
    ctx->pc = 0x431298u;
    // 0x431298: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x431298u;
    {
        const bool branch_taken_0x431298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43129Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431298u;
        // 0x43129c: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431298) {
            ctx->pc = 0x431324u;
            goto label_431324;
        }
    }
    ctx->pc = 0x4312A0u;
label_4312a0:
    // 0x4312a0: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x4312a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x4312a4: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x4312A4u;
    {
        const bool branch_taken_0x4312a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4312A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4312A4u;
        // 0x4312a8: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4312a4) {
            ctx->pc = 0x431320u;
            goto label_431320;
        }
    }
    ctx->pc = 0x4312ACu;
    // 0x4312ac: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x4312acu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4312b0: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x4312b0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4312b4: 0x1462001d  bne         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x4312B4u;
    {
        const bool branch_taken_0x4312b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4312B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4312B4u;
        // 0x4312b8: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4312b4) {
            ctx->pc = 0x43132Cu;
            goto label_43132c;
        }
    }
    ctx->pc = 0x4312BCu;
    // 0x4312bc: 0x24c6fff8  addiu       $a2, $a2, -0x8
    ctx->pc = 0x4312bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x4312c0: 0x340a8080  ori         $t2, $zero, 0x8080
    ctx->pc = 0x4312c0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x4312c4: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x4312c4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x4312c8: 0x354a8080  ori         $t2, $t2, 0x8080
    ctx->pc = 0x4312c8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32896);
    // 0x4312cc: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x4312ccu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x4312d0: 0x354a8080  ori         $t2, $t2, 0x8080
    ctx->pc = 0x4312d0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32896);
    // 0x4312d4: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x4312d4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x4312d8: 0x354a8080  ori         $t2, $t2, 0x8080
    ctx->pc = 0x4312d8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32896);
    // 0x4312dc: 0x0  nop
    ctx->pc = 0x4312dcu;
    // NOP
label_4312e0:
    // 0x4312e0: 0x10c0ffb5  beqz        $a2, . + 4 + (-0x4B << 2)
    ctx->pc = 0x4312E0u;
    {
        const bool branch_taken_0x4312e0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x4312e0) {
            ctx->pc = 0x4311B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4311b8;
        }
    }
    ctx->pc = 0x4312E8u;
    // 0x4312e8: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x4312e8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4312ec: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x4312ecu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x4312f0: 0x49102f  dsubu       $v0, $v0, $t1
    ctx->pc = 0x4312f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 9));
    // 0x4312f4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4312f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4312f8: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x4312f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x4312fc: 0x1440ffae  bnez        $v0, . + 4 + (-0x52 << 2)
    ctx->pc = 0x4312FCu;
    {
        const bool branch_taken_0x4312fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x431300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4312FCu;
        // 0x431300: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4312fc) {
            ctx->pc = 0x4311B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4311b8;
        }
    }
    ctx->pc = 0x431304u;
    // 0x431304: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x431304u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x431308: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x431308u;
    {
        const bool branch_taken_0x431308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43130Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431308u;
        // 0x43130c: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431308) {
            ctx->pc = 0x431320u;
            goto label_431320;
        }
    }
    ctx->pc = 0x431310u;
    // 0x431310: 0xdce30000  ld          $v1, 0x0($a3)
    ctx->pc = 0x431310u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x431314: 0xdd020000  ld          $v0, 0x0($t0)
    ctx->pc = 0x431314u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x431318: 0x5062fff1  beql        $v1, $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x431318u;
    {
        const bool branch_taken_0x431318 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x431318) {
            ctx->pc = 0x43131Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x431318u;
            // 0x43131c: 0x24c6fff8  addiu       $a2, $a2, -0x8 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4312E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4312e0;
        }
    }
    ctx->pc = 0x431320u;
label_431320:
    // 0x431320: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x431320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_431324:
    // 0x431324: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x431324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x431328: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x431328u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_43132c:
    // 0x43132c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x43132Cu;
    {
        const bool branch_taken_0x43132c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x431330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43132Cu;
        // 0x431330: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43132c) {
            ctx->pc = 0x431368u;
            goto label_431368;
        }
    }
    ctx->pc = 0x431334u;
    // 0x431334: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x431334u;
    {
        const bool branch_taken_0x431334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x431338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431334u;
        // 0x431338: 0x80830000  lb          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431334) {
            ctx->pc = 0x43135Cu;
            goto label_43135c;
        }
    }
    ctx->pc = 0x43133Cu;
    // 0x43133c: 0x0  nop
    ctx->pc = 0x43133cu;
    // NOP
label_431340:
    // 0x431340: 0x10c0ff9d  beqz        $a2, . + 4 + (-0x63 << 2)
    ctx->pc = 0x431340u;
    {
        const bool branch_taken_0x431340 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x431340) {
            ctx->pc = 0x4311B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4311b8;
        }
    }
    ctx->pc = 0x431348u;
    // 0x431348: 0x10e0ff9b  beqz        $a3, . + 4 + (-0x65 << 2)
    ctx->pc = 0x431348u;
    {
        const bool branch_taken_0x431348 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x43134Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431348u;
        // 0x43134c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431348) {
            ctx->pc = 0x4311B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4311b8;
        }
    }
    ctx->pc = 0x431350u;
    // 0x431350: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x431350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x431354: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x431354u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x431358: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x431358u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_43135c:
    // 0x43135c: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x43135cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x431360: 0x1062fff7  beq         $v1, $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x431360u;
    {
        const bool branch_taken_0x431360 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x431364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431360u;
        // 0x431364: 0x90870000  lbu         $a3, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431360) {
            ctx->pc = 0x431340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_431340;
        }
    }
    ctx->pc = 0x431368u;
label_431368:
    // 0x431368: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x431368u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x43136c: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x43136cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x431370: 0x3e00008  jr          $ra
    ctx->pc = 0x431370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x431374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431370u;
        // 0x431374: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x431370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x431378u;
}
