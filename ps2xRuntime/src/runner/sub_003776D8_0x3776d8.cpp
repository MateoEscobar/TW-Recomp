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

// Function: sub_003776D8
// Address: 0x3776d8 - 0x377810
void sub_003776D8_0x3776d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003776D8_0x3776d8");
#endif

    switch (ctx->pc) {
        case 0x377710u: goto label_377710;
        case 0x377718u: goto label_377718;
        case 0x37772cu: goto label_37772c;
        case 0x377734u: goto label_377734;
        case 0x377748u: goto label_377748;
        case 0x377750u: goto label_377750;
        case 0x377768u: goto label_377768;
        case 0x377770u: goto label_377770;
        case 0x377788u: goto label_377788;
        case 0x377790u: goto label_377790;
        case 0x3777a8u: goto label_3777a8;
        case 0x3777b0u: goto label_3777b0;
        case 0x3777c4u: goto label_3777c4;
        case 0x3777e4u: goto label_3777e4;
        default: break;
    }

    ctx->pc = 0x3776d8u;

    // 0x3776d8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3776d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3776dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3776dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3776e0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3776e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3776e4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3776e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3776e8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3776e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3776ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3776ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3776f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3776f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3776f4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3776f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x3776f8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3776f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3776fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3776fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x377700: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x377700u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x377704: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x377704u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x377708: 0xc102472  jal         func_4091C8
    ctx->pc = 0x377708u;
    SET_GPR_U32(ctx, 31, 0x377710u);
    ctx->pc = 0x37770Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377708u;
    // 0x37770c: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x377708u, 0x377710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377710u;
label_377710:
    // 0x377710: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x377710u;
    SET_GPR_U32(ctx, 31, 0x377718u);
    ctx->pc = 0x377714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377710u;
    // 0x377714: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x377710u, 0x377718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377718u;
label_377718:
    // 0x377718: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x377718u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37771c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x37771cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377720: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x377720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x377724: 0xc102472  jal         func_4091C8
    ctx->pc = 0x377724u;
    SET_GPR_U32(ctx, 31, 0x37772Cu);
    ctx->pc = 0x377728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377724u;
    // 0x377728: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x377724u, 0x37772Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37772Cu;
label_37772c:
    // 0x37772c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x37772Cu;
    SET_GPR_U32(ctx, 31, 0x377734u);
    ctx->pc = 0x377730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37772Cu;
    // 0x377730: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x37772Cu, 0x377734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377734u;
label_377734:
    // 0x377734: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x377734u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377738: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x377738u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37773c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x37773cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x377740: 0xc102472  jal         func_4091C8
    ctx->pc = 0x377740u;
    SET_GPR_U32(ctx, 31, 0x377748u);
    ctx->pc = 0x377744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377740u;
    // 0x377744: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x377740u, 0x377748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377748u;
label_377748:
    // 0x377748: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x377748u;
    SET_GPR_U32(ctx, 31, 0x377750u);
    ctx->pc = 0x37774Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377748u;
    // 0x37774c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x377748u, 0x377750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377750u;
label_377750:
    // 0x377750: 0x34068088  ori         $a2, $zero, 0x8088
    ctx->pc = 0x377750u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32904);
    // 0x377754: 0x633fc  dsll32      $a2, $a2, 15
    ctx->pc = 0x377754u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 15));
    // 0x377758: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x377758u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37775c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x37775cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x377760: 0xc102472  jal         func_4091C8
    ctx->pc = 0x377760u;
    SET_GPR_U32(ctx, 31, 0x377768u);
    ctx->pc = 0x377764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377760u;
    // 0x377764: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x377760u, 0x377768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377768u;
label_377768:
    // 0x377768: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x377768u;
    SET_GPR_U32(ctx, 31, 0x377770u);
    ctx->pc = 0x37776Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377768u;
    // 0x37776c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x377768u, 0x377770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377770u;
label_377770:
    // 0x377770: 0x34068048  ori         $a2, $zero, 0x8048
    ctx->pc = 0x377770u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x377774: 0x633fc  dsll32      $a2, $a2, 15
    ctx->pc = 0x377774u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 15));
    // 0x377778: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x377778u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x37777c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x37777cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x377780: 0xc102472  jal         func_4091C8
    ctx->pc = 0x377780u;
    SET_GPR_U32(ctx, 31, 0x377788u);
    ctx->pc = 0x377784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377780u;
    // 0x377784: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x377780u, 0x377788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377788u;
label_377788:
    // 0x377788: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x377788u;
    SET_GPR_U32(ctx, 31, 0x377790u);
    ctx->pc = 0x37778Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377788u;
    // 0x37778c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x377788u, 0x377790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377790u;
label_377790:
    // 0x377790: 0x3406807c  ori         $a2, $zero, 0x807C
    ctx->pc = 0x377790u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32892);
    // 0x377794: 0x633fc  dsll32      $a2, $a2, 15
    ctx->pc = 0x377794u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 15));
    // 0x377798: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x377798u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x37779c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x37779cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3777a0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3777A0u;
    SET_GPR_U32(ctx, 31, 0x3777A8u);
    ctx->pc = 0x3777A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3777A0u;
    // 0x3777a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3777A0u, 0x3777A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3777A8u;
label_3777a8:
    // 0x3777a8: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x3777A8u;
    SET_GPR_U32(ctx, 31, 0x3777B0u);
    ctx->pc = 0x3777ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3777A8u;
    // 0x3777ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x3777A8u, 0x3777B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3777B0u;
label_3777b0:
    // 0x3777b0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3777b0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x3777b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3777b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3777b8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x3777b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3777bc: 0xc102488  jal         func_409220
    ctx->pc = 0x3777BCu;
    SET_GPR_U32(ctx, 31, 0x3777C4u);
    ctx->pc = 0x3777C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3777BCu;
    // 0x3777c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x3777BCu, 0x3777C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3777C4u;
label_3777c4:
    // 0x3777c4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3777c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3777c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3777c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3777cc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3777ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3777d0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3777d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3777d4: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3777d4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x3777d8: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x3777d8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x3777dc: 0xc0c689a  jal         func_31A268
    ctx->pc = 0x3777DCu;
    SET_GPR_U32(ctx, 31, 0x3777E4u);
    ctx->pc = 0x3777E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3777DCu;
    // 0x3777e0: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A268u, 0x3777DCu, 0x3777E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3777E4u;
label_3777e4:
    // 0x3777e4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3777e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3777e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3777e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3777ec: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3777ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3777f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3777f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3777f4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3777f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3777f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3777f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3777fc: 0xc7b60060  lwc1        $f22, 0x60($sp)
    ctx->pc = 0x3777fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x377800: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x377800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x377804: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x377804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x377808: 0x3e00008  jr          $ra
    ctx->pc = 0x377808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37780Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377808u;
        // 0x37780c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x377808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x377810u;
}
