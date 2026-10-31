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

// Function: sub_002102F0
// Address: 0x2102f0 - 0x2107d8
void sub_002102F0_0x2102f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002102F0_0x2102f0");
#endif

    switch (ctx->pc) {
        case 0x21031cu: goto label_21031c;
        case 0x210348u: goto label_210348;
        case 0x21036cu: goto label_21036c;
        case 0x210390u: goto label_210390;
        case 0x2103bcu: goto label_2103bc;
        case 0x2103e8u: goto label_2103e8;
        case 0x21063cu: goto label_21063c;
        case 0x210660u: goto label_210660;
        default: break;
    }

    ctx->pc = 0x2102f0u;

    // 0x2102f0: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x2102f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x2102f4: 0x27bdf980  addiu       $sp, $sp, -0x680
    ctx->pc = 0x2102f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965632));
    // 0x2102f8: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x2102f8u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2102fc: 0x24429710  addiu       $v0, $v0, -0x68F0
    ctx->pc = 0x2102fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940432));
    // 0x210300: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x210300u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210304: 0x24450100  addiu       $a1, $v0, 0x100
    ctx->pc = 0x210304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x210308: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x210308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x21030c: 0x3c0f0051  lui         $t7, 0x51
    ctx->pc = 0x21030cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)81 << 16));
    // 0x210310: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x210310u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
    // 0x210314: 0x27a60340  addiu       $a2, $sp, 0x340
    ctx->pc = 0x210314u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
    // 0x210318: 0x27a70580  addiu       $a3, $sp, 0x580
    ctx->pc = 0x210318u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1408));
label_21031c:
    // 0x21031c: 0x78490000  lq          $t1, 0x0($v0)
    ctx->pc = 0x21031cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x210320: 0x784a0010  lq          $t2, 0x10($v0)
    ctx->pc = 0x210320u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x210324: 0x7c690000  sq          $t1, 0x0($v1)
    ctx->pc = 0x210324u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 9));
    // 0x210328: 0x7c6a0010  sq          $t2, 0x10($v1)
    ctx->pc = 0x210328u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 10));
    // 0x21032c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x21032cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x210330: 0x1445fffa  bne         $v0, $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x210330u;
    {
        const bool branch_taken_0x210330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x210334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210330u;
        // 0x210334: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210330) {
            ctx->pc = 0x21031Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21031c;
        }
    }
    ctx->pc = 0x210338u;
    // 0x210338: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x210338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x21033c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x21033cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210340: 0x24429810  addiu       $v0, $v0, -0x67F0
    ctx->pc = 0x210340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940688));
    // 0x210344: 0x24450240  addiu       $a1, $v0, 0x240
    ctx->pc = 0x210344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 576));
label_210348:
    // 0x210348: 0x78490000  lq          $t1, 0x0($v0)
    ctx->pc = 0x210348u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21034c: 0x784a0010  lq          $t2, 0x10($v0)
    ctx->pc = 0x21034cu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x210350: 0x7c690000  sq          $t1, 0x0($v1)
    ctx->pc = 0x210350u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 9));
    // 0x210354: 0x7c6a0010  sq          $t2, 0x10($v1)
    ctx->pc = 0x210354u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 10));
    // 0x210358: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x210358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x21035c: 0x1445fffa  bne         $v0, $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x21035Cu;
    {
        const bool branch_taken_0x21035c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x210360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21035Cu;
        // 0x210360: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21035c) {
            ctx->pc = 0x210348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210348;
        }
    }
    ctx->pc = 0x210364u;
    // 0x210364: 0x25e3f6a0  addiu       $v1, $t7, -0x960
    ctx->pc = 0x210364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964896));
    // 0x210368: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x210368u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_21036c:
    // 0x21036c: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x21036cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x210370: 0x78490010  lq          $t1, 0x10($v0)
    ctx->pc = 0x210370u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x210374: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x210374u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x210378: 0x7c690010  sq          $t1, 0x10($v1)
    ctx->pc = 0x210378u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 9));
    // 0x21037c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x21037cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x210380: 0x1444fffa  bne         $v0, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x210380u;
    {
        const bool branch_taken_0x210380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x210384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210380u;
        // 0x210384: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210380) {
            ctx->pc = 0x21036Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21036c;
        }
    }
    ctx->pc = 0x210388u;
    // 0x210388: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x210388u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21038c: 0x2503f7a0  addiu       $v1, $t0, -0x860
    ctx->pc = 0x21038cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294965152));
label_210390:
    // 0x210390: 0x784c0000  lq          $t4, 0x0($v0)
    ctx->pc = 0x210390u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x210394: 0x78440010  lq          $a0, 0x10($v0)
    ctx->pc = 0x210394u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x210398: 0x7c6c0000  sq          $t4, 0x0($v1)
    ctx->pc = 0x210398u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 12));
    // 0x21039c: 0x7c640010  sq          $a0, 0x10($v1)
    ctx->pc = 0x21039cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 4));
    // 0x2103a0: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x2103a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2103a4: 0x1446fffa  bne         $v0, $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2103A4u;
    {
        const bool branch_taken_0x2103a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x2103A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2103A4u;
        // 0x2103a8: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2103a4) {
            ctx->pc = 0x210390u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210390;
        }
    }
    ctx->pc = 0x2103ACu;
    // 0x2103ac: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x2103acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x2103b0: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x2103b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2103b4: 0x24429a50  addiu       $v0, $v0, -0x65B0
    ctx->pc = 0x2103b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941264));
    // 0x2103b8: 0x24440240  addiu       $a0, $v0, 0x240
    ctx->pc = 0x2103b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 576));
label_2103bc:
    // 0x2103bc: 0x784a0000  lq          $t2, 0x0($v0)
    ctx->pc = 0x2103bcu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2103c0: 0x784b0010  lq          $t3, 0x10($v0)
    ctx->pc = 0x2103c0u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2103c4: 0x7c6a0000  sq          $t2, 0x0($v1)
    ctx->pc = 0x2103c4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 10));
    // 0x2103c8: 0x7c6b0010  sq          $t3, 0x10($v1)
    ctx->pc = 0x2103c8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 11));
    // 0x2103cc: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x2103ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2103d0: 0x1444fffa  bne         $v0, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2103D0u;
    {
        const bool branch_taken_0x2103d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x2103D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2103D0u;
        // 0x2103d4: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2103d0) {
            ctx->pc = 0x2103BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2103bc;
        }
    }
    ctx->pc = 0x2103D8u;
    // 0x2103d8: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x2103d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x2103dc: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x2103dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2103e0: 0x24429c90  addiu       $v0, $v0, -0x6370
    ctx->pc = 0x2103e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941840));
    // 0x2103e4: 0x24440100  addiu       $a0, $v0, 0x100
    ctx->pc = 0x2103e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
label_2103e8:
    // 0x2103e8: 0x78490000  lq          $t1, 0x0($v0)
    ctx->pc = 0x2103e8u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2103ec: 0x784a0010  lq          $t2, 0x10($v0)
    ctx->pc = 0x2103ecu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2103f0: 0x7c690000  sq          $t1, 0x0($v1)
    ctx->pc = 0x2103f0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 9));
    // 0x2103f4: 0x7c6a0010  sq          $t2, 0x10($v1)
    ctx->pc = 0x2103f4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 10));
    // 0x2103f8: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x2103f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2103fc: 0x1444fffa  bne         $v0, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2103FCu;
    {
        const bool branch_taken_0x2103fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x210400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2103FCu;
        // 0x210400: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2103fc) {
            ctx->pc = 0x2103E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2103e8;
        }
    }
    ctx->pc = 0x210404u;
    // 0x210404: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x210404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x210408: 0x8c43cdb4  lw          $v1, -0x324C($v0)
    ctx->pc = 0x210408u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50CDB4u));
    // 0x21040c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x21040cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x210410: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x210410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x210414: 0x1040009b  beqz        $v0, . + 4 + (0x9B << 2)
    ctx->pc = 0x210414u;
    {
        const bool branch_taken_0x210414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x210418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210414u;
        // 0x210418: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x210414) {
            ctx->pc = 0x210684u;
            goto label_210684;
        }
    }
    ctx->pc = 0x21041Cu;
    // 0x21041c: 0x10400080  beqz        $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x21041Cu;
    {
        const bool branch_taken_0x21041c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x210420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21041Cu;
        // 0x210420: 0x3c090051  lui         $t1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21041c) {
            ctx->pc = 0x210620u;
            goto label_210620;
        }
    }
    ctx->pc = 0x210424u;
    // 0x210424: 0x3c013e6b  lui         $at, 0x3E6B
    ctx->pc = 0x210424u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15979 << 16));
    // 0x210428: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x210428u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
    // 0x21042c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x21042cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x210430: 0x3c013f26  lui         $at, 0x3F26
    ctx->pc = 0x210430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16166 << 16));
    // 0x210434: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x210434u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x210438: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x210438u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x21043c: 0x2522f7b0  addiu       $v0, $t1, -0x850
    ctx->pc = 0x21043cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294965168));
    // 0x210440: 0xe522f7b0  swc1        $f2, -0x850($t1)
    ctx->pc = 0x210440u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4294965168), bits); }
    // 0x210444: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x210444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x210448: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x210448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x21044c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x21044cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x210450: 0x24460130  addiu       $a2, $v0, 0x130
    ctx->pc = 0x210450u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 304));
    // 0x210454: 0x3c013de1  lui         $at, 0x3DE1
    ctx->pc = 0x210454u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15841 << 16));
    // 0x210458: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x210458u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
    // 0x21045c: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x21045cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x210460: 0x24470150  addiu       $a3, $v0, 0x150
    ctx->pc = 0x210460u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 336));
    // 0x210464: 0xe4430120  swc1        $f3, 0x120($v0)
    ctx->pc = 0x210464u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x210468: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x210468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x21046c: 0x3c013e42  lui         $at, 0x3E42
    ctx->pc = 0x21046cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15938 << 16));
    // 0x210470: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x210470u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
    // 0x210474: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x210474u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x210478: 0x2444fff0  addiu       $a0, $v0, -0x10
    ctx->pc = 0x210478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x21047c: 0xe4a80008  swc1        $f8, 0x8($a1)
    ctx->pc = 0x21047cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x210480: 0x244a0070  addiu       $t2, $v0, 0x70
    ctx->pc = 0x210480u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x210484: 0xe4a1000c  swc1        $f1, 0xC($a1)
    ctx->pc = 0x210484u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x210488: 0x24480080  addiu       $t0, $v0, 0x80
    ctx->pc = 0x210488u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x21048c: 0xe4440130  swc1        $f4, 0x130($v0)
    ctx->pc = 0x21048cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 304), bits); }
    // 0x210490: 0x244b0220  addiu       $t3, $v0, 0x220
    ctx->pc = 0x210490u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 544));
    // 0x210494: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x210494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x210498: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x210498u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x21049c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x21049cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2104a0: 0x240c0120  addiu       $t4, $zero, 0x120
    ctx->pc = 0x2104a0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    // 0x2104a4: 0xe4c1000c  swc1        $f1, 0xC($a2)
    ctx->pc = 0x2104a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x2104a8: 0x25e9f6a0  addiu       $t1, $t7, -0x960
    ctx->pc = 0x2104a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964896));
    // 0x2104ac: 0xe4450150  swc1        $f5, 0x150($v0)
    ctx->pc = 0x2104acu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 336), bits); }
    // 0x2104b0: 0x252d0080  addiu       $t5, $t1, 0x80
    ctx->pc = 0x2104b0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 9), 128));
    // 0x2104b4: 0x3c01bd83  lui         $at, 0xBD83
    ctx->pc = 0x2104b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48515 << 16));
    // 0x2104b8: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x2104b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x2104bc: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x2104bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x2104c0: 0xe4e1000c  swc1        $f1, 0xC($a3)
    ctx->pc = 0x2104c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x2104c4: 0x3c013d23  lui         $at, 0x3D23
    ctx->pc = 0x2104c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15651 << 16));
    // 0x2104c8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2104c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x2104cc: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x2104ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x2104d0: 0xe4460010  swc1        $f6, 0x10($v0)
    ctx->pc = 0x2104d0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2104d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2104d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2104d8: 0xe4690008  swc1        $f9, 0x8($v1)
    ctx->pc = 0x2104d8u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2104dc: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x2104dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2104e0: 0xe4480008  swc1        $f8, 0x8($v0)
    ctx->pc = 0x2104e0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2104e4: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2104e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2104e8: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x2104e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2104ec: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x2104ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x2104f0: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x2104f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x2104f4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2104f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x2104f8: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x2104f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x2104fc: 0xe4c90008  swc1        $f9, 0x8($a2)
    ctx->pc = 0x2104fcu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x210500: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x210500u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x210504: 0xe4e70008  swc1        $f7, 0x8($a3)
    ctx->pc = 0x210504u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x210508: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x210508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x21050c: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x21050cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x210510: 0x3c013ebd  lui         $at, 0x3EBD
    ctx->pc = 0x210510u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16061 << 16));
    // 0x210514: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x210514u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
    // 0x210518: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x210518u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x21051c: 0x8dc240f4  lw          $v0, 0x40F4($t6)
    ctx->pc = 0x21051cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 16628)));
    // 0x210520: 0x3c013df5  lui         $at, 0x3DF5
    ctx->pc = 0x210520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15861 << 16));
    // 0x210524: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x210524u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x210528: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x210528u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x21052c: 0x4c1018  mult        $v0, $v0, $t4
    ctx->pc = 0x21052cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x210530: 0x3c013e85  lui         $at, 0x3E85
    ctx->pc = 0x210530u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16005 << 16));
    // 0x210534: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x210534u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
    // 0x210538: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x210538u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x21053c: 0x3c013f51  lui         $at, 0x3F51
    ctx->pc = 0x21053cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16209 << 16));
    // 0x210540: 0x3421eb85  ori         $at, $at, 0xEB85
    ctx->pc = 0x210540u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60293);
    // 0x210544: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x210544u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x210548: 0x3c013e0f  lui         $at, 0x3E0F
    ctx->pc = 0x210548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15887 << 16));
    // 0x21054c: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x21054cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x210550: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x210550u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x210554: 0x3c013dae  lui         $at, 0x3DAE
    ctx->pc = 0x210554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15790 << 16));
    // 0x210558: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x210558u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
    // 0x21055c: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x21055cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x210560: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x210560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x210564: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x210564u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x210568: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x210568u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x21056c: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x21056cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x210570: 0xe4450070  swc1        $f5, 0x70($v0)
    ctx->pc = 0x210570u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
    // 0x210574: 0xe4820080  swc1        $f2, 0x80($a0)
    ctx->pc = 0x210574u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 128), bits); }
    // 0x210578: 0xe541000c  swc1        $f1, 0xC($t2)
    ctx->pc = 0x210578u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 12), bits); }
    // 0x21057c: 0xe4830090  swc1        $f3, 0x90($a0)
    ctx->pc = 0x21057cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 144), bits); }
    // 0x210580: 0xe5070008  swc1        $f7, 0x8($t0)
    ctx->pc = 0x210580u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x210584: 0xe501000c  swc1        $f1, 0xC($t0)
    ctx->pc = 0x210584u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
    // 0x210588: 0xe5470008  swc1        $f7, 0x8($t2)
    ctx->pc = 0x210588u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 8), bits); }
    // 0x21058c: 0xe5400004  swc1        $f0, 0x4($t2)
    ctx->pc = 0x21058cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
    // 0x210590: 0xe5000004  swc1        $f0, 0x4($t0)
    ctx->pc = 0x210590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x210594: 0x3c013d61  lui         $at, 0x3D61
    ctx->pc = 0x210594u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15713 << 16));
    // 0x210598: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x210598u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
    // 0x21059c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x21059cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2105a0: 0x8dc240f4  lw          $v0, 0x40F4($t6)
    ctx->pc = 0x2105a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 16628)));
    // 0x2105a4: 0x3c013f54  lui         $at, 0x3F54
    ctx->pc = 0x2105a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16212 << 16));
    // 0x2105a8: 0x34217ae1  ori         $at, $at, 0x7AE1
    ctx->pc = 0x2105a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)31457);
    // 0x2105ac: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2105acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2105b0: 0x4c1818  mult        $v1, $v0, $t4
    ctx->pc = 0x2105b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2105b4: 0x3c013d8f  lui         $at, 0x3D8F
    ctx->pc = 0x2105b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15759 << 16));
    // 0x2105b8: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x2105b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x2105bc: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x2105bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x2105c0: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x2105c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2105c4: 0xe44500b0  swc1        $f5, 0xB0($v0)
    ctx->pc = 0x2105c4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 176), bits); }
    // 0x2105c8: 0xe4860230  swc1        $f6, 0x230($a0)
    ctx->pc = 0x2105c8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 560), bits); }
    // 0x2105cc: 0xe5600004  swc1        $f0, 0x4($t3)
    ctx->pc = 0x2105ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4), bits); }
    // 0x2105d0: 0xe561000c  swc1        $f1, 0xC($t3)
    ctx->pc = 0x2105d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 12), bits); }
    // 0x2105d4: 0xe4840118  swc1        $f4, 0x118($a0)
    ctx->pc = 0x2105d4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 280), bits); }
    // 0x2105d8: 0xe5640008  swc1        $f4, 0x8($t3)
    ctx->pc = 0x2105d8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 8), bits); }
    // 0x2105dc: 0x8dc240f4  lw          $v0, 0x40F4($t6)
    ctx->pc = 0x2105dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 16628)));
    // 0x2105e0: 0x4c1818  mult        $v1, $v0, $t4
    ctx->pc = 0x2105e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2105e4: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x2105e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2105e8: 0xe4490034  swc1        $f9, 0x34($v0)
    ctx->pc = 0x2105e8u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x2105ec: 0x8dc340f4  lw          $v1, 0x40F4($t6)
    ctx->pc = 0x2105ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 16628)));
    // 0x2105f0: 0xe5e2f6a0  swc1        $f2, -0x960($t7)
    ctx->pc = 0x2105f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 4294964896), bits); }
    // 0x2105f4: 0x6c1018  mult        $v0, $v1, $t4
    ctx->pc = 0x2105f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2105f8: 0xe5230080  swc1        $f3, 0x80($t1)
    ctx->pc = 0x2105f8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 128), bits); }
    // 0x2105fc: 0xe5a1000c  swc1        $f1, 0xC($t5)
    ctx->pc = 0x2105fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 12), bits); }
    // 0x210600: 0xe5a00004  swc1        $f0, 0x4($t5)
    ctx->pc = 0x210600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4), bits); }
    // 0x210604: 0xe5a80008  swc1        $f8, 0x8($t5)
    ctx->pc = 0x210604u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 8), bits); }
    // 0x210608: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x210608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x21060c: 0xe4670030  swc1        $f7, 0x30($v1)
    ctx->pc = 0x21060cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x210610: 0xe5200004  swc1        $f0, 0x4($t1)
    ctx->pc = 0x210610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
    // 0x210614: 0xe5280008  swc1        $f8, 0x8($t1)
    ctx->pc = 0x210614u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
    // 0x210618: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x210618u;
    {
        const bool branch_taken_0x210618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21061Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210618u;
        // 0x21061c: 0xe521000c  swc1        $f1, 0xC($t1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x210618) {
            ctx->pc = 0x2107D0u;
            goto label_2107d0;
        }
    }
    ctx->pc = 0x210620u;
label_210620:
    // 0x210620: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x210620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x210624: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x210624u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x210628: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x210628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x21062c: 0x2504f7a0  addiu       $a0, $t0, -0x860
    ctx->pc = 0x21062cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 4294965152));
    // 0x210630: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x210630u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210634: 0xe440f9e0  swc1        $f0, -0x620($v0)
    ctx->pc = 0x210634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50F9E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50F9E0u, _value); } while (0); }
    // 0x210638: 0x27a50680  addiu       $a1, $sp, 0x680
    ctx->pc = 0x210638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1664));
label_21063c:
    // 0x21063c: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x21063cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x210640: 0x78680010  lq          $t0, 0x10($v1)
    ctx->pc = 0x210640u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x210644: 0x7c860000  sq          $a2, 0x0($a0)
    ctx->pc = 0x210644u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 6));
    // 0x210648: 0x7c880010  sq          $t0, 0x10($a0)
    ctx->pc = 0x210648u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 8));
    // 0x21064c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x21064cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x210650: 0x1467fffa  bne         $v1, $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x210650u;
    {
        const bool branch_taken_0x210650 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x210654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210650u;
        // 0x210654: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210650) {
            ctx->pc = 0x21063Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21063c;
        }
    }
    ctx->pc = 0x210658u;
    // 0x210658: 0x25e3f6a0  addiu       $v1, $t7, -0x960
    ctx->pc = 0x210658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964896));
    // 0x21065c: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x21065cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_210660:
    // 0x210660: 0x784b0000  lq          $t3, 0x0($v0)
    ctx->pc = 0x210660u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x210664: 0x784c0010  lq          $t4, 0x10($v0)
    ctx->pc = 0x210664u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x210668: 0x7c6b0000  sq          $t3, 0x0($v1)
    ctx->pc = 0x210668u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 11));
    // 0x21066c: 0x7c6c0010  sq          $t4, 0x10($v1)
    ctx->pc = 0x21066cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 12));
    // 0x210670: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x210670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x210674: 0x1445fffa  bne         $v0, $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x210674u;
    {
        const bool branch_taken_0x210674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x210678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210674u;
        // 0x210678: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210674) {
            ctx->pc = 0x210660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210660;
        }
    }
    ctx->pc = 0x21067Cu;
    // 0x21067c: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x21067Cu;
    {
        const bool branch_taken_0x21067c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21067c) {
            ctx->pc = 0x2107D0u;
            goto label_2107d0;
        }
    }
    ctx->pc = 0x210684u;
label_210684:
    // 0x210684: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x210684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x210688: 0x14400051  bnez        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x210688u;
    {
        const bool branch_taken_0x210688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21068Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210688u;
        // 0x21068c: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x210688) {
            ctx->pc = 0x2107D0u;
            goto label_2107d0;
        }
    }
    ctx->pc = 0x210690u;
    // 0x210690: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x210690u;
    {
        const bool branch_taken_0x210690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x210694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210690u;
        // 0x210694: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210690) {
            ctx->pc = 0x2107D0u;
            goto label_2107d0;
        }
    }
    ctx->pc = 0x210698u;
    // 0x210698: 0x3c013e38  lui         $at, 0x3E38
    ctx->pc = 0x210698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15928 << 16));
    // 0x21069c: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x21069cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x2106a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2106a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2106a4: 0x3c013f38  lui         $at, 0x3F38
    ctx->pc = 0x2106a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16184 << 16));
    // 0x2106a8: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x2106a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x2106ac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2106acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2106b0: 0x24a2f7b0  addiu       $v0, $a1, -0x850
    ctx->pc = 0x2106b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965168));
    // 0x2106b4: 0xe4a0f7b0  swc1        $f0, -0x850($a1)
    ctx->pc = 0x2106b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294965168), bits); }
    // 0x2106b8: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x2106b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x2106bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2106bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2106c0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2106c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2106c4: 0x2446fff0  addiu       $a2, $v0, -0x10
    ctx->pc = 0x2106c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x2106c8: 0x3c01bcf5  lui         $at, 0xBCF5
    ctx->pc = 0x2106c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48373 << 16));
    // 0x2106cc: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x2106ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x2106d0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2106d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2106d4: 0x24450100  addiu       $a1, $v0, 0x100
    ctx->pc = 0x2106d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x2106d8: 0xe4410120  swc1        $f1, 0x120($v0)
    ctx->pc = 0x2106d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x2106dc: 0x24480220  addiu       $t0, $v0, 0x220
    ctx->pc = 0x2106dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 544));
    // 0x2106e0: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x2106e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2106e4: 0x24090120  addiu       $t1, $zero, 0x120
    ctx->pc = 0x2106e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    // 0x2106e8: 0xe4840008  swc1        $f4, 0x8($a0)
    ctx->pc = 0x2106e8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2106ec: 0x25e3f6a0  addiu       $v1, $t7, -0x960
    ctx->pc = 0x2106ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964896));
    // 0x2106f0: 0xe482000c  swc1        $f2, 0xC($a0)
    ctx->pc = 0x2106f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2106f4: 0x24670080  addiu       $a3, $v1, 0x80
    ctx->pc = 0x2106f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x2106f8: 0xe4440008  swc1        $f4, 0x8($v0)
    ctx->pc = 0x2106f8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2106fc: 0xe4430004  swc1        $f3, 0x4($v0)
    ctx->pc = 0x2106fcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x210700: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x210700u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x210704: 0xe4830004  swc1        $f3, 0x4($a0)
    ctx->pc = 0x210704u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x210708: 0x3c013ee1  lui         $at, 0x3EE1
    ctx->pc = 0x210708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16097 << 16));
    // 0x21070c: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x21070cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
    // 0x210710: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x210710u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x210714: 0x8dc240f4  lw          $v0, 0x40F4($t6)
    ctx->pc = 0x210714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 16628)));
    // 0x210718: 0x3c013d38  lui         $at, 0x3D38
    ctx->pc = 0x210718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15672 << 16));
    // 0x21071c: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x21071cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x210720: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x210720u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x210724: 0x491018  mult        $v0, $v0, $t1
    ctx->pc = 0x210724u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x210728: 0x3c013f5c  lui         $at, 0x3F5C
    ctx->pc = 0x210728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16220 << 16));
    // 0x21072c: 0x342128f6  ori         $at, $at, 0x28F6
    ctx->pc = 0x21072cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10486);
    // 0x210730: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x210730u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x210734: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x210734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x210738: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x210738u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x21073c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x21073cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x210740: 0x3c01be4c  lui         $at, 0xBE4C
    ctx->pc = 0x210740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48716 << 16));
    // 0x210744: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x210744u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x210748: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x210748u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x21074c: 0x3c013d99  lui         $at, 0x3D99
    ctx->pc = 0x21074cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15769 << 16));
    // 0x210750: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x210750u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x210754: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x210754u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x210758: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x210758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x21075c: 0x3c013e05  lui         $at, 0x3E05
    ctx->pc = 0x21075cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15877 << 16));
    // 0x210760: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x210760u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
    // 0x210764: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x210764u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x210768: 0xe4460070  swc1        $f6, 0x70($v0)
    ctx->pc = 0x210768u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
    // 0x21076c: 0x3c01bc23  lui         $at, 0xBC23
    ctx->pc = 0x21076cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48163 << 16));
    // 0x210770: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x210770u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x210774: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x210774u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x210778: 0x8dc240f4  lw          $v0, 0x40F4($t6)
    ctx->pc = 0x210778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 16628)));
    // 0x21077c: 0xe5e0f6a0  swc1        $f0, -0x960($t7)
    ctx->pc = 0x21077cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 4294964896), bits); }
    // 0x210780: 0x492018  mult        $a0, $v0, $t1
    ctx->pc = 0x210780u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x210784: 0xe4610070  swc1        $f1, 0x70($v1)
    ctx->pc = 0x210784u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 112), bits); }
    // 0x210788: 0xe46400f0  swc1        $f4, 0xF0($v1)
    ctx->pc = 0x210788u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 240), bits); }
    // 0x21078c: 0xe4670080  swc1        $f7, 0x80($v1)
    ctx->pc = 0x21078cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 128), bits); }
    // 0x210790: 0xe4e80008  swc1        $f8, 0x8($a3)
    ctx->pc = 0x210790u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x210794: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x210794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x210798: 0xe44600b0  swc1        $f6, 0xB0($v0)
    ctx->pc = 0x210798u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 176), bits); }
    // 0x21079c: 0xe4c50110  swc1        $f5, 0x110($a2)
    ctx->pc = 0x21079cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 272), bits); }
    // 0x2107a0: 0xe4a2000c  swc1        $f2, 0xC($a1)
    ctx->pc = 0x2107a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x2107a4: 0xe4e2000c  swc1        $f2, 0xC($a3)
    ctx->pc = 0x2107a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x2107a8: 0xe4c70230  swc1        $f7, 0x230($a2)
    ctx->pc = 0x2107a8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 560), bits); }
    // 0x2107ac: 0xe502000c  swc1        $f2, 0xC($t0)
    ctx->pc = 0x2107acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
    // 0x2107b0: 0xe4a30004  swc1        $f3, 0x4($a1)
    ctx->pc = 0x2107b0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x2107b4: 0xe4a90008  swc1        $f9, 0x8($a1)
    ctx->pc = 0x2107b4u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x2107b8: 0xe4630004  swc1        $f3, 0x4($v1)
    ctx->pc = 0x2107b8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2107bc: 0xe4680008  swc1        $f8, 0x8($v1)
    ctx->pc = 0x2107bcu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2107c0: 0xe462000c  swc1        $f2, 0xC($v1)
    ctx->pc = 0x2107c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2107c4: 0xe4e30004  swc1        $f3, 0x4($a3)
    ctx->pc = 0x2107c4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x2107c8: 0xe5030004  swc1        $f3, 0x4($t0)
    ctx->pc = 0x2107c8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x2107cc: 0xe5090008  swc1        $f9, 0x8($t0)
    ctx->pc = 0x2107ccu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
label_2107d0:
    // 0x2107d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2107D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2107D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2107D0u;
        // 0x2107d4: 0x27bd0680  addiu       $sp, $sp, 0x680 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1664));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2107D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2107D8u;
}
