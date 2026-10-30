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

// Function: sub_002E5480
// Address: 0x2e5480 - 0x2e55a0
void sub_002E5480_0x2e5480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E5480_0x2e5480");
#endif

    switch (ctx->pc) {
        case 0x2e54b8u: goto label_2e54b8;
        case 0x2e54c8u: goto label_2e54c8;
        case 0x2e54dcu: goto label_2e54dc;
        case 0x2e54e4u: goto label_2e54e4;
        case 0x2e5514u: goto label_2e5514;
        case 0x2e5520u: goto label_2e5520;
        case 0x2e5558u: goto label_2e5558;
        case 0x2e556cu: goto label_2e556c;
        case 0x2e5584u: goto label_2e5584;
        default: break;
    }

    ctx->pc = 0x2e5480u;

    // 0x2e5480: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2e5480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2e5484: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2e5484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x2e5488: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2e5488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x2e548c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e548cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5490: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x2e5490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x2e5494: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2e5494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2e5498: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2e5498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e549c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2e549cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e54a0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E54A0u;
    {
        const bool branch_taken_0x2e54a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E54A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E54A0u;
        // 0x2e54a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e54a0) {
            ctx->pc = 0x2E54BCu;
            goto label_2e54bc;
        }
    }
    ctx->pc = 0x2E54A8u;
    // 0x2e54a8: 0x90820009  lbu         $v0, 0x9($a0)
    ctx->pc = 0x2e54a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 9)));
    // 0x2e54ac: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2e54acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2e54b0: 0xc0a33b6  jal         func_28CED8
    ctx->pc = 0x2E54B0u;
    SET_GPR_U32(ctx, 31, 0x2E54B8u);
    ctx->pc = 0x2E54B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E54B0u;
    // 0x2e54b4: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CED8u, 0x2E54B0u, 0x2E54B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E54B8u;
label_2e54b8:
    // 0x2e54b8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2e54b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e54bc:
    // 0x2e54bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e54bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e54c0: 0xc0a22c6  jal         func_288B18
    ctx->pc = 0x2E54C0u;
    SET_GPR_U32(ctx, 31, 0x2E54C8u);
    ctx->pc = 0x2E54C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E54C0u;
    // 0x2e54c4: 0x248400a0  addiu       $a0, $a0, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288B18u, 0x2E54C0u, 0x2E54C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E54C8u;
label_2e54c8:
    // 0x2e54c8: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x2e54c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2e54cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e54ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e54d0: 0x8e260014  lw          $a2, 0x14($s1)
    ctx->pc = 0x2e54d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2e54d4: 0xc0d50de  jal         func_354378
    ctx->pc = 0x2E54D4u;
    SET_GPR_U32(ctx, 31, 0x2E54DCu);
    ctx->pc = 0x2E54D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E54D4u;
    // 0x2e54d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x354378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354378u, 0x2E54D4u, 0x2E54DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E54DCu;
label_2e54dc:
    // 0x2e54dc: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2E54DCu;
    SET_GPR_U32(ctx, 31, 0x2E54E4u);
    ctx->pc = 0x2E54E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E54DCu;
    // 0x2e54e0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2E54DCu, 0x2E54E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E54E4u;
label_2e54e4:
    // 0x2e54e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e54e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e54e8: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x2E54E8u;
    {
        const bool branch_taken_0x2e54e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E54ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E54E8u;
        // 0x2e54ec: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e54e8) {
            ctx->pc = 0x2E5514u;
            goto label_2e5514;
        }
    }
    ctx->pc = 0x2E54F0u;
    // 0x2e54f0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2e54f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e54f4: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2e54f4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
    // 0x2e54f8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2e54f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e54fc: 0x8e270018  lw          $a3, 0x18($s1)
    ctx->pc = 0x2e54fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2e5500: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2e5500u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5504: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2e5504u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e5508: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x2e5508u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e550c: 0xc0bee7a  jal         func_2FB9E8
    ctx->pc = 0x2E550Cu;
    SET_GPR_U32(ctx, 31, 0x2E5514u);
    ctx->pc = 0x2E5510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E550Cu;
    // 0x2e5510: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2E550Cu, 0x2E5514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5514u;
label_2e5514:
    // 0x2e5514: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2e5514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e5518: 0xc0cd8ec  jal         func_3363B0
    ctx->pc = 0x2E5518u;
    SET_GPR_U32(ctx, 31, 0x2E5520u);
    ctx->pc = 0x2E551Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5518u;
    // 0x2e551c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x2E5518u, 0x2E5520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5520u;
label_2e5520:
    // 0x2e5520: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x2e5520u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e5524: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x2e5524u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e5528: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2e5528u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e552c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2e552cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2e5530: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2e5530u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2e5534: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2e5534u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2e5538: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2e5538u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2e553c: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2e553cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2e5540: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2e5540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x2e5544: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x2e5544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x2e5548: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2e5548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e554c: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x2e554cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x2e5550: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2E5550u;
    SET_GPR_U32(ctx, 31, 0x2E5558u);
    ctx->pc = 0x2E5554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5550u;
    // 0x2e5554: 0x8cb00000  lw          $s0, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2E5550u, 0x2E5558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5558u;
label_2e5558:
    // 0x2e5558: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2e5558u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e555c: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E555Cu;
    {
        const bool branch_taken_0x2e555c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E555Cu;
        // 0x2e5560: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e555c) {
            ctx->pc = 0x2E5584u;
            goto label_2e5584;
        }
    }
    ctx->pc = 0x2E5564u;
    // 0x2e5564: 0xc0884f6  jal         func_2213D8
    ctx->pc = 0x2E5564u;
    SET_GPR_U32(ctx, 31, 0x2E556Cu);
    ctx->pc = 0x2E5568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5564u;
    // 0x2e5568: 0x27b00030  addiu       $s0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2E5564u, 0x2E556Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E556Cu;
label_2e556c:
    // 0x2e556c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2e556cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e5570: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e5570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5574: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2e5574u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5578: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2e5578u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2e557c: 0xc0bf800  jal         func_2FE000
    ctx->pc = 0x2E557Cu;
    SET_GPR_U32(ctx, 31, 0x2E5584u);
    ctx->pc = 0x2E5580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E557Cu;
    // 0x2e5580: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2E557Cu, 0x2E5584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5584u;
label_2e5584:
    // 0x2e5584: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2e5584u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e5588: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x2e5588u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e558c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x2e558cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e5590: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2e5590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e5594: 0x3e00008  jr          $ra
    ctx->pc = 0x2E5594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E5598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5594u;
        // 0x2e5598: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E5594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E559Cu;
    // 0x2e559c: 0x0  nop
    ctx->pc = 0x2e559cu;
    // NOP
    ctx->pc = 0x2e55a0u;
}
