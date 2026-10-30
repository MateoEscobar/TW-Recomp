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

// Function: sub_00378320
// Address: 0x378320 - 0x3784f0
void sub_00378320_0x378320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00378320_0x378320");
#endif

    switch (ctx->pc) {
        case 0x378358u: goto label_378358;
        case 0x37836cu: goto label_37836c;
        case 0x378374u: goto label_378374;
        case 0x378388u: goto label_378388;
        case 0x378390u: goto label_378390;
        case 0x3783a0u: goto label_3783a0;
        case 0x3783b8u: goto label_3783b8;
        case 0x3783c0u: goto label_3783c0;
        case 0x3783d8u: goto label_3783d8;
        case 0x3783f0u: goto label_3783f0;
        case 0x3783f8u: goto label_3783f8;
        case 0x378420u: goto label_378420;
        case 0x37842cu: goto label_37842c;
        case 0x378444u: goto label_378444;
        case 0x378450u: goto label_378450;
        case 0x378458u: goto label_378458;
        case 0x378468u: goto label_378468;
        case 0x37847cu: goto label_37847c;
        case 0x378490u: goto label_378490;
        case 0x3784a0u: goto label_3784a0;
        case 0x3784b4u: goto label_3784b4;
        default: break;
    }

    ctx->pc = 0x378320u;

    // 0x378320: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x378320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x378324: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x378324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x378328: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x378328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x37832c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37832cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378330: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x378330u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378334: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x378334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x378338: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x378338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x37833c: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x37833cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x378340: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x378340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x378344: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x378344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x378348: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x378348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x37834c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x37834cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x378350: 0xc102488  jal         func_409220
    ctx->pc = 0x378350u;
    SET_GPR_U32(ctx, 31, 0x378358u);
    ctx->pc = 0x378354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378350u;
    // 0x378354: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x378350u, 0x378358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378358u;
label_378358:
    // 0x378358: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x378358u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37835c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x37835cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x378360: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x378360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378364: 0xc102472  jal         func_4091C8
    ctx->pc = 0x378364u;
    SET_GPR_U32(ctx, 31, 0x37836Cu);
    ctx->pc = 0x378368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378364u;
    // 0x378368: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x378364u, 0x37836Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37836Cu;
label_37836c:
    // 0x37836c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x37836Cu;
    SET_GPR_U32(ctx, 31, 0x378374u);
    ctx->pc = 0x378370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37836Cu;
    // 0x378370: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x37836Cu, 0x378374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378374u;
label_378374:
    // 0x378374: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x378374u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378378: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x378378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37837c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x37837cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x378380: 0xc102472  jal         func_4091C8
    ctx->pc = 0x378380u;
    SET_GPR_U32(ctx, 31, 0x378388u);
    ctx->pc = 0x378384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378380u;
    // 0x378384: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x378380u, 0x378388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378388u;
label_378388:
    // 0x378388: 0xc10b108  jal         func_42C420
    ctx->pc = 0x378388u;
    SET_GPR_U32(ctx, 31, 0x378390u);
    ctx->pc = 0x37838Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378388u;
    // 0x37838c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x378388u, 0x378390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378390u;
label_378390:
    // 0x378390: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x378390u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378394: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x378394u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x378398: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x378398u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37839c: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x37839cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3783a0:
    // 0x3783a0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3783a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3783a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3783a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3783a8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3783a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3783ac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3783acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3783b0: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x3783B0u;
    SET_GPR_U32(ctx, 31, 0x3783B8u);
    ctx->pc = 0x3783B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3783B0u;
    // 0x3783b4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x3783B0u, 0x3783B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3783B8u;
label_3783b8:
    // 0x3783b8: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x3783B8u;
    SET_GPR_U32(ctx, 31, 0x3783C0u);
    ctx->pc = 0x3783BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3783B8u;
    // 0x3783bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x3783B8u, 0x3783C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3783C0u;
label_3783c0:
    // 0x3783c0: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x3783c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x3783c4: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x3783c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3783c8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3783C8u;
    {
        const bool branch_taken_0x3783c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3783CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3783C8u;
        // 0x3783cc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3783c8) {
            ctx->pc = 0x3783A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3783a0;
        }
    }
    ctx->pc = 0x3783D0u;
    // 0x3783d0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3783d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3783d4: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x3783d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3783d8:
    // 0x3783d8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3783d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3783dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3783dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3783e0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3783e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3783e4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3783e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3783e8: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x3783E8u;
    SET_GPR_U32(ctx, 31, 0x3783F0u);
    ctx->pc = 0x3783ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3783E8u;
    // 0x3783ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x3783E8u, 0x3783F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3783F0u;
label_3783f0:
    // 0x3783f0: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x3783F0u;
    SET_GPR_U32(ctx, 31, 0x3783F8u);
    ctx->pc = 0x3783F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3783F0u;
    // 0x3783f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x3783F0u, 0x3783F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3783F8u;
label_3783f8:
    // 0x3783f8: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x3783f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x3783fc: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x3783fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x378400: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x378400u;
    {
        const bool branch_taken_0x378400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x378404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378400u;
        // 0x378404: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378400) {
            ctx->pc = 0x3783D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3783d8;
        }
    }
    ctx->pc = 0x378408u;
    // 0x378408: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x378408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37840c: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x37840cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378410: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x378410u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378414: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x378414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378418: 0xc0e377a  jal         func_38DDE8
    ctx->pc = 0x378418u;
    SET_GPR_U32(ctx, 31, 0x378420u);
    ctx->pc = 0x37841Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378418u;
    // 0x37841c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38DDE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38DDE8u, 0x378418u, 0x378420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378420u;
label_378420:
    // 0x378420: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x378420u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378424: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x378424u;
    SET_GPR_U32(ctx, 31, 0x37842Cu);
    ctx->pc = 0x378428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378424u;
    // 0x378428: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x378424u, 0x37842Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37842Cu;
label_37842c:
    // 0x37842c: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x37842Cu;
    {
        const bool branch_taken_0x37842c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x378430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37842Cu;
        // 0x378430: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37842c) {
            ctx->pc = 0x378448u;
            goto label_378448;
        }
    }
    ctx->pc = 0x378434u;
    // 0x378434: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x378434u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x378438: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x378438u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x37843c: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x37843Cu;
    SET_GPR_U32(ctx, 31, 0x378444u);
    ctx->pc = 0x378440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37843Cu;
    // 0x378440: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x37843Cu, 0x378444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378444u;
label_378444:
    // 0x378444: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x378444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_378448:
    // 0x378448: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x378448u;
    SET_GPR_U32(ctx, 31, 0x378450u);
    ctx->pc = 0x37844Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378448u;
    // 0x37844c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x378448u, 0x378450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378450u;
label_378450:
    // 0x378450: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x378450u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378454: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x378454u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_378458:
    // 0x378458: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x378458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x37845c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x37845cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x378460: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x378460u;
    SET_GPR_U32(ctx, 31, 0x378468u);
    ctx->pc = 0x378464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378460u;
    // 0x378464: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x378460u, 0x378468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378468u;
label_378468:
    // 0x378468: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x378468u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37846c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37846cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378470: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x378470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x378474: 0xc102576  jal         func_4095D8
    ctx->pc = 0x378474u;
    SET_GPR_U32(ctx, 31, 0x37847Cu);
    ctx->pc = 0x378478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378474u;
    // 0x378478: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x378474u, 0x37847Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37847Cu;
label_37847c:
    // 0x37847c: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x37847cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x378480: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x378480u;
    {
        const bool branch_taken_0x378480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x378484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378480u;
        // 0x378484: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378480) {
            ctx->pc = 0x378458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_378458;
        }
    }
    ctx->pc = 0x378488u;
    // 0x378488: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x378488u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37848c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x37848cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_378490:
    // 0x378490: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x378490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x378494: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x378494u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x378498: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x378498u;
    SET_GPR_U32(ctx, 31, 0x3784A0u);
    ctx->pc = 0x37849Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378498u;
    // 0x37849c: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x378498u, 0x3784A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3784A0u;
label_3784a0:
    // 0x3784a0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3784a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3784a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3784a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3784a8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3784a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3784ac: 0xc102576  jal         func_4095D8
    ctx->pc = 0x3784ACu;
    SET_GPR_U32(ctx, 31, 0x3784B4u);
    ctx->pc = 0x3784B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3784ACu;
    // 0x3784b0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x3784ACu, 0x3784B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3784B4u;
label_3784b4:
    // 0x3784b4: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x3784b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x3784b8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3784B8u;
    {
        const bool branch_taken_0x3784b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3784BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3784B8u;
        // 0x3784bc: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3784b8) {
            ctx->pc = 0x378490u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_378490;
        }
    }
    ctx->pc = 0x3784C0u;
    // 0x3784c0: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x3784c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3784c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3784c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3784c8: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x3784c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3784cc: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x3784ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3784d0: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x3784d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3784d4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3784d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3784d8: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x3784d8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3784dc: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x3784dcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3784e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3784e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3784e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3784E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3784E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3784E4u;
        // 0x3784e8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3784E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3784ECu;
    // 0x3784ec: 0x0  nop
    ctx->pc = 0x3784ecu;
    // NOP
    ctx->pc = 0x3784f0u;
}
