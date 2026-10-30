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

// Function: sub_0019A648
// Address: 0x19a648 - 0x19a780
void sub_0019A648_0x19a648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019A648_0x19a648");
#endif

    switch (ctx->pc) {
        case 0x19a648u: goto label_19a648;
        case 0x19a64cu: goto label_19a64c;
        case 0x19a650u: goto label_19a650;
        case 0x19a654u: goto label_19a654;
        case 0x19a658u: goto label_19a658;
        case 0x19a65cu: goto label_19a65c;
        case 0x19a660u: goto label_19a660;
        case 0x19a664u: goto label_19a664;
        case 0x19a668u: goto label_19a668;
        case 0x19a66cu: goto label_19a66c;
        case 0x19a670u: goto label_19a670;
        case 0x19a674u: goto label_19a674;
        case 0x19a678u: goto label_19a678;
        case 0x19a67cu: goto label_19a67c;
        case 0x19a680u: goto label_19a680;
        case 0x19a684u: goto label_19a684;
        case 0x19a688u: goto label_19a688;
        case 0x19a68cu: goto label_19a68c;
        case 0x19a690u: goto label_19a690;
        case 0x19a694u: goto label_19a694;
        case 0x19a698u: goto label_19a698;
        case 0x19a69cu: goto label_19a69c;
        case 0x19a6a0u: goto label_19a6a0;
        case 0x19a6a4u: goto label_19a6a4;
        case 0x19a6a8u: goto label_19a6a8;
        case 0x19a6acu: goto label_19a6ac;
        case 0x19a6b0u: goto label_19a6b0;
        case 0x19a6b4u: goto label_19a6b4;
        case 0x19a6b8u: goto label_19a6b8;
        case 0x19a6bcu: goto label_19a6bc;
        case 0x19a6c0u: goto label_19a6c0;
        case 0x19a6c4u: goto label_19a6c4;
        case 0x19a6c8u: goto label_19a6c8;
        case 0x19a6ccu: goto label_19a6cc;
        case 0x19a6d0u: goto label_19a6d0;
        case 0x19a6d4u: goto label_19a6d4;
        case 0x19a6d8u: goto label_19a6d8;
        case 0x19a6dcu: goto label_19a6dc;
        case 0x19a6e0u: goto label_19a6e0;
        case 0x19a6e4u: goto label_19a6e4;
        case 0x19a6e8u: goto label_19a6e8;
        case 0x19a6ecu: goto label_19a6ec;
        case 0x19a6f0u: goto label_19a6f0;
        case 0x19a6f4u: goto label_19a6f4;
        case 0x19a6f8u: goto label_19a6f8;
        case 0x19a6fcu: goto label_19a6fc;
        case 0x19a700u: goto label_19a700;
        case 0x19a704u: goto label_19a704;
        case 0x19a708u: goto label_19a708;
        case 0x19a70cu: goto label_19a70c;
        case 0x19a710u: goto label_19a710;
        case 0x19a714u: goto label_19a714;
        case 0x19a718u: goto label_19a718;
        case 0x19a71cu: goto label_19a71c;
        case 0x19a720u: goto label_19a720;
        case 0x19a724u: goto label_19a724;
        case 0x19a728u: goto label_19a728;
        case 0x19a72cu: goto label_19a72c;
        case 0x19a730u: goto label_19a730;
        case 0x19a734u: goto label_19a734;
        case 0x19a738u: goto label_19a738;
        case 0x19a73cu: goto label_19a73c;
        case 0x19a740u: goto label_19a740;
        case 0x19a744u: goto label_19a744;
        case 0x19a748u: goto label_19a748;
        case 0x19a74cu: goto label_19a74c;
        case 0x19a750u: goto label_19a750;
        case 0x19a754u: goto label_19a754;
        case 0x19a758u: goto label_19a758;
        case 0x19a75cu: goto label_19a75c;
        case 0x19a760u: goto label_19a760;
        case 0x19a764u: goto label_19a764;
        case 0x19a768u: goto label_19a768;
        case 0x19a76cu: goto label_19a76c;
        case 0x19a770u: goto label_19a770;
        case 0x19a774u: goto label_19a774;
        case 0x19a778u: goto label_19a778;
        case 0x19a77cu: goto label_19a77c;
        default: break;
    }

    ctx->pc = 0x19a648u;

label_19a648:
    // 0x19a648: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x19a648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_19a64c:
    // 0x19a64c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x19a64cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_19a650:
    // 0x19a650: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x19a650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_19a654:
    // 0x19a654: 0x244231a0  addiu       $v0, $v0, 0x31A0
    ctx->pc = 0x19a654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12704));
label_19a658:
    // 0x19a658: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x19a658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_19a65c:
    // 0x19a65c: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x19a65cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_19a660:
    // 0x19a660: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x19a660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_19a664:
    // 0x19a664: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19a664u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19a668:
    // 0x19a668: 0x3c013b83  lui         $at, 0x3B83
    ctx->pc = 0x19a668u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15235 << 16));
label_19a66c:
    // 0x19a66c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x19a66cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_19a670:
    // 0x19a670: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19a670u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19a674:
    // 0x19a674: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x19a674u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_19a678:
    // 0x19a678: 0xc62600e0  lwc1        $f6, 0xE0($s1)
    ctx->pc = 0x19a678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_19a67c:
    // 0x19a67c: 0xc62500e4  lwc1        $f5, 0xE4($s1)
    ctx->pc = 0x19a67cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_19a680:
    // 0x19a680: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x19a680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_19a684:
    // 0x19a684: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x19a684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19a688:
    // 0x19a688: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x19a688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_19a68c:
    // 0x19a68c: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x19a68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_19a690:
    // 0x19a690: 0x46060841  sub.s       $f1, $f1, $f6
    ctx->pc = 0x19a690u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[6]);
label_19a694:
    // 0x19a694: 0xc62400e8  lwc1        $f4, 0xE8($s1)
    ctx->pc = 0x19a694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_19a698:
    // 0x19a698: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x19a698u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
label_19a69c:
    // 0x19a69c: 0x8e240028  lw          $a0, 0x28($s1)
    ctx->pc = 0x19a69cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_19a6a0:
    // 0x19a6a0: 0x460418c1  sub.s       $f3, $f3, $f4
    ctx->pc = 0x19a6a0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
label_19a6a4:
    // 0x19a6a4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x19a6a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_19a6a8:
    // 0x19a6a8: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x19a6a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_19a6ac:
    // 0x19a6ac: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x19a6acu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_19a6b0:
    // 0x19a6b0: 0x46013180  add.s       $f6, $f6, $f1
    ctx->pc = 0x19a6b0u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[1]);
label_19a6b4:
    // 0x19a6b4: 0x46022940  add.s       $f5, $f5, $f2
    ctx->pc = 0x19a6b4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
label_19a6b8:
    // 0x19a6b8: 0x46032100  add.s       $f4, $f4, $f3
    ctx->pc = 0x19a6b8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
label_19a6bc:
    // 0x19a6bc: 0xe62600e0  swc1        $f6, 0xE0($s1)
    ctx->pc = 0x19a6bcu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 224), bits); }
label_19a6c0:
    // 0x19a6c0: 0xe62500e4  swc1        $f5, 0xE4($s1)
    ctx->pc = 0x19a6c0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 228), bits); }
label_19a6c4:
    // 0x19a6c4: 0xe62400e8  swc1        $f4, 0xE8($s1)
    ctx->pc = 0x19a6c4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 232), bits); }
label_19a6c8:
    // 0x19a6c8: 0x7a2200e0  lq          $v0, 0xE0($s1)
    ctx->pc = 0x19a6c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 224)));
label_19a6cc:
    // 0x19a6cc: 0xc047e6c  jal         func_11F9B0
label_19a6d0:
    if (ctx->pc == 0x19A6D0u) {
        ctx->pc = 0x19A6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A6CCu;
        // 0x19a6d0: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A6D4u;
        goto label_19a6d4;
    }
    ctx->pc = 0x19A6CCu;
    SET_GPR_U32(ctx, 31, 0x19A6D4u);
    ctx->pc = 0x19A6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A6CCu;
    // 0x19a6d0: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x19A6CCu, 0x19A6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A6D4u;
label_19a6d4:
    // 0x19a6d4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19a6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19a6d8:
    // 0x19a6d8: 0x84640220  lh          $a0, 0x220($v1)
    ctx->pc = 0x19a6d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 544)));
label_19a6dc:
    // 0x19a6dc: 0x8c650224  lw          $a1, 0x224($v1)
    ctx->pc = 0x19a6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 548)));
label_19a6e0:
    // 0x19a6e0: 0xa0f809  jalr        $a1
label_19a6e4:
    if (ctx->pc == 0x19A6E4u) {
        ctx->pc = 0x19A6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A6E0u;
        // 0x19a6e4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A6E8u;
        goto label_19a6e8;
    }
    ctx->pc = 0x19A6E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x19A6E8u);
        ctx->pc = 0x19A6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A6E0u;
        // 0x19a6e4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A6E0u, 0x19A6E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19A6E8u;
label_19a6e8:
    // 0x19a6e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19a6e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19a6ec:
    // 0x19a6ec: 0xc0cd940  jal         func_336500
label_19a6f0:
    if (ctx->pc == 0x19A6F0u) {
        ctx->pc = 0x19A6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A6ECu;
        // 0x19a6f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A6F4u;
        goto label_19a6f4;
    }
    ctx->pc = 0x19A6ECu;
    SET_GPR_U32(ctx, 31, 0x19A6F4u);
    ctx->pc = 0x19A6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A6ECu;
    // 0x19a6f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336500u, 0x19A6ECu, 0x19A6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A6F4u;
label_19a6f4:
    // 0x19a6f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19a6f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19a6f8:
    // 0x19a6f8: 0xc0cd7e8  jal         func_335FA0
label_19a6fc:
    if (ctx->pc == 0x19A6FCu) {
        ctx->pc = 0x19A6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A6F8u;
        // 0x19a6fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A700u;
        goto label_19a700;
    }
    ctx->pc = 0x19A6F8u;
    SET_GPR_U32(ctx, 31, 0x19A700u);
    ctx->pc = 0x19A6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A6F8u;
    // 0x19a6fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335FA0u, 0x19A6F8u, 0x19A700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A700u;
label_19a700:
    // 0x19a700: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x19a700u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_19a704:
    // 0x19a704: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x19a704u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_19a708:
    // 0x19a708: 0xda020010  lqc2        $vf2, 0x10($s0)
    ctx->pc = 0x19a708u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_19a70c:
    // 0x19a70c: 0xda030020  lqc2        $vf3, 0x20($s0)
    ctx->pc = 0x19a70cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
label_19a710:
    // 0x19a710: 0xda040030  lqc2        $vf4, 0x30($s0)
    ctx->pc = 0x19a710u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
label_19a714:
    // 0x19a714: 0x4be509bc  vmulax.xyzw $ACC, $vf1, $vf5x
    ctx->pc = 0x19a714u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_19a718:
    // 0x19a718: 0x4be510bd  vmadday.xyzw $ACC, $vf2, $vf5y
    ctx->pc = 0x19a718u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_19a71c:
    // 0x19a71c: 0x4be518be  vmaddaz.xyzw $ACC, $vf3, $vf5z
    ctx->pc = 0x19a71cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_19a720:
    // 0x19a720: 0x4be5204b  vmaddw.xyzw $vf1, $vf4, $vf5w
    ctx->pc = 0x19a720u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_19a724:
    // 0x19a724: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x19a724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_19a728:
    // 0x19a728: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x19a728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19a72c:
    // 0x19a72c: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x19a72cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_19a730:
    // 0x19a730: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19a730u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19a734:
    // 0x19a734: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x19a734u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_19a738:
    // 0x19a738: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19a738u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19a73c:
    // 0x19a73c: 0x0  nop
    ctx->pc = 0x19a73cu;
    // NOP
label_19a740:
    // 0x19a740: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_19a744:
    if (ctx->pc == 0x19A744u) {
        ctx->pc = 0x19A744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A740u;
        // 0x19a744: 0xe62000d4  swc1        $f0, 0xD4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A748u;
        goto label_19a748;
    }
    ctx->pc = 0x19A740u;
    {
        const bool branch_taken_0x19a740 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19A744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A740u;
        // 0x19a744: 0xe62000d4  swc1        $f0, 0xD4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a740) {
            ctx->pc = 0x19A74Cu;
            goto label_19a74c;
        }
    }
    ctx->pc = 0x19A748u;
label_19a748:
    // 0x19a748: 0xe62100d4  swc1        $f1, 0xD4($s1)
    ctx->pc = 0x19a748u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
label_19a74c:
    // 0x19a74c: 0xc62000d4  lwc1        $f0, 0xD4($s1)
    ctx->pc = 0x19a74cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19a750:
    // 0x19a750: 0x3c01c120  lui         $at, 0xC120
    ctx->pc = 0x19a750u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49440 << 16));
label_19a754:
    // 0x19a754: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19a754u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19a758:
    // 0x19a758: 0x0  nop
    ctx->pc = 0x19a758u;
    // NOP
label_19a75c:
    // 0x19a75c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x19a75cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19a760:
    // 0x19a760: 0x0  nop
    ctx->pc = 0x19a760u;
    // NOP
label_19a764:
    // 0x19a764: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_19a768:
    if (ctx->pc == 0x19A768u) {
        ctx->pc = 0x19A768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A764u;
        // 0x19a768: 0xe62100d4  swc1        $f1, 0xD4($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A76Cu;
        goto label_19a76c;
    }
    ctx->pc = 0x19A764u;
    {
        const bool branch_taken_0x19a764 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19a764) {
            ctx->pc = 0x19A768u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19A764u;
            // 0x19a768: 0xe62100d4  swc1        $f1, 0xD4($s1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x19A76Cu;
            goto label_19a76c;
        }
    }
    ctx->pc = 0x19A76Cu;
label_19a76c:
    // 0x19a76c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x19a76cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_19a770:
    // 0x19a770: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x19a770u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_19a774:
    // 0x19a774: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x19a774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_19a778:
    // 0x19a778: 0x3e00008  jr          $ra
label_19a77c:
    if (ctx->pc == 0x19A77Cu) {
        ctx->pc = 0x19A77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A778u;
        // 0x19a77c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A780u;
        goto label_fallthrough_0x19a778;
    }
    ctx->pc = 0x19A778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A778u;
        // 0x19a77c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x19a778:
    ctx->pc = 0x19A780u;
}
