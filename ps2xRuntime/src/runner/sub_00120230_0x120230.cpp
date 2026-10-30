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

// Function: sub_00120230
// Address: 0x120230 - 0x1202e8
void sub_00120230_0x120230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00120230_0x120230");
#endif

    switch (ctx->pc) {
        case 0x120230u: goto label_120230;
        case 0x120234u: goto label_120234;
        case 0x120238u: goto label_120238;
        case 0x12023cu: goto label_12023c;
        case 0x120240u: goto label_120240;
        case 0x120244u: goto label_120244;
        case 0x120248u: goto label_120248;
        case 0x12024cu: goto label_12024c;
        case 0x120250u: goto label_120250;
        case 0x120254u: goto label_120254;
        case 0x120258u: goto label_120258;
        case 0x12025cu: goto label_12025c;
        case 0x120260u: goto label_120260;
        case 0x120264u: goto label_120264;
        case 0x120268u: goto label_120268;
        case 0x12026cu: goto label_12026c;
        case 0x120270u: goto label_120270;
        case 0x120274u: goto label_120274;
        case 0x120278u: goto label_120278;
        case 0x12027cu: goto label_12027c;
        case 0x120280u: goto label_120280;
        case 0x120284u: goto label_120284;
        case 0x120288u: goto label_120288;
        case 0x12028cu: goto label_12028c;
        case 0x120290u: goto label_120290;
        case 0x120294u: goto label_120294;
        case 0x120298u: goto label_120298;
        case 0x12029cu: goto label_12029c;
        case 0x1202a0u: goto label_1202a0;
        case 0x1202a4u: goto label_1202a4;
        case 0x1202a8u: goto label_1202a8;
        case 0x1202acu: goto label_1202ac;
        case 0x1202b0u: goto label_1202b0;
        case 0x1202b4u: goto label_1202b4;
        case 0x1202b8u: goto label_1202b8;
        case 0x1202bcu: goto label_1202bc;
        case 0x1202c0u: goto label_1202c0;
        case 0x1202c4u: goto label_1202c4;
        case 0x1202c8u: goto label_1202c8;
        case 0x1202ccu: goto label_1202cc;
        case 0x1202d0u: goto label_1202d0;
        case 0x1202d4u: goto label_1202d4;
        case 0x1202d8u: goto label_1202d8;
        case 0x1202dcu: goto label_1202dc;
        case 0x1202e0u: goto label_1202e0;
        case 0x1202e4u: goto label_1202e4;
        default: break;
    }

    ctx->pc = 0x120230u;

label_120230:
    // 0x120230: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x120230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_120234:
    // 0x120234: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x120234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_120238:
    // 0x120238: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x120238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_12023c:
    // 0x12023c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x12023cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_120240:
    // 0x120240: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x120240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_120244:
    // 0x120244: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x120244u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_120248:
    // 0x120248: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x120248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_12024c:
    // 0x12024c: 0xc047ab8  jal         func_11EAE0
label_120250:
    if (ctx->pc == 0x120250u) {
        ctx->pc = 0x120250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12024Cu;
        // 0x120250: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120254u;
        goto label_120254;
    }
    ctx->pc = 0x12024Cu;
    SET_GPR_U32(ctx, 31, 0x120254u);
    ctx->pc = 0x120250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12024Cu;
    // 0x120250: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EAE0u, 0x12024Cu, 0x120254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120254u;
label_120254:
    // 0x120254: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x120254u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_120258:
    // 0x120258: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x120258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_12025c:
    // 0x12025c: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
label_120260:
    if (ctx->pc == 0x120260u) {
        ctx->pc = 0x120260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12025Cu;
        // 0x120260: 0xc4548730  lwc1        $f20, -0x78D0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294936368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x120264u;
        goto label_120264;
    }
    ctx->pc = 0x12025Cu;
    {
        const bool branch_taken_0x12025c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x120260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12025Cu;
        // 0x120260: 0xc4548730  lwc1        $f20, -0x78D0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294936368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12025c) {
            ctx->pc = 0x1202C8u;
            goto label_1202c8;
        }
    }
    ctx->pc = 0x120264u;
label_120264:
    // 0x120264: 0x0  nop
    ctx->pc = 0x120264u;
    // NOP
label_120268:
    // 0x120268: 0xc047e6c  jal         func_11F9B0
label_12026c:
    if (ctx->pc == 0x12026Cu) {
        ctx->pc = 0x12026Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120268u;
        // 0x12026c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120270u;
        goto label_120270;
    }
    ctx->pc = 0x120268u;
    SET_GPR_U32(ctx, 31, 0x120270u);
    ctx->pc = 0x12026Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120268u;
    // 0x12026c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x120268u, 0x120270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120270u;
label_120270:
    // 0x120270: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x120270u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_120274:
    // 0x120274: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x120274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_120278:
    // 0x120278: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x120278u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_12027c:
    // 0x12027c: 0x8c65021c  lw          $a1, 0x21C($v1)
    ctx->pc = 0x12027cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_120280:
    // 0x120280: 0xa0f809  jalr        $a1
label_120284:
    if (ctx->pc == 0x120284u) {
        ctx->pc = 0x120284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120280u;
        // 0x120284: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120288u;
        goto label_120288;
    }
    ctx->pc = 0x120280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x120288u);
        ctx->pc = 0x120284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120280u;
        // 0x120284: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120280u, 0x120288u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x120288u;
label_120288:
    // 0x120288: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x120288u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12028c:
    // 0x12028c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x12028cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_120290:
    // 0x120290: 0xc136afa  jal         func_4DABE8
label_120294:
    if (ctx->pc == 0x120294u) {
        ctx->pc = 0x120294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120290u;
        // 0x120294: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120298u;
        goto label_120298;
    }
    ctx->pc = 0x120290u;
    SET_GPR_U32(ctx, 31, 0x120298u);
    ctx->pc = 0x120294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120290u;
    // 0x120294: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x120290u, 0x120298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120298u;
label_120298:
    // 0x120298: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x120298u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_12029c:
    // 0x12029c: 0x211182b  sltu        $v1, $s0, $s1
    ctx->pc = 0x12029cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_1202a0:
    // 0x1202a0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1202a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1202a4:
    // 0x1202a4: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x1202a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1202a8:
    // 0x1202a8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x1202a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1202ac:
    // 0x1202ac: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x1202acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1202b0:
    // 0x1202b0: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x1202b0u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_1202b4:
    // 0x1202b4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1202b4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1202b8:
    // 0x1202b8: 0x0  nop
    ctx->pc = 0x1202b8u;
    // NOP
label_1202bc:
    // 0x1202bc: 0x4600a529  min.s       $f20, $f20, $f0
    ctx->pc = 0x1202bcu;
    ctx->f[20] = std::min(ctx->f[20], ctx->f[0]);
label_1202c0:
    // 0x1202c0: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
label_1202c4:
    if (ctx->pc == 0x1202C4u) {
        ctx->pc = 0x1202C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1202C0u;
        // 0x1202c4: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1202C8u;
        goto label_1202c8;
    }
    ctx->pc = 0x1202C0u;
    {
        const bool branch_taken_0x1202c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1202C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1202C0u;
        // 0x1202c4: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1202c0) {
            ctx->pc = 0x120268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_120268;
        }
    }
    ctx->pc = 0x1202C8u;
label_1202c8:
    // 0x1202c8: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x1202c8u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
label_1202cc:
    // 0x1202cc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1202ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1202d0:
    // 0x1202d0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1202d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1202d4:
    // 0x1202d4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1202d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1202d8:
    // 0x1202d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1202d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1202dc:
    // 0x1202dc: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x1202dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1202e0:
    // 0x1202e0: 0x3e00008  jr          $ra
label_1202e4:
    if (ctx->pc == 0x1202E4u) {
        ctx->pc = 0x1202E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1202E0u;
        // 0x1202e4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1202E8u;
        goto label_fallthrough_0x1202e0;
    }
    ctx->pc = 0x1202E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1202E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1202E0u;
        // 0x1202e4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1202E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1202e0:
    ctx->pc = 0x1202E8u;
}
