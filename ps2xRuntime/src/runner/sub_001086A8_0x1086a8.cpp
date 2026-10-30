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

// Function: sub_001086A8
// Address: 0x1086a8 - 0x108800
void sub_001086A8_0x1086a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001086A8_0x1086a8");
#endif

    switch (ctx->pc) {
        case 0x1086a8u: goto label_1086a8;
        case 0x1086acu: goto label_1086ac;
        case 0x1086b0u: goto label_1086b0;
        case 0x1086b4u: goto label_1086b4;
        case 0x1086b8u: goto label_1086b8;
        case 0x1086bcu: goto label_1086bc;
        case 0x1086c0u: goto label_1086c0;
        case 0x1086c4u: goto label_1086c4;
        case 0x1086c8u: goto label_1086c8;
        case 0x1086ccu: goto label_1086cc;
        case 0x1086d0u: goto label_1086d0;
        case 0x1086d4u: goto label_1086d4;
        case 0x1086d8u: goto label_1086d8;
        case 0x1086dcu: goto label_1086dc;
        case 0x1086e0u: goto label_1086e0;
        case 0x1086e4u: goto label_1086e4;
        case 0x1086e8u: goto label_1086e8;
        case 0x1086ecu: goto label_1086ec;
        case 0x1086f0u: goto label_1086f0;
        case 0x1086f4u: goto label_1086f4;
        case 0x1086f8u: goto label_1086f8;
        case 0x1086fcu: goto label_1086fc;
        case 0x108700u: goto label_108700;
        case 0x108704u: goto label_108704;
        case 0x108708u: goto label_108708;
        case 0x10870cu: goto label_10870c;
        case 0x108710u: goto label_108710;
        case 0x108714u: goto label_108714;
        case 0x108718u: goto label_108718;
        case 0x10871cu: goto label_10871c;
        case 0x108720u: goto label_108720;
        case 0x108724u: goto label_108724;
        case 0x108728u: goto label_108728;
        case 0x10872cu: goto label_10872c;
        case 0x108730u: goto label_108730;
        case 0x108734u: goto label_108734;
        case 0x108738u: goto label_108738;
        case 0x10873cu: goto label_10873c;
        case 0x108740u: goto label_108740;
        case 0x108744u: goto label_108744;
        case 0x108748u: goto label_108748;
        case 0x10874cu: goto label_10874c;
        case 0x108750u: goto label_108750;
        case 0x108754u: goto label_108754;
        case 0x108758u: goto label_108758;
        case 0x10875cu: goto label_10875c;
        case 0x108760u: goto label_108760;
        case 0x108764u: goto label_108764;
        case 0x108768u: goto label_108768;
        case 0x10876cu: goto label_10876c;
        case 0x108770u: goto label_108770;
        case 0x108774u: goto label_108774;
        case 0x108778u: goto label_108778;
        case 0x10877cu: goto label_10877c;
        case 0x108780u: goto label_108780;
        case 0x108784u: goto label_108784;
        case 0x108788u: goto label_108788;
        case 0x10878cu: goto label_10878c;
        case 0x108790u: goto label_108790;
        case 0x108794u: goto label_108794;
        case 0x108798u: goto label_108798;
        case 0x10879cu: goto label_10879c;
        case 0x1087a0u: goto label_1087a0;
        case 0x1087a4u: goto label_1087a4;
        case 0x1087a8u: goto label_1087a8;
        case 0x1087acu: goto label_1087ac;
        case 0x1087b0u: goto label_1087b0;
        case 0x1087b4u: goto label_1087b4;
        case 0x1087b8u: goto label_1087b8;
        case 0x1087bcu: goto label_1087bc;
        case 0x1087c0u: goto label_1087c0;
        case 0x1087c4u: goto label_1087c4;
        case 0x1087c8u: goto label_1087c8;
        case 0x1087ccu: goto label_1087cc;
        case 0x1087d0u: goto label_1087d0;
        case 0x1087d4u: goto label_1087d4;
        case 0x1087d8u: goto label_1087d8;
        case 0x1087dcu: goto label_1087dc;
        case 0x1087e0u: goto label_1087e0;
        case 0x1087e4u: goto label_1087e4;
        case 0x1087e8u: goto label_1087e8;
        case 0x1087ecu: goto label_1087ec;
        case 0x1087f0u: goto label_1087f0;
        case 0x1087f4u: goto label_1087f4;
        case 0x1087f8u: goto label_1087f8;
        case 0x1087fcu: goto label_1087fc;
        default: break;
    }

    ctx->pc = 0x1086a8u;

label_1086a8:
    // 0x1086a8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1086a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1086ac:
    // 0x1086ac: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1086acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1086b0:
    // 0x1086b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1086b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1086b4:
    // 0x1086b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1086b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1086b8:
    // 0x1086b8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1086b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_1086bc:
    // 0x1086bc: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x1086bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1086c0:
    // 0x1086c0: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x1086c0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_1086c4:
    // 0x1086c4: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1086c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1086c8:
    // 0x1086c8: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1086c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_1086cc:
    // 0x1086cc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1086ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1086d0:
    // 0x1086d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1086d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1086d4:
    // 0x1086d4: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x1086d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1086d8:
    // 0x1086d8: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x1086d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1086dc:
    // 0x1086dc: 0xc600002c  lwc1        $f0, 0x2C($s0)
    ctx->pc = 0x1086dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1086e0:
    // 0x1086e0: 0x46016502  mul.s       $f20, $f12, $f1
    ctx->pc = 0x1086e0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
label_1086e4:
    // 0x1086e4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1086e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1086e8:
    // 0x1086e8: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x1086e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_1086ec:
    // 0x1086ec: 0xc05d462  jal         func_175188
label_1086f0:
    if (ctx->pc == 0x1086F0u) {
        ctx->pc = 0x1086F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1086ECu;
        // 0x1086f0: 0xe600002c  swc1        $f0, 0x2C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1086F4u;
        goto label_1086f4;
    }
    ctx->pc = 0x1086ECu;
    SET_GPR_U32(ctx, 31, 0x1086F4u);
    ctx->pc = 0x1086F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1086ECu;
    // 0x1086f0: 0xe600002c  swc1        $f0, 0x2C($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x175188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175188u, 0x1086ECu, 0x1086F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1086F4u;
label_1086f4:
    // 0x1086f4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1086f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1086f8:
    // 0x1086f8: 0x84640098  lh          $a0, 0x98($v1)
    ctx->pc = 0x1086f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 152)));
label_1086fc:
    // 0x1086fc: 0x8c65009c  lw          $a1, 0x9C($v1)
    ctx->pc = 0x1086fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
label_108700:
    // 0x108700: 0xa0f809  jalr        $a1
label_108704:
    if (ctx->pc == 0x108704u) {
        ctx->pc = 0x108704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108700u;
        // 0x108704: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108708u;
        goto label_108708;
    }
    ctx->pc = 0x108700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x108708u);
        ctx->pc = 0x108704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108700u;
        // 0x108704: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108700u, 0x108708u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x108708u;
label_108708:
    // 0x108708: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x108708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_10870c:
    // 0x10870c: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x10870cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_108710:
    // 0x108710: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x108710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_108714:
    // 0x108714: 0x0  nop
    ctx->pc = 0x108714u;
    // NOP
label_108718:
    // 0x108718: 0x10730016  beq         $v1, $s3, . + 4 + (0x16 << 2)
label_10871c:
    if (ctx->pc == 0x10871Cu) {
        ctx->pc = 0x10871Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108718u;
        // 0x10871c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108720u;
        goto label_108720;
    }
    ctx->pc = 0x108718u;
    {
        const bool branch_taken_0x108718 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x10871Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108718u;
        // 0x10871c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108718) {
            ctx->pc = 0x108774u;
            goto label_108774;
        }
    }
    ctx->pc = 0x108720u;
label_108720:
    // 0x108720: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x108720u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_108724:
    // 0x108724: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_108728:
    if (ctx->pc == 0x108728u) {
        ctx->pc = 0x10872Cu;
        goto label_10872c;
    }
    ctx->pc = 0x108724u;
    {
        const bool branch_taken_0x108724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x108724) {
            ctx->pc = 0x10873Cu;
            goto label_10873c;
        }
    }
    ctx->pc = 0x10872Cu;
label_10872c:
    // 0x10872c: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_108730:
    if (ctx->pc == 0x108730u) {
        ctx->pc = 0x108730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10872Cu;
        // 0x108730: 0xc601002c  lwc1        $f1, 0x2C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x108734u;
        goto label_108734;
    }
    ctx->pc = 0x10872Cu;
    {
        const bool branch_taken_0x10872c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10872c) {
            ctx->pc = 0x108730u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10872Cu;
            // 0x108730: 0xc601002c  lwc1        $f1, 0x2C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x10874Cu;
            goto label_10874c;
        }
    }
    ctx->pc = 0x108734u;
label_108734:
    // 0x108734: 0x10000023  b           . + 4 + (0x23 << 2)
label_108738:
    if (ctx->pc == 0x108738u) {
        ctx->pc = 0x10873Cu;
        goto label_10873c;
    }
    ctx->pc = 0x108734u;
    {
        const bool branch_taken_0x108734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x108734) {
            ctx->pc = 0x1087C4u;
            goto label_1087c4;
        }
    }
    ctx->pc = 0x10873Cu;
label_10873c:
    // 0x10873c: 0x50720018  beql        $v1, $s2, . + 4 + (0x18 << 2)
label_108740:
    if (ctx->pc == 0x108740u) {
        ctx->pc = 0x108740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10873Cu;
        // 0x108740: 0xc601002c  lwc1        $f1, 0x2C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x108744u;
        goto label_108744;
    }
    ctx->pc = 0x10873Cu;
    {
        const bool branch_taken_0x10873c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        if (branch_taken_0x10873c) {
            ctx->pc = 0x108740u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10873Cu;
            // 0x108740: 0xc601002c  lwc1        $f1, 0x2C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1087A0u;
            goto label_1087a0;
        }
    }
    ctx->pc = 0x108744u;
label_108744:
    // 0x108744: 0x1000001f  b           . + 4 + (0x1F << 2)
label_108748:
    if (ctx->pc == 0x108748u) {
        ctx->pc = 0x10874Cu;
        goto label_10874c;
    }
    ctx->pc = 0x108744u;
    {
        const bool branch_taken_0x108744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x108744) {
            ctx->pc = 0x1087C4u;
            goto label_1087c4;
        }
    }
    ctx->pc = 0x10874Cu;
label_10874c:
    // 0x10874c: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x10874cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_108750:
    // 0x108750: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x108750u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_108754:
    // 0x108754: 0x0  nop
    ctx->pc = 0x108754u;
    // NOP
label_108758:
    // 0x108758: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
label_10875c:
    if (ctx->pc == 0x10875Cu) {
        ctx->pc = 0x108760u;
        goto label_108760;
    }
    ctx->pc = 0x108758u;
    {
        const bool branch_taken_0x108758 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x108758) {
            ctx->pc = 0x1087C4u;
            goto label_1087c4;
        }
    }
    ctx->pc = 0x108760u;
label_108760:
    // 0x108760: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x108760u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_108764:
    // 0x108764: 0xae130030  sw          $s3, 0x30($s0)
    ctx->pc = 0x108764u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 19));
label_108768:
    // 0x108768: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x108768u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10876c:
    // 0x10876c: 0x10000015  b           . + 4 + (0x15 << 2)
label_108770:
    if (ctx->pc == 0x108770u) {
        ctx->pc = 0x108770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10876Cu;
        // 0x108770: 0xe600002c  swc1        $f0, 0x2C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x108774u;
        goto label_108774;
    }
    ctx->pc = 0x10876Cu;
    {
        const bool branch_taken_0x10876c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10876Cu;
        // 0x108770: 0xe600002c  swc1        $f0, 0x2C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10876c) {
            ctx->pc = 0x1087C4u;
            goto label_1087c4;
        }
    }
    ctx->pc = 0x108774u;
label_108774:
    // 0x108774: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x108774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_108778:
    // 0x108778: 0xc041128  jal         func_1044A0
label_10877c:
    if (ctx->pc == 0x10877Cu) {
        ctx->pc = 0x10877Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108778u;
        // 0x10877c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x108780u;
        goto label_108780;
    }
    ctx->pc = 0x108778u;
    SET_GPR_U32(ctx, 31, 0x108780u);
    ctx->pc = 0x10877Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108778u;
    // 0x10877c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044A0u, 0x108778u, 0x108780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108780u;
label_108780:
    // 0x108780: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x108780u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_108784:
    // 0x108784: 0x0  nop
    ctx->pc = 0x108784u;
    // NOP
label_108788:
    // 0x108788: 0x4501000e  bc1t        . + 4 + (0xE << 2)
label_10878c:
    if (ctx->pc == 0x10878Cu) {
        ctx->pc = 0x108790u;
        goto label_108790;
    }
    ctx->pc = 0x108788u;
    {
        const bool branch_taken_0x108788 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x108788) {
            ctx->pc = 0x1087C4u;
            goto label_1087c4;
        }
    }
    ctx->pc = 0x108790u;
label_108790:
    // 0x108790: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x108790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
label_108794:
    // 0x108794: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x108794u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_108798:
    // 0x108798: 0x1000000a  b           . + 4 + (0xA << 2)
label_10879c:
    if (ctx->pc == 0x10879Cu) {
        ctx->pc = 0x10879Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108798u;
        // 0x10879c: 0xae120030  sw          $s2, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1087A0u;
        goto label_1087a0;
    }
    ctx->pc = 0x108798u;
    {
        const bool branch_taken_0x108798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10879Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108798u;
        // 0x10879c: 0xae120030  sw          $s2, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108798) {
            ctx->pc = 0x1087C4u;
            goto label_1087c4;
        }
    }
    ctx->pc = 0x1087A0u;
label_1087a0:
    // 0x1087a0: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x1087a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1087a4:
    // 0x1087a4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1087a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1087a8:
    // 0x1087a8: 0x0  nop
    ctx->pc = 0x1087a8u;
    // NOP
label_1087ac:
    // 0x1087ac: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_1087b0:
    if (ctx->pc == 0x1087B0u) {
        ctx->pc = 0x1087B4u;
        goto label_1087b4;
    }
    ctx->pc = 0x1087ACu;
    {
        const bool branch_taken_0x1087ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1087ac) {
            ctx->pc = 0x1087C4u;
            goto label_1087c4;
        }
    }
    ctx->pc = 0x1087B4u;
label_1087b4:
    // 0x1087b4: 0xc041590  jal         func_105640
label_1087b8:
    if (ctx->pc == 0x1087B8u) {
        ctx->pc = 0x1087B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1087B4u;
        // 0x1087b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1087BCu;
        goto label_1087bc;
    }
    ctx->pc = 0x1087B4u;
    SET_GPR_U32(ctx, 31, 0x1087BCu);
    ctx->pc = 0x1087B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1087B4u;
    // 0x1087b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105640u, 0x1087B4u, 0x1087BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1087BCu;
label_1087bc:
    // 0x1087bc: 0x10000007  b           . + 4 + (0x7 << 2)
label_1087c0:
    if (ctx->pc == 0x1087C0u) {
        ctx->pc = 0x1087C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1087BCu;
        // 0x1087c0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1087C4u;
        goto label_1087c4;
    }
    ctx->pc = 0x1087BCu;
    {
        const bool branch_taken_0x1087bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1087C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1087BCu;
        // 0x1087c0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1087bc) {
            ctx->pc = 0x1087DCu;
            goto label_1087dc;
        }
    }
    ctx->pc = 0x1087C4u;
label_1087c4:
    // 0x1087c4: 0x5620ffd4  bnel        $s1, $zero, . + 4 + (-0x2C << 2)
label_1087c8:
    if (ctx->pc == 0x1087C8u) {
        ctx->pc = 0x1087C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1087C4u;
        // 0x1087c8: 0x8e030030  lw          $v1, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1087CCu;
        goto label_1087cc;
    }
    ctx->pc = 0x1087C4u;
    {
        const bool branch_taken_0x1087c4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1087c4) {
            ctx->pc = 0x1087C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1087C4u;
            // 0x1087c8: 0x8e030030  lw          $v1, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x108718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_108718;
        }
    }
    ctx->pc = 0x1087CCu;
label_1087cc:
    // 0x1087cc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1087ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1087d0:
    // 0x1087d0: 0xc05d4e0  jal         func_175380
label_1087d4:
    if (ctx->pc == 0x1087D4u) {
        ctx->pc = 0x1087D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1087D0u;
        // 0x1087d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1087D8u;
        goto label_1087d8;
    }
    ctx->pc = 0x1087D0u;
    SET_GPR_U32(ctx, 31, 0x1087D8u);
    ctx->pc = 0x1087D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1087D0u;
    // 0x1087d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175380u, 0x1087D0u, 0x1087D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1087D8u;
label_1087d8:
    // 0x1087d8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1087d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1087dc:
    // 0x1087dc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1087dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1087e0:
    // 0x1087e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1087e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1087e4:
    // 0x1087e4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1087e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1087e8:
    // 0x1087e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1087e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1087ec:
    // 0x1087ec: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x1087ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1087f0:
    // 0x1087f0: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1087f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1087f4:
    // 0x1087f4: 0x3e00008  jr          $ra
label_1087f8:
    if (ctx->pc == 0x1087F8u) {
        ctx->pc = 0x1087F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1087F4u;
        // 0x1087f8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1087FCu;
        goto label_1087fc;
    }
    ctx->pc = 0x1087F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1087F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1087F4u;
        // 0x1087f8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1087F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1087FCu;
label_1087fc:
    // 0x1087fc: 0x0  nop
    ctx->pc = 0x1087fcu;
    // NOP
    ctx->pc = 0x108800u;
}
