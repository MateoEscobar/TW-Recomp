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

// Function: sub_00377338
// Address: 0x377338 - 0x377590
void sub_00377338_0x377338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00377338_0x377338");
#endif

    switch (ctx->pc) {
        case 0x377380u: goto label_377380;
        case 0x377388u: goto label_377388;
        case 0x37739cu: goto label_37739c;
        case 0x3773a4u: goto label_3773a4;
        case 0x3773c0u: goto label_3773c0;
        case 0x3773ecu: goto label_3773ec;
        case 0x3773f4u: goto label_3773f4;
        case 0x37740cu: goto label_37740c;
        case 0x377414u: goto label_377414;
        case 0x37742cu: goto label_37742c;
        case 0x377434u: goto label_377434;
        case 0x37744cu: goto label_37744c;
        case 0x377454u: goto label_377454;
        case 0x377474u: goto label_377474;
        case 0x37747cu: goto label_37747c;
        case 0x377494u: goto label_377494;
        case 0x3774a0u: goto label_3774a0;
        case 0x3774b8u: goto label_3774b8;
        case 0x3774c0u: goto label_3774c0;
        case 0x3774f8u: goto label_3774f8;
        case 0x377500u: goto label_377500;
        case 0x377514u: goto label_377514;
        case 0x37752cu: goto label_37752c;
        case 0x377540u: goto label_377540;
        default: break;
    }

    ctx->pc = 0x377338u;

    // 0x377338: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x377338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x37733c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37733cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x377340: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x377340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x377344: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x377344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x377348: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x377348u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37734c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x37734cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377350: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x377350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x377354: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x377354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x377358: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x377358u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37735c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x37735cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x377360: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x377360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x377364: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x377364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x377368: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x377368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x37736c: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x37736cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x377370: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x377370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x377374: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x377374u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x377378: 0xc102472  jal         func_4091C8
    ctx->pc = 0x377378u;
    SET_GPR_U32(ctx, 31, 0x377380u);
    ctx->pc = 0x37737Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377378u;
    // 0x37737c: 0xe7b400b0  swc1        $f20, 0xB0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x377378u, 0x377380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377380u;
label_377380:
    // 0x377380: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x377380u;
    SET_GPR_U32(ctx, 31, 0x377388u);
    ctx->pc = 0x377384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377380u;
    // 0x377384: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x377380u, 0x377388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377388u;
label_377388:
    // 0x377388: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x377388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37738c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37738cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377390: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x377390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377394: 0xc102472  jal         func_4091C8
    ctx->pc = 0x377394u;
    SET_GPR_U32(ctx, 31, 0x37739Cu);
    ctx->pc = 0x377398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377394u;
    // 0x377398: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x377394u, 0x37739Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37739Cu;
label_37739c:
    // 0x37739c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37739Cu;
    SET_GPR_U32(ctx, 31, 0x3773A4u);
    ctx->pc = 0x3773A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37739Cu;
    // 0x3773a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37739Cu, 0x3773A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3773A4u;
label_3773a4:
    // 0x3773a4: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x3773a4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3773a8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3773a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x3773ac: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x3773acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3773b0: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x3773b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3773b4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3773b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3773b8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3773b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3773bc: 0x0  nop
    ctx->pc = 0x3773bcu;
    // NOP
label_3773c0:
    // 0x3773c0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3773c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3773c4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3773c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3773c8: 0x0  nop
    ctx->pc = 0x3773c8u;
    // NOP
    // 0x3773cc: 0x0  nop
    ctx->pc = 0x3773ccu;
    // NOP
    // 0x3773d0: 0x1485fffb  bne         $a0, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3773D0u;
    {
        const bool branch_taken_0x3773d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x3773D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3773D0u;
        // 0x3773d4: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3773d0) {
            ctx->pc = 0x3773C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3773c0;
        }
    }
    ctx->pc = 0x3773D8u;
    // 0x3773d8: 0x34068030  ori         $a2, $zero, 0x8030
    ctx->pc = 0x3773d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32816);
    // 0x3773dc: 0x633fc  dsll32      $a2, $a2, 15
    ctx->pc = 0x3773dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 15));
    // 0x3773e0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3773e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3773e4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3773E4u;
    SET_GPR_U32(ctx, 31, 0x3773ECu);
    ctx->pc = 0x3773E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3773E4u;
    // 0x3773e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3773E4u, 0x3773ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3773ECu;
label_3773ec:
    // 0x3773ec: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3773ECu;
    SET_GPR_U32(ctx, 31, 0x3773F4u);
    ctx->pc = 0x3773F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3773ECu;
    // 0x3773f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3773ECu, 0x3773F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3773F4u;
label_3773f4:
    // 0x3773f4: 0x34068068  ori         $a2, $zero, 0x8068
    ctx->pc = 0x3773f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32872);
    // 0x3773f8: 0x633fc  dsll32      $a2, $a2, 15
    ctx->pc = 0x3773f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 15));
    // 0x3773fc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3773fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x377400: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x377400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377404: 0xc102472  jal         func_4091C8
    ctx->pc = 0x377404u;
    SET_GPR_U32(ctx, 31, 0x37740Cu);
    ctx->pc = 0x377408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377404u;
    // 0x377408: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x377404u, 0x37740Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37740Cu;
label_37740c:
    // 0x37740c: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x37740Cu;
    SET_GPR_U32(ctx, 31, 0x377414u);
    ctx->pc = 0x377410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37740Cu;
    // 0x377410: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x37740Cu, 0x377414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377414u;
label_377414:
    // 0x377414: 0x34068048  ori         $a2, $zero, 0x8048
    ctx->pc = 0x377414u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x377418: 0x633fc  dsll32      $a2, $a2, 15
    ctx->pc = 0x377418u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 15));
    // 0x37741c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x37741cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x377420: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x377420u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x377424: 0xc102472  jal         func_4091C8
    ctx->pc = 0x377424u;
    SET_GPR_U32(ctx, 31, 0x37742Cu);
    ctx->pc = 0x377428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377424u;
    // 0x377428: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x377424u, 0x37742Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37742Cu;
label_37742c:
    // 0x37742c: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x37742Cu;
    SET_GPR_U32(ctx, 31, 0x377434u);
    ctx->pc = 0x377430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37742Cu;
    // 0x377430: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x37742Cu, 0x377434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377434u;
label_377434:
    // 0x377434: 0x340680b2  ori         $a2, $zero, 0x80B2
    ctx->pc = 0x377434u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32946);
    // 0x377438: 0x633fc  dsll32      $a2, $a2, 15
    ctx->pc = 0x377438u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 15));
    // 0x37743c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x37743cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x377440: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x377440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x377444: 0xc102472  jal         func_4091C8
    ctx->pc = 0x377444u;
    SET_GPR_U32(ctx, 31, 0x37744Cu);
    ctx->pc = 0x377448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377444u;
    // 0x377448: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x377444u, 0x37744Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37744Cu;
label_37744c:
    // 0x37744c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37744Cu;
    SET_GPR_U32(ctx, 31, 0x377454u);
    ctx->pc = 0x377450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37744Cu;
    // 0x377450: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37744Cu, 0x377454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377454u;
label_377454:
    // 0x377454: 0x340680fe  ori         $a2, $zero, 0x80FE
    ctx->pc = 0x377454u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33022);
    // 0x377458: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x377458u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x37745c: 0x34c68000  ori         $a2, $a2, 0x8000
    ctx->pc = 0x37745cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    // 0x377460: 0x637f8  dsll        $a2, $a2, 31
    ctx->pc = 0x377460u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 31);
    // 0x377464: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x377464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x377468: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x377468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37746c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37746Cu;
    SET_GPR_U32(ctx, 31, 0x377474u);
    ctx->pc = 0x377470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37746Cu;
    // 0x377470: 0x3055ffff  andi        $s5, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37746Cu, 0x377474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377474u;
label_377474:
    // 0x377474: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x377474u;
    SET_GPR_U32(ctx, 31, 0x37747Cu);
    ctx->pc = 0x377478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377474u;
    // 0x377478: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x377474u, 0x37747Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37747Cu;
label_37747c:
    // 0x37747c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x37747cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x377480: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x377480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377484: 0x2a403  sra         $s4, $v0, 16
    ctx->pc = 0x377484u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 2), 16));
    // 0x377488: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x377488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x37748c: 0xc102488  jal         func_409220
    ctx->pc = 0x37748Cu;
    SET_GPR_U32(ctx, 31, 0x377494u);
    ctx->pc = 0x377490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37748Cu;
    // 0x377490: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x37748Cu, 0x377494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377494u;
label_377494:
    // 0x377494: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x377494u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377498: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x377498u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37749c: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x37749cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3774a0:
    // 0x3774a0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3774a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3774a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3774a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3774a8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3774a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3774ac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3774acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3774b0: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x3774B0u;
    SET_GPR_U32(ctx, 31, 0x3774B8u);
    ctx->pc = 0x3774B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3774B0u;
    // 0x3774b4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x3774B0u, 0x3774B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3774B8u;
label_3774b8:
    // 0x3774b8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3774B8u;
    SET_GPR_U32(ctx, 31, 0x3774C0u);
    ctx->pc = 0x3774BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3774B8u;
    // 0x3774bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3774B8u, 0x3774C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3774C0u;
label_3774c0:
    // 0x3774c0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3774c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x3774c4: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x3774c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3774c8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3774C8u;
    {
        const bool branch_taken_0x3774c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3774CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3774C8u;
        // 0x3774cc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3774c8) {
            ctx->pc = 0x3774A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3774a0;
        }
    }
    ctx->pc = 0x3774D0u;
    // 0x3774d0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3774d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3774d4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x3774d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3774d8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x3774d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3774dc: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x3774dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3774e0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3774e0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x3774e4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3774e4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x3774e8: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x3774e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3774ec: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x3774ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3774f0: 0xc0c32f6  jal         func_30CBD8
    ctx->pc = 0x3774F0u;
    SET_GPR_U32(ctx, 31, 0x3774F8u);
    ctx->pc = 0x3774F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3774F0u;
    // 0x3774f4: 0x260502d  daddu       $t2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30CBD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30CBD8u, 0x3774F0u, 0x3774F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3774F8u;
label_3774f8:
    // 0x3774f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3774f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3774fc: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x3774fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_377500:
    // 0x377500: 0x24d10001  addiu       $s1, $a2, 0x1
    ctx->pc = 0x377500u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x377504: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x377504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x377508: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x377508u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37750c: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x37750Cu;
    SET_GPR_U32(ctx, 31, 0x377514u);
    ctx->pc = 0x377510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37750Cu;
    // 0x377510: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x37750Cu, 0x377514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377514u;
label_377514:
    // 0x377514: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x377514u;
    {
        const bool branch_taken_0x377514 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x377518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377514u;
        // 0x377518: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377514) {
            ctx->pc = 0x377530u;
            goto label_377530;
        }
    }
    ctx->pc = 0x37751Cu;
    // 0x37751c: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x37751cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x377520: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x377520u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x377524: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x377524u;
    SET_GPR_U32(ctx, 31, 0x37752Cu);
    ctx->pc = 0x377528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377524u;
    // 0x377528: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x377524u, 0x37752Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37752Cu;
label_37752c:
    // 0x37752c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x37752cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_377530:
    // 0x377530: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x377530u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377534: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x377534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377538: 0xc102576  jal         func_4095D8
    ctx->pc = 0x377538u;
    SET_GPR_U32(ctx, 31, 0x377540u);
    ctx->pc = 0x37753Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377538u;
    // 0x37753c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x377538u, 0x377540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377540u;
label_377540:
    // 0x377540: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x377540u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377544: 0x28c20003  slti        $v0, $a2, 0x3
    ctx->pc = 0x377544u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x377548: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x377548u;
    {
        const bool branch_taken_0x377548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37754Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377548u;
        // 0x37754c: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377548) {
            ctx->pc = 0x377500u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_377500;
        }
    }
    ctx->pc = 0x377550u;
    // 0x377550: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x377550u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x377554: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x377554u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377558: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x377558u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x37755c: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x37755cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x377560: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x377560u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x377564: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x377564u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x377568: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x377568u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x37756c: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x37756cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x377570: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x377570u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x377574: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x377574u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x377578: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x377578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37757c: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x37757cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x377580: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x377580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x377584: 0x3e00008  jr          $ra
    ctx->pc = 0x377584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x377588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377584u;
        // 0x377588: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x377584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37758Cu;
    // 0x37758c: 0x0  nop
    ctx->pc = 0x37758cu;
    // NOP
    ctx->pc = 0x377590u;
}
