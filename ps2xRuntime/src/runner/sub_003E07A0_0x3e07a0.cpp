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

// Function: sub_003E07A0
// Address: 0x3e07a0 - 0x3e0938
void sub_003E07A0_0x3e07a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E07A0_0x3e07a0");
#endif

    switch (ctx->pc) {
        case 0x3e07a0u: goto label_3e07a0;
        case 0x3e07a4u: goto label_3e07a4;
        case 0x3e07a8u: goto label_3e07a8;
        case 0x3e07acu: goto label_3e07ac;
        case 0x3e07b0u: goto label_3e07b0;
        case 0x3e07b4u: goto label_3e07b4;
        case 0x3e07b8u: goto label_3e07b8;
        case 0x3e07bcu: goto label_3e07bc;
        case 0x3e07c0u: goto label_3e07c0;
        case 0x3e07c4u: goto label_3e07c4;
        case 0x3e07c8u: goto label_3e07c8;
        case 0x3e07ccu: goto label_3e07cc;
        case 0x3e07d0u: goto label_3e07d0;
        case 0x3e07d4u: goto label_3e07d4;
        case 0x3e07d8u: goto label_3e07d8;
        case 0x3e07dcu: goto label_3e07dc;
        case 0x3e07e0u: goto label_3e07e0;
        case 0x3e07e4u: goto label_3e07e4;
        case 0x3e07e8u: goto label_3e07e8;
        case 0x3e07ecu: goto label_3e07ec;
        case 0x3e07f0u: goto label_3e07f0;
        case 0x3e07f4u: goto label_3e07f4;
        case 0x3e07f8u: goto label_3e07f8;
        case 0x3e07fcu: goto label_3e07fc;
        case 0x3e0800u: goto label_3e0800;
        case 0x3e0804u: goto label_3e0804;
        case 0x3e0808u: goto label_3e0808;
        case 0x3e080cu: goto label_3e080c;
        case 0x3e0810u: goto label_3e0810;
        case 0x3e0814u: goto label_3e0814;
        case 0x3e0818u: goto label_3e0818;
        case 0x3e081cu: goto label_3e081c;
        case 0x3e0820u: goto label_3e0820;
        case 0x3e0824u: goto label_3e0824;
        case 0x3e0828u: goto label_3e0828;
        case 0x3e082cu: goto label_3e082c;
        case 0x3e0830u: goto label_3e0830;
        case 0x3e0834u: goto label_3e0834;
        case 0x3e0838u: goto label_3e0838;
        case 0x3e083cu: goto label_3e083c;
        case 0x3e0840u: goto label_3e0840;
        case 0x3e0844u: goto label_3e0844;
        case 0x3e0848u: goto label_3e0848;
        case 0x3e084cu: goto label_3e084c;
        case 0x3e0850u: goto label_3e0850;
        case 0x3e0854u: goto label_3e0854;
        case 0x3e0858u: goto label_3e0858;
        case 0x3e085cu: goto label_3e085c;
        case 0x3e0860u: goto label_3e0860;
        case 0x3e0864u: goto label_3e0864;
        case 0x3e0868u: goto label_3e0868;
        case 0x3e086cu: goto label_3e086c;
        case 0x3e0870u: goto label_3e0870;
        case 0x3e0874u: goto label_3e0874;
        case 0x3e0878u: goto label_3e0878;
        case 0x3e087cu: goto label_3e087c;
        case 0x3e0880u: goto label_3e0880;
        case 0x3e0884u: goto label_3e0884;
        case 0x3e0888u: goto label_3e0888;
        case 0x3e088cu: goto label_3e088c;
        case 0x3e0890u: goto label_3e0890;
        case 0x3e0894u: goto label_3e0894;
        case 0x3e0898u: goto label_3e0898;
        case 0x3e089cu: goto label_3e089c;
        case 0x3e08a0u: goto label_3e08a0;
        case 0x3e08a4u: goto label_3e08a4;
        case 0x3e08a8u: goto label_3e08a8;
        case 0x3e08acu: goto label_3e08ac;
        case 0x3e08b0u: goto label_3e08b0;
        case 0x3e08b4u: goto label_3e08b4;
        case 0x3e08b8u: goto label_3e08b8;
        case 0x3e08bcu: goto label_3e08bc;
        case 0x3e08c0u: goto label_3e08c0;
        case 0x3e08c4u: goto label_3e08c4;
        case 0x3e08c8u: goto label_3e08c8;
        case 0x3e08ccu: goto label_3e08cc;
        case 0x3e08d0u: goto label_3e08d0;
        case 0x3e08d4u: goto label_3e08d4;
        case 0x3e08d8u: goto label_3e08d8;
        case 0x3e08dcu: goto label_3e08dc;
        case 0x3e08e0u: goto label_3e08e0;
        case 0x3e08e4u: goto label_3e08e4;
        case 0x3e08e8u: goto label_3e08e8;
        case 0x3e08ecu: goto label_3e08ec;
        case 0x3e08f0u: goto label_3e08f0;
        case 0x3e08f4u: goto label_3e08f4;
        case 0x3e08f8u: goto label_3e08f8;
        case 0x3e08fcu: goto label_3e08fc;
        case 0x3e0900u: goto label_3e0900;
        case 0x3e0904u: goto label_3e0904;
        case 0x3e0908u: goto label_3e0908;
        case 0x3e090cu: goto label_3e090c;
        case 0x3e0910u: goto label_3e0910;
        case 0x3e0914u: goto label_3e0914;
        case 0x3e0918u: goto label_3e0918;
        case 0x3e091cu: goto label_3e091c;
        case 0x3e0920u: goto label_3e0920;
        case 0x3e0924u: goto label_3e0924;
        case 0x3e0928u: goto label_3e0928;
        case 0x3e092cu: goto label_3e092c;
        case 0x3e0930u: goto label_3e0930;
        case 0x3e0934u: goto label_3e0934;
        default: break;
    }

    ctx->pc = 0x3e07a0u;

label_3e07a0:
    // 0x3e07a0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3e07a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_3e07a4:
    // 0x3e07a4: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x3e07a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_3e07a8:
    // 0x3e07a8: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x3e07a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_3e07ac:
    // 0x3e07ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e07acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e07b0:
    // 0x3e07b0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x3e07b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_3e07b4:
    // 0x3e07b4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3e07b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e07b8:
    // 0x3e07b8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3e07b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_3e07bc:
    // 0x3e07bc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3e07bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3e07c0:
    // 0x3e07c0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3e07c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3e07c4:
    // 0x3e07c4: 0xe7b700a8  swc1        $f23, 0xA8($sp)
    ctx->pc = 0x3e07c4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_3e07c8:
    // 0x3e07c8: 0xe7b600a0  swc1        $f22, 0xA0($sp)
    ctx->pc = 0x3e07c8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_3e07cc:
    // 0x3e07cc: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x3e07ccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_3e07d0:
    // 0x3e07d0: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x3e07d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_3e07d4:
    // 0x3e07d4: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x3e07d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
label_3e07d8:
    // 0x3e07d8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x3e07d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_3e07dc:
    // 0x3e07dc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3e07dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3e07e0:
    // 0x3e07e0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3e07e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3e07e4:
    // 0x3e07e4: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x3e07e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_3e07e8:
    // 0x3e07e8: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3e07e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3e07ec:
    // 0x3e07ec: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3e07ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3e07f0:
    // 0x3e07f0: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x3e07f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_3e07f4:
    // 0x3e07f4: 0x34210fd0  ori         $at, $at, 0xFD0
    ctx->pc = 0x3e07f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4048);
label_3e07f8:
    // 0x3e07f8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3e07f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3e07fc:
    // 0x3e07fc: 0x40f809  jalr        $v0
label_3e0800:
    if (ctx->pc == 0x3E0800u) {
        ctx->pc = 0x3E0800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E07FCu;
        // 0x3e0800: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0804u;
        goto label_3e0804;
    }
    ctx->pc = 0x3E07FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E0804u);
        ctx->pc = 0x3E0800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E07FCu;
        // 0x3e0800: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E07FCu, 0x3E0804u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E0804u;
label_3e0804:
    // 0x3e0804: 0x24030201  addiu       $v1, $zero, 0x201
    ctx->pc = 0x3e0804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 513));
label_3e0808:
    // 0x3e0808: 0xe61400bc  swc1        $f20, 0xBC($s0)
    ctx->pc = 0x3e0808u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 188), bits); }
label_3e080c:
    // 0x3e080c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3e080cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e0810:
    // 0x3e0810: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x3e0810u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_3e0814:
    // 0x3e0814: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x3e0814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3e0818:
    // 0x3e0818: 0xc0e858c  jal         func_3A1630
label_3e081c:
    if (ctx->pc == 0x3E081Cu) {
        ctx->pc = 0x3E081Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0818u;
        // 0x3e081c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0820u;
        goto label_3e0820;
    }
    ctx->pc = 0x3E0818u;
    SET_GPR_U32(ctx, 31, 0x3E0820u);
    ctx->pc = 0x3E081Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0818u;
    // 0x3e081c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3E0818u, 0x3E0820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0820u;
label_3e0820:
    // 0x3e0820: 0xc0ea13a  jal         func_3A84E8
label_3e0824:
    if (ctx->pc == 0x3E0824u) {
        ctx->pc = 0x3E0824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0820u;
        // 0x3e0824: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0828u;
        goto label_3e0828;
    }
    ctx->pc = 0x3E0820u;
    SET_GPR_U32(ctx, 31, 0x3E0828u);
    ctx->pc = 0x3E0824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0820u;
    // 0x3e0824: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84E8u, 0x3E0820u, 0x3E0828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0828u;
label_3e0828:
    // 0x3e0828: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x3e0828u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
label_3e082c:
    // 0x3e082c: 0xc0ea146  jal         func_3A8518
label_3e0830:
    if (ctx->pc == 0x3E0830u) {
        ctx->pc = 0x3E0830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E082Cu;
        // 0x3e0830: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0834u;
        goto label_3e0834;
    }
    ctx->pc = 0x3E082Cu;
    SET_GPR_U32(ctx, 31, 0x3E0834u);
    ctx->pc = 0x3E0830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E082Cu;
    // 0x3e0830: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3E082Cu, 0x3E0834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0834u;
label_3e0834:
    // 0x3e0834: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3e0834u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e0838:
    // 0x3e0838: 0xc0ea146  jal         func_3A8518
label_3e083c:
    if (ctx->pc == 0x3E083Cu) {
        ctx->pc = 0x3E083Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0838u;
        // 0x3e083c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0840u;
        goto label_3e0840;
    }
    ctx->pc = 0x3E0838u;
    SET_GPR_U32(ctx, 31, 0x3E0840u);
    ctx->pc = 0x3E083Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0838u;
    // 0x3e083c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3E0838u, 0x3E0840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0840u;
label_3e0840:
    // 0x3e0840: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3e0840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3e0844:
    // 0x3e0844: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3e0844u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e0848:
    // 0x3e0848: 0xc0ea12a  jal         func_3A84A8
label_3e084c:
    if (ctx->pc == 0x3E084Cu) {
        ctx->pc = 0x3E084Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0848u;
        // 0x3e084c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0850u;
        goto label_3e0850;
    }
    ctx->pc = 0x3E0848u;
    SET_GPR_U32(ctx, 31, 0x3E0850u);
    ctx->pc = 0x3E084Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0848u;
    // 0x3e084c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3E0848u, 0x3E0850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0850u;
label_3e0850:
    // 0x3e0850: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3e0850u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3e0854:
    // 0x3e0854: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e0854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e0858:
    // 0x3e0858: 0xe61400c0  swc1        $f20, 0xC0($s0)
    ctx->pc = 0x3e0858u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
label_3e085c:
    // 0x3e085c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x3e085cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3e0860:
    // 0x3e0860: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3e0860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3e0864:
    // 0x3e0864: 0xe61600bc  swc1        $f22, 0xBC($s0)
    ctx->pc = 0x3e0864u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 188), bits); }
label_3e0868:
    // 0x3e0868: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x3e0868u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
label_3e086c:
    // 0x3e086c: 0xc0e858c  jal         func_3A1630
label_3e0870:
    if (ctx->pc == 0x3E0870u) {
        ctx->pc = 0x3E0870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E086Cu;
        // 0x3e0870: 0x7e420000  sq          $v0, 0x0($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0874u;
        goto label_3e0874;
    }
    ctx->pc = 0x3E086Cu;
    SET_GPR_U32(ctx, 31, 0x3E0874u);
    ctx->pc = 0x3E0870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E086Cu;
    // 0x3e0870: 0x7e420000  sq          $v0, 0x0($s2) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3E086Cu, 0x3E0874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0874u;
label_3e0874:
    // 0x3e0874: 0xae1300c4  sw          $s3, 0xC4($s0)
    ctx->pc = 0x3e0874u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 19));
label_3e0878:
    // 0x3e0878: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x3e0878u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_3e087c:
    // 0x3e087c: 0x34a50013  ori         $a1, $a1, 0x13
    ctx->pc = 0x3e087cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)19);
label_3e0880:
    // 0x3e0880: 0xc0e9404  jal         func_3A5010
label_3e0884:
    if (ctx->pc == 0x3E0884u) {
        ctx->pc = 0x3E0884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0880u;
        // 0x3e0884: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0888u;
        goto label_3e0888;
    }
    ctx->pc = 0x3E0880u;
    SET_GPR_U32(ctx, 31, 0x3E0888u);
    ctx->pc = 0x3E0884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0880u;
    // 0x3e0884: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5010u, 0x3E0880u, 0x3E0888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0888u;
label_3e0888:
    // 0x3e0888: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3e0888u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_3e088c:
    // 0x3e088c: 0xae1400b4  sw          $s4, 0xB4($s0)
    ctx->pc = 0x3e088cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 20));
label_3e0890:
    // 0x3e0890: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x3e0890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
label_3e0894:
    // 0x3e0894: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x3e0894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
label_3e0898:
    // 0x3e0898: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3e0898u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e089c:
    // 0x3e089c: 0xae0300b0  sw          $v1, 0xB0($s0)
    ctx->pc = 0x3e089cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 3));
label_3e08a0:
    // 0x3e08a0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3e08a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3e08a4:
    // 0x3e08a4: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x3e08a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_3e08a8:
    // 0x3e08a8: 0x3c11006f  lui         $s1, 0x6F
    ctx->pc = 0x3e08a8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)111 << 16));
label_3e08ac:
    // 0x3e08ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3e08acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3e08b0:
    // 0x3e08b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3e08b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3e08b4:
    // 0x3e08b4: 0x2631b8b8  addiu       $s1, $s1, -0x4748
    ctx->pc = 0x3e08b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294949048));
label_3e08b8:
    // 0x3e08b8: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3e08b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3e08bc:
    // 0x3e08bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e08bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e08c0:
    // 0x3e08c0: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3e08c0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_3e08c4:
    // 0x3e08c4: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x3e08c4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_3e08c8:
    // 0x3e08c8: 0x7e020030  sq          $v0, 0x30($s0)
    ctx->pc = 0x3e08c8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
label_3e08cc:
    // 0x3e08cc: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x3e08ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_3e08d0:
    // 0x3e08d0: 0xe4a1000c  swc1        $f1, 0xC($a1)
    ctx->pc = 0x3e08d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
label_3e08d4:
    // 0x3e08d4: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x3e08d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_3e08d8:
    // 0x3e08d8: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x3e08d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_3e08dc:
    // 0x3e08dc: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3e08dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e08e0:
    // 0x3e08e0: 0x7e020040  sq          $v0, 0x40($s0)
    ctx->pc = 0x3e08e0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), GPR_VEC(ctx, 2));
label_3e08e4:
    // 0x3e08e4: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x3e08e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_3e08e8:
    // 0x3e08e8: 0xc0cd518  jal         func_335460
label_3e08ec:
    if (ctx->pc == 0x3E08ECu) {
        ctx->pc = 0x3E08ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E08E8u;
        // 0x3e08ec: 0xe6570014  swc1        $f23, 0x14($s2) (Delay Slot)
        { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E08F0u;
        goto label_3e08f0;
    }
    ctx->pc = 0x3E08E8u;
    SET_GPR_U32(ctx, 31, 0x3E08F0u);
    ctx->pc = 0x3E08ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E08E8u;
    // 0x3e08ec: 0xe6570014  swc1        $f23, 0x14($s2) (Delay Slot)
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3E08E8u, 0x3E08F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E08F0u;
label_3e08f0:
    // 0x3e08f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e08f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e08f4:
    // 0x3e08f4: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3e08f4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_3e08f8:
    // 0x3e08f8: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x3e08f8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_3e08fc:
    // 0x3e08fc: 0xc0cd518  jal         func_335460
label_3e0900:
    if (ctx->pc == 0x3E0900u) {
        ctx->pc = 0x3E0900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E08FCu;
        // 0x3e0900: 0xe6400018  swc1        $f0, 0x18($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0904u;
        goto label_3e0904;
    }
    ctx->pc = 0x3E08FCu;
    SET_GPR_U32(ctx, 31, 0x3E0904u);
    ctx->pc = 0x3E0900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E08FCu;
    // 0x3e0900: 0xe6400018  swc1        $f0, 0x18($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3E08FCu, 0x3E0904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0904u;
label_3e0904:
    // 0x3e0904: 0xe640001c  swc1        $f0, 0x1C($s2)
    ctx->pc = 0x3e0904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
label_3e0908:
    // 0x3e0908: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x3e0908u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3e090c:
    // 0x3e090c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x3e090cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3e0910:
    // 0x3e0910: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x3e0910u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3e0914:
    // 0x3e0914: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3e0914u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3e0918:
    // 0x3e0918: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3e0918u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3e091c:
    // 0x3e091c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3e091cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3e0920:
    // 0x3e0920: 0xc7b700a8  lwc1        $f23, 0xA8($sp)
    ctx->pc = 0x3e0920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3e0924:
    // 0x3e0924: 0xc7b600a0  lwc1        $f22, 0xA0($sp)
    ctx->pc = 0x3e0924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3e0928:
    // 0x3e0928: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x3e0928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3e092c:
    // 0x3e092c: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x3e092cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3e0930:
    // 0x3e0930: 0x3e00008  jr          $ra
label_3e0934:
    if (ctx->pc == 0x3E0934u) {
        ctx->pc = 0x3E0934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0930u;
        // 0x3e0934: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0938u;
        goto label_fallthrough_0x3e0930;
    }
    ctx->pc = 0x3E0930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E0934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0930u;
        // 0x3e0934: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E0930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3e0930:
    ctx->pc = 0x3E0938u;
}
