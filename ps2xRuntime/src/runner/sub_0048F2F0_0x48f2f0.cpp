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

// Function: sub_0048F2F0
// Address: 0x48f2f0 - 0x48fd00
void sub_0048F2F0_0x48f2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048F2F0_0x48f2f0");
#endif

    switch (ctx->pc) {
        case 0x48f358u: goto label_48f358;
        case 0x48f364u: goto label_48f364;
        case 0x48f378u: goto label_48f378;
        case 0x48f428u: goto label_48f428;
        case 0x48f438u: goto label_48f438;
        case 0x48f4c4u: goto label_48f4c4;
        case 0x48f640u: goto label_48f640;
        case 0x48f9a4u: goto label_48f9a4;
        case 0x48fa7cu: goto label_48fa7c;
        case 0x48fb6cu: goto label_48fb6c;
        case 0x48fc44u: goto label_48fc44;
        default: break;
    }

    ctx->pc = 0x48f2f0u;

    // 0x48f2f0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x48f2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x48f2f4: 0x8f8686c0  lw          $a2, -0x7940($gp)
    ctx->pc = 0x48f2f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936256)));
    // 0x48f2f8: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x48f2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x48f2fc: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x48f2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x48f300: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x48f300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x48f304: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x48f304u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48f308: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x48f308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x48f30c: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x48f30cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48f310: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x48f310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x48f314: 0x8f828a24  lw          $v0, -0x75DC($gp)
    ctx->pc = 0x48f314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937124)));
    // 0x48f318: 0x8e450060  lw          $a1, 0x60($s2)
    ctx->pc = 0x48f318u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x48f31c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x48f31cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x48f320: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x48f320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x48f324: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x48f324u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x48f328: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x48F328u;
    {
        const bool branch_taken_0x48f328 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x48F32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F328u;
        // 0x48f32c: 0x2428821  addu        $s1, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f328) {
            ctx->pc = 0x48F344u;
            goto label_48f344;
        }
    }
    ctx->pc = 0x48F330u;
    // 0x48f330: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x48f330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x48f334: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x48f334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x48f338: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x48f338u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x48f33c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x48F33Cu;
    {
        const bool branch_taken_0x48f33c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48f33c) {
            ctx->pc = 0x48F370u;
            goto label_48f370;
        }
    }
    ctx->pc = 0x48F344u;
label_48f344:
    // 0x48f344: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x48f344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48f348: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x48f348u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x48f34c: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x48f34cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x48f350: 0xc11eff2  jal         func_47BFC8
    ctx->pc = 0x48F350u;
    SET_GPR_U32(ctx, 31, 0x48F358u);
    ctx->pc = 0x48F354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48F350u;
    // 0x48f354: 0x34840010  ori         $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x48F350u, 0x48F358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F358u;
label_48f358:
    // 0x48f358: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x48f358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
    // 0x48f35c: 0xc11f024  jal         func_47C090
    ctx->pc = 0x48F35Cu;
    SET_GPR_U32(ctx, 31, 0x48F364u);
    ctx->pc = 0x48F360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48F35Cu;
    // 0x48f360: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x48F35Cu, 0x48F364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F364u;
label_48f364:
    // 0x48f364: 0x1000025e  b           . + 4 + (0x25E << 2)
    ctx->pc = 0x48F364u;
    {
        const bool branch_taken_0x48f364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F364u;
        // 0x48f368: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f364) {
            ctx->pc = 0x48FCE0u;
            goto label_48fce0;
        }
    }
    ctx->pc = 0x48F36Cu;
    // 0x48f36c: 0x0  nop
    ctx->pc = 0x48f36cu;
    // NOP
label_48f370:
    // 0x48f370: 0xc123812  jal         func_48E048
    ctx->pc = 0x48F370u;
    SET_GPR_U32(ctx, 31, 0x48F378u);
    ctx->pc = 0x48E048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48E048u, 0x48F370u, 0x48F378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F378u;
label_48f378:
    // 0x48f378: 0x8f8286e0  lw          $v0, -0x7920($gp)
    ctx->pc = 0x48f378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936288)));
    // 0x48f37c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x48F37Cu;
    {
        const bool branch_taken_0x48f37c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48f37c) {
            ctx->pc = 0x48F380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x48F37Cu;
            // 0x48f380: 0x8e440060  lw          $a0, 0x60($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x48F390u;
            goto label_48f390;
        }
    }
    ctx->pc = 0x48F384u;
    // 0x48f384: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x48f384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48f388: 0xaf8286e0  sw          $v0, -0x7920($gp)
    ctx->pc = 0x48f388u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936288), GPR_U32(ctx, 2));
    // 0x48f38c: 0x8e440060  lw          $a0, 0x60($s2)
    ctx->pc = 0x48f38cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_48f390:
    // 0x48f390: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x48f390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x48f394: 0x90820020  lbu         $v0, 0x20($a0)
    ctx->pc = 0x48f394u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x48f398: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x48f398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x48f39c: 0x14430015  bne         $v0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x48F39Cu;
    {
        const bool branch_taken_0x48f39c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x48F3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F39Cu;
        // 0x48f3a0: 0x8f828744  lw          $v0, -0x78BC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f39c) {
            ctx->pc = 0x48F3F4u;
            goto label_48f3f4;
        }
    }
    ctx->pc = 0x48F3A4u;
    // 0x48f3a4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x48f3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x48f3a8: 0x8f838a20  lw          $v1, -0x75E0($gp)
    ctx->pc = 0x48f3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937120)));
    // 0x48f3ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x48f3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x48f3b0: 0x90440017  lbu         $a0, 0x17($v0)
    ctx->pc = 0x48f3b0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 23)));
    // 0x48f3b4: 0x54800003  bnel        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x48F3B4u;
    {
        const bool branch_taken_0x48f3b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x48f3b4) {
            ctx->pc = 0x48F3B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x48F3B4u;
            // 0x48f3b8: 0x8c430008  lw          $v1, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x48F3C4u;
            goto label_48f3c4;
        }
    }
    ctx->pc = 0x48F3BCu;
    // 0x48f3bc: 0x10000248  b           . + 4 + (0x248 << 2)
    ctx->pc = 0x48F3BCu;
    {
        const bool branch_taken_0x48f3bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F3BCu;
        // 0x48f3c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f3bc) {
            ctx->pc = 0x48FCE0u;
            goto label_48fce0;
        }
    }
    ctx->pc = 0x48F3C4u;
label_48f3c4:
    // 0x48f3c4: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x48f3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x48f3c8: 0x3c063f00  lui         $a2, 0x3F00
    ctx->pc = 0x48f3c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16128 << 16));
    // 0x48f3cc: 0x31142  srl         $v0, $v1, 5
    ctx->pc = 0x48f3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x48f3d0: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x48f3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x48f3d4: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x48f3d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x48f3d8: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x48f3d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
    // 0x48f3dc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x48f3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x48f3e0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x48f3e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x48f3e4: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x48f3e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x48f3e8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x48f3e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x48f3ec: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x48F3ECu;
    {
        const bool branch_taken_0x48f3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F3ECu;
        // 0x48f3f0: 0xff8286f0  sd          $v0, -0x7910($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294936304), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f3ec) {
            ctx->pc = 0x48F414u;
            goto label_48f414;
        }
    }
    ctx->pc = 0x48F3F4u;
label_48f3f4:
    // 0x48f3f4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x48f3f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x48f3f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x48F3F8u;
    {
        const bool branch_taken_0x48f3f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F3F8u;
        // 0x48f3fc: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f3f8) {
            ctx->pc = 0x48F408u;
            goto label_48f408;
        }
    }
    ctx->pc = 0x48F400u;
    // 0x48f400: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x48F400u;
    {
        const bool branch_taken_0x48f400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F400u;
        // 0x48f404: 0xdc43f670  ld          $v1, -0x990($v0) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 4294964848)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f400) {
            ctx->pc = 0x48F410u;
            goto label_48f410;
        }
    }
    ctx->pc = 0x48F408u;
label_48f408:
    // 0x48f408: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x48f408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x48f40c: 0xdc43f7e0  ld          $v1, -0x820($v0)
    ctx->pc = 0x48f40cu;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x70F7E0u));
label_48f410:
    // 0x48f410: 0xff8386f0  sd          $v1, -0x7910($gp)
    ctx->pc = 0x48f410u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936304), GPR_U64(ctx, 3));
label_48f414:
    // 0x48f414: 0x8f828764  lw          $v0, -0x789C($gp)
    ctx->pc = 0x48f414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936420)));
    // 0x48f418: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x48F418u;
    {
        const bool branch_taken_0x48f418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48f418) {
            ctx->pc = 0x48F42Cu;
            goto label_48f42c;
        }
    }
    ctx->pc = 0x48F420u;
    // 0x48f420: 0xc129112  jal         func_4A4448
    ctx->pc = 0x48F420u;
    SET_GPR_U32(ctx, 31, 0x48F428u);
    ctx->pc = 0x4A4448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A4448u, 0x48F420u, 0x48F428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F428u;
label_48f428:
    // 0x48f428: 0xaf808764  sw          $zero, -0x789C($gp)
    ctx->pc = 0x48f428u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936420), GPR_U32(ctx, 0));
label_48f42c:
    // 0x48f42c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x48f42cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x48f430: 0xc1233da  jal         func_48CF68
    ctx->pc = 0x48F430u;
    SET_GPR_U32(ctx, 31, 0x48F438u);
    ctx->pc = 0x48F434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48F430u;
    // 0x48f434: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CF68u, 0x48F430u, 0x48F438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F438u;
label_48f438:
    // 0x48f438: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x48f438u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x48f43c: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x48f43cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x48f440: 0x34e78009  ori         $a3, $a3, 0x8009
    ctx->pc = 0x48f440u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32777);
    // 0x48f444: 0x240a000e  addiu       $t2, $zero, 0xE
    ctx->pc = 0x48f444u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x48f448: 0x71472389  pcpyld      $a0, $t2, $a3
    ctx->pc = 0x48f448u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 10), GPR_VEC(ctx, 7)));
    // 0x48f44c: 0x8f82898c  lw          $v0, -0x7674($gp)
    ctx->pc = 0x48f44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
    // 0x48f450: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x48f450u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x48f454: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x48f454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x48f458: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x48f458u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x48f45c: 0x8e450060  lw          $a1, 0x60($s2)
    ctx->pc = 0x48f45cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x48f460: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x48f460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x48f464: 0x90a20020  lbu         $v0, 0x20($a1)
    ctx->pc = 0x48f464u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x48f468: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x48f468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x48f46c: 0x1443000e  bne         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x48F46Cu;
    {
        const bool branch_taken_0x48f46c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x48F470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F46Cu;
        // 0x48f470: 0xdf828748  ld          $v0, -0x78B8($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936392)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f46c) {
            ctx->pc = 0x48F4A8u;
            goto label_48f4a8;
        }
    }
    ctx->pc = 0x48F474u;
    // 0x48f474: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x48f474u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x48f478: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x48f478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x48f47c: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x48f47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x48f480: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x48f480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x48f484: 0x2107b  dsra        $v0, $v0, 1
    ctx->pc = 0x48f484u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 1);
    // 0x48f488: 0x62102f  dsubu       $v0, $v1, $v0
    ctx->pc = 0x48f488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
    // 0x48f48c: 0x4207b  dsra        $a0, $a0, 1
    ctx->pc = 0x48f48cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> 1);
    // 0x48f490: 0x64182f  dsubu       $v1, $v1, $a0
    ctx->pc = 0x48f490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 4));
    // 0x48f494: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x48f494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x48f498: 0x31938  dsll        $v1, $v1, 4
    ctx->pc = 0x48f498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 4);
    // 0x48f49c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x48f49cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x48f4a0: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x48F4A0u;
    {
        const bool branch_taken_0x48f4a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F4A0u;
        // 0x48f4a4: 0xff838700  sd          $v1, -0x7900($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294936320), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f4a0) {
            ctx->pc = 0x48F50Cu;
            goto label_48f50c;
        }
    }
    ctx->pc = 0x48F4A8u;
label_48f4a8:
    // 0x48f4a8: 0xdf838750  ld          $v1, -0x78B0($gp)
    ctx->pc = 0x48f4a8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294936400)));
    // 0x48f4ac: 0x21138  dsll        $v0, $v0, 4
    ctx->pc = 0x48f4acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 4);
    // 0x48f4b0: 0x93848998  lbu         $a0, -0x7668($gp)
    ctx->pc = 0x48f4b0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936984)));
    // 0x48f4b4: 0x3193c  dsll32      $v1, $v1, 4
    ctx->pc = 0x48f4b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 4));
    // 0x48f4b8: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x48F4B8u;
    {
        const bool branch_taken_0x48f4b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F4B8u;
        // 0x48f4bc: 0x432825  or          $a1, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f4b8) {
            ctx->pc = 0x48F508u;
            goto label_48f508;
        }
    }
    ctx->pc = 0x48F4C0u;
    // 0x48f4c0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x48f4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_48f4c4:
    // 0x48f4c4: 0x42000039  di
    ctx->pc = 0x48f4c4u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x48f4c8: 0x40f  sync.p
    ctx->pc = 0x48f4c8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x48f4cc: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x48f4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x48f4d0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x48f4d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x48f4d4: 0x0  nop
    ctx->pc = 0x48f4d4u;
    // NOP
    // 0x48f4d8: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x48F4D8u;
    {
        const bool branch_taken_0x48f4d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x48f4d8) {
            ctx->pc = 0x48F4C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48f4c4;
        }
    }
    ctx->pc = 0x48F4E0u;
    // 0x48f4e0: 0x9383899a  lbu         $v1, -0x7666($gp)
    ctx->pc = 0x48f4e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936986)));
    // 0x48f4e4: 0x93828999  lbu         $v0, -0x7667($gp)
    ctx->pc = 0x48f4e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936985)));
    // 0x48f4e8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x48f4e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x48f4ec: 0x9384899b  lbu         $a0, -0x7665($gp)
    ctx->pc = 0x48f4ecu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936987)));
    // 0x48f4f0: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x48f4f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x48f4f4: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x48f4f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x48f4f8: 0x42000038  ei
    ctx->pc = 0x48f4f8u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x48f4fc: 0x210fc  dsll32      $v0, $v0, 3
    ctx->pc = 0x48f4fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 3));
    // 0x48f500: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x48f500u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x48f504: 0x0  nop
    ctx->pc = 0x48f504u;
    // NOP
label_48f508:
    // 0x48f508: 0xff858700  sd          $a1, -0x7900($gp)
    ctx->pc = 0x48f508u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936320), GPR_U64(ctx, 5));
label_48f50c:
    // 0x48f50c: 0x240a0018  addiu       $t2, $zero, 0x18
    ctx->pc = 0x48f50cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x48f510: 0xdf828700  ld          $v0, -0x7900($gp)
    ctx->pc = 0x48f510u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936320)));
    // 0x48f514: 0x71422389  pcpyld      $a0, $t2, $v0
    ctx->pc = 0x48f514u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 10), GPR_VEC(ctx, 2)));
    // 0x48f518: 0x8f83898c  lw          $v1, -0x7674($gp)
    ctx->pc = 0x48f518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
    // 0x48f51c: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x48f51cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x48f520: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x48f520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x48f524: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x48f524u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
    // 0x48f528: 0x240a0019  addiu       $t2, $zero, 0x19
    ctx->pc = 0x48f528u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x48f52c: 0xdf828700  ld          $v0, -0x7900($gp)
    ctx->pc = 0x48f52cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936320)));
    // 0x48f530: 0x71422389  pcpyld      $a0, $t2, $v0
    ctx->pc = 0x48f530u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 10), GPR_VEC(ctx, 2)));
    // 0x48f534: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x48f534u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x48f538: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x48f538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x48f53c: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x48f53cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x48f540: 0x8e480060  lw          $t0, 0x60($s2)
    ctx->pc = 0x48f540u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x48f544: 0x240a0040  addiu       $t2, $zero, 0x40
    ctx->pc = 0x48f544u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x48f548: 0x9507001c  lhu         $a3, 0x1C($t0)
    ctx->pc = 0x48f548u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 28)));
    // 0x48f54c: 0x9509001e  lhu         $t1, 0x1E($t0)
    ctx->pc = 0x48f54cu;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 30)));
    // 0x48f550: 0x72400  sll         $a0, $a3, 16
    ctx->pc = 0x48f550u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x48f554: 0x8d02000c  lw          $v0, 0xC($t0)
    ctx->pc = 0x48f554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x48f558: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x48f558u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x48f55c: 0x93400  sll         $a2, $t1, 16
    ctx->pc = 0x48f55cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x48f560: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x48f560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x48f564: 0x8d050010  lw          $a1, 0x10($t0)
    ctx->pc = 0x48f564u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x48f568: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x48f568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x48f56c: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x48f56cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x48f570: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x48f570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x48f574: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x48f574u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x48f578: 0x30e707ff  andi        $a3, $a3, 0x7FF
    ctx->pc = 0x48f578u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2047);
    // 0x48f57c: 0x312907ff  andi        $t1, $t1, 0x7FF
    ctx->pc = 0x48f57cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)2047);
    // 0x48f580: 0x473825  or          $a3, $v0, $a3
    ctx->pc = 0x48f580u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x48f584: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x48f584u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x48f588: 0x64a5ffff  daddiu      $a1, $a1, -0x1
    ctx->pc = 0x48f588u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
    // 0x48f58c: 0xe93825  or          $a3, $a3, $t1
    ctx->pc = 0x48f58cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 9));
    // 0x48f590: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x48f590u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x48f594: 0xe53825  or          $a3, $a3, $a1
    ctx->pc = 0x48f594u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
    // 0x48f598: 0x71472389  pcpyld      $a0, $t2, $a3
    ctx->pc = 0x48f598u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 10), GPR_VEC(ctx, 7)));
    // 0x48f59c: 0x7c640010  sq          $a0, 0x10($v1)
    ctx->pc = 0x48f59cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 4));
    // 0x48f5a0: 0x24620020  addiu       $v0, $v1, 0x20
    ctx->pc = 0x48f5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x48f5a4: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x48f5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x48f5a8: 0x240a0041  addiu       $t2, $zero, 0x41
    ctx->pc = 0x48f5a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x48f5ac: 0x71472389  pcpyld      $a0, $t2, $a3
    ctx->pc = 0x48f5acu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 10), GPR_VEC(ctx, 7)));
    // 0x48f5b0: 0x7c640020  sq          $a0, 0x20($v1)
    ctx->pc = 0x48f5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 4));
    // 0x48f5b4: 0x24620030  addiu       $v0, $v1, 0x30
    ctx->pc = 0x48f5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x48f5b8: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x48f5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x48f5bc: 0x240a0047  addiu       $t2, $zero, 0x47
    ctx->pc = 0x48f5bcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x48f5c0: 0xdf8286f8  ld          $v0, -0x7908($gp)
    ctx->pc = 0x48f5c0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936312)));
    // 0x48f5c4: 0x71422389  pcpyld      $a0, $t2, $v0
    ctx->pc = 0x48f5c4u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 10), GPR_VEC(ctx, 2)));
    // 0x48f5c8: 0x7c640030  sq          $a0, 0x30($v1)
    ctx->pc = 0x48f5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 4));
    // 0x48f5cc: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x48f5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x48f5d0: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x48f5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x48f5d4: 0x240a0048  addiu       $t2, $zero, 0x48
    ctx->pc = 0x48f5d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x48f5d8: 0xdf8286f8  ld          $v0, -0x7908($gp)
    ctx->pc = 0x48f5d8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936312)));
    // 0x48f5dc: 0x71422389  pcpyld      $a0, $t2, $v0
    ctx->pc = 0x48f5dcu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 10), GPR_VEC(ctx, 2)));
    // 0x48f5e0: 0x7c640040  sq          $a0, 0x40($v1)
    ctx->pc = 0x48f5e0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 64), GPR_VEC(ctx, 4));
    // 0x48f5e4: 0x24620050  addiu       $v0, $v1, 0x50
    ctx->pc = 0x48f5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x48f5e8: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x48f5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x48f5ec: 0x240a0045  addiu       $t2, $zero, 0x45
    ctx->pc = 0x48f5ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x48f5f0: 0x8e440060  lw          $a0, 0x60($s2)
    ctx->pc = 0x48f5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x48f5f4: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x48f5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x48f5f8: 0x2c420018  sltiu       $v0, $v0, 0x18
    ctx->pc = 0x48f5f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x48f5fc: 0x71422389  pcpyld      $a0, $t2, $v0
    ctx->pc = 0x48f5fcu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 10), GPR_VEC(ctx, 2)));
    // 0x48f600: 0x7c640050  sq          $a0, 0x50($v1)
    ctx->pc = 0x48f600u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 80), GPR_VEC(ctx, 4));
    // 0x48f604: 0x24620060  addiu       $v0, $v1, 0x60
    ctx->pc = 0x48f604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x48f608: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x48f608u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x48f60c: 0xdf8786f0  ld          $a3, -0x7910($gp)
    ctx->pc = 0x48f60cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 28), 4294936304)));
    // 0x48f610: 0x240a004c  addiu       $t2, $zero, 0x4C
    ctx->pc = 0x48f610u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x48f614: 0x71472389  pcpyld      $a0, $t2, $a3
    ctx->pc = 0x48f614u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 10), GPR_VEC(ctx, 7)));
    // 0x48f618: 0x7c640060  sq          $a0, 0x60($v1)
    ctx->pc = 0x48f618u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 96), GPR_VEC(ctx, 4));
    // 0x48f61c: 0x24620070  addiu       $v0, $v1, 0x70
    ctx->pc = 0x48f61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x48f620: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x48f620u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x48f624: 0x240a004d  addiu       $t2, $zero, 0x4D
    ctx->pc = 0x48f624u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x48f628: 0x71472389  pcpyld      $a0, $t2, $a3
    ctx->pc = 0x48f628u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 10), GPR_VEC(ctx, 7)));
    // 0x48f62c: 0x7c640070  sq          $a0, 0x70($v1)
    ctx->pc = 0x48f62cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 112), GPR_VEC(ctx, 4));
    // 0x48f630: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x48f630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x48f634: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x48f634u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
    // 0x48f638: 0xc128696  jal         func_4A1A58
    ctx->pc = 0x48F638u;
    SET_GPR_U32(ctx, 31, 0x48F640u);
    ctx->pc = 0x48F63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48F638u;
    // 0x48f63c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A1A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A1A58u, 0x48F638u, 0x48F640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F640u;
label_48f640:
    // 0x48f640: 0x26300060  addiu       $s0, $s1, 0x60
    ctx->pc = 0x48f640u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x48f644: 0x8e440060  lw          $a0, 0x60($s2)
    ctx->pc = 0x48f644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x48f648: 0xc78982d0  lwc1        $f9, -0x7D30($gp)
    ctx->pc = 0x48f648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x48f64c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x48f64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x48f650: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x48f650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x48f654: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x48f654u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x48f658: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x48f658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x48f65c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x48f65cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x48f660: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x48f660u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x48f664: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x48f664u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x48f668: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x48f668u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x48f66c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x48f66cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x48f670: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x48f670u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x48f674: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x48f674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x48f678: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x48f678u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x48f67c: 0x46004a81  sub.s       $f10, $f9, $f0
    ctx->pc = 0x48f67cu;
    ctx->f[10] = FPU_SUB_S(ctx->f[9], ctx->f[0]);
    // 0x48f680: 0x46014a41  sub.s       $f9, $f9, $f1
    ctx->pc = 0x48f680u;
    ctx->f[9] = FPU_SUB_S(ctx->f[9], ctx->f[1]);
    // 0x48f684: 0x46005283  div.s       $f10, $f10, $f0
    ctx->pc = 0x48f684u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[10] = FPU_DIV_S(ctx->f[10], ctx->f[0]); }
    // 0x48f688: 0x46014a43  div.s       $f9, $f9, $f1
    ctx->pc = 0x48f688u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[9] = FPU_DIV_S(ctx->f[9], ctx->f[1]); }
    // 0x48f68c: 0x46035281  sub.s       $f10, $f10, $f3
    ctx->pc = 0x48f68cu;
    ctx->f[10] = FPU_SUB_S(ctx->f[10], ctx->f[3]);
    // 0x48f690: 0x46034a41  sub.s       $f9, $f9, $f3
    ctx->pc = 0x48f690u;
    ctx->f[9] = FPU_SUB_S(ctx->f[9], ctx->f[3]);
    // 0x48f694: 0x46025282  mul.s       $f10, $f10, $f2
    ctx->pc = 0x48f694u;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[2]);
    // 0x48f698: 0x46024a42  mul.s       $f9, $f9, $f2
    ctx->pc = 0x48f698u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[2]);
    // 0x48f69c: 0xc6440130  lwc1        $f4, 0x130($s2)
    ctx->pc = 0x48f69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x48f6a0: 0xc647013c  lwc1        $f7, 0x13C($s2)
    ctx->pc = 0x48f6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x48f6a4: 0xc6450134  lwc1        $f5, 0x134($s2)
    ctx->pc = 0x48f6a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x48f6a8: 0xc6480140  lwc1        $f8, 0x140($s2)
    ctx->pc = 0x48f6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x48f6ac: 0x46072101  sub.s       $f4, $f4, $f7
    ctx->pc = 0x48f6acu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[7]);
    // 0x48f6b0: 0xc6460138  lwc1        $f6, 0x138($s2)
    ctx->pc = 0x48f6b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x48f6b4: 0xc6430144  lwc1        $f3, 0x144($s2)
    ctx->pc = 0x48f6b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x48f6b8: 0x46082941  sub.s       $f5, $f5, $f8
    ctx->pc = 0x48f6b8u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[8]);
    // 0x48f6bc: 0x46033181  sub.s       $f6, $f6, $f3
    ctx->pc = 0x48f6bcu;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[3]);
    // 0x48f6c0: 0xc6400148  lwc1        $f0, 0x148($s2)
    ctx->pc = 0x48f6c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48f6c4: 0xc642014c  lwc1        $f2, 0x14C($s2)
    ctx->pc = 0x48f6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x48f6c8: 0x46070001  sub.s       $f0, $f0, $f7
    ctx->pc = 0x48f6c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[7]);
    // 0x48f6cc: 0xc6410150  lwc1        $f1, 0x150($s2)
    ctx->pc = 0x48f6ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x48f6d0: 0x46081081  sub.s       $f2, $f2, $f8
    ctx->pc = 0x48f6d0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[8]);
    // 0x48f6d4: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x48f6d4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x48f6d8: 0x46092102  mul.s       $f4, $f4, $f9
    ctx->pc = 0x48f6d8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[9]);
    // 0x48f6dc: 0x46092942  mul.s       $f5, $f5, $f9
    ctx->pc = 0x48f6dcu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[9]);
    // 0x48f6e0: 0x46093182  mul.s       $f6, $f6, $f9
    ctx->pc = 0x48f6e0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[9]);
    // 0x48f6e4: 0x460a0002  mul.s       $f0, $f0, $f10
    ctx->pc = 0x48f6e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
    // 0x48f6e8: 0x460a1082  mul.s       $f2, $f2, $f10
    ctx->pc = 0x48f6e8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[10]);
    // 0x48f6ec: 0x460a0842  mul.s       $f1, $f1, $f10
    ctx->pc = 0x48f6ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[10]);
    // 0x48f6f0: 0x460020c0  add.s       $f3, $f4, $f0
    ctx->pc = 0x48f6f0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x48f6f4: 0x460229c0  add.s       $f7, $f5, $f2
    ctx->pc = 0x48f6f4u;
    ctx->f[7] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
    // 0x48f6f8: 0x46013200  add.s       $f8, $f6, $f1
    ctx->pc = 0x48f6f8u;
    ctx->f[8] = FPU_ADD_S(ctx->f[6], ctx->f[1]);
    // 0x48f6fc: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x48f6fcu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x48f700: 0x46022941  sub.s       $f5, $f5, $f2
    ctx->pc = 0x48f700u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
    // 0x48f704: 0x46013181  sub.s       $f6, $f6, $f1
    ctx->pc = 0x48f704u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[1]);
    // 0x48f708: 0xc6400124  lwc1        $f0, 0x124($s2)
    ctx->pc = 0x48f708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48f70c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x48f70cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x48f710: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x48f710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x48f714: 0xc6410128  lwc1        $f1, 0x128($s2)
    ctx->pc = 0x48f714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x48f718: 0x46070840  add.s       $f1, $f1, $f7
    ctx->pc = 0x48f718u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
    // 0x48f71c: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x48f71cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x48f720: 0xc640012c  lwc1        $f0, 0x12C($s2)
    ctx->pc = 0x48f720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48f724: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x48f724u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x48f728: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x48f728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x48f72c: 0xc6410130  lwc1        $f1, 0x130($s2)
    ctx->pc = 0x48f72cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x48f730: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x48f730u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x48f734: 0xe621000c  swc1        $f1, 0xC($s1)
    ctx->pc = 0x48f734u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x48f738: 0xc6400134  lwc1        $f0, 0x134($s2)
    ctx->pc = 0x48f738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48f73c: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x48f73cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x48f740: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x48f740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x48f744: 0xc6410138  lwc1        $f1, 0x138($s2)
    ctx->pc = 0x48f744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x48f748: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x48f748u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x48f74c: 0xe6210014  swc1        $f1, 0x14($s1)
    ctx->pc = 0x48f74cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x48f750: 0xc640013c  lwc1        $f0, 0x13C($s2)
    ctx->pc = 0x48f750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48f754: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x48f754u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x48f758: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x48f758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x48f75c: 0xc6410140  lwc1        $f1, 0x140($s2)
    ctx->pc = 0x48f75cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x48f760: 0x46070841  sub.s       $f1, $f1, $f7
    ctx->pc = 0x48f760u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[7]);
    // 0x48f764: 0xe621001c  swc1        $f1, 0x1C($s1)
    ctx->pc = 0x48f764u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x48f768: 0xc6400144  lwc1        $f0, 0x144($s2)
    ctx->pc = 0x48f768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48f76c: 0x46080001  sub.s       $f0, $f0, $f8
    ctx->pc = 0x48f76cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[8]);
    // 0x48f770: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x48f770u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x48f774: 0xc6410148  lwc1        $f1, 0x148($s2)
    ctx->pc = 0x48f774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x48f778: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x48f778u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x48f77c: 0xe6210024  swc1        $f1, 0x24($s1)
    ctx->pc = 0x48f77cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x48f780: 0xc640014c  lwc1        $f0, 0x14C($s2)
    ctx->pc = 0x48f780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48f784: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x48f784u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x48f788: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x48f788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
    // 0x48f78c: 0xc6410150  lwc1        $f1, 0x150($s2)
    ctx->pc = 0x48f78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x48f790: 0x46060841  sub.s       $f1, $f1, $f6
    ctx->pc = 0x48f790u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[6]);
    // 0x48f794: 0xe621002c  swc1        $f1, 0x2C($s1)
    ctx->pc = 0x48f794u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
    // 0x48f798: 0xc6440160  lwc1        $f4, 0x160($s2)
    ctx->pc = 0x48f798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x48f79c: 0xc647016c  lwc1        $f7, 0x16C($s2)
    ctx->pc = 0x48f79cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x48f7a0: 0xc6450164  lwc1        $f5, 0x164($s2)
    ctx->pc = 0x48f7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x48f7a4: 0xc6480170  lwc1        $f8, 0x170($s2)
    ctx->pc = 0x48f7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x48f7a8: 0x46072101  sub.s       $f4, $f4, $f7
    ctx->pc = 0x48f7a8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[7]);
    // 0x48f7ac: 0xc6460168  lwc1        $f6, 0x168($s2)
    ctx->pc = 0x48f7acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x48f7b0: 0xc6430174  lwc1        $f3, 0x174($s2)
    ctx->pc = 0x48f7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x48f7b4: 0x46082941  sub.s       $f5, $f5, $f8
    ctx->pc = 0x48f7b4u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[8]);
    // 0x48f7b8: 0x46033181  sub.s       $f6, $f6, $f3
    ctx->pc = 0x48f7b8u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[3]);
    // 0x48f7bc: 0xc6400178  lwc1        $f0, 0x178($s2)
    ctx->pc = 0x48f7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48f7c0: 0xc641017c  lwc1        $f1, 0x17C($s2)
    ctx->pc = 0x48f7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x48f7c4: 0x46070001  sub.s       $f0, $f0, $f7
    ctx->pc = 0x48f7c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[7]);
    // 0x48f7c8: 0xc6420180  lwc1        $f2, 0x180($s2)
    ctx->pc = 0x48f7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x48f7cc: 0x46080841  sub.s       $f1, $f1, $f8
    ctx->pc = 0x48f7ccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[8]);
    // 0x48f7d0: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x48f7d0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x48f7d4: 0x46092102  mul.s       $f4, $f4, $f9
    ctx->pc = 0x48f7d4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[9]);
    // 0x48f7d8: 0x46093182  mul.s       $f6, $f6, $f9
    ctx->pc = 0x48f7d8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[9]);
    // 0x48f7dc: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x48f7dcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x48f7e0: 0x46092942  mul.s       $f5, $f5, $f9
    ctx->pc = 0x48f7e0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[9]);
    // 0x48f7e4: 0xe7a60008  swc1        $f6, 0x8($sp)
    ctx->pc = 0x48f7e4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x48f7e8: 0xe7a50004  swc1        $f5, 0x4($sp)
    ctx->pc = 0x48f7e8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x48f7ec: 0x460a0002  mul.s       $f0, $f0, $f10
    ctx->pc = 0x48f7ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
    // 0x48f7f0: 0x460a1082  mul.s       $f2, $f2, $f10
    ctx->pc = 0x48f7f0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[10]);
    // 0x48f7f4: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x48f7f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x48f7f8: 0x460a0842  mul.s       $f1, $f1, $f10
    ctx->pc = 0x48f7f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[10]);
    // 0x48f7fc: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x48f7fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x48f800: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x48f800u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x48f804: 0x460020c0  add.s       $f3, $f4, $f0
    ctx->pc = 0x48f804u;
    ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x48f808: 0x460129c0  add.s       $f7, $f5, $f1
    ctx->pc = 0x48f808u;
    ctx->f[7] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x48f80c: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x48f80cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x48f810: 0x46023200  add.s       $f8, $f6, $f2
    ctx->pc = 0x48f810u;
    ctx->f[8] = FPU_ADD_S(ctx->f[6], ctx->f[2]);
    // 0x48f814: 0xe7a70024  swc1        $f7, 0x24($sp)
    ctx->pc = 0x48f814u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x48f818: 0xe7a80028  swc1        $f8, 0x28($sp)
    ctx->pc = 0x48f818u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x48f81c: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x48f81cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x48f820: 0x46012941  sub.s       $f5, $f5, $f1
    ctx->pc = 0x48f820u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
    // 0x48f824: 0xe7a40030  swc1        $f4, 0x30($sp)
    ctx->pc = 0x48f824u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x48f828: 0x46023181  sub.s       $f6, $f6, $f2
    ctx->pc = 0x48f828u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[2]);
    // 0x48f82c: 0xe7a50034  swc1        $f5, 0x34($sp)
    ctx->pc = 0x48f82cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x48f830: 0xe7a60038  swc1        $f6, 0x38($sp)
    ctx->pc = 0x48f830u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x48f834: 0xc6400154  lwc1        $f0, 0x154($s2)
    ctx->pc = 0x48f834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48f838: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x48f838u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x48f83c: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x48f83cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x48f840: 0xc6410158  lwc1        $f1, 0x158($s2)
    ctx->pc = 0x48f840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x48f844: 0x46070840  add.s       $f1, $f1, $f7
    ctx->pc = 0x48f844u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
    // 0x48f848: 0xe6210034  swc1        $f1, 0x34($s1)
    ctx->pc = 0x48f848u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x48f84c: 0xc640015c  lwc1        $f0, 0x15C($s2)
    ctx->pc = 0x48f84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48f850: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x48f850u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x48f854: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x48f854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x48f858: 0xc6410160  lwc1        $f1, 0x160($s2)
    ctx->pc = 0x48f858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x48f85c: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x48f85cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x48f860: 0xe621003c  swc1        $f1, 0x3C($s1)
    ctx->pc = 0x48f860u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
    // 0x48f864: 0xc6400164  lwc1        $f0, 0x164($s2)
    ctx->pc = 0x48f864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48f868: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x48f868u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x48f86c: 0xe6200040  swc1        $f0, 0x40($s1)
    ctx->pc = 0x48f86cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 64), bits); }
    // 0x48f870: 0xc6410168  lwc1        $f1, 0x168($s2)
    ctx->pc = 0x48f870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x48f874: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x48f874u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x48f878: 0xe6210044  swc1        $f1, 0x44($s1)
    ctx->pc = 0x48f878u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
    // 0x48f87c: 0xc640016c  lwc1        $f0, 0x16C($s2)
    ctx->pc = 0x48f87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48f880: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x48f880u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x48f884: 0xe6200048  swc1        $f0, 0x48($s1)
    ctx->pc = 0x48f884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 72), bits); }
    // 0x48f888: 0xc6410170  lwc1        $f1, 0x170($s2)
    ctx->pc = 0x48f888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x48f88c: 0x46070841  sub.s       $f1, $f1, $f7
    ctx->pc = 0x48f88cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[7]);
    // 0x48f890: 0xe621004c  swc1        $f1, 0x4C($s1)
    ctx->pc = 0x48f890u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
    // 0x48f894: 0xc6400174  lwc1        $f0, 0x174($s2)
    ctx->pc = 0x48f894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48f898: 0x46080001  sub.s       $f0, $f0, $f8
    ctx->pc = 0x48f898u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[8]);
    // 0x48f89c: 0xe6200050  swc1        $f0, 0x50($s1)
    ctx->pc = 0x48f89cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
    // 0x48f8a0: 0xc6410178  lwc1        $f1, 0x178($s2)
    ctx->pc = 0x48f8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x48f8a4: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x48f8a4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x48f8a8: 0xe6210054  swc1        $f1, 0x54($s1)
    ctx->pc = 0x48f8a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
    // 0x48f8ac: 0xc640017c  lwc1        $f0, 0x17C($s2)
    ctx->pc = 0x48f8acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48f8b0: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x48f8b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x48f8b4: 0xe6200058  swc1        $f0, 0x58($s1)
    ctx->pc = 0x48f8b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
    // 0x48f8b8: 0xc6410180  lwc1        $f1, 0x180($s2)
    ctx->pc = 0x48f8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x48f8bc: 0x46060841  sub.s       $f1, $f1, $f6
    ctx->pc = 0x48f8bcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[6]);
    // 0x48f8c0: 0xe621005c  swc1        $f1, 0x5C($s1)
    ctx->pc = 0x48f8c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 92), bits); }
    // 0x48f8c4: 0x6a64009b  ldl         $a0, 0x9B($s3)
    ctx->pc = 0x48f8c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 155); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x48f8c8: 0x6e640094  ldr         $a0, 0x94($s3)
    ctx->pc = 0x48f8c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 148); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x48f8cc: 0x6a6500a3  ldl         $a1, 0xA3($s3)
    ctx->pc = 0x48f8ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 163); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x48f8d0: 0x6e65009c  ldr         $a1, 0x9C($s3)
    ctx->pc = 0x48f8d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 156); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x48f8d4: 0x8e6200a4  lw          $v0, 0xA4($s3)
    ctx->pc = 0x48f8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 164)));
    // 0x48f8d8: 0xb2240067  sdl         $a0, 0x67($s1)
    ctx->pc = 0x48f8d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x48f8dc: 0xb6240060  sdr         $a0, 0x60($s1)
    ctx->pc = 0x48f8dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x48f8e0: 0xb225006f  sdl         $a1, 0x6F($s1)
    ctx->pc = 0x48f8e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 111); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x48f8e4: 0xb6250068  sdr         $a1, 0x68($s1)
    ctx->pc = 0x48f8e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 104); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x48f8e8: 0xae220070  sw          $v0, 0x70($s1)
    ctx->pc = 0x48f8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 2));
    // 0x48f8ec: 0x6a6400af  ldl         $a0, 0xAF($s3)
    ctx->pc = 0x48f8ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 175); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x48f8f0: 0x6e6400a8  ldr         $a0, 0xA8($s3)
    ctx->pc = 0x48f8f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 168); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x48f8f4: 0x6a6500b7  ldl         $a1, 0xB7($s3)
    ctx->pc = 0x48f8f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x48f8f8: 0x6e6500b0  ldr         $a1, 0xB0($s3)
    ctx->pc = 0x48f8f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x48f8fc: 0x8e6200b8  lw          $v0, 0xB8($s3)
    ctx->pc = 0x48f8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 184)));
    // 0x48f900: 0xb204001b  sdl         $a0, 0x1B($s0)
    ctx->pc = 0x48f900u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x48f904: 0xb6040014  sdr         $a0, 0x14($s0)
    ctx->pc = 0x48f904u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x48f908: 0xb2050023  sdl         $a1, 0x23($s0)
    ctx->pc = 0x48f908u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x48f90c: 0xb605001c  sdr         $a1, 0x1C($s0)
    ctx->pc = 0x48f90cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x48f910: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x48f910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x48f914: 0xc626000c  lwc1        $f6, 0xC($s1)
    ctx->pc = 0x48f914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x48f918: 0xc627003c  lwc1        $f7, 0x3C($s1)
    ctx->pc = 0x48f918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x48f91c: 0xc6250010  lwc1        $f5, 0x10($s1)
    ctx->pc = 0x48f91cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x48f920: 0xc6280040  lwc1        $f8, 0x40($s1)
    ctx->pc = 0x48f920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x48f924: 0x46073181  sub.s       $f6, $f6, $f7
    ctx->pc = 0x48f924u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[7]);
    // 0x48f928: 0xc6240014  lwc1        $f4, 0x14($s1)
    ctx->pc = 0x48f928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x48f92c: 0xc6220044  lwc1        $f2, 0x44($s1)
    ctx->pc = 0x48f92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x48f930: 0x46082941  sub.s       $f5, $f5, $f8
    ctx->pc = 0x48f930u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[8]);
    // 0x48f934: 0xe7a60040  swc1        $f6, 0x40($sp)
    ctx->pc = 0x48f934u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x48f938: 0x46022101  sub.s       $f4, $f4, $f2
    ctx->pc = 0x48f938u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x48f93c: 0xe7a50044  swc1        $f5, 0x44($sp)
    ctx->pc = 0x48f93cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x48f940: 0xe7a40048  swc1        $f4, 0x48($sp)
    ctx->pc = 0x48f940u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x48f944: 0xc6200048  lwc1        $f0, 0x48($s1)
    ctx->pc = 0x48f944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48f948: 0xc623004c  lwc1        $f3, 0x4C($s1)
    ctx->pc = 0x48f948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x48f94c: 0x46070001  sub.s       $f0, $f0, $f7
    ctx->pc = 0x48f94cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[7]);
    // 0x48f950: 0xc6210050  lwc1        $f1, 0x50($s1)
    ctx->pc = 0x48f950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x48f954: 0x460818c1  sub.s       $f3, $f3, $f8
    ctx->pc = 0x48f954u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[8]);
    // 0x48f958: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x48f958u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x48f95c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x48f95cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x48f960: 0xe7a30054  swc1        $f3, 0x54($sp)
    ctx->pc = 0x48f960u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x48f964: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x48f964u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x48f968: 0x460129c2  mul.s       $f7, $f5, $f1
    ctx->pc = 0x48f968u;
    ctx->f[7] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x48f96c: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x48f96cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x48f970: 0x46033082  mul.s       $f2, $f6, $f3
    ctx->pc = 0x48f970u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x48f974: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x48f974u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x48f978: 0x46013182  mul.s       $f6, $f6, $f1
    ctx->pc = 0x48f978u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x48f97c: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x48f97cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x48f980: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x48f980u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x48f984: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x48f984u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x48f988: 0x460439c1  sub.s       $f7, $f7, $f4
    ctx->pc = 0x48f988u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[4]);
    // 0x48f98c: 0xe6020030  swc1        $f2, 0x30($s0)
    ctx->pc = 0x48f98cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x48f990: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x48f990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x48f994: 0xe6070028  swc1        $f7, 0x28($s0)
    ctx->pc = 0x48f994u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x48f998: 0x26240088  addiu       $a0, $s1, 0x88
    ctx->pc = 0x48f998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 136));
    // 0x48f99c: 0xc120066  jal         func_480198
    ctx->pc = 0x48F99Cu;
    SET_GPR_U32(ctx, 31, 0x48F9A4u);
    ctx->pc = 0x48F9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48F99Cu;
    // 0x48f9a0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x480198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x480198u, 0x48F99Cu, 0x48F9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F9A4u;
label_48f9a4:
    // 0x48f9a4: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x48f9a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x48f9a8: 0xc6220010  lwc1        $f2, 0x10($s1)
    ctx->pc = 0x48f9a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x48f9ac: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x48f9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48f9b0: 0xc603002c  lwc1        $f3, 0x2C($s0)
    ctx->pc = 0x48f9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x48f9b4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x48f9b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x48f9b8: 0xc6240014  lwc1        $f4, 0x14($s1)
    ctx->pc = 0x48f9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x48f9bc: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x48f9bcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x48f9c0: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x48f9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48f9c4: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x48f9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x48f9c8: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x48f9c8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x48f9cc: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x48f9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x48f9d0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x48f9d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x48f9d4: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x48f9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x48f9d8: 0x427c3  sra         $a0, $a0, 31
    ctx->pc = 0x48f9d8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 31));
    // 0x48f9dc: 0x217c3  sra         $v0, $v0, 31
    ctx->pc = 0x48f9dcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 31));
    // 0x48f9e0: 0x31fc3  sra         $v1, $v1, 31
    ctx->pc = 0x48f9e0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 31));
    // 0x48f9e4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x48f9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x48f9e8: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x48f9e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x48f9ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x48f9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x48f9f0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x48f9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x48f9f4: 0xa2040038  sb          $a0, 0x38($s0)
    ctx->pc = 0x48f9f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 56), (uint8_t)GPR_U32(ctx, 4));
    // 0x48f9f8: 0xa2020039  sb          $v0, 0x39($s0)
    ctx->pc = 0x48f9f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 57), (uint8_t)GPR_U32(ctx, 2));
    // 0x48f9fc: 0xe6010034  swc1        $f1, 0x34($s0)
    ctx->pc = 0x48f9fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x48fa00: 0xa203003a  sb          $v1, 0x3A($s0)
    ctx->pc = 0x48fa00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 58), (uint8_t)GPR_U32(ctx, 3));
    // 0x48fa04: 0xc6230030  lwc1        $f3, 0x30($s1)
    ctx->pc = 0x48fa04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x48fa08: 0xc620003c  lwc1        $f0, 0x3C($s1)
    ctx->pc = 0x48fa08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48fa0c: 0xc6220034  lwc1        $f2, 0x34($s1)
    ctx->pc = 0x48fa0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x48fa10: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x48fa10u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x48fa14: 0xc6240040  lwc1        $f4, 0x40($s1)
    ctx->pc = 0x48fa14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x48fa18: 0xc6210038  lwc1        $f1, 0x38($s1)
    ctx->pc = 0x48fa18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x48fa1c: 0xc6200044  lwc1        $f0, 0x44($s1)
    ctx->pc = 0x48fa1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48fa20: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x48fa20u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x48fa24: 0xe7a30050  swc1        $f3, 0x50($sp)
    ctx->pc = 0x48fa24u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x48fa28: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x48fa28u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x48fa2c: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x48fa2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x48fa30: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x48fa30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x48fa34: 0xc7a40048  lwc1        $f4, 0x48($sp)
    ctx->pc = 0x48fa34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x48fa38: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x48fa38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48fa3c: 0x46041982  mul.s       $f6, $f3, $f4
    ctx->pc = 0x48fa3cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x48fa40: 0x46041102  mul.s       $f4, $f2, $f4
    ctx->pc = 0x48fa40u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x48fa44: 0xc7a50044  lwc1        $f5, 0x44($sp)
    ctx->pc = 0x48fa44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x48fa48: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x48fa48u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x48fa4c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x48fa4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x48fa50: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x48fa50u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x48fa54: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x48fa54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x48fa58: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x48fa58u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x48fa5c: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x48fa5cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x48fa60: 0x46012101  sub.s       $f4, $f4, $f1
    ctx->pc = 0x48fa60u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x48fa64: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x48fa64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x48fa68: 0xe6030044  swc1        $f3, 0x44($s0)
    ctx->pc = 0x48fa68u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x48fa6c: 0xe604003c  swc1        $f4, 0x3C($s0)
    ctx->pc = 0x48fa6cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x48fa70: 0x2624009c  addiu       $a0, $s1, 0x9C
    ctx->pc = 0x48fa70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 156));
    // 0x48fa74: 0xc120066  jal         func_480198
    ctx->pc = 0x48FA74u;
    SET_GPR_U32(ctx, 31, 0x48FA7Cu);
    ctx->pc = 0x48FA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48FA74u;
    // 0x48fa78: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x480198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x480198u, 0x48FA74u, 0x48FA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48FA7Cu;
label_48fa7c:
    // 0x48fa7c: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x48fa7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x48fa80: 0xc6220010  lwc1        $f2, 0x10($s1)
    ctx->pc = 0x48fa80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x48fa84: 0xc600003c  lwc1        $f0, 0x3C($s0)
    ctx->pc = 0x48fa84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48fa88: 0xc6030040  lwc1        $f3, 0x40($s0)
    ctx->pc = 0x48fa88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x48fa8c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x48fa8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x48fa90: 0xc6240014  lwc1        $f4, 0x14($s1)
    ctx->pc = 0x48fa90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x48fa94: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x48fa94u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x48fa98: 0xc6000044  lwc1        $f0, 0x44($s0)
    ctx->pc = 0x48fa98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48fa9c: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x48fa9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x48faa0: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x48faa0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x48faa4: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x48faa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x48faa8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x48faa8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x48faac: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x48faacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x48fab0: 0x427c3  sra         $a0, $a0, 31
    ctx->pc = 0x48fab0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 31));
    // 0x48fab4: 0x217c3  sra         $v0, $v0, 31
    ctx->pc = 0x48fab4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 31));
    // 0x48fab8: 0x31fc3  sra         $v1, $v1, 31
    ctx->pc = 0x48fab8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 31));
    // 0x48fabc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x48fabcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x48fac0: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x48fac0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x48fac4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x48fac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x48fac8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x48fac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x48facc: 0xa204004c  sb          $a0, 0x4C($s0)
    ctx->pc = 0x48faccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 76), (uint8_t)GPR_U32(ctx, 4));
    // 0x48fad0: 0xa202004d  sb          $v0, 0x4D($s0)
    ctx->pc = 0x48fad0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 2));
    // 0x48fad4: 0xe6010048  swc1        $f1, 0x48($s0)
    ctx->pc = 0x48fad4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x48fad8: 0xa203004e  sb          $v1, 0x4E($s0)
    ctx->pc = 0x48fad8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 78), (uint8_t)GPR_U32(ctx, 3));
    // 0x48fadc: 0xc6260024  lwc1        $f6, 0x24($s1)
    ctx->pc = 0x48fadcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x48fae0: 0xc6270054  lwc1        $f7, 0x54($s1)
    ctx->pc = 0x48fae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x48fae4: 0xc6250028  lwc1        $f5, 0x28($s1)
    ctx->pc = 0x48fae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x48fae8: 0xc6280058  lwc1        $f8, 0x58($s1)
    ctx->pc = 0x48fae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x48faec: 0x46073181  sub.s       $f6, $f6, $f7
    ctx->pc = 0x48faecu;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[7]);
    // 0x48faf0: 0xc624002c  lwc1        $f4, 0x2C($s1)
    ctx->pc = 0x48faf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x48faf4: 0xc622005c  lwc1        $f2, 0x5C($s1)
    ctx->pc = 0x48faf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x48faf8: 0x46082941  sub.s       $f5, $f5, $f8
    ctx->pc = 0x48faf8u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[8]);
    // 0x48fafc: 0xe7a60040  swc1        $f6, 0x40($sp)
    ctx->pc = 0x48fafcu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x48fb00: 0x46022101  sub.s       $f4, $f4, $f2
    ctx->pc = 0x48fb00u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x48fb04: 0xe7a50044  swc1        $f5, 0x44($sp)
    ctx->pc = 0x48fb04u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x48fb08: 0xe7a40048  swc1        $f4, 0x48($sp)
    ctx->pc = 0x48fb08u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x48fb0c: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x48fb0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48fb10: 0xc6230034  lwc1        $f3, 0x34($s1)
    ctx->pc = 0x48fb10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x48fb14: 0x46070001  sub.s       $f0, $f0, $f7
    ctx->pc = 0x48fb14u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[7]);
    // 0x48fb18: 0xc6210038  lwc1        $f1, 0x38($s1)
    ctx->pc = 0x48fb18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x48fb1c: 0x460818c1  sub.s       $f3, $f3, $f8
    ctx->pc = 0x48fb1cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[8]);
    // 0x48fb20: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x48fb20u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x48fb24: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x48fb24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x48fb28: 0xe7a30054  swc1        $f3, 0x54($sp)
    ctx->pc = 0x48fb28u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x48fb2c: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x48fb2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x48fb30: 0x460129c2  mul.s       $f7, $f5, $f1
    ctx->pc = 0x48fb30u;
    ctx->f[7] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x48fb34: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x48fb34u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x48fb38: 0x46033082  mul.s       $f2, $f6, $f3
    ctx->pc = 0x48fb38u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x48fb3c: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x48fb3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x48fb40: 0x46013182  mul.s       $f6, $f6, $f1
    ctx->pc = 0x48fb40u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x48fb44: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x48fb44u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x48fb48: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x48fb48u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x48fb4c: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x48fb4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x48fb50: 0x460439c1  sub.s       $f7, $f7, $f4
    ctx->pc = 0x48fb50u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[4]);
    // 0x48fb54: 0xe6020058  swc1        $f2, 0x58($s0)
    ctx->pc = 0x48fb54u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x48fb58: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x48fb58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x48fb5c: 0xe6070050  swc1        $f7, 0x50($s0)
    ctx->pc = 0x48fb5cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x48fb60: 0x262400b0  addiu       $a0, $s1, 0xB0
    ctx->pc = 0x48fb60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
    // 0x48fb64: 0xc120066  jal         func_480198
    ctx->pc = 0x48FB64u;
    SET_GPR_U32(ctx, 31, 0x48FB6Cu);
    ctx->pc = 0x48FB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48FB64u;
    // 0x48fb68: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x480198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x480198u, 0x48FB64u, 0x48FB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48FB6Cu;
label_48fb6c:
    // 0x48fb6c: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x48fb6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x48fb70: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x48fb70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x48fb74: 0xc6000050  lwc1        $f0, 0x50($s0)
    ctx->pc = 0x48fb74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48fb78: 0xc6030054  lwc1        $f3, 0x54($s0)
    ctx->pc = 0x48fb78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x48fb7c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x48fb7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x48fb80: 0xc624002c  lwc1        $f4, 0x2C($s1)
    ctx->pc = 0x48fb80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x48fb84: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x48fb84u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x48fb88: 0xc6000058  lwc1        $f0, 0x58($s0)
    ctx->pc = 0x48fb88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48fb8c: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x48fb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x48fb90: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x48fb90u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x48fb94: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x48fb94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x48fb98: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x48fb98u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x48fb9c: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x48fb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x48fba0: 0x427c3  sra         $a0, $a0, 31
    ctx->pc = 0x48fba0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 31));
    // 0x48fba4: 0x217c3  sra         $v0, $v0, 31
    ctx->pc = 0x48fba4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 31));
    // 0x48fba8: 0x31fc3  sra         $v1, $v1, 31
    ctx->pc = 0x48fba8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 31));
    // 0x48fbac: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x48fbacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x48fbb0: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x48fbb0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x48fbb4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x48fbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x48fbb8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x48fbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x48fbbc: 0xa2040060  sb          $a0, 0x60($s0)
    ctx->pc = 0x48fbbcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 96), (uint8_t)GPR_U32(ctx, 4));
    // 0x48fbc0: 0xa2020061  sb          $v0, 0x61($s0)
    ctx->pc = 0x48fbc0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 97), (uint8_t)GPR_U32(ctx, 2));
    // 0x48fbc4: 0xe601005c  swc1        $f1, 0x5C($s0)
    ctx->pc = 0x48fbc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
    // 0x48fbc8: 0xa2030062  sb          $v1, 0x62($s0)
    ctx->pc = 0x48fbc8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 98), (uint8_t)GPR_U32(ctx, 3));
    // 0x48fbcc: 0xc6230048  lwc1        $f3, 0x48($s1)
    ctx->pc = 0x48fbccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x48fbd0: 0xc6200054  lwc1        $f0, 0x54($s1)
    ctx->pc = 0x48fbd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48fbd4: 0xc622004c  lwc1        $f2, 0x4C($s1)
    ctx->pc = 0x48fbd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x48fbd8: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x48fbd8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x48fbdc: 0xc6240058  lwc1        $f4, 0x58($s1)
    ctx->pc = 0x48fbdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x48fbe0: 0xc6210050  lwc1        $f1, 0x50($s1)
    ctx->pc = 0x48fbe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x48fbe4: 0xc620005c  lwc1        $f0, 0x5C($s1)
    ctx->pc = 0x48fbe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48fbe8: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x48fbe8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x48fbec: 0xe7a30050  swc1        $f3, 0x50($sp)
    ctx->pc = 0x48fbecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x48fbf0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x48fbf0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x48fbf4: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x48fbf4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x48fbf8: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x48fbf8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x48fbfc: 0xc7a40048  lwc1        $f4, 0x48($sp)
    ctx->pc = 0x48fbfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x48fc00: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x48fc00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48fc04: 0x46041982  mul.s       $f6, $f3, $f4
    ctx->pc = 0x48fc04u;
    ctx->f[6] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x48fc08: 0x46041102  mul.s       $f4, $f2, $f4
    ctx->pc = 0x48fc08u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x48fc0c: 0xc7a50044  lwc1        $f5, 0x44($sp)
    ctx->pc = 0x48fc0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x48fc10: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x48fc10u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x48fc14: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x48fc14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x48fc18: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x48fc18u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x48fc1c: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x48fc1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x48fc20: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x48fc20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x48fc24: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x48fc24u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x48fc28: 0x46012101  sub.s       $f4, $f4, $f1
    ctx->pc = 0x48fc28u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x48fc2c: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x48fc2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x48fc30: 0xe603006c  swc1        $f3, 0x6C($s0)
    ctx->pc = 0x48fc30u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 108), bits); }
    // 0x48fc34: 0xe6040064  swc1        $f4, 0x64($s0)
    ctx->pc = 0x48fc34u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x48fc38: 0x262400c4  addiu       $a0, $s1, 0xC4
    ctx->pc = 0x48fc38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
    // 0x48fc3c: 0xc120066  jal         func_480198
    ctx->pc = 0x48FC3Cu;
    SET_GPR_U32(ctx, 31, 0x48FC44u);
    ctx->pc = 0x48FC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48FC3Cu;
    // 0x48fc40: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x480198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x480198u, 0x48FC3Cu, 0x48FC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48FC44u;
label_48fc44:
    // 0x48fc44: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x48fc44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x48fc48: 0x3c060071  lui         $a2, 0x71
    ctx->pc = 0x48fc48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)113 << 16));
    // 0x48fc4c: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x48fc4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x48fc50: 0x24c6ff40  addiu       $a2, $a2, -0xC0
    ctx->pc = 0x48fc50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967104));
    // 0x48fc54: 0xc6000064  lwc1        $f0, 0x64($s0)
    ctx->pc = 0x48fc54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48fc58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x48fc58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48fc5c: 0xc6030068  lwc1        $f3, 0x68($s0)
    ctx->pc = 0x48fc5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x48fc60: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x48fc60u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x48fc64: 0xc624002c  lwc1        $f4, 0x2C($s1)
    ctx->pc = 0x48fc64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x48fc68: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x48fc68u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x48fc6c: 0xc600006c  lwc1        $f0, 0x6C($s0)
    ctx->pc = 0x48fc6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48fc70: 0x8e040064  lw          $a0, 0x64($s0)
    ctx->pc = 0x48fc70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x48fc74: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x48fc74u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x48fc78: 0x8e050068  lw          $a1, 0x68($s0)
    ctx->pc = 0x48fc78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x48fc7c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x48fc7cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x48fc80: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x48fc80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x48fc84: 0x427c3  sra         $a0, $a0, 31
    ctx->pc = 0x48fc84u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 31));
    // 0x48fc88: 0x52fc3  sra         $a1, $a1, 31
    ctx->pc = 0x48fc88u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 31));
    // 0x48fc8c: 0x31fc3  sra         $v1, $v1, 31
    ctx->pc = 0x48fc8cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 31));
    // 0x48fc90: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x48fc90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x48fc94: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x48fc94u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x48fc98: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x48fc98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x48fc9c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x48fc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x48fca0: 0xa2040074  sb          $a0, 0x74($s0)
    ctx->pc = 0x48fca0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 116), (uint8_t)GPR_U32(ctx, 4));
    // 0x48fca4: 0xa2030076  sb          $v1, 0x76($s0)
    ctx->pc = 0x48fca4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 118), (uint8_t)GPR_U32(ctx, 3));
    // 0x48fca8: 0xa2050075  sb          $a1, 0x75($s0)
    ctx->pc = 0x48fca8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 117), (uint8_t)GPR_U32(ctx, 5));
    // 0x48fcac: 0xe6010070  swc1        $f1, 0x70($s0)
    ctx->pc = 0x48fcacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x48fcb0: 0x8f858a38  lw          $a1, -0x75C8($gp)
    ctx->pc = 0x48fcb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937144)));
    // 0x48fcb4: 0x7a440020  lq          $a0, 0x20($s2)
    ctx->pc = 0x48fcb4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x48fcb8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x48fcb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x48fcbc: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x48fcbcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
    // 0x48fcc0: 0x7a430030  lq          $v1, 0x30($s2)
    ctx->pc = 0x48fcc0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x48fcc4: 0x7cc30010  sq          $v1, 0x10($a2)
    ctx->pc = 0x48fcc4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 3));
    // 0x48fcc8: 0x7a440040  lq          $a0, 0x40($s2)
    ctx->pc = 0x48fcc8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x48fccc: 0x7cc40020  sq          $a0, 0x20($a2)
    ctx->pc = 0x48fcccu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 4));
    // 0x48fcd0: 0x7a430050  lq          $v1, 0x50($s2)
    ctx->pc = 0x48fcd0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x48fcd4: 0xaf858a38  sw          $a1, -0x75C8($gp)
    ctx->pc = 0x48fcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937144), GPR_U32(ctx, 5));
    // 0x48fcd8: 0x7cc30030  sq          $v1, 0x30($a2)
    ctx->pc = 0x48fcd8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 3));
    // 0x48fcdc: 0x0  nop
    ctx->pc = 0x48fcdcu;
    // NOP
label_48fce0:
    // 0x48fce0: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x48fce0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x48fce4: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x48fce4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x48fce8: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x48fce8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x48fcec: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x48fcecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x48fcf0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x48fcf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x48fcf4: 0x3e00008  jr          $ra
    ctx->pc = 0x48FCF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48FCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48FCF4u;
        // 0x48fcf8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48FCF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48FCFCu;
    // 0x48fcfc: 0x0  nop
    ctx->pc = 0x48fcfcu;
    // NOP
    ctx->pc = 0x48fd00u;
}
