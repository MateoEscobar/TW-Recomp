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

// Function: sub_00368670
// Address: 0x368670 - 0x368970
void sub_00368670_0x368670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00368670_0x368670");
#endif

    switch (ctx->pc) {
        case 0x3686c0u: goto label_3686c0;
        case 0x3686c8u: goto label_3686c8;
        case 0x3686dcu: goto label_3686dc;
        case 0x3686e4u: goto label_3686e4;
        case 0x3686f8u: goto label_3686f8;
        case 0x368700u: goto label_368700;
        case 0x368714u: goto label_368714;
        case 0x36871cu: goto label_36871c;
        case 0x368730u: goto label_368730;
        case 0x368738u: goto label_368738;
        case 0x36874cu: goto label_36874c;
        case 0x368754u: goto label_368754;
        case 0x368768u: goto label_368768;
        case 0x368770u: goto label_368770;
        case 0x368784u: goto label_368784;
        case 0x36878cu: goto label_36878c;
        case 0x3687a0u: goto label_3687a0;
        case 0x3687a8u: goto label_3687a8;
        case 0x3687bcu: goto label_3687bc;
        case 0x3687c4u: goto label_3687c4;
        case 0x3687d8u: goto label_3687d8;
        case 0x3687f0u: goto label_3687f0;
        case 0x3687f8u: goto label_3687f8;
        case 0x368810u: goto label_368810;
        case 0x368828u: goto label_368828;
        case 0x368830u: goto label_368830;
        case 0x368874u: goto label_368874;
        case 0x368880u: goto label_368880;
        case 0x368894u: goto label_368894;
        case 0x3688acu: goto label_3688ac;
        case 0x3688c0u: goto label_3688c0;
        case 0x3688d8u: goto label_3688d8;
        case 0x3688ecu: goto label_3688ec;
        case 0x368904u: goto label_368904;
        case 0x368918u: goto label_368918;
        default: break;
    }

    ctx->pc = 0x368670u;

    // 0x368670: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x368670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x368674: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x368674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x368678: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x368678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x36867c: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x36867cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x368680: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x368680u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368684: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x368684u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368688: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x368688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x36868c: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x36868cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x368690: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x368690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x368694: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x368694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x368698: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x368698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x36869c: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x36869cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x3686a0: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x3686a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x3686a4: 0xe7b700e8  swc1        $f23, 0xE8($sp)
    ctx->pc = 0x3686a4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x3686a8: 0xe7b600e0  swc1        $f22, 0xE0($sp)
    ctx->pc = 0x3686a8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x3686ac: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x3686acu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x3686b0: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x3686b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x3686b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3686b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3686b8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3686B8u;
    SET_GPR_U32(ctx, 31, 0x3686C0u);
    ctx->pc = 0x3686BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3686B8u;
    // 0x3686bc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3686B8u, 0x3686C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3686C0u;
label_3686c0:
    // 0x3686c0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3686C0u;
    SET_GPR_U32(ctx, 31, 0x3686C8u);
    ctx->pc = 0x3686C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3686C0u;
    // 0x3686c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3686C0u, 0x3686C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3686C8u;
label_3686c8:
    // 0x3686c8: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x3686c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x3686cc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3686ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3686d0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3686d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3686d4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3686D4u;
    SET_GPR_U32(ctx, 31, 0x3686DCu);
    ctx->pc = 0x3686D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3686D4u;
    // 0x3686d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3686D4u, 0x3686DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3686DCu;
label_3686dc:
    // 0x3686dc: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3686DCu;
    SET_GPR_U32(ctx, 31, 0x3686E4u);
    ctx->pc = 0x3686E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3686DCu;
    // 0x3686e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3686DCu, 0x3686E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3686E4u;
label_3686e4:
    // 0x3686e4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3686e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3686e8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3686e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3686ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3686ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3686f0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3686F0u;
    SET_GPR_U32(ctx, 31, 0x3686F8u);
    ctx->pc = 0x3686F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3686F0u;
    // 0x3686f4: 0x305e00ff  andi        $fp, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3686F0u, 0x3686F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3686F8u;
label_3686f8:
    // 0x3686f8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3686F8u;
    SET_GPR_U32(ctx, 31, 0x368700u);
    ctx->pc = 0x3686FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3686F8u;
    // 0x3686fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3686F8u, 0x368700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368700u;
label_368700:
    // 0x368700: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x368700u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368704: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x368704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x368708: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x368708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36870c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36870Cu;
    SET_GPR_U32(ctx, 31, 0x368714u);
    ctx->pc = 0x368710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36870Cu;
    // 0x368710: 0x305700ff  andi        $s7, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36870Cu, 0x368714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368714u;
label_368714:
    // 0x368714: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x368714u;
    SET_GPR_U32(ctx, 31, 0x36871Cu);
    ctx->pc = 0x368718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368714u;
    // 0x368718: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x368714u, 0x36871Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36871Cu;
label_36871c:
    // 0x36871c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36871cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368720: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x368720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x368724: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x368724u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    // 0x368728: 0xc102472  jal         func_4091C8
    ctx->pc = 0x368728u;
    SET_GPR_U32(ctx, 31, 0x368730u);
    ctx->pc = 0x36872Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368728u;
    // 0x36872c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x368728u, 0x368730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368730u;
label_368730:
    // 0x368730: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x368730u;
    SET_GPR_U32(ctx, 31, 0x368738u);
    ctx->pc = 0x368734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368730u;
    // 0x368734: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x368730u, 0x368738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368738u;
label_368738:
    // 0x368738: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x368738u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x36873c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36873cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368740: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x368740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x368744: 0xc102472  jal         func_4091C8
    ctx->pc = 0x368744u;
    SET_GPR_U32(ctx, 31, 0x36874Cu);
    ctx->pc = 0x368748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368744u;
    // 0x368748: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x368744u, 0x36874Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36874Cu;
label_36874c:
    // 0x36874c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36874Cu;
    SET_GPR_U32(ctx, 31, 0x368754u);
    ctx->pc = 0x368750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36874Cu;
    // 0x368750: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36874Cu, 0x368754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368754u;
label_368754:
    // 0x368754: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x368754u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368758: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x368758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x36875c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36875cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368760: 0xc102472  jal         func_4091C8
    ctx->pc = 0x368760u;
    SET_GPR_U32(ctx, 31, 0x368768u);
    ctx->pc = 0x368764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368760u;
    // 0x368764: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x368760u, 0x368768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368768u;
label_368768:
    // 0x368768: 0xc10b108  jal         func_42C420
    ctx->pc = 0x368768u;
    SET_GPR_U32(ctx, 31, 0x368770u);
    ctx->pc = 0x36876Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368768u;
    // 0x36876c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x368768u, 0x368770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368770u;
label_368770:
    // 0x368770: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x368770u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368774: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x368774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x368778: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x368778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36877c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36877Cu;
    SET_GPR_U32(ctx, 31, 0x368784u);
    ctx->pc = 0x368780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36877Cu;
    // 0x368780: 0x305500ff  andi        $s5, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36877Cu, 0x368784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368784u;
label_368784:
    // 0x368784: 0xc10b108  jal         func_42C420
    ctx->pc = 0x368784u;
    SET_GPR_U32(ctx, 31, 0x36878Cu);
    ctx->pc = 0x368788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368784u;
    // 0x368788: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x368784u, 0x36878Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36878Cu;
label_36878c:
    // 0x36878c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36878cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368790: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x368790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x368794: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x368794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368798: 0xc102472  jal         func_4091C8
    ctx->pc = 0x368798u;
    SET_GPR_U32(ctx, 31, 0x3687A0u);
    ctx->pc = 0x36879Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368798u;
    // 0x36879c: 0x305400ff  andi        $s4, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x368798u, 0x3687A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3687A0u;
label_3687a0:
    // 0x3687a0: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x3687A0u;
    SET_GPR_U32(ctx, 31, 0x3687A8u);
    ctx->pc = 0x3687A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3687A0u;
    // 0x3687a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x3687A0u, 0x3687A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3687A8u;
label_3687a8:
    // 0x3687a8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3687a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3687ac: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3687acu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x3687b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3687b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3687b4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3687B4u;
    SET_GPR_U32(ctx, 31, 0x3687BCu);
    ctx->pc = 0x3687B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3687B4u;
    // 0x3687b8: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3687B4u, 0x3687BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3687BCu;
label_3687bc:
    // 0x3687bc: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x3687BCu;
    SET_GPR_U32(ctx, 31, 0x3687C4u);
    ctx->pc = 0x3687C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3687BCu;
    // 0x3687c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x3687BCu, 0x3687C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3687C4u;
label_3687c4:
    // 0x3687c4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3687c4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x3687c8: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x3687c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3687cc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3687ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3687d0: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x3687d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3687d4: 0x0  nop
    ctx->pc = 0x3687d4u;
    // NOP
label_3687d8:
    // 0x3687d8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3687d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3687dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3687dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3687e0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3687e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3687e4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3687e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3687e8: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x3687E8u;
    SET_GPR_U32(ctx, 31, 0x3687F0u);
    ctx->pc = 0x3687ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3687E8u;
    // 0x3687ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x3687E8u, 0x3687F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3687F0u;
label_3687f0:
    // 0x3687f0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3687F0u;
    SET_GPR_U32(ctx, 31, 0x3687F8u);
    ctx->pc = 0x3687F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3687F0u;
    // 0x3687f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3687F0u, 0x3687F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3687F8u;
label_3687f8:
    // 0x3687f8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3687f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x3687fc: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x3687fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x368800: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x368800u;
    {
        const bool branch_taken_0x368800 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x368804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368800u;
        // 0x368804: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368800) {
            ctx->pc = 0x3687D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3687d8;
        }
    }
    ctx->pc = 0x368808u;
    // 0x368808: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x368808u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36880c: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x36880cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_368810:
    // 0x368810: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x368810u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x368814: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x368814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368818: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x368818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x36881c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36881cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368820: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x368820u;
    SET_GPR_U32(ctx, 31, 0x368828u);
    ctx->pc = 0x368824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368820u;
    // 0x368824: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x368820u, 0x368828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368828u;
label_368828:
    // 0x368828: 0xc10b108  jal         func_42C420
    ctx->pc = 0x368828u;
    SET_GPR_U32(ctx, 31, 0x368830u);
    ctx->pc = 0x36882Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368828u;
    // 0x36882c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x368828u, 0x368830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368830u;
label_368830:
    // 0x368830: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x368830u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x368834: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x368834u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x368838: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x368838u;
    {
        const bool branch_taken_0x368838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36883Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368838u;
        // 0x36883c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368838) {
            ctx->pc = 0x368810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_368810;
        }
    }
    ctx->pc = 0x368840u;
    // 0x368840: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x368840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x368844: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x368844u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368848: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x368848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36884c: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x36884cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x368850: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x368850u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x368854: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x368854u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368858: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x368858u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36885c: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x36885cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368860: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x368860u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x368864: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x368864u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x368868: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x368868u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36886c: 0xc063768  jal         func_18DDA0
    ctx->pc = 0x36886Cu;
    SET_GPR_U32(ctx, 31, 0x368874u);
    ctx->pc = 0x368870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36886Cu;
    // 0x368870: 0x260582d  daddu       $t3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DDA0u, 0x36886Cu, 0x368874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368874u;
label_368874:
    // 0x368874: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x368874u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368878: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x368878u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x36887c: 0x0  nop
    ctx->pc = 0x36887cu;
    // NOP
label_368880:
    // 0x368880: 0x24d10001  addiu       $s1, $a2, 0x1
    ctx->pc = 0x368880u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x368884: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x368884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x368888: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x368888u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36888c: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x36888Cu;
    SET_GPR_U32(ctx, 31, 0x368894u);
    ctx->pc = 0x368890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36888Cu;
    // 0x368890: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x36888Cu, 0x368894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368894u;
label_368894:
    // 0x368894: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x368894u;
    {
        const bool branch_taken_0x368894 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x368898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368894u;
        // 0x368898: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368894) {
            ctx->pc = 0x3688B0u;
            goto label_3688b0;
        }
    }
    ctx->pc = 0x36889Cu;
    // 0x36889c: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x36889cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x3688a0: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x3688a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x3688a4: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x3688A4u;
    SET_GPR_U32(ctx, 31, 0x3688ACu);
    ctx->pc = 0x3688A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3688A4u;
    // 0x3688a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x3688A4u, 0x3688ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3688ACu;
label_3688ac:
    // 0x3688ac: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3688acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3688b0:
    // 0x3688b0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3688b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3688b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3688b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3688b8: 0xc102576  jal         func_4095D8
    ctx->pc = 0x3688B8u;
    SET_GPR_U32(ctx, 31, 0x3688C0u);
    ctx->pc = 0x3688BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3688B8u;
    // 0x3688bc: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x3688B8u, 0x3688C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3688C0u;
label_3688c0:
    // 0x3688c0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3688c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3688c4: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x3688c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x3688c8: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x3688C8u;
    {
        const bool branch_taken_0x3688c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3688CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3688C8u;
        // 0x3688cc: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3688c8) {
            ctx->pc = 0x368880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_368880;
        }
    }
    ctx->pc = 0x3688D0u;
    // 0x3688d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3688d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3688d4: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x3688d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_3688d8:
    // 0x3688d8: 0x24d10001  addiu       $s1, $a2, 0x1
    ctx->pc = 0x3688d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3688dc: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x3688dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x3688e0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x3688e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3688e4: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x3688E4u;
    SET_GPR_U32(ctx, 31, 0x3688ECu);
    ctx->pc = 0x3688E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3688E4u;
    // 0x3688e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x3688E4u, 0x3688ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3688ECu;
label_3688ec:
    // 0x3688ec: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3688ECu;
    {
        const bool branch_taken_0x3688ec = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x3688F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3688ECu;
        // 0x3688f0: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3688ec) {
            ctx->pc = 0x368908u;
            goto label_368908;
        }
    }
    ctx->pc = 0x3688F4u;
    // 0x3688f4: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x3688f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x3688f8: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x3688f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x3688fc: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x3688FCu;
    SET_GPR_U32(ctx, 31, 0x368904u);
    ctx->pc = 0x368900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3688FCu;
    // 0x368900: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x3688FCu, 0x368904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368904u;
label_368904:
    // 0x368904: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x368904u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_368908:
    // 0x368908: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x368908u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36890c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36890cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368910: 0xc102576  jal         func_4095D8
    ctx->pc = 0x368910u;
    SET_GPR_U32(ctx, 31, 0x368918u);
    ctx->pc = 0x368914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368910u;
    // 0x368914: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x368910u, 0x368918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368918u;
label_368918:
    // 0x368918: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x368918u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36891c: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x36891cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x368920: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x368920u;
    {
        const bool branch_taken_0x368920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x368924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368920u;
        // 0x368924: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368920) {
            ctx->pc = 0x3688D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3688d8;
        }
    }
    ctx->pc = 0x368928u;
    // 0x368928: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x368928u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x36892c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36892cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368930: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x368930u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x368934: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x368934u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x368938: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x368938u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x36893c: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x36893cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x368940: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x368940u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x368944: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x368944u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x368948: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x368948u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x36894c: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x36894cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x368950: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x368950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x368954: 0xc7b700e8  lwc1        $f23, 0xE8($sp)
    ctx->pc = 0x368954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x368958: 0xc7b600e0  lwc1        $f22, 0xE0($sp)
    ctx->pc = 0x368958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x36895c: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x36895cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x368960: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x368960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x368964: 0x3e00008  jr          $ra
    ctx->pc = 0x368964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x368968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368964u;
        // 0x368968: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x368964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36896Cu;
    // 0x36896c: 0x0  nop
    ctx->pc = 0x36896cu;
    // NOP
    ctx->pc = 0x368970u;
}
