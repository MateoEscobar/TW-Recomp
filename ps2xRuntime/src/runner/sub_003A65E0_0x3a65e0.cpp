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

// Function: sub_003A65E0
// Address: 0x3a65e0 - 0x3a6a10
void sub_003A65E0_0x3a65e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A65E0_0x3a65e0");
#endif

    switch (ctx->pc) {
        case 0x3a6680u: goto label_3a6680;
        case 0x3a6694u: goto label_3a6694;
        case 0x3a66a8u: goto label_3a66a8;
        case 0x3a66bcu: goto label_3a66bc;
        case 0x3a66c0u: goto label_3a66c0;
        case 0x3a66e4u: goto label_3a66e4;
        case 0x3a6708u: goto label_3a6708;
        case 0x3a6718u: goto label_3a6718;
        case 0x3a6724u: goto label_3a6724;
        case 0x3a6734u: goto label_3a6734;
        case 0x3a6740u: goto label_3a6740;
        case 0x3a674cu: goto label_3a674c;
        case 0x3a6760u: goto label_3a6760;
        case 0x3a6770u: goto label_3a6770;
        case 0x3a677cu: goto label_3a677c;
        case 0x3a6788u: goto label_3a6788;
        case 0x3a6794u: goto label_3a6794;
        case 0x3a67a8u: goto label_3a67a8;
        case 0x3a67b4u: goto label_3a67b4;
        case 0x3a67c0u: goto label_3a67c0;
        case 0x3a67c8u: goto label_3a67c8;
        case 0x3a67e8u: goto label_3a67e8;
        case 0x3a6838u: goto label_3a6838;
        case 0x3a684cu: goto label_3a684c;
        case 0x3a6864u: goto label_3a6864;
        case 0x3a6880u: goto label_3a6880;
        case 0x3a68a4u: goto label_3a68a4;
        case 0x3a68b4u: goto label_3a68b4;
        case 0x3a68c4u: goto label_3a68c4;
        case 0x3a68d4u: goto label_3a68d4;
        case 0x3a68e0u: goto label_3a68e0;
        case 0x3a68ecu: goto label_3a68ec;
        case 0x3a6900u: goto label_3a6900;
        case 0x3a690cu: goto label_3a690c;
        case 0x3a6918u: goto label_3a6918;
        case 0x3a6968u: goto label_3a6968;
        case 0x3a6974u: goto label_3a6974;
        case 0x3a6994u: goto label_3a6994;
        case 0x3a69a4u: goto label_3a69a4;
        case 0x3a69acu: goto label_3a69ac;
        default: break;
    }

    ctx->pc = 0x3a65e0u;

    // 0x3a65e0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x3a65e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x3a65e4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3a65e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x3a65e8: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x3a65e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x3a65ec: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x3a65ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
    // 0x3a65f0: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x3a65f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x3a65f4: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x3a65f4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
    // 0x3a65f8: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x3a65f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x3a65fc: 0x2610b8b8  addiu       $s0, $s0, -0x4748
    ctx->pc = 0x3a65fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949048));
    // 0x3a6600: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x3a6600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x3a6604: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x3a6604u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6608: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x3a6608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x3a660c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3a660cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6610: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x3a6610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x3a6614: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x3a6614u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6618: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x3a6618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x3a661c: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x3a661cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
    // 0x3a6620: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x3a6620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
    // 0x3a6624: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x3a6624u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6628: 0xe7b500f8  swc1        $f21, 0xF8($sp)
    ctx->pc = 0x3a6628u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x3a662c: 0x3c150058  lui         $s5, 0x58
    ctx->pc = 0x3a662cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)88 << 16));
    // 0x3a6630: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x3a6630u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x3a6634: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3a6634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x3a6638: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3a6638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3a663c: 0xe7b60100  swc1        $f22, 0x100($sp)
    ctx->pc = 0x3a663cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x3a6640: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x3a6640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x3a6644: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3a6644u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x3a6648: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x3a6648u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a664c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3a664cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x5116C0u));
    // 0x3a6650: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3a6650u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x3a6654: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3a6654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3a6658: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3a6658u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x3a665c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x3a665cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x3a6660: 0xafa60038  sw          $a2, 0x38($sp)
    ctx->pc = 0x3a6660u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 6));
    // 0x3a6664: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a6664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6668: 0xafa7003c  sw          $a3, 0x3C($sp)
    ctx->pc = 0x3a6668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 7));
    // 0x3a666c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3a666cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x3a6670: 0x7faa0000  sq          $t2, 0x0($sp)
    ctx->pc = 0x3a6670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 10));
    // 0x3a6674: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x3a6674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x3a6678: 0xc0cd518  jal         func_335460
    ctx->pc = 0x3A6678u;
    SET_GPR_U32(ctx, 31, 0x3A6680u);
    ctx->pc = 0x3A667Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6678u;
    // 0x3a667c: 0xafbd0034  sw          $sp, 0x34($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3A6678u, 0x3A6680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6680u;
label_3a6680:
    // 0x3a6680: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x3a6680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3a6684: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a6684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6688: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3a6688u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x3a668c: 0xc0cd518  jal         func_335460
    ctx->pc = 0x3A668Cu;
    SET_GPR_U32(ctx, 31, 0x3A6694u);
    ctx->pc = 0x3A6690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A668Cu;
    // 0x3a6690: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3A668Cu, 0x3A6694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6694u;
label_3a6694:
    // 0x3a6694: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a6694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6698: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x3a6698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x3a669c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3a669cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x3a66a0: 0xc0cd518  jal         func_335460
    ctx->pc = 0x3A66A0u;
    SET_GPR_U32(ctx, 31, 0x3A66A8u);
    ctx->pc = 0x3A66A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A66A0u;
    // 0x3a66a4: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3A66A0u, 0x3A66A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A66A8u;
label_3a66a8:
    // 0x3a66a8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3a66a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3a66ac: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x3a66acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x3a66b0: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x3a66b0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a66b4: 0xc0e97e0  jal         func_3A5F80
    ctx->pc = 0x3A66B4u;
    SET_GPR_U32(ctx, 31, 0x3A66BCu);
    ctx->pc = 0x3A66B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A66B4u;
    // 0x3a66b8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5F80u, 0x3A66B4u, 0x3A66BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A66BCu;
label_3a66bc:
    // 0x3a66bc: 0x0  nop
    ctx->pc = 0x3a66bcu;
    // NOP
label_3a66c0:
    // 0x3a66c0: 0x3c013da3  lui         $at, 0x3DA3
    ctx->pc = 0x3a66c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15779 << 16));
    // 0x3a66c4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x3a66c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x3a66c8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3a66c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3a66cc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3a66ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a66d0: 0x3c013e05  lui         $at, 0x3E05
    ctx->pc = 0x3a66d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15877 << 16));
    // 0x3a66d4: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x3a66d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
    // 0x3a66d8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3a66d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3a66dc: 0xc0cd518  jal         func_335460
    ctx->pc = 0x3A66DCu;
    SET_GPR_U32(ctx, 31, 0x3A66E4u);
    ctx->pc = 0x3A66E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A66DCu;
    // 0x3a66e0: 0x8fb00038  lw          $s0, 0x38($sp) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3A66DCu, 0x3A66E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A66E4u;
label_3a66e4:
    // 0x3a66e4: 0x3c013f51  lui         $at, 0x3F51
    ctx->pc = 0x3a66e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16209 << 16));
    // 0x3a66e8: 0x3421eb85  ori         $at, $at, 0xEB85
    ctx->pc = 0x3a66e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60293);
    // 0x3a66ec: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3a66ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3a66f0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3a66f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a66f4: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x3a66f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
    // 0x3a66f8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3a66f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x3a66fc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3a66fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3a6700: 0xc0cd518  jal         func_335460
    ctx->pc = 0x3A6700u;
    SET_GPR_U32(ctx, 31, 0x3A6708u);
    ctx->pc = 0x3A6704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6700u;
    // 0x3a6704: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3A6700u, 0x3A6708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6708u;
label_3a6708:
    // 0x3a6708: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3a6708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a670c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3a670cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x3a6710: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x3A6710u;
    SET_GPR_U32(ctx, 31, 0x3A6718u);
    ctx->pc = 0x3A6714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6710u;
    // 0x3a6714: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3A6710u, 0x3A6718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6718u;
label_3a6718:
    // 0x3a6718: 0x2451000a  addiu       $s1, $v0, 0xA
    ctx->pc = 0x3a6718u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x3a671c: 0xc0e9694  jal         func_3A5A50
    ctx->pc = 0x3A671Cu;
    SET_GPR_U32(ctx, 31, 0x3A6724u);
    ctx->pc = 0x3A6720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A671Cu;
    // 0x3a6720: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3A671Cu, 0x3A6724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6724u;
label_3a6724:
    // 0x3a6724: 0x50400029  beql        $v0, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x3A6724u;
    {
        const bool branch_taken_0x3a6724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a6724) {
            ctx->pc = 0x3A6728u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A6724u;
            // 0x3a6728: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A67CCu;
            goto label_3a67cc;
        }
    }
    ctx->pc = 0x3A672Cu;
    // 0x3a672c: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x3A672Cu;
    SET_GPR_U32(ctx, 31, 0x3A6734u);
    ctx->pc = 0x3A6730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A672Cu;
    // 0x3a6730: 0x8e442c7c  lw          $a0, 0x2C7C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x3A672Cu, 0x3A6734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6734u;
label_3a6734:
    // 0x3a6734: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x3a6734u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x3a6738: 0xc0e8b58  jal         func_3A2D60
    ctx->pc = 0x3A6738u;
    SET_GPR_U32(ctx, 31, 0x3A6740u);
    ctx->pc = 0x3A673Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6738u;
    // 0x3a673c: 0x8e442c7c  lw          $a0, 0x2C7C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x3A6738u, 0x3A6740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6740u;
label_3a6740:
    // 0x3a6740: 0x8e442c7c  lw          $a0, 0x2C7C($s2)
    ctx->pc = 0x3a6740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
    // 0x3a6744: 0xc0e8b58  jal         func_3A2D60
    ctx->pc = 0x3A6744u;
    SET_GPR_U32(ctx, 31, 0x3A674Cu);
    ctx->pc = 0x3A6748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6744u;
    // 0x3a6748: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x3A6744u, 0x3A674Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A674Cu;
label_3a674c:
    // 0x3a674c: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x3a674cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x3a6750: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3a6750u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x3a6754: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3a6754u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3a6758: 0xc0e8b78  jal         func_3A2DE0
    ctx->pc = 0x3A6758u;
    SET_GPR_U32(ctx, 31, 0x3A6760u);
    ctx->pc = 0x3A675Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6758u;
    // 0x3a675c: 0x8e442c7c  lw          $a0, 0x2C7C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DE0u, 0x3A6758u, 0x3A6760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6760u;
label_3a6760:
    // 0x3a6760: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3a6760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3a6764: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3a6764u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3a6768: 0xc0e8b78  jal         func_3A2DE0
    ctx->pc = 0x3A6768u;
    SET_GPR_U32(ctx, 31, 0x3A6770u);
    ctx->pc = 0x3A676Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6768u;
    // 0x3a676c: 0x8e442c7c  lw          $a0, 0x2C7C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DE0u, 0x3A6768u, 0x3A6770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6770u;
label_3a6770:
    // 0x3a6770: 0x8e442c7c  lw          $a0, 0x2C7C($s2)
    ctx->pc = 0x3a6770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
    // 0x3a6774: 0xc0e8b78  jal         func_3A2DE0
    ctx->pc = 0x3A6774u;
    SET_GPR_U32(ctx, 31, 0x3A677Cu);
    ctx->pc = 0x3A6778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6774u;
    // 0x3a6778: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DE0u, 0x3A6774u, 0x3A677Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A677Cu;
label_3a677c:
    // 0x3a677c: 0x8e442c7c  lw          $a0, 0x2C7C($s2)
    ctx->pc = 0x3a677cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
    // 0x3a6780: 0xc0e8b78  jal         func_3A2DE0
    ctx->pc = 0x3A6780u;
    SET_GPR_U32(ctx, 31, 0x3A6788u);
    ctx->pc = 0x3A6784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6780u;
    // 0x3a6784: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DE0u, 0x3A6780u, 0x3A6788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6788u;
label_3a6788:
    // 0x3a6788: 0x8e442c7c  lw          $a0, 0x2C7C($s2)
    ctx->pc = 0x3a6788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
    // 0x3a678c: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x3A678Cu;
    SET_GPR_U32(ctx, 31, 0x3A6794u);
    ctx->pc = 0x3A6790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A678Cu;
    // 0x3a6790: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x3A678Cu, 0x3A6794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6794u;
label_3a6794:
    // 0x3a6794: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x3a6794u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x3a6798: 0x3a620001  xori        $v0, $s3, 0x1
    ctx->pc = 0x3a6798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)1);
    // 0x3a679c: 0x8e442c7c  lw          $a0, 0x2C7C($s2)
    ctx->pc = 0x3a679cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
    // 0x3a67a0: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x3A67A0u;
    SET_GPR_U32(ctx, 31, 0x3A67A8u);
    ctx->pc = 0x3A67A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A67A0u;
    // 0x3a67a4: 0x202280b  movn        $a1, $s0, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x3A67A0u, 0x3A67A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A67A8u;
label_3a67a8:
    // 0x3a67a8: 0x8e442c7c  lw          $a0, 0x2C7C($s2)
    ctx->pc = 0x3a67a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
    // 0x3a67ac: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x3A67ACu;
    SET_GPR_U32(ctx, 31, 0x3A67B4u);
    ctx->pc = 0x3A67B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A67ACu;
    // 0x3a67b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x3A67ACu, 0x3A67B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A67B4u;
label_3a67b4:
    // 0x3a67b4: 0x8e442c7c  lw          $a0, 0x2C7C($s2)
    ctx->pc = 0x3a67b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
    // 0x3a67b8: 0xc0e8b90  jal         func_3A2E40
    ctx->pc = 0x3A67B8u;
    SET_GPR_U32(ctx, 31, 0x3A67C0u);
    ctx->pc = 0x3A67BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A67B8u;
    // 0x3a67bc: 0x26a51ad0  addiu       $a1, $s5, 0x1AD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 6864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E40u, 0x3A67B8u, 0x3A67C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A67C0u;
label_3a67c0:
    // 0x3a67c0: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x3A67C0u;
    SET_GPR_U32(ctx, 31, 0x3A67C8u);
    ctx->pc = 0x3A67C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A67C0u;
    // 0x3a67c4: 0x8e442c7c  lw          $a0, 0x2C7C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x3A67C0u, 0x3A67C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A67C8u;
label_3a67c8:
    // 0x3a67c8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3a67c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3a67cc:
    // 0x3a67cc: 0x2e620002  sltiu       $v0, $s3, 0x2
    ctx->pc = 0x3a67ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3a67d0: 0x1440ffbb  bnez        $v0, . + 4 + (-0x45 << 2)
    ctx->pc = 0x3A67D0u;
    {
        const bool branch_taken_0x3a67d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A67D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A67D0u;
        // 0x3a67d4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a67d0) {
            ctx->pc = 0x3A66C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a66c0;
        }
    }
    ctx->pc = 0x3A67D8u;
    // 0x3a67d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a67d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a67dc: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x3a67dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    // 0x3a67e0: 0xc1073cc  jal         func_41CF30
    ctx->pc = 0x3A67E0u;
    SET_GPR_U32(ctx, 31, 0x3A67E8u);
    ctx->pc = 0x3A67E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A67E0u;
    // 0x3a67e4: 0x2417001e  addiu       $s7, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF30u, 0x3A67E0u, 0x3A67E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A67E8u;
label_3a67e8:
    // 0x3a67e8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3a67e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3a67ec: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A67ECu;
    {
        const bool branch_taken_0x3a67ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a67ec) {
            ctx->pc = 0x3A67F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A67ECu;
            // 0x3a67f0: 0x220b82d  daddu       $s7, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A67FCu;
            goto label_3a67fc;
        }
    }
    ctx->pc = 0x3A67F4u;
    // 0x3a67f4: 0x56c00001  bnel        $s6, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3A67F4u;
    {
        const bool branch_taken_0x3a67f4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a67f4) {
            ctx->pc = 0x3A67F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A67F4u;
            // 0x3a67f8: 0x220b82d  daddu       $s7, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A67FCu;
            goto label_3a67fc;
        }
    }
    ctx->pc = 0x3A67FCu;
label_3a67fc:
    // 0x3a67fc: 0x12e0006f  beqz        $s7, . + 4 + (0x6F << 2)
    ctx->pc = 0x3A67FCu;
    {
        const bool branch_taken_0x3a67fc = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A67FCu;
        // 0x3a6800: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a67fc) {
            ctx->pc = 0x3A69BCu;
            goto label_3a69bc;
        }
    }
    ctx->pc = 0x3A6804u;
    // 0x3a6804: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x3a6804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x3a6808: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3a6808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x3a680c: 0x34630018  ori         $v1, $v1, 0x18
    ctx->pc = 0x3a680cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24);
    // 0x3a6810: 0x3c0b02d  daddu       $s6, $fp, $zero
    ctx->pc = 0x3a6810u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6814: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x3a6814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x3a6818: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3a6818u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x3a681c: 0x2455b8b8  addiu       $s5, $v0, -0x4748
    ctx->pc = 0x3a681cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949048));
    // 0x3a6820: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3a6820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3a6824: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3a6824u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x3a6828: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x3a6828u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    // 0x3a682c: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x3a682cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
    // 0x3a6830: 0x17f040  sll         $fp, $s7, 1
    ctx->pc = 0x3a6830u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 23), 1));
    // 0x3a6834: 0x0  nop
    ctx->pc = 0x3a6834u;
    // NOP
label_3a6838:
    // 0x3a6838: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3a6838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a683c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3a683cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x3a6840: 0x3c108080  lui         $s0, 0x8080
    ctx->pc = 0x3a6840u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)32896 << 16));
    // 0x3a6844: 0xc0cd518  jal         func_335460
    ctx->pc = 0x3A6844u;
    SET_GPR_U32(ctx, 31, 0x3A684Cu);
    ctx->pc = 0x3A6848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6844u;
    // 0x3a6848: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3A6844u, 0x3A684Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A684Cu;
label_3a684c:
    // 0x3a684c: 0x361080ff  ori         $s0, $s0, 0x80FF
    ctx->pc = 0x3a684cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)33023);
    // 0x3a6850: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x3a6850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3a6854: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3a6854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6858: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3a6858u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x3a685c: 0xc0cd518  jal         func_335460
    ctx->pc = 0x3A685Cu;
    SET_GPR_U32(ctx, 31, 0x3A6864u);
    ctx->pc = 0x3A6860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A685Cu;
    // 0x3a6860: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3A685Cu, 0x3A6864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6864u;
label_3a6864:
    // 0x3a6864: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3a6864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a6868: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x3a6868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x3a686c: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x3a686cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x3a6870: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3a6870u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x3a6874: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3a6874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6878: 0xc0cd518  jal         func_335460
    ctx->pc = 0x3A6878u;
    SET_GPR_U32(ctx, 31, 0x3A6880u);
    ctx->pc = 0x3A687Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6878u;
    // 0x3a687c: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3A6878u, 0x3A6880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6880u;
label_3a6880:
    // 0x3a6880: 0x3c013e24  lui         $at, 0x3E24
    ctx->pc = 0x3a6880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15908 << 16));
    // 0x3a6884: 0x3421dd2f  ori         $at, $at, 0xDD2F
    ctx->pc = 0x3a6884u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)56623);
    // 0x3a6888: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3a6888u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3a688c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3a688cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6890: 0x3c013e90  lui         $at, 0x3E90
    ctx->pc = 0x3a6890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16016 << 16));
    // 0x3a6894: 0x3421624e  ori         $at, $at, 0x624E
    ctx->pc = 0x3a6894u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)25166);
    // 0x3a6898: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3a6898u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3a689c: 0xc0cd518  jal         func_335460
    ctx->pc = 0x3A689Cu;
    SET_GPR_U32(ctx, 31, 0x3A68A4u);
    ctx->pc = 0x3A68A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A689Cu;
    // 0x3a68a0: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3A689Cu, 0x3A68A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A68A4u;
label_3a68a4:
    // 0x3a68a4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3a68a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a68a8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3a68a8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x3a68ac: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x3A68ACu;
    SET_GPR_U32(ctx, 31, 0x3A68B4u);
    ctx->pc = 0x3A68B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A68ACu;
    // 0x3a68b0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3A68ACu, 0x3A68B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A68B4u;
label_3a68b4:
    // 0x3a68b4: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x3a68b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x3a68b8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3a68b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a68bc: 0xc0e9694  jal         func_3A5A50
    ctx->pc = 0x3A68BCu;
    SET_GPR_U32(ctx, 31, 0x3A68C4u);
    ctx->pc = 0x3A68C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A68BCu;
    // 0x3a68c0: 0x43a021  addu        $s4, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3A68BCu, 0x3A68C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A68C4u;
label_3a68c4:
    // 0x3a68c4: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x3A68C4u;
    {
        const bool branch_taken_0x3a68c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A68C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A68C4u;
        // 0x3a68c8: 0x8e242c7c  lw          $a0, 0x2C7C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a68c4) {
            ctx->pc = 0x3A69ACu;
            goto label_3a69ac;
        }
    }
    ctx->pc = 0x3A68CCu;
    // 0x3a68cc: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x3A68CCu;
    SET_GPR_U32(ctx, 31, 0x3A68D4u);
    ctx->pc = 0x3A68D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A68CCu;
    // 0x3a68d0: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x3A68CCu, 0x3A68D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A68D4u;
label_3a68d4:
    // 0x3a68d4: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x3a68d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x3a68d8: 0xc0e8b58  jal         func_3A2D60
    ctx->pc = 0x3A68D8u;
    SET_GPR_U32(ctx, 31, 0x3A68E0u);
    ctx->pc = 0x3A68DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A68D8u;
    // 0x3a68dc: 0x8e242c7c  lw          $a0, 0x2C7C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x3A68D8u, 0x3A68E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A68E0u;
label_3a68e0:
    // 0x3a68e0: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x3a68e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x3a68e4: 0xc0e8b58  jal         func_3A2D60
    ctx->pc = 0x3A68E4u;
    SET_GPR_U32(ctx, 31, 0x3A68ECu);
    ctx->pc = 0x3A68E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A68E4u;
    // 0x3a68e8: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x3A68E4u, 0x3A68ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A68ECu;
label_3a68ec:
    // 0x3a68ec: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x3a68ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x3a68f0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3a68f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x3a68f4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3a68f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3a68f8: 0xc0e8b78  jal         func_3A2DE0
    ctx->pc = 0x3A68F8u;
    SET_GPR_U32(ctx, 31, 0x3A6900u);
    ctx->pc = 0x3A68FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A68F8u;
    // 0x3a68fc: 0x8e242c7c  lw          $a0, 0x2C7C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DE0u, 0x3A68F8u, 0x3A6900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6900u;
label_3a6900:
    // 0x3a6900: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x3a6900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x3a6904: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x3A6904u;
    SET_GPR_U32(ctx, 31, 0x3A690Cu);
    ctx->pc = 0x3A6908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6904u;
    // 0x3a6908: 0x24050078  addiu       $a1, $zero, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x3A6904u, 0x3A690Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A690Cu;
label_3a690c:
    // 0x3a690c: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x3a690cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x3a6910: 0xc0e8b78  jal         func_3A2DE0
    ctx->pc = 0x3A6910u;
    SET_GPR_U32(ctx, 31, 0x3A6918u);
    ctx->pc = 0x3A6914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6910u;
    // 0x3a6914: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DE0u, 0x3A6910u, 0x3A6918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6918u;
label_3a6918:
    // 0x3a6918: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3a6918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a691c: 0x2e3001b  divu        $zero, $s7, $v1
    ctx->pc = 0x3a691cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 23) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 23) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,23); } }
    // 0x3a6920: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3A6920u;
    {
        const bool branch_taken_0x3a6920 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a6920) {
            ctx->pc = 0x3A6924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A6920u;
            // 0x3a6924: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A6928u;
            goto label_3a6928;
        }
    }
    ctx->pc = 0x3A6928u;
label_3a6928:
    // 0x3a6928: 0x1012  mflo        $v0
    ctx->pc = 0x3a6928u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3a692c: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x3a692cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3a6930: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A6930u;
    {
        const bool branch_taken_0x3a6930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a6930) {
            ctx->pc = 0x3A6934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A6930u;
            // 0x3a6934: 0x3c3001b  divu        $zero, $fp, $v1 (Delay Slot)
            { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 30) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 30) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,30); } }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A6940u;
            goto label_3a6940;
        }
    }
    ctx->pc = 0x3A6938u;
    // 0x3a6938: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3A6938u;
    {
        const bool branch_taken_0x3a6938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A693Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6938u;
        // 0x3a693c: 0x8fb00038  lw          $s0, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6938) {
            ctx->pc = 0x3A695Cu;
            goto label_3a695c;
        }
    }
    ctx->pc = 0x3A6940u;
label_3a6940:
    // 0x3a6940: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3a6940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a6944: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3A6944u;
    {
        const bool branch_taken_0x3a6944 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a6944) {
            ctx->pc = 0x3A6948u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A6944u;
            // 0x3a6948: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A694Cu;
            goto label_3a694c;
        }
    }
    ctx->pc = 0x3A694Cu;
label_3a694c:
    // 0x3a694c: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x3a694cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x3a6950: 0x1012  mflo        $v0
    ctx->pc = 0x3a6950u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3a6954: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x3a6954u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3a6958: 0x82800b  movn        $s0, $a0, $v0
    ctx->pc = 0x3a6958u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
label_3a695c:
    // 0x3a695c: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x3a695cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x3a6960: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x3A6960u;
    SET_GPR_U32(ctx, 31, 0x3A6968u);
    ctx->pc = 0x3A6964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6960u;
    // 0x3a6964: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x3A6960u, 0x3A6968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6968u;
label_3a6968:
    // 0x3a6968: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x3a6968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x3a696c: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x3A696Cu;
    SET_GPR_U32(ctx, 31, 0x3A6974u);
    ctx->pc = 0x3A6970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A696Cu;
    // 0x3a6970: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x3A696Cu, 0x3A6974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6974u;
label_3a6974:
    // 0x3a6974: 0x2e620004  sltiu       $v0, $s3, 0x4
    ctx->pc = 0x3a6974u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x3a6978: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A6978u;
    {
        const bool branch_taken_0x3a6978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a6978) {
            ctx->pc = 0x3A697Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A6978u;
            // 0x3a697c: 0x8fa50040  lw          $a1, 0x40($sp) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A698Cu;
            goto label_3a698c;
        }
    }
    ctx->pc = 0x3A6980u;
    // 0x3a6980: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x3a6980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x3a6984: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x3a6984u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x3a6988: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x3a6988u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_3a698c:
    // 0x3a698c: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x3A698Cu;
    SET_GPR_U32(ctx, 31, 0x3A6994u);
    ctx->pc = 0x3A6990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A698Cu;
    // 0x3a6990: 0x8e442c7c  lw          $a0, 0x2C7C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x3A698Cu, 0x3A6994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6994u;
label_3a6994:
    // 0x3a6994: 0x8e442c7c  lw          $a0, 0x2C7C($s2)
    ctx->pc = 0x3a6994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
    // 0x3a6998: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x3a6998u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x3a699c: 0xc0e8b90  jal         func_3A2E40
    ctx->pc = 0x3A699Cu;
    SET_GPR_U32(ctx, 31, 0x3A69A4u);
    ctx->pc = 0x3A69A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A699Cu;
    // 0x3a69a0: 0x24651ac0  addiu       $a1, $v1, 0x1AC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 6848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E40u, 0x3A699Cu, 0x3A69A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A69A4u;
label_3a69a4:
    // 0x3a69a4: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x3A69A4u;
    SET_GPR_U32(ctx, 31, 0x3A69ACu);
    ctx->pc = 0x3A69A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A69A4u;
    // 0x3a69a8: 0x8e442c7c  lw          $a0, 0x2C7C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x3A69A4u, 0x3A69ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A69ACu;
label_3a69ac:
    // 0x3a69ac: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3a69acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3a69b0: 0x277102b  sltu        $v0, $s3, $s7
    ctx->pc = 0x3a69b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x3a69b4: 0x1440ffa0  bnez        $v0, . + 4 + (-0x60 << 2)
    ctx->pc = 0x3A69B4u;
    {
        const bool branch_taken_0x3a69b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A69B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A69B4u;
        // 0x3a69b8: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a69b4) {
            ctx->pc = 0x3A6838u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a6838;
        }
    }
    ctx->pc = 0x3A69BCu;
label_3a69bc:
    // 0x3a69bc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3a69bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x3a69c0: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x3a69c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x3a69c4: 0x244416c0  addiu       $a0, $v0, 0x16C0
    ctx->pc = 0x3a69c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
    // 0x3a69c8: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x3a69c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x3a69cc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x3a69ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a69d0: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x3a69d0u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x5116C0u));
    // 0x3a69d4: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x3a69d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3a69d8: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x3a69d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3a69dc: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x3a69dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3a69e0: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x3a69e0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3a69e4: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x3a69e4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3a69e8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3a69e8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3a69ec: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x3a69ecu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3a69f0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3a69f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3a69f4: 0xc7b60100  lwc1        $f22, 0x100($sp)
    ctx->pc = 0x3a69f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x3a69f8: 0xc7b500f8  lwc1        $f21, 0xF8($sp)
    ctx->pc = 0x3a69f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3a69fc: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x3a69fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3a6a00: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x3a6a00u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x3a6a04: 0x3e00008  jr          $ra
    ctx->pc = 0x3A6A04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A6A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6A04u;
        // 0x3a6a08: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A6A04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A6A0Cu;
    // 0x3a6a0c: 0x0  nop
    ctx->pc = 0x3a6a0cu;
    // NOP
    ctx->pc = 0x3a6a10u;
}
