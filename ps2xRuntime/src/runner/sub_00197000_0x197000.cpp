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

// Function: sub_00197000
// Address: 0x197000 - 0x197108
void sub_00197000_0x197000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00197000_0x197000");
#endif

    switch (ctx->pc) {
        case 0x197000u: goto label_197000;
        case 0x197004u: goto label_197004;
        case 0x197008u: goto label_197008;
        case 0x19700cu: goto label_19700c;
        case 0x197010u: goto label_197010;
        case 0x197014u: goto label_197014;
        case 0x197018u: goto label_197018;
        case 0x19701cu: goto label_19701c;
        case 0x197020u: goto label_197020;
        case 0x197024u: goto label_197024;
        case 0x197028u: goto label_197028;
        case 0x19702cu: goto label_19702c;
        case 0x197030u: goto label_197030;
        case 0x197034u: goto label_197034;
        case 0x197038u: goto label_197038;
        case 0x19703cu: goto label_19703c;
        case 0x197040u: goto label_197040;
        case 0x197044u: goto label_197044;
        case 0x197048u: goto label_197048;
        case 0x19704cu: goto label_19704c;
        case 0x197050u: goto label_197050;
        case 0x197054u: goto label_197054;
        case 0x197058u: goto label_197058;
        case 0x19705cu: goto label_19705c;
        case 0x197060u: goto label_197060;
        case 0x197064u: goto label_197064;
        case 0x197068u: goto label_197068;
        case 0x19706cu: goto label_19706c;
        case 0x197070u: goto label_197070;
        case 0x197074u: goto label_197074;
        case 0x197078u: goto label_197078;
        case 0x19707cu: goto label_19707c;
        case 0x197080u: goto label_197080;
        case 0x197084u: goto label_197084;
        case 0x197088u: goto label_197088;
        case 0x19708cu: goto label_19708c;
        case 0x197090u: goto label_197090;
        case 0x197094u: goto label_197094;
        case 0x197098u: goto label_197098;
        case 0x19709cu: goto label_19709c;
        case 0x1970a0u: goto label_1970a0;
        case 0x1970a4u: goto label_1970a4;
        case 0x1970a8u: goto label_1970a8;
        case 0x1970acu: goto label_1970ac;
        case 0x1970b0u: goto label_1970b0;
        case 0x1970b4u: goto label_1970b4;
        case 0x1970b8u: goto label_1970b8;
        case 0x1970bcu: goto label_1970bc;
        case 0x1970c0u: goto label_1970c0;
        case 0x1970c4u: goto label_1970c4;
        case 0x1970c8u: goto label_1970c8;
        case 0x1970ccu: goto label_1970cc;
        case 0x1970d0u: goto label_1970d0;
        case 0x1970d4u: goto label_1970d4;
        case 0x1970d8u: goto label_1970d8;
        case 0x1970dcu: goto label_1970dc;
        case 0x1970e0u: goto label_1970e0;
        case 0x1970e4u: goto label_1970e4;
        case 0x1970e8u: goto label_1970e8;
        case 0x1970ecu: goto label_1970ec;
        case 0x1970f0u: goto label_1970f0;
        case 0x1970f4u: goto label_1970f4;
        case 0x1970f8u: goto label_1970f8;
        case 0x1970fcu: goto label_1970fc;
        case 0x197100u: goto label_197100;
        case 0x197104u: goto label_197104;
        default: break;
    }

    ctx->pc = 0x197000u;

label_197000:
    // 0x197000: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x197000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_197004:
    // 0x197004: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x197004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_197008:
    // 0x197008: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x197008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_19700c:
    // 0x19700c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19700cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_197010:
    // 0x197010: 0xc064a1c  jal         func_192870
label_197014:
    if (ctx->pc == 0x197014u) {
        ctx->pc = 0x197014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197010u;
        // 0x197014: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197018u;
        goto label_197018;
    }
    ctx->pc = 0x197010u;
    SET_GPR_U32(ctx, 31, 0x197018u);
    ctx->pc = 0x197014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197010u;
    // 0x197014: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192870u, 0x197010u, 0x197018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197018u;
label_197018:
    // 0x197018: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x197018u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19701c:
    // 0x19701c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19701cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_197020:
    // 0x197020: 0x8cc3001c  lw          $v1, 0x1C($a2)
    ctx->pc = 0x197020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
label_197024:
    // 0x197024: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
label_197028:
    if (ctx->pc == 0x197028u) {
        ctx->pc = 0x197028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197024u;
        // 0x197028: 0xa0c20012  sb          $v0, 0x12($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 18), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19702Cu;
        goto label_19702c;
    }
    ctx->pc = 0x197024u;
    {
        const bool branch_taken_0x197024 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x197028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197024u;
        // 0x197028: 0xa0c20012  sb          $v0, 0x12($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 18), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197024) {
            ctx->pc = 0x1970F0u;
            goto label_1970f0;
        }
    }
    ctx->pc = 0x19702Cu;
label_19702c:
    // 0x19702c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x19702cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_197030:
    // 0x197030: 0x8c45cd4c  lw          $a1, -0x32B4($v0)
    ctx->pc = 0x197030u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954316)));
label_197034:
    // 0x197034: 0x8ca41898  lw          $a0, 0x1898($a1)
    ctx->pc = 0x197034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 6296)));
label_197038:
    // 0x197038: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x197038u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_19703c:
    // 0x19703c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x19703cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_197040:
    // 0x197040: 0x24420ca4  addiu       $v0, $v0, 0xCA4
    ctx->pc = 0x197040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3236));
label_197044:
    // 0x197044: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x197044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_197048:
    // 0x197048: 0xa28821  addu        $s1, $a1, $v0
    ctx->pc = 0x197048u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_19704c:
    // 0x19704c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19704cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_197050:
    // 0x197050: 0xac71149c  sw          $s1, 0x149C($v1)
    ctx->pc = 0x197050u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5276), GPR_U32(ctx, 17));
label_197054:
    // 0x197054: 0xaca41898  sw          $a0, 0x1898($a1)
    ctx->pc = 0x197054u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6296), GPR_U32(ctx, 4));
label_197058:
    // 0x197058: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x197058u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
label_19705c:
    // 0x19705c: 0x8cc2003c  lw          $v0, 0x3C($a2)
    ctx->pc = 0x19705cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 60)));
label_197060:
    // 0x197060: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x197060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
label_197064:
    // 0x197064: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
label_197068:
    if (ctx->pc == 0x197068u) {
        ctx->pc = 0x197068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197064u;
        // 0x197068: 0xc6000028  lwc1        $f0, 0x28($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19706Cu;
        goto label_19706c;
    }
    ctx->pc = 0x197064u;
    {
        const bool branch_taken_0x197064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x197064) {
            ctx->pc = 0x197068u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x197064u;
            // 0x197068: 0xc6000028  lwc1        $f0, 0x28($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1970ECu;
            goto label_1970ec;
        }
    }
    ctx->pc = 0x19706Cu;
label_19706c:
    // 0x19706c: 0xc047e6c  jal         func_11F9B0
label_197070:
    if (ctx->pc == 0x197070u) {
        ctx->pc = 0x197070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19706Cu;
        // 0x197070: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197074u;
        goto label_197074;
    }
    ctx->pc = 0x19706Cu;
    SET_GPR_U32(ctx, 31, 0x197074u);
    ctx->pc = 0x197070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19706Cu;
    // 0x197070: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x19706Cu, 0x197074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197074u;
label_197074:
    // 0x197074: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x197074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_197078:
    // 0x197078: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x197078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19707c:
    // 0x19707c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x19707cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_197080:
    // 0x197080: 0xc602002c  lwc1        $f2, 0x2C($s0)
    ctx->pc = 0x197080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_197084:
    // 0x197084: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x197084u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_197088:
    // 0x197088: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x197088u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_19708c:
    // 0x19708c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x19708cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_197090:
    // 0x197090: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x197090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_197094:
    // 0x197094: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x197094u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_197098:
    // 0x197098: 0x8c65021c  lw          $a1, 0x21C($v1)
    ctx->pc = 0x197098u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_19709c:
    // 0x19709c: 0xa0f809  jalr        $a1
label_1970a0:
    if (ctx->pc == 0x1970A0u) {
        ctx->pc = 0x1970A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19709Cu;
        // 0x1970a0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1970A4u;
        goto label_1970a4;
    }
    ctx->pc = 0x19709Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1970A4u);
        ctx->pc = 0x1970A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19709Cu;
        // 0x1970a0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19709Cu, 0x1970A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1970A4u;
label_1970a4:
    // 0x1970a4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1970a4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1970a8:
    // 0x1970a8: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x1970a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1970ac:
    // 0x1970ac: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x1970acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1970b0:
    // 0x1970b0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1970b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1970b4:
    // 0x1970b4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1970b4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_1970b8:
    // 0x1970b8: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x1970b8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1970bc:
    // 0x1970bc: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x1970bcu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_1970c0:
    // 0x1970c0: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x1970c0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_1970c4:
    // 0x1970c4: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x1970c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_1970c8:
    // 0x1970c8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1970c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1970cc:
    // 0x1970cc: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x1970ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1970d0:
    // 0x1970d0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x1970d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1970d4:
    // 0x1970d4: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x1970d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1970d8:
    // 0x1970d8: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x1970d8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_1970dc:
    // 0x1970dc: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1970dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_1970e0:
    // 0x1970e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1970e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1970e4:
    // 0x1970e4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1970e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_1970e8:
    // 0x1970e8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1970e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1970ec:
    // 0x1970ec: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x1970ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_1970f0:
    // 0x1970f0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1970f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1970f4:
    // 0x1970f4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1970f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1970f8:
    // 0x1970f8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1970f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1970fc:
    // 0x1970fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1970fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_197100:
    // 0x197100: 0x3e00008  jr          $ra
label_197104:
    if (ctx->pc == 0x197104u) {
        ctx->pc = 0x197104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197100u;
        // 0x197104: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197108u;
        goto label_fallthrough_0x197100;
    }
    ctx->pc = 0x197100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197100u;
        // 0x197104: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x197100:
    ctx->pc = 0x197108u;
}
