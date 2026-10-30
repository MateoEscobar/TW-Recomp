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

// Function: sub_00363268
// Address: 0x363268 - 0x3633a8
void sub_00363268_0x363268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00363268_0x363268");
#endif

    switch (ctx->pc) {
        case 0x36329cu: goto label_36329c;
        case 0x3632a4u: goto label_3632a4;
        case 0x3632bcu: goto label_3632bc;
        case 0x3632c4u: goto label_3632c4;
        case 0x3632dcu: goto label_3632dc;
        case 0x3632e4u: goto label_3632e4;
        case 0x3632fcu: goto label_3632fc;
        case 0x363304u: goto label_363304;
        case 0x36331cu: goto label_36331c;
        case 0x363324u: goto label_363324;
        case 0x36333cu: goto label_36333c;
        case 0x363344u: goto label_363344;
        case 0x363358u: goto label_363358;
        case 0x363378u: goto label_363378;
        default: break;
    }

    ctx->pc = 0x363268u;

    // 0x363268: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x363268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x36326c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36326cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x363270: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x363270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x363274: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x363274u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363278: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x363278u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36327c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x36327cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x363280: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x363280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x363284: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x363284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x363288: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x363288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x36328c: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x36328cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x363290: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x363290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x363294: 0xc102472  jal         func_4091C8
    ctx->pc = 0x363294u;
    SET_GPR_U32(ctx, 31, 0x36329Cu);
    ctx->pc = 0x363298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363294u;
    // 0x363298: 0xe7b40070  swc1        $f20, 0x70($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x363294u, 0x36329Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36329Cu;
label_36329c:
    // 0x36329c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36329Cu;
    SET_GPR_U32(ctx, 31, 0x3632A4u);
    ctx->pc = 0x3632A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36329Cu;
    // 0x3632a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36329Cu, 0x3632A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3632A4u;
label_3632a4:
    // 0x3632a4: 0x3406805c  ori         $a2, $zero, 0x805C
    ctx->pc = 0x3632a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32860);
    // 0x3632a8: 0x633fc  dsll32      $a2, $a2, 15
    ctx->pc = 0x3632a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 15));
    // 0x3632ac: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3632acu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3632b0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3632b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3632b4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3632B4u;
    SET_GPR_U32(ctx, 31, 0x3632BCu);
    ctx->pc = 0x3632B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3632B4u;
    // 0x3632b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3632B4u, 0x3632BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3632BCu;
label_3632bc:
    // 0x3632bc: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x3632BCu;
    SET_GPR_U32(ctx, 31, 0x3632C4u);
    ctx->pc = 0x3632C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3632BCu;
    // 0x3632c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x3632BCu, 0x3632C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3632C4u;
label_3632c4:
    // 0x3632c4: 0x3406807c  ori         $a2, $zero, 0x807C
    ctx->pc = 0x3632c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32892);
    // 0x3632c8: 0x633fc  dsll32      $a2, $a2, 15
    ctx->pc = 0x3632c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 15));
    // 0x3632cc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3632ccu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x3632d0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3632d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3632d4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3632D4u;
    SET_GPR_U32(ctx, 31, 0x3632DCu);
    ctx->pc = 0x3632D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3632D4u;
    // 0x3632d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3632D4u, 0x3632DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3632DCu;
label_3632dc:
    // 0x3632dc: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3632DCu;
    SET_GPR_U32(ctx, 31, 0x3632E4u);
    ctx->pc = 0x3632E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3632DCu;
    // 0x3632e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3632DCu, 0x3632E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3632E4u;
label_3632e4:
    // 0x3632e4: 0x3406ffc0  ori         $a2, $zero, 0xFFC0
    ctx->pc = 0x3632e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x3632e8: 0x633bc  dsll32      $a2, $a2, 14
    ctx->pc = 0x3632e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 14));
    // 0x3632ec: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3632ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3632f0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3632f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3632f4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3632F4u;
    SET_GPR_U32(ctx, 31, 0x3632FCu);
    ctx->pc = 0x3632F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3632F4u;
    // 0x3632f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3632F4u, 0x3632FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3632FCu;
label_3632fc:
    // 0x3632fc: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3632FCu;
    SET_GPR_U32(ctx, 31, 0x363304u);
    ctx->pc = 0x363300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3632FCu;
    // 0x363300: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3632FCu, 0x363304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363304u;
label_363304:
    // 0x363304: 0x34068068  ori         $a2, $zero, 0x8068
    ctx->pc = 0x363304u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32872);
    // 0x363308: 0x633fc  dsll32      $a2, $a2, 15
    ctx->pc = 0x363308u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 15));
    // 0x36330c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x36330cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363310: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x363310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x363314: 0xc102472  jal         func_4091C8
    ctx->pc = 0x363314u;
    SET_GPR_U32(ctx, 31, 0x36331Cu);
    ctx->pc = 0x363318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363314u;
    // 0x363318: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x363314u, 0x36331Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36331Cu;
label_36331c:
    // 0x36331c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36331Cu;
    SET_GPR_U32(ctx, 31, 0x363324u);
    ctx->pc = 0x363320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36331Cu;
    // 0x363320: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36331Cu, 0x363324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363324u;
label_363324:
    // 0x363324: 0x34068048  ori         $a2, $zero, 0x8048
    ctx->pc = 0x363324u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x363328: 0x633fc  dsll32      $a2, $a2, 15
    ctx->pc = 0x363328u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 15));
    // 0x36332c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x36332cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363330: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x363330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x363334: 0xc102472  jal         func_4091C8
    ctx->pc = 0x363334u;
    SET_GPR_U32(ctx, 31, 0x36333Cu);
    ctx->pc = 0x363338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363334u;
    // 0x363338: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x363334u, 0x36333Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36333Cu;
label_36333c:
    // 0x36333c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36333Cu;
    SET_GPR_U32(ctx, 31, 0x363344u);
    ctx->pc = 0x363340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36333Cu;
    // 0x363340: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36333Cu, 0x363344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363344u;
label_363344:
    // 0x363344: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x363344u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363348: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x363348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36334c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x36334cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x363350: 0xc1024c6  jal         func_409318
    ctx->pc = 0x363350u;
    SET_GPR_U32(ctx, 31, 0x363358u);
    ctx->pc = 0x363354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363350u;
    // 0x363354: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x363350u, 0x363358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363358u;
label_363358:
    // 0x363358: 0x2482b  sltu        $t1, $zero, $v0
    ctx->pc = 0x363358u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x36335c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x36335cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363360: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x363360u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x363364: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x363364u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363368: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x363368u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36336c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x36336cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363370: 0xc0b43a6  jal         func_2D0E98
    ctx->pc = 0x363370u;
    SET_GPR_U32(ctx, 31, 0x363378u);
    ctx->pc = 0x363374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363370u;
    // 0x363374: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0E98u, 0x363370u, 0x363378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363378u;
label_363378:
    // 0x363378: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x363378u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x36337c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36337cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363380: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x363380u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x363384: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x363384u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x363388: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x363388u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36338c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x36338cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x363390: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x363390u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x363394: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x363394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x363398: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x363398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x36339c: 0x3e00008  jr          $ra
    ctx->pc = 0x36339Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3633A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36339Cu;
        // 0x3633a0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36339Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3633A4u;
    // 0x3633a4: 0x0  nop
    ctx->pc = 0x3633a4u;
    // NOP
    ctx->pc = 0x3633a8u;
}
