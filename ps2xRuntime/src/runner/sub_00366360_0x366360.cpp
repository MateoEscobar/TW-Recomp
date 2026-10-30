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

// Function: sub_00366360
// Address: 0x366360 - 0x366518
void sub_00366360_0x366360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00366360_0x366360");
#endif

    switch (ctx->pc) {
        case 0x3663a4u: goto label_3663a4;
        case 0x3663b8u: goto label_3663b8;
        case 0x3663c0u: goto label_3663c0;
        case 0x3663d4u: goto label_3663d4;
        case 0x3663dcu: goto label_3663dc;
        case 0x3663f0u: goto label_3663f0;
        case 0x3663f8u: goto label_3663f8;
        case 0x36640cu: goto label_36640c;
        case 0x366414u: goto label_366414;
        case 0x366428u: goto label_366428;
        case 0x366430u: goto label_366430;
        case 0x366444u: goto label_366444;
        case 0x36644cu: goto label_36644c;
        case 0x366460u: goto label_366460;
        case 0x366468u: goto label_366468;
        case 0x366480u: goto label_366480;
        case 0x366488u: goto label_366488;
        case 0x3664b0u: goto label_3664b0;
        case 0x3664bcu: goto label_3664bc;
        case 0x3664d4u: goto label_3664d4;
        case 0x3664e0u: goto label_3664e0;
        default: break;
    }

    ctx->pc = 0x366360u;

    // 0x366360: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x366360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x366364: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x366364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x366368: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x366368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x36636c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36636cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366370: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x366370u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366374: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x366374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x366378: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x366378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x36637c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x36637cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x366380: 0xe7b90078  swc1        $f25, 0x78($sp)
    ctx->pc = 0x366380u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x366384: 0xe7b80070  swc1        $f24, 0x70($sp)
    ctx->pc = 0x366384u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x366388: 0xe7b70068  swc1        $f23, 0x68($sp)
    ctx->pc = 0x366388u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x36638c: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x36638cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x366390: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x366390u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x366394: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x366394u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x366398: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x366398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36639c: 0xc102488  jal         func_409220
    ctx->pc = 0x36639Cu;
    SET_GPR_U32(ctx, 31, 0x3663A4u);
    ctx->pc = 0x3663A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36639Cu;
    // 0x3663a0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x36639Cu, 0x3663A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3663A4u;
label_3663a4:
    // 0x3663a4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3663a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3663a8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3663a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3663ac: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3663acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3663b0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3663B0u;
    SET_GPR_U32(ctx, 31, 0x3663B8u);
    ctx->pc = 0x3663B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3663B0u;
    // 0x3663b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3663B0u, 0x3663B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3663B8u;
label_3663b8:
    // 0x3663b8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3663B8u;
    SET_GPR_U32(ctx, 31, 0x3663C0u);
    ctx->pc = 0x3663BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3663B8u;
    // 0x3663bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3663B8u, 0x3663C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3663C0u;
label_3663c0:
    // 0x3663c0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3663c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3663c4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3663c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3663c8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3663c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3663cc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3663CCu;
    SET_GPR_U32(ctx, 31, 0x3663D4u);
    ctx->pc = 0x3663D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3663CCu;
    // 0x3663d0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3663CCu, 0x3663D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3663D4u;
label_3663d4:
    // 0x3663d4: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x3663D4u;
    SET_GPR_U32(ctx, 31, 0x3663DCu);
    ctx->pc = 0x3663D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3663D4u;
    // 0x3663d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x3663D4u, 0x3663DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3663DCu;
label_3663dc:
    // 0x3663dc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3663dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3663e0: 0x46000646  mov.s       $f25, $f0
    ctx->pc = 0x3663e0u;
    ctx->f[25] = FPU_MOV_S(ctx->f[0]);
    // 0x3663e4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3663e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3663e8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3663E8u;
    SET_GPR_U32(ctx, 31, 0x3663F0u);
    ctx->pc = 0x3663ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3663E8u;
    // 0x3663ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3663E8u, 0x3663F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3663F0u;
label_3663f0:
    // 0x3663f0: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x3663F0u;
    SET_GPR_U32(ctx, 31, 0x3663F8u);
    ctx->pc = 0x3663F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3663F0u;
    // 0x3663f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x3663F0u, 0x3663F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3663F8u;
label_3663f8:
    // 0x3663f8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3663f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3663fc: 0x46000606  mov.s       $f24, $f0
    ctx->pc = 0x3663fcu;
    ctx->f[24] = FPU_MOV_S(ctx->f[0]);
    // 0x366400: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x366400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x366404: 0xc102472  jal         func_4091C8
    ctx->pc = 0x366404u;
    SET_GPR_U32(ctx, 31, 0x36640Cu);
    ctx->pc = 0x366408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366404u;
    // 0x366408: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x366404u, 0x36640Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36640Cu;
label_36640c:
    // 0x36640c: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x36640Cu;
    SET_GPR_U32(ctx, 31, 0x366414u);
    ctx->pc = 0x366410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36640Cu;
    // 0x366410: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x36640Cu, 0x366414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366414u;
label_366414:
    // 0x366414: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x366414u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366418: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x366418u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    // 0x36641c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x36641cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x366420: 0xc102472  jal         func_4091C8
    ctx->pc = 0x366420u;
    SET_GPR_U32(ctx, 31, 0x366428u);
    ctx->pc = 0x366424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366420u;
    // 0x366424: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x366420u, 0x366428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366428u;
label_366428:
    // 0x366428: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x366428u;
    SET_GPR_U32(ctx, 31, 0x366430u);
    ctx->pc = 0x36642Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366428u;
    // 0x36642c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x366428u, 0x366430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366430u;
label_366430:
    // 0x366430: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x366430u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366434: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x366434u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x366438: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x366438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x36643c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36643Cu;
    SET_GPR_U32(ctx, 31, 0x366444u);
    ctx->pc = 0x366440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36643Cu;
    // 0x366440: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36643Cu, 0x366444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366444u;
label_366444:
    // 0x366444: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x366444u;
    SET_GPR_U32(ctx, 31, 0x36644Cu);
    ctx->pc = 0x366448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366444u;
    // 0x366448: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x366444u, 0x36644Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36644Cu;
label_36644c:
    // 0x36644c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36644cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366450: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x366450u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x366454: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x366454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x366458: 0xc102472  jal         func_4091C8
    ctx->pc = 0x366458u;
    SET_GPR_U32(ctx, 31, 0x366460u);
    ctx->pc = 0x36645Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366458u;
    // 0x36645c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x366458u, 0x366460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366460u;
label_366460:
    // 0x366460: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x366460u;
    SET_GPR_U32(ctx, 31, 0x366468u);
    ctx->pc = 0x366464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366460u;
    // 0x366464: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x366460u, 0x366468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366468u;
label_366468:
    // 0x366468: 0x3406ffc0  ori         $a2, $zero, 0xFFC0
    ctx->pc = 0x366468u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x36646c: 0x633bc  dsll32      $a2, $a2, 14
    ctx->pc = 0x36646cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 14));
    // 0x366470: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x366470u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x366474: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x366474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x366478: 0xc102472  jal         func_4091C8
    ctx->pc = 0x366478u;
    SET_GPR_U32(ctx, 31, 0x366480u);
    ctx->pc = 0x36647Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366478u;
    // 0x36647c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x366478u, 0x366480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366480u;
label_366480:
    // 0x366480: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x366480u;
    SET_GPR_U32(ctx, 31, 0x366488u);
    ctx->pc = 0x366484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366480u;
    // 0x366484: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x366480u, 0x366488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366488u;
label_366488:
    // 0x366488: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x366488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36648c: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x36648cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    // 0x366490: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x366490u;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    // 0x366494: 0x4600bb86  mov.s       $f14, $f23
    ctx->pc = 0x366494u;
    ctx->f[14] = FPU_MOV_S(ctx->f[23]);
    // 0x366498: 0x4600b3c6  mov.s       $f15, $f22
    ctx->pc = 0x366498u;
    ctx->f[15] = FPU_MOV_S(ctx->f[22]);
    // 0x36649c: 0x4600ac06  mov.s       $f16, $f21
    ctx->pc = 0x36649cu;
    ctx->f[16] = FPU_MOV_S(ctx->f[21]);
    // 0x3664a0: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x3664a0u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x3664a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3664a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3664a8: 0xc047216  jal         func_11C858
    ctx->pc = 0x3664A8u;
    SET_GPR_U32(ctx, 31, 0x3664B0u);
    ctx->pc = 0x3664ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3664A8u;
    // 0x3664ac: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C858u, 0x3664A8u, 0x3664B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3664B0u;
label_3664b0:
    // 0x3664b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3664b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3664b4: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x3664B4u;
    SET_GPR_U32(ctx, 31, 0x3664BCu);
    ctx->pc = 0x3664B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3664B4u;
    // 0x3664b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x3664B4u, 0x3664BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3664BCu;
label_3664bc:
    // 0x3664bc: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3664BCu;
    {
        const bool branch_taken_0x3664bc = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x3664C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3664BCu;
        // 0x3664c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3664bc) {
            ctx->pc = 0x3664D8u;
            goto label_3664d8;
        }
    }
    ctx->pc = 0x3664C4u;
    // 0x3664c4: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x3664c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x3664c8: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x3664c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x3664cc: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x3664CCu;
    SET_GPR_U32(ctx, 31, 0x3664D4u);
    ctx->pc = 0x3664D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3664CCu;
    // 0x3664d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x3664CCu, 0x3664D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3664D4u;
label_3664d4:
    // 0x3664d4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3664d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3664d8:
    // 0x3664d8: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x3664D8u;
    SET_GPR_U32(ctx, 31, 0x3664E0u);
    ctx->pc = 0x3664DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3664D8u;
    // 0x3664dc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x3664D8u, 0x3664E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3664E0u;
label_3664e0:
    // 0x3664e0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3664e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3664e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3664e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3664e8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3664e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3664ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3664ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3664f0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3664f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3664f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3664f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3664f8: 0xc7b90078  lwc1        $f25, 0x78($sp)
    ctx->pc = 0x3664f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x3664fc: 0xc7b80070  lwc1        $f24, 0x70($sp)
    ctx->pc = 0x3664fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x366500: 0xc7b70068  lwc1        $f23, 0x68($sp)
    ctx->pc = 0x366500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x366504: 0xc7b60060  lwc1        $f22, 0x60($sp)
    ctx->pc = 0x366504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x366508: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x366508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x36650c: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x36650cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x366510: 0x3e00008  jr          $ra
    ctx->pc = 0x366510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x366514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366510u;
        // 0x366514: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x366510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x366518u;
}
