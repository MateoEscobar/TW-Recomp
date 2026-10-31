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

// Function: sub_00296190
// Address: 0x296190 - 0x2962f0
void sub_00296190_0x296190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00296190_0x296190");
#endif

    switch (ctx->pc) {
        case 0x2961b8u: goto label_2961b8;
        case 0x2961e0u: goto label_2961e0;
        case 0x2961f0u: goto label_2961f0;
        case 0x296208u: goto label_296208;
        case 0x296218u: goto label_296218;
        case 0x296260u: goto label_296260;
        case 0x296290u: goto label_296290;
        default: break;
    }

    ctx->pc = 0x296190u;

    // 0x296190: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x296190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x296194: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x296194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x296198: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x296198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x29619c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x29619cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2961a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2961a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2961a4: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x2961a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x2961a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2961a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2961ac: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2961acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2961b0: 0xc0cd8ec  jal         func_3363B0
    ctx->pc = 0x2961B0u;
    SET_GPR_U32(ctx, 31, 0x2961B8u);
    ctx->pc = 0x2961B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2961B0u;
    // 0x2961b4: 0x26250230  addiu       $a1, $s1, 0x230 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x2961B0u, 0x2961B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2961B8u;
label_2961b8:
    // 0x2961b8: 0x86030092  lh          $v1, 0x92($s0)
    ctx->pc = 0x2961b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
    // 0x2961bc: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2961bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x2961c0: 0x24524b00  addiu       $s2, $v0, 0x4B00
    ctx->pc = 0x2961c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x2961c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2961c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2961c8: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2961c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2961cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2961ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2961d0: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x2961d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2961d4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2961d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2961d8: 0xc0a58bc  jal         func_2962F0
    ctx->pc = 0x2961D8u;
    SET_GPR_U32(ctx, 31, 0x2961E0u);
    ctx->pc = 0x2961DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2961D8u;
    // 0x2961dc: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2962F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2962F0u, 0x2961D8u, 0x2961E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2961E0u;
label_2961e0:
    // 0x2961e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2961e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2961e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2961e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2961e8: 0xc0a58d6  jal         func_296358
    ctx->pc = 0x2961E8u;
    SET_GPR_U32(ctx, 31, 0x2961F0u);
    ctx->pc = 0x2961ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2961E8u;
    // 0x2961ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296358u, 0x2961E8u, 0x2961F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2961F0u;
label_2961f0:
    // 0x2961f0: 0x4400016  bltz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2961F0u;
    {
        const bool branch_taken_0x2961f0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2961F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2961F0u;
        // 0x2961f4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2961f0) {
            ctx->pc = 0x29624Cu;
            goto label_29624c;
        }
    }
    ctx->pc = 0x2961F8u;
    // 0x2961f8: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x2961f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2961fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2961fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296200: 0xc0a5904  jal         func_296410
    ctx->pc = 0x296200u;
    SET_GPR_U32(ctx, 31, 0x296208u);
    ctx->pc = 0x296204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296200u;
    // 0x296204: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296410u, 0x296200u, 0x296208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296208u;
label_296208:
    // 0x296208: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x296208u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29620c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x29620cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x296210: 0xc136afa  jal         func_4DABE8
    ctx->pc = 0x296210u;
    SET_GPR_U32(ctx, 31, 0x296218u);
    ctx->pc = 0x296214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296210u;
    // 0x296214: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x296210u, 0x296218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296218u;
label_296218:
    // 0x296218: 0x7ba40040  lq          $a0, 0x40($sp)
    ctx->pc = 0x296218u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29621c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29621cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x296220: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x296220u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x296224: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x296224u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x296228: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x296228u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x29622c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x29622cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x296230: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x296230u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x296234: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x296234u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x296238: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x296238u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x29623c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x29623cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x296240: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x296240u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x296244: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x296244u;
    {
        const bool branch_taken_0x296244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296244u;
        // 0x296248: 0x7fa40030  sq          $a0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296244) {
            ctx->pc = 0x2962C0u;
            goto label_2962c0;
        }
    }
    ctx->pc = 0x29624Cu;
label_29624c:
    // 0x29624c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x29624cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x296250: 0x2041018  mult        $v0, $s0, $a0
    ctx->pc = 0x296250u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x296254: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x296254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x296258: 0xc0e409a  jal         func_390268
    ctx->pc = 0x296258u;
    SET_GPR_U32(ctx, 31, 0x296260u);
    ctx->pc = 0x29625Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296258u;
    // 0x29625c: 0x248401b8  addiu       $a0, $a0, 0x1B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x296258u, 0x296260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296260u;
label_296260:
    // 0x296260: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x296260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x296264: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x296264u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x296268: 0xc44001ac  lwc1        $f0, 0x1AC($v0)
    ctx->pc = 0x296268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29626c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29626cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x296270: 0x0  nop
    ctx->pc = 0x296270u;
    // NOP
    // 0x296274: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x296274u;
    {
        const bool branch_taken_0x296274 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x296278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296274u;
        // 0x296278: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296274) {
            ctx->pc = 0x2962D0u;
            goto label_2962d0;
        }
    }
    ctx->pc = 0x29627Cu;
    // 0x29627c: 0x84450092  lh          $a1, 0x92($v0)
    ctx->pc = 0x29627cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
    // 0x296280: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x296280u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x296284: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x296284u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x296288: 0xc136afa  jal         func_4DABE8
    ctx->pc = 0x296288u;
    SET_GPR_U32(ctx, 31, 0x296290u);
    ctx->pc = 0x29628Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296288u;
    // 0x29628c: 0xb22821  addu        $a1, $a1, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x296288u, 0x296290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296290u;
label_296290:
    // 0x296290: 0x7ba40030  lq          $a0, 0x30($sp)
    ctx->pc = 0x296290u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x296294: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x296294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x296298: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x296298u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29629c: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x29629cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x2962a0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2962a0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2962a4: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x2962a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2962a8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2962a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2962ac: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2962acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2962b0: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x2962b0u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x2962b4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2962b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2962b8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2962b8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2962bc: 0x7fa40020  sq          $a0, 0x20($sp)
    ctx->pc = 0x2962bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 4));
label_2962c0:
    // 0x2962c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2962c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2962c4: 0x0  nop
    ctx->pc = 0x2962c4u;
    // NOP
    // 0x2962c8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2962C8u;
    {
        const bool branch_taken_0x2962c8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2962CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2962C8u;
        // 0x2962cc: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2962c8) {
            ctx->pc = 0x2962D8u;
            goto label_2962d8;
        }
    }
    ctx->pc = 0x2962D0u;
label_2962d0:
    // 0x2962d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2962d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2962d4: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2962d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2962d8:
    // 0x2962d8: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x2962d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2962dc: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x2962dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2962e0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2962e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2962e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2962E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2962E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2962E4u;
        // 0x2962e8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2962E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2962ECu;
    // 0x2962ec: 0x0  nop
    ctx->pc = 0x2962ecu;
    // NOP
    ctx->pc = 0x2962f0u;
}
