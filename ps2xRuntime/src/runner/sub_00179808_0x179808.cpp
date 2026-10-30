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

// Function: sub_00179808
// Address: 0x179808 - 0x1798f8
void sub_00179808_0x179808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00179808_0x179808");
#endif

    switch (ctx->pc) {
        case 0x179808u: goto label_179808;
        case 0x17980cu: goto label_17980c;
        case 0x179810u: goto label_179810;
        case 0x179814u: goto label_179814;
        case 0x179818u: goto label_179818;
        case 0x17981cu: goto label_17981c;
        case 0x179820u: goto label_179820;
        case 0x179824u: goto label_179824;
        case 0x179828u: goto label_179828;
        case 0x17982cu: goto label_17982c;
        case 0x179830u: goto label_179830;
        case 0x179834u: goto label_179834;
        case 0x179838u: goto label_179838;
        case 0x17983cu: goto label_17983c;
        case 0x179840u: goto label_179840;
        case 0x179844u: goto label_179844;
        case 0x179848u: goto label_179848;
        case 0x17984cu: goto label_17984c;
        case 0x179850u: goto label_179850;
        case 0x179854u: goto label_179854;
        case 0x179858u: goto label_179858;
        case 0x17985cu: goto label_17985c;
        case 0x179860u: goto label_179860;
        case 0x179864u: goto label_179864;
        case 0x179868u: goto label_179868;
        case 0x17986cu: goto label_17986c;
        case 0x179870u: goto label_179870;
        case 0x179874u: goto label_179874;
        case 0x179878u: goto label_179878;
        case 0x17987cu: goto label_17987c;
        case 0x179880u: goto label_179880;
        case 0x179884u: goto label_179884;
        case 0x179888u: goto label_179888;
        case 0x17988cu: goto label_17988c;
        case 0x179890u: goto label_179890;
        case 0x179894u: goto label_179894;
        case 0x179898u: goto label_179898;
        case 0x17989cu: goto label_17989c;
        case 0x1798a0u: goto label_1798a0;
        case 0x1798a4u: goto label_1798a4;
        case 0x1798a8u: goto label_1798a8;
        case 0x1798acu: goto label_1798ac;
        case 0x1798b0u: goto label_1798b0;
        case 0x1798b4u: goto label_1798b4;
        case 0x1798b8u: goto label_1798b8;
        case 0x1798bcu: goto label_1798bc;
        case 0x1798c0u: goto label_1798c0;
        case 0x1798c4u: goto label_1798c4;
        case 0x1798c8u: goto label_1798c8;
        case 0x1798ccu: goto label_1798cc;
        case 0x1798d0u: goto label_1798d0;
        case 0x1798d4u: goto label_1798d4;
        case 0x1798d8u: goto label_1798d8;
        case 0x1798dcu: goto label_1798dc;
        case 0x1798e0u: goto label_1798e0;
        case 0x1798e4u: goto label_1798e4;
        case 0x1798e8u: goto label_1798e8;
        case 0x1798ecu: goto label_1798ec;
        case 0x1798f0u: goto label_1798f0;
        case 0x1798f4u: goto label_1798f4;
        default: break;
    }

    ctx->pc = 0x179808u;

label_179808:
    // 0x179808: 0x3c013d08  lui         $at, 0x3D08
    ctx->pc = 0x179808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15624 << 16));
label_17980c:
    // 0x17980c: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x17980cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
label_179810:
    // 0x179810: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x179810u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_179814:
    // 0x179814: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x179814u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_179818:
    // 0x179818: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x179818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_17981c:
    // 0x17981c: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x17981cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_179820:
    // 0x179820: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x179820u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_179824:
    // 0x179824: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x179824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_179828:
    // 0x179828: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x179828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_17982c:
    // 0x17982c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17982cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_179830:
    // 0x179830: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x179830u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_179834:
    // 0x179834: 0xe7ac0000  swc1        $f12, 0x0($sp)
    ctx->pc = 0x179834u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_179838:
    // 0x179838: 0x8e05cdb4  lw          $a1, -0x324C($s0)
    ctx->pc = 0x179838u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954420)));
label_17983c:
    // 0x17983c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x17983cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_179840:
    // 0x179840: 0x844400a8  lh          $a0, 0xA8($v0)
    ctx->pc = 0x179840u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_179844:
    // 0x179844: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x179844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_179848:
    // 0x179848: 0x60f809  jalr        $v1
label_17984c:
    if (ctx->pc == 0x17984Cu) {
        ctx->pc = 0x17984Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179848u;
        // 0x17984c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179850u;
        goto label_179850;
    }
    ctx->pc = 0x179848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x179850u);
        ctx->pc = 0x17984Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179848u;
        // 0x17984c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179848u, 0x179850u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x179850u;
label_179850:
    // 0x179850: 0x8e05cdb4  lw          $a1, -0x324C($s0)
    ctx->pc = 0x179850u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954420)));
label_179854:
    // 0x179854: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x179854u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_179858:
    // 0x179858: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x179858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_17985c:
    // 0x17985c: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x17985cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_179860:
    // 0x179860: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x179860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_179864:
    // 0x179864: 0x60f809  jalr        $v1
label_179868:
    if (ctx->pc == 0x179868u) {
        ctx->pc = 0x179868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179864u;
        // 0x179868: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17986Cu;
        goto label_17986c;
    }
    ctx->pc = 0x179864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x17986Cu);
        ctx->pc = 0x179868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179864u;
        // 0x179868: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179864u, 0x17986Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17986Cu;
label_17986c:
    // 0x17986c: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x17986cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
label_179870:
    // 0x179870: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x179870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_179874:
    // 0x179874: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x179874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_179878:
    // 0x179878: 0x34210003  ori         $at, $at, 0x3
    ctx->pc = 0x179878u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3);
label_17987c:
    // 0x17987c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x17987cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_179880:
    // 0x179880: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x179880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_179884:
    // 0x179884: 0xc442b208  lwc1        $f2, -0x4DF8($v0)
    ctx->pc = 0x179884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294947336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_179888:
    // 0x179888: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x179888u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_17988c:
    // 0x17988c: 0xc460ccb0  lwc1        $f0, -0x3350($v1)
    ctx->pc = 0x17988cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294954160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_179890:
    // 0x179890: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x179890u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_179894:
    // 0x179894: 0x3c013e12  lui         $at, 0x3E12
    ctx->pc = 0x179894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15890 << 16));
label_179898:
    // 0x179898: 0x34214925  ori         $at, $at, 0x4925
    ctx->pc = 0x179898u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18725);
label_17989c:
    // 0x17989c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x17989cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1798a0:
    // 0x1798a0: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1798a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1798a4:
    // 0x1798a4: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x1798a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_1798a8:
    // 0x1798a8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1798a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1798ac:
    // 0x1798ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1798acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1798b0:
    // 0x1798b0: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1798b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1798b4:
    // 0x1798b4: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1798b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_1798b8:
    // 0x1798b8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1798b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1798bc:
    // 0x1798bc: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x1798bcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
label_1798c0:
    // 0x1798c0: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1798c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1798c4:
    // 0x1798c4: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1798c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_1798c8:
    // 0x1798c8: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x1798c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1798cc:
    // 0x1798cc: 0x6ba30007  ldl         $v1, 0x7($sp)
    ctx->pc = 0x1798ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1798d0:
    // 0x1798d0: 0x6fa30000  ldr         $v1, 0x0($sp)
    ctx->pc = 0x1798d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1798d4:
    // 0x1798d4: 0x6ba4000f  ldl         $a0, 0xF($sp)
    ctx->pc = 0x1798d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_1798d8:
    // 0x1798d8: 0x6fa40008  ldr         $a0, 0x8($sp)
    ctx->pc = 0x1798d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_1798dc:
    // 0x1798dc: 0xb2230007  sdl         $v1, 0x7($s1)
    ctx->pc = 0x1798dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1798e0:
    // 0x1798e0: 0xb6230000  sdr         $v1, 0x0($s1)
    ctx->pc = 0x1798e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1798e4:
    // 0x1798e4: 0xb224000f  sdl         $a0, 0xF($s1)
    ctx->pc = 0x1798e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1798e8:
    // 0x1798e8: 0xb6240008  sdr         $a0, 0x8($s1)
    ctx->pc = 0x1798e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1798ec:
    // 0x1798ec: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1798ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1798f0:
    // 0x1798f0: 0x3e00008  jr          $ra
label_1798f4:
    if (ctx->pc == 0x1798F4u) {
        ctx->pc = 0x1798F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1798F0u;
        // 0x1798f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1798F8u;
        goto label_fallthrough_0x1798f0;
    }
    ctx->pc = 0x1798F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1798F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1798F0u;
        // 0x1798f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1798F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1798f0:
    ctx->pc = 0x1798F8u;
}
