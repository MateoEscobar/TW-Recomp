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

// Function: sub_001B7330
// Address: 0x1b7330 - 0x1b7478
void sub_001B7330_0x1b7330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B7330_0x1b7330");
#endif

    switch (ctx->pc) {
        case 0x1b744cu: goto label_1b744c;
        case 0x1b7464u: goto label_1b7464;
        default: break;
    }

    ctx->pc = 0x1b7330u;

    // 0x1b7330: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b7330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b7334: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b7334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1b7338: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b7338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b733c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b733cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7340: 0x8e020100  lw          $v0, 0x100($s0)
    ctx->pc = 0x1b7340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x1b7344: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B7344u;
    {
        const bool branch_taken_0x1b7344 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B7348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7344u;
        // 0x1b7348: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7344) {
            ctx->pc = 0x1B7360u;
            goto label_1b7360;
        }
    }
    ctx->pc = 0x1B734Cu;
    // 0x1b734c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b734cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7350: 0x0  nop
    ctx->pc = 0x1b7350u;
    // NOP
    // 0x1b7354: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b7354u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b7358: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B7358u;
    {
        const bool branch_taken_0x1b7358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B735Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7358u;
        // 0x1b735c: 0xc6010108  lwc1        $f1, 0x108($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7358) {
            ctx->pc = 0x1B737Cu;
            goto label_1b737c;
        }
    }
    ctx->pc = 0x1B7360u;
label_1b7360:
    // 0x1b7360: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b7360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b7364: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b7364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b7368: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b7368u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b736c: 0x0  nop
    ctx->pc = 0x1b736cu;
    // NOP
    // 0x1b7370: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b7370u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b7374: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1b7374u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x1b7378: 0xc6010108  lwc1        $f1, 0x108($s0)
    ctx->pc = 0x1b7378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b737c:
    // 0x1b737c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1b737cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b7380: 0x0  nop
    ctx->pc = 0x1b7380u;
    // NOP
    // 0x1b7384: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x1B7384u;
    {
        const bool branch_taken_0x1b7384 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b7384) {
            ctx->pc = 0x1B73D4u;
            goto label_1b73d4;
        }
    }
    ctx->pc = 0x1B738Cu;
    // 0x1b738c: 0x8e020100  lw          $v0, 0x100($s0)
    ctx->pc = 0x1b738cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x1b7390: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B7390u;
    {
        const bool branch_taken_0x1b7390 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B7394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7390u;
        // 0x1b7394: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7390) {
            ctx->pc = 0x1B73ACu;
            goto label_1b73ac;
        }
    }
    ctx->pc = 0x1B7398u;
    // 0x1b7398: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b7398u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b739c: 0x0  nop
    ctx->pc = 0x1b739cu;
    // NOP
    // 0x1b73a0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b73a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b73a4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B73A4u;
    {
        const bool branch_taken_0x1b73a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b73a4) {
            ctx->pc = 0x1B73C4u;
            goto label_1b73c4;
        }
    }
    ctx->pc = 0x1B73ACu;
label_1b73ac:
    // 0x1b73ac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b73acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b73b0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b73b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b73b4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b73b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b73b8: 0x0  nop
    ctx->pc = 0x1b73b8u;
    // NOP
    // 0x1b73bc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b73bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b73c0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1b73c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1b73c4:
    // 0x1b73c4: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x1b73c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x1b73c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b73c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b73cc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1B73CCu;
    {
        const bool branch_taken_0x1b73cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B73D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B73CCu;
        // 0x1b73d0: 0xe6010108  swc1        $f1, 0x108($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b73cc) {
            ctx->pc = 0x1B73F8u;
            goto label_1b73f8;
        }
    }
    ctx->pc = 0x1B73D4u;
label_1b73d4:
    // 0x1b73d4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1b73d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b73d8: 0x0  nop
    ctx->pc = 0x1b73d8u;
    // NOP
    // 0x1b73dc: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x1b73dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b73e0: 0x0  nop
    ctx->pc = 0x1b73e0u;
    // NOP
    // 0x1b73e4: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x1B73E4u;
    {
        const bool branch_taken_0x1b73e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b73e4) {
            ctx->pc = 0x1B73E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B73E4u;
            // 0x1b73e8: 0x7a020120  lq          $v0, 0x120($s0) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7400u;
            goto label_1b7400;
        }
    }
    ctx->pc = 0x1B73ECu;
    // 0x1b73ec: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1b73ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1b73f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b73f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b73f4: 0xe6020108  swc1        $f2, 0x108($s0)
    ctx->pc = 0x1b73f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
label_1b73f8:
    // 0x1b73f8: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x1b73f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x1b73fc: 0x7a020120  lq          $v0, 0x120($s0)
    ctx->pc = 0x1b73fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 288)));
label_1b7400:
    // 0x1b7400: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b7400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7404: 0xc6000108  lwc1        $f0, 0x108($s0)
    ctx->pc = 0x1b7404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7408: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1b7408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b740c: 0xc602010c  lwc1        $f2, 0x10C($s0)
    ctx->pc = 0x1b740cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b7410: 0xc6030110  lwc1        $f3, 0x110($s0)
    ctx->pc = 0x1b7410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b7414: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1b7414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1b7418: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x1b7418u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1b741c: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x1b741cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x1b7420: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b7420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b7424: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1b7424u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1b7428: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1b7428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b742c: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x1b742cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7430: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1b7430u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1b7434: 0x8e060130  lw          $a2, 0x130($s0)
    ctx->pc = 0x1b7434u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x1b7438: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1b7438u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x1b743c: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x1b743cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1b7440: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1b7440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1b7444: 0xc068818  jal         func_1A2060
    ctx->pc = 0x1B7444u;
    SET_GPR_U32(ctx, 31, 0x1B744Cu);
    ctx->pc = 0x1B7448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7444u;
    // 0x1b7448: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2060u, 0x1B7444u, 0x1B744Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B744Cu;
label_1b744c:
    // 0x1b744c: 0xc6000108  lwc1        $f0, 0x108($s0)
    ctx->pc = 0x1b744cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7450: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b7450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7454: 0xc6010104  lwc1        $f1, 0x104($s0)
    ctx->pc = 0x1b7454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7458: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b7458u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b745c: 0xc06886e  jal         func_1A21B8
    ctx->pc = 0x1B745Cu;
    SET_GPR_U32(ctx, 31, 0x1B7464u);
    ctx->pc = 0x1B7460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B745Cu;
    // 0x1b7460: 0xe6000108  swc1        $f0, 0x108($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A21B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A21B8u, 0x1B745Cu, 0x1B7464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7464u;
label_1b7464:
    // 0x1b7464: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b7464u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b7468: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b7468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b746c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B746Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B746Cu;
        // 0x1b7470: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B746Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7474u;
    // 0x1b7474: 0x0  nop
    ctx->pc = 0x1b7474u;
    // NOP
    ctx->pc = 0x1b7478u;
}
