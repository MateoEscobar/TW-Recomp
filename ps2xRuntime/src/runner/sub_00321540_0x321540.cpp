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

// Function: sub_00321540
// Address: 0x321540 - 0x3217a0
void sub_00321540_0x321540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321540_0x321540");
#endif

    switch (ctx->pc) {
        case 0x3215a4u: goto label_3215a4;
        case 0x3215c0u: goto label_3215c0;
        case 0x3215fcu: goto label_3215fc;
        case 0x321608u: goto label_321608;
        case 0x321610u: goto label_321610;
        case 0x321654u: goto label_321654;
        case 0x3216c4u: goto label_3216c4;
        case 0x3216e8u: goto label_3216e8;
        case 0x3216f4u: goto label_3216f4;
        default: break;
    }

    ctx->pc = 0x321540u;

    // 0x321540: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x321540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x321544: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x321544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x321548: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x321548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x32154c: 0x3c070032  lui         $a3, 0x32
    ctx->pc = 0x32154cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)50 << 16));
    // 0x321550: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x321550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x321554: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x321554u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x321558: 0x245155d8  addiu       $s1, $v0, 0x55D8
    ctx->pc = 0x321558u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 21976));
    // 0x32155c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x32155cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x321560: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x321560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x321564: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x321564u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321568: 0x8e051650  lw          $a1, 0x1650($s0)
    ctx->pc = 0x321568u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x511650u));
    // 0x32156c: 0x24e714d0  addiu       $a3, $a3, 0x14D0
    ctx->pc = 0x32156cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5328));
    // 0x321570: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x321570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
    // 0x321574: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x321574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321578: 0xac561654  sw          $s6, 0x1654($v0)
    ctx->pc = 0x321578u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 22)); ps2TraceGuestWrite(rdram, 0x511654u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x511654u, _value); } while (0);
    // 0x32157c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x32157cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x321580: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x321580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x321584: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x321584u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321588: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x321588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x32158c: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x32158cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x321590: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x321590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x321594: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x321594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
    // 0x321598: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x321598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x32159c: 0xc10cff6  jal         func_433FD8
    ctx->pc = 0x32159Cu;
    SET_GPR_U32(ctx, 31, 0x3215A4u);
    ctx->pc = 0x3215A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32159Cu;
    // 0x3215a0: 0xe7b400e0  swc1        $f20, 0xE0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x433FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433FD8u, 0x32159Cu, 0x3215A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3215A4u;
label_3215a4:
    // 0x3215a4: 0x8e021650  lw          $v0, 0x1650($s0)
    ctx->pc = 0x3215a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5712)));
    // 0x3215a8: 0x1040006f  beqz        $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x3215A8u;
    {
        const bool branch_taken_0x3215a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3215ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3215A8u;
        // 0x3215ac: 0x26c20090  addiu       $v0, $s6, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3215a8) {
            ctx->pc = 0x321768u;
            goto label_321768;
        }
    }
    ctx->pc = 0x3215B0u;
    // 0x3215b0: 0xafb1003c  sw          $s1, 0x3C($sp)
    ctx->pc = 0x3215b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 17));
    // 0x3215b4: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x3215b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x3215b8: 0x27be0020  addiu       $fp, $sp, 0x20
    ctx->pc = 0x3215b8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3215bc: 0x0  nop
    ctx->pc = 0x3215bcu;
    // NOP
label_3215c0:
    // 0x3215c0: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x3215c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3215c4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3215c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3215c8: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x3215c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x3215cc: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x3215ccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3215d0: 0x84a30002  lh          $v1, 0x2($a1)
    ctx->pc = 0x3215d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x3215d4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3215d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3215d8: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x3215d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
    // 0x3215dc: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x3215dcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3215e0: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x3215e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x3215e4: 0x24a54b00  addiu       $a1, $a1, 0x4B00
    ctx->pc = 0x3215e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19200));
    // 0x3215e8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3215e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3215ec: 0x26910008  addiu       $s1, $s4, 0x8
    ctx->pc = 0x3215ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x3215f0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x3215f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3215f4: 0xc087502  jal         func_21D408
    ctx->pc = 0x3215F4u;
    SET_GPR_U32(ctx, 31, 0x3215FCu);
    ctx->pc = 0x3215F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3215F4u;
    // 0x3215f8: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x3215F4u, 0x3215FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3215FCu;
label_3215fc:
    // 0x3215fc: 0x8c53020c  lw          $s3, 0x20C($v0)
    ctx->pc = 0x3215fcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x321600: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x321600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x321604: 0xc4543908  lwc1        $f20, 0x3908($v0)
    ctx->pc = 0x321604u;
    { uint32_t bits = FAST_READ32(0x573908u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_321608:
    // 0x321608: 0xc0e4080  jal         func_390200
    ctx->pc = 0x321608u;
    SET_GPR_U32(ctx, 31, 0x321610u);
    ctx->pc = 0x32160Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321608u;
    // 0x32160c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390200u, 0x321608u, 0x321610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321610u;
label_321610:
    // 0x321610: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x321610u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321614: 0x5200001e  beql        $s0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x321614u;
    {
        const bool branch_taken_0x321614 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x321614) {
            ctx->pc = 0x321618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x321614u;
            // 0x321618: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x321690u;
            goto label_321690;
        }
    }
    ctx->pc = 0x32161Cu;
    // 0x32161c: 0x8e0200ec  lw          $v0, 0xEC($s0)
    ctx->pc = 0x32161cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x321620: 0x14530009  bne         $v0, $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x321620u;
    {
        const bool branch_taken_0x321620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x321624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321620u;
        // 0x321624: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321620) {
            ctx->pc = 0x321648u;
            goto label_321648;
        }
    }
    ctx->pc = 0x321628u;
    // 0x321628: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x321628u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x32162c: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x32162cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x321630: 0x8c62b734  lw          $v0, -0x48CC($v1)
    ctx->pc = 0x321630u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50B734u));
    // 0x321634: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x321634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x321638: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x321638u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x32163c: 0x54600014  bnel        $v1, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x32163Cu;
    {
        const bool branch_taken_0x32163c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32163c) {
            ctx->pc = 0x321640u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32163Cu;
            // 0x321640: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x321690u;
            goto label_321690;
        }
    }
    ctx->pc = 0x321644u;
    // 0x321644: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x321644u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_321648:
    // 0x321648: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x321648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x32164c: 0xc136afa  jal         func_4DABE8
    ctx->pc = 0x32164Cu;
    SET_GPR_U32(ctx, 31, 0x321654u);
    ctx->pc = 0x321650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32164Cu;
    // 0x321650: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x32164Cu, 0x321654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321654u;
label_321654:
    // 0x321654: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x321654u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x321658: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x321658u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x32165c: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x32165cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x321660: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x321660u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x321664: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x321664u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x321668: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x321668u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x32166c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x32166cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x321670: 0x0  nop
    ctx->pc = 0x321670u;
    // NOP
    // 0x321674: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x321674u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x321678: 0x0  nop
    ctx->pc = 0x321678u;
    // NOP
    // 0x32167c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x32167Cu;
    {
        const bool branch_taken_0x32167c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x321680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32167Cu;
        // 0x321680: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32167c) {
            ctx->pc = 0x32168Cu;
            goto label_32168c;
        }
    }
    ctx->pc = 0x321684u;
    // 0x321684: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x321684u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x321688: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x321688u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32168c:
    // 0x32168c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x32168cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_321690:
    // 0x321690: 0x2e42000a  sltiu       $v0, $s2, 0xA
    ctx->pc = 0x321690u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x321694: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x321694u;
    {
        const bool branch_taken_0x321694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x321698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321694u;
        // 0x321698: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321694) {
            ctx->pc = 0x321608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_321608;
        }
    }
    ctx->pc = 0x32169Cu;
    // 0x32169c: 0x12a0002a  beqz        $s5, . + 4 + (0x2A << 2)
    ctx->pc = 0x32169Cu;
    {
        const bool branch_taken_0x32169c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x3216A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32169Cu;
        // 0x3216a0: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32169c) {
            ctx->pc = 0x321748u;
            goto label_321748;
        }
    }
    ctx->pc = 0x3216A4u;
    // 0x3216a4: 0x7aa20010  lq          $v0, 0x10($s5)
    ctx->pc = 0x3216a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x3216a8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3216a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3216ac: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3216acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3216b0: 0x246516c0  addiu       $a1, $v1, 0x16C0
    ctx->pc = 0x3216b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 5824));
    // 0x3216b4: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3216b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x3216b8: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x3216b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3216bc: 0xc094904  jal         func_252410
    ctx->pc = 0x3216BCu;
    SET_GPR_U32(ctx, 31, 0x3216C4u);
    ctx->pc = 0x3216C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3216BCu;
    // 0x3216c0: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252410u, 0x3216BCu, 0x3216C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3216C4u;
label_3216c4:
    // 0x3216c4: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x3216c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
    // 0x3216c8: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x3216c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
    // 0x3216cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3216ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3216d0: 0x26640048  addiu       $a0, $s3, 0x48
    ctx->pc = 0x3216d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 72));
    // 0x3216d4: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x3216d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3216d8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x3216d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3216dc: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x3216dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x3216e0: 0xc136d6c  jal         func_4DB5B0
    ctx->pc = 0x3216E0u;
    SET_GPR_U32(ctx, 31, 0x3216E8u);
    ctx->pc = 0x3216E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3216E0u;
    // 0x3216e4: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB5B0u, 0x3216E0u, 0x3216E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3216E8u;
label_3216e8:
    // 0x3216e8: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x3216e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x3216ec: 0xc0e409a  jal         func_390268
    ctx->pc = 0x3216ECu;
    SET_GPR_U32(ctx, 31, 0x3216F4u);
    ctx->pc = 0x3216F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3216ECu;
    // 0x3216f0: 0x27a40034  addiu       $a0, $sp, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x3216ECu, 0x3216F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3216F4u;
label_3216f4:
    // 0x3216f4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3216F4u;
    {
        const bool branch_taken_0x3216f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3216F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3216F4u;
        // 0x3216f8: 0xc7a10030  lwc1        $f1, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3216f4) {
            ctx->pc = 0x321718u;
            goto label_321718;
        }
    }
    ctx->pc = 0x3216FCu;
    // 0x3216fc: 0x3c014010  lui         $at, 0x4010
    ctx->pc = 0x3216fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16400 << 16));
    // 0x321700: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x321700u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x321704: 0x0  nop
    ctx->pc = 0x321704u;
    // NOP
    // 0x321708: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x321708u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32170c: 0x0  nop
    ctx->pc = 0x32170cu;
    // NOP
    // 0x321710: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x321710u;
    {
        const bool branch_taken_0x321710 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x321714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321710u;
        // 0x321714: 0x8fa5003c  lw          $a1, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321710) {
            ctx->pc = 0x32174Cu;
            goto label_32174c;
        }
    }
    ctx->pc = 0x321718u;
label_321718:
    // 0x321718: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x321718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x32171c: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x32171cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x321720: 0x8ca4b734  lw          $a0, -0x48CC($a1)
    ctx->pc = 0x321720u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50B734u));
    // 0x321724: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x321724u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321728: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x321728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x32172c: 0xae960000  sw          $s6, 0x0($s4)
    ctx->pc = 0x32172cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 22));
    // 0x321730: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x321730u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
    // 0x321734: 0xaeb300ec  sw          $s3, 0xEC($s5)
    ctx->pc = 0x321734u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 236), GPR_U32(ctx, 19));
    // 0x321738: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x321738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x32173c: 0x24631388  addiu       $v1, $v1, 0x1388
    ctx->pc = 0x32173cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5000));
    // 0x321740: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x321740u;
    {
        const bool branch_taken_0x321740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321740u;
        // 0x321744: 0xaea300f0  sw          $v1, 0xF0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 240), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321740) {
            ctx->pc = 0x32176Cu;
            goto label_32176c;
        }
    }
    ctx->pc = 0x321748u;
label_321748:
    // 0x321748: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x321748u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_32174c:
    // 0x32174c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x32174cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x321750: 0x8c621650  lw          $v0, 0x1650($v1)
    ctx->pc = 0x321750u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x511650u));
    // 0x321754: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x321754u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x321758: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x321758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x32175c: 0x2e2102b  sltu        $v0, $s7, $v0
    ctx->pc = 0x32175cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x321760: 0x1440ff97  bnez        $v0, . + 4 + (-0x69 << 2)
    ctx->pc = 0x321760u;
    {
        const bool branch_taken_0x321760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x321764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321760u;
        // 0x321764: 0xafa5003c  sw          $a1, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321760) {
            ctx->pc = 0x3215C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3215c0;
        }
    }
    ctx->pc = 0x321768u;
label_321768:
    // 0x321768: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x321768u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32176c:
    // 0x32176c: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x32176cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x321770: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x321770u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x321774: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x321774u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x321778: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x321778u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x32177c: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x32177cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x321780: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x321780u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x321784: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x321784u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x321788: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x321788u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x32178c: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x32178cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x321790: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x321790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x321794: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x321794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x321798: 0x3e00008  jr          $ra
    ctx->pc = 0x321798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32179Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321798u;
        // 0x32179c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3217A0u;
}
