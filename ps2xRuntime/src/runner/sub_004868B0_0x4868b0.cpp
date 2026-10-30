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

// Function: sub_004868B0
// Address: 0x4868b0 - 0x486b30
void sub_004868B0_0x4868b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004868B0_0x4868b0");
#endif

    switch (ctx->pc) {
        case 0x486924u: goto label_486924;
        case 0x486970u: goto label_486970;
        case 0x4869c0u: goto label_4869c0;
        case 0x4869d8u: goto label_4869d8;
        case 0x486a40u: goto label_486a40;
        default: break;
    }

    ctx->pc = 0x4868b0u;

    // 0x4868b0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x4868b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x4868b4: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x4868b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x4868b8: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x4868b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x4868bc: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x4868bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4868c0: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x4868c0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4868c4: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x4868c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x4868c8: 0x2d21023  subu        $v0, $s6, $s2
    ctx->pc = 0x4868c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
    // 0x4868cc: 0x3c013780  lui         $at, 0x3780
    ctx->pc = 0x4868ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14208 << 16));
    // 0x4868d0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x4868d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x4868d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4868d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4868d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4868d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4868dc: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x4868dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x4868e0: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x4868e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x4868e4: 0x121c03  sra         $v1, $s2, 16
    ctx->pc = 0x4868e4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 18), 16));
    // 0x4868e8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4868e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x4868ec: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4868ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4868f0: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x4868f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x4868f4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x4868f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4868f8: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x4868f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x4868fc: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x4868fcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x486900: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x486900u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x486904: 0x16bc03  sra         $s7, $s6, 16
    ctx->pc = 0x486904u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 22), 16));
    // 0x486908: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x486908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x48690c: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x48690cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x486910: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x486910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x486914: 0x1477000e  bne         $v1, $s7, . + 4 + (0xE << 2)
    ctx->pc = 0x486914u;
    {
        const bool branch_taken_0x486914 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 23));
        ctx->pc = 0x486918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x486914u;
        // 0x486918: 0x46140542  mul.s       $f21, $f0, $f20 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x486914) {
            ctx->pc = 0x486950u;
            goto label_486950;
        }
    }
    ctx->pc = 0x48691Cu;
    // 0x48691c: 0xc121970  jal         func_4865C0
    ctx->pc = 0x48691Cu;
    SET_GPR_U32(ctx, 31, 0x486924u);
    ctx->pc = 0x486920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48691Cu;
    // 0x486920: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4865C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4865C0u, 0x48691Cu, 0x486924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x486924u;
label_486924:
    // 0x486924: 0x4600a9c6  mov.s       $f7, $f21
    ctx->pc = 0x486924u;
    ctx->f[7] = FPU_MOV_S(ctx->f[21]);
    // 0x486928: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x486928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48692c: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x48692cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x486930: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x486930u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x486934: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x486934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x486938: 0xc602000c  lwc1        $f2, 0xC($s0)
    ctx->pc = 0x486938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x48693c: 0x460718c2  mul.s       $f3, $f3, $f7
    ctx->pc = 0x48693cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x486940: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x486940u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x486944: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x486944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x486948: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x486948u;
    {
        const bool branch_taken_0x486948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48694Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x486948u;
        // 0x48694c: 0x46071082  mul.s       $f2, $f2, $f7 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x486948) {
            ctx->pc = 0x486AB0u;
            goto label_486ab0;
        }
    }
    ctx->pc = 0x486950u;
label_486950:
    // 0x486950: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x486950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x486954: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x486954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x486958: 0x28c00  sll         $s1, $v0, 16
    ctx->pc = 0x486958u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x48695c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x48695cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x486960: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x486960u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x486964: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x486964u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x486968: 0xc121970  jal         func_4865C0
    ctx->pc = 0x486968u;
    SET_GPR_U32(ctx, 31, 0x486970u);
    ctx->pc = 0x48696Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x486968u;
    // 0x48696c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4865C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4865C0u, 0x486968u, 0x486970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x486970u;
label_486970:
    // 0x486970: 0x2321023  subu        $v0, $s1, $s2
    ctx->pc = 0x486970u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x486974: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x486974u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x486978: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x486978u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x48697c: 0x461409c2  mul.s       $f7, $f1, $f20
    ctx->pc = 0x48697cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x486980: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x486980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x486984: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x486984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x486988: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x486988u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x48698c: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x48698cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x486990: 0xc602000c  lwc1        $f2, 0xC($s0)
    ctx->pc = 0x486990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x486994: 0x460718c2  mul.s       $f3, $f3, $f7
    ctx->pc = 0x486994u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x486998: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x486998u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x48699c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x48699cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x4869a0: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x4869a0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x4869a4: 0xe6030004  swc1        $f3, 0x4($s0)
    ctx->pc = 0x4869a4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x4869a8: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x4869a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x4869ac: 0x111403  sra         $v0, $s1, 16
    ctx->pc = 0x4869acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 16));
    // 0x4869b0: 0x2e0902d  daddu       $s2, $s7, $zero
    ctx->pc = 0x4869b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4869b4: 0x1052001c  beq         $v0, $s2, . + 4 + (0x1C << 2)
    ctx->pc = 0x4869B4u;
    {
        const bool branch_taken_0x4869b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x4869B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4869B4u;
        // 0x4869b8: 0xe602000c  swc1        $f2, 0xC($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4869b4) {
            ctx->pc = 0x486A28u;
            goto label_486a28;
        }
    }
    ctx->pc = 0x4869BCu;
    // 0x4869bc: 0x3c170001  lui         $s7, 0x1
    ctx->pc = 0x4869bcu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)1 << 16));
label_4869c0:
    // 0x4869c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4869c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4869c4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4869c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4869c8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x4869c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4869cc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x4869ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4869d0: 0xc121970  jal         func_4865C0
    ctx->pc = 0x4869D0u;
    SET_GPR_U32(ctx, 31, 0x4869D8u);
    ctx->pc = 0x4869D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4869D0u;
    // 0x4869d4: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4865C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4865C0u, 0x4869D0u, 0x4869D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4869D8u;
label_4869d8:
    // 0x4869d8: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x4869d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4869dc: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x4869dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4869e0: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x4869e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4869e4: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x4869e4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x4869e8: 0xc7a2000c  lwc1        $f2, 0xC($sp)
    ctx->pc = 0x4869e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4869ec: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x4869ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4869f0: 0xc6040004  lwc1        $f4, 0x4($s0)
    ctx->pc = 0x4869f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4869f4: 0xc6050008  lwc1        $f5, 0x8($s0)
    ctx->pc = 0x4869f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x4869f8: 0xc606000c  lwc1        $f6, 0xC($s0)
    ctx->pc = 0x4869f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x4869fc: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x4869fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x486a00: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x486a00u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x486a04: 0xe6030000  swc1        $f3, 0x0($s0)
    ctx->pc = 0x486a04u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x486a08: 0x46061080  add.s       $f2, $f2, $f6
    ctx->pc = 0x486a08u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
    // 0x486a0c: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x486a0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x486a10: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x486a10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x486a14: 0x2378821  addu        $s1, $s1, $s7
    ctx->pc = 0x486a14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
    // 0x486a18: 0x111403  sra         $v0, $s1, 16
    ctx->pc = 0x486a18u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 16));
    // 0x486a1c: 0x1452ffe8  bne         $v0, $s2, . + 4 + (-0x18 << 2)
    ctx->pc = 0x486A1Cu;
    {
        const bool branch_taken_0x486a1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x486A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x486A1Cu;
        // 0x486a20: 0xe602000c  swc1        $f2, 0xC($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x486a1c) {
            ctx->pc = 0x4869C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4869c0;
        }
    }
    ctx->pc = 0x486A24u;
    // 0x486a24: 0x0  nop
    ctx->pc = 0x486a24u;
    // NOP
label_486a28:
    // 0x486a28: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x486a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x486a2c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x486a2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x486a30: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x486a30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x486a34: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x486a34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x486a38: 0xc121970  jal         func_4865C0
    ctx->pc = 0x486A38u;
    SET_GPR_U32(ctx, 31, 0x486A40u);
    ctx->pc = 0x486A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x486A38u;
    // 0x486a3c: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4865C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4865C0u, 0x486A38u, 0x486A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x486A40u;
label_486a40:
    // 0x486a40: 0x2d11023  subu        $v0, $s6, $s1
    ctx->pc = 0x486a40u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x486a44: 0x3c013780  lui         $at, 0x3780
    ctx->pc = 0x486a44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14208 << 16));
    // 0x486a48: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x486a48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x486a4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x486a4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x486a50: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x486a50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x486a54: 0x460101c2  mul.s       $f7, $f0, $f1
    ctx->pc = 0x486a54u;
    ctx->f[7] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x486a58: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x486a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x486a5c: 0xc7a50004  lwc1        $f5, 0x4($sp)
    ctx->pc = 0x486a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x486a60: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x486a60u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x486a64: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x486a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x486a68: 0xc7a6000c  lwc1        $f6, 0xC($sp)
    ctx->pc = 0x486a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x486a6c: 0x46072942  mul.s       $f5, $f5, $f7
    ctx->pc = 0x486a6cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[7]);
    // 0x486a70: 0x46072102  mul.s       $f4, $f4, $f7
    ctx->pc = 0x486a70u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
    // 0x486a74: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x486a74u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x486a78: 0x46073182  mul.s       $f6, $f6, $f7
    ctx->pc = 0x486a78u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[7]);
    // 0x486a7c: 0xe7a50004  swc1        $f5, 0x4($sp)
    ctx->pc = 0x486a7cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x486a80: 0xe7a40008  swc1        $f4, 0x8($sp)
    ctx->pc = 0x486a80u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x486a84: 0xe7a6000c  swc1        $f6, 0xC($sp)
    ctx->pc = 0x486a84u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x486a88: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x486a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x486a8c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x486a8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x486a90: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x486a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x486a94: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x486a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x486a98: 0xc602000c  lwc1        $f2, 0xC($s0)
    ctx->pc = 0x486a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x486a9c: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x486a9cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x486aa0: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x486aa0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x486aa4: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x486aa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x486aa8: 0x46061080  add.s       $f2, $f2, $f6
    ctx->pc = 0x486aa8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
    // 0x486aac: 0x0  nop
    ctx->pc = 0x486aacu;
    // NOP
label_486ab0:
    // 0x486ab0: 0xe6030004  swc1        $f3, 0x4($s0)
    ctx->pc = 0x486ab0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x486ab4: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x486ab4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x486ab8: 0xe602000c  swc1        $f2, 0xC($s0)
    ctx->pc = 0x486ab8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x486abc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x486abcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x486ac0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x486ac0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x486ac4: 0x461509c3  div.s       $f7, $f1, $f21
    ctx->pc = 0x486ac4u;
    { if (ctx->f[21] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[7] = FPU_DIV_S(ctx->f[1], ctx->f[21]); }
    // 0x486ac8: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x486ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x486acc: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x486accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x486ad0: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x486ad0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x486ad4: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x486ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x486ad8: 0xc602000c  lwc1        $f2, 0xC($s0)
    ctx->pc = 0x486ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x486adc: 0x460718c2  mul.s       $f3, $f3, $f7
    ctx->pc = 0x486adcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x486ae0: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x486ae0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x486ae4: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x486ae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x486ae8: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x486ae8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x486aec: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x486aecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x486af0: 0xe6030004  swc1        $f3, 0x4($s0)
    ctx->pc = 0x486af0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x486af4: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x486af4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x486af8: 0xe602000c  swc1        $f2, 0xC($s0)
    ctx->pc = 0x486af8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x486afc: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x486afcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x486b00: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x486b00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x486b04: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x486b04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x486b08: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x486b08u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x486b0c: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x486b0cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x486b10: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x486b10u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x486b14: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x486b14u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x486b18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x486b18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x486b1c: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x486b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x486b20: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x486b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x486b24: 0x3e00008  jr          $ra
    ctx->pc = 0x486B24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x486B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x486B24u;
        // 0x486b28: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x486B24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x486B2Cu;
    // 0x486b2c: 0x0  nop
    ctx->pc = 0x486b2cu;
    // NOP
    ctx->pc = 0x486b30u;
}
