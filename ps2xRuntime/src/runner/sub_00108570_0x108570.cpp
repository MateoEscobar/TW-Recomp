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

// Function: sub_00108570
// Address: 0x108570 - 0x1086a8
void sub_00108570_0x108570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108570_0x108570");
#endif

    switch (ctx->pc) {
        case 0x108570u: goto label_108570;
        case 0x108574u: goto label_108574;
        case 0x108578u: goto label_108578;
        case 0x10857cu: goto label_10857c;
        case 0x108580u: goto label_108580;
        case 0x108584u: goto label_108584;
        case 0x108588u: goto label_108588;
        case 0x10858cu: goto label_10858c;
        case 0x108590u: goto label_108590;
        case 0x108594u: goto label_108594;
        case 0x108598u: goto label_108598;
        case 0x10859cu: goto label_10859c;
        case 0x1085a0u: goto label_1085a0;
        case 0x1085a4u: goto label_1085a4;
        case 0x1085a8u: goto label_1085a8;
        case 0x1085acu: goto label_1085ac;
        case 0x1085b0u: goto label_1085b0;
        case 0x1085b4u: goto label_1085b4;
        case 0x1085b8u: goto label_1085b8;
        case 0x1085bcu: goto label_1085bc;
        case 0x1085c0u: goto label_1085c0;
        case 0x1085c4u: goto label_1085c4;
        case 0x1085c8u: goto label_1085c8;
        case 0x1085ccu: goto label_1085cc;
        case 0x1085d0u: goto label_1085d0;
        case 0x1085d4u: goto label_1085d4;
        case 0x1085d8u: goto label_1085d8;
        case 0x1085dcu: goto label_1085dc;
        case 0x1085e0u: goto label_1085e0;
        case 0x1085e4u: goto label_1085e4;
        case 0x1085e8u: goto label_1085e8;
        case 0x1085ecu: goto label_1085ec;
        case 0x1085f0u: goto label_1085f0;
        case 0x1085f4u: goto label_1085f4;
        case 0x1085f8u: goto label_1085f8;
        case 0x1085fcu: goto label_1085fc;
        case 0x108600u: goto label_108600;
        case 0x108604u: goto label_108604;
        case 0x108608u: goto label_108608;
        case 0x10860cu: goto label_10860c;
        case 0x108610u: goto label_108610;
        case 0x108614u: goto label_108614;
        case 0x108618u: goto label_108618;
        case 0x10861cu: goto label_10861c;
        case 0x108620u: goto label_108620;
        case 0x108624u: goto label_108624;
        case 0x108628u: goto label_108628;
        case 0x10862cu: goto label_10862c;
        case 0x108630u: goto label_108630;
        case 0x108634u: goto label_108634;
        case 0x108638u: goto label_108638;
        case 0x10863cu: goto label_10863c;
        case 0x108640u: goto label_108640;
        case 0x108644u: goto label_108644;
        case 0x108648u: goto label_108648;
        case 0x10864cu: goto label_10864c;
        case 0x108650u: goto label_108650;
        case 0x108654u: goto label_108654;
        case 0x108658u: goto label_108658;
        case 0x10865cu: goto label_10865c;
        case 0x108660u: goto label_108660;
        case 0x108664u: goto label_108664;
        case 0x108668u: goto label_108668;
        case 0x10866cu: goto label_10866c;
        case 0x108670u: goto label_108670;
        case 0x108674u: goto label_108674;
        case 0x108678u: goto label_108678;
        case 0x10867cu: goto label_10867c;
        case 0x108680u: goto label_108680;
        case 0x108684u: goto label_108684;
        case 0x108688u: goto label_108688;
        case 0x10868cu: goto label_10868c;
        case 0x108690u: goto label_108690;
        case 0x108694u: goto label_108694;
        case 0x108698u: goto label_108698;
        case 0x10869cu: goto label_10869c;
        case 0x1086a0u: goto label_1086a0;
        case 0x1086a4u: goto label_1086a4;
        default: break;
    }

    ctx->pc = 0x108570u;

label_108570:
    // 0x108570: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x108570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_108574:
    // 0x108574: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x108574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_108578:
    // 0x108578: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x108578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_10857c:
    // 0x10857c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10857cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_108580:
    // 0x108580: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x108580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_108584:
    // 0x108584: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x108584u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_108588:
    // 0x108588: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x108588u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_10858c:
    // 0x10858c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x10858cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_108590:
    // 0x108590: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x108590u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_108594:
    // 0x108594: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x108594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_108598:
    // 0x108598: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x108598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_10859c:
    // 0x10859c: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x10859cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1085a0:
    // 0x1085a0: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x1085a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1085a4:
    // 0x1085a4: 0xc600002c  lwc1        $f0, 0x2C($s0)
    ctx->pc = 0x1085a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1085a8:
    // 0x1085a8: 0x46016502  mul.s       $f20, $f12, $f1
    ctx->pc = 0x1085a8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
label_1085ac:
    // 0x1085ac: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1085acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1085b0:
    // 0x1085b0: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x1085b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_1085b4:
    // 0x1085b4: 0xc05d462  jal         func_175188
label_1085b8:
    if (ctx->pc == 0x1085B8u) {
        ctx->pc = 0x1085B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1085B4u;
        // 0x1085b8: 0xe600002c  swc1        $f0, 0x2C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1085BCu;
        goto label_1085bc;
    }
    ctx->pc = 0x1085B4u;
    SET_GPR_U32(ctx, 31, 0x1085BCu);
    ctx->pc = 0x1085B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1085B4u;
    // 0x1085b8: 0xe600002c  swc1        $f0, 0x2C($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x175188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175188u, 0x1085B4u, 0x1085BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1085BCu;
label_1085bc:
    // 0x1085bc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1085bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1085c0:
    // 0x1085c0: 0x84640098  lh          $a0, 0x98($v1)
    ctx->pc = 0x1085c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 152)));
label_1085c4:
    // 0x1085c4: 0x8c65009c  lw          $a1, 0x9C($v1)
    ctx->pc = 0x1085c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
label_1085c8:
    // 0x1085c8: 0xa0f809  jalr        $a1
label_1085cc:
    if (ctx->pc == 0x1085CCu) {
        ctx->pc = 0x1085CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1085C8u;
        // 0x1085cc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1085D0u;
        goto label_1085d0;
    }
    ctx->pc = 0x1085C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1085D0u);
        ctx->pc = 0x1085CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1085C8u;
        // 0x1085cc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1085C8u, 0x1085D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1085D0u;
label_1085d0:
    // 0x1085d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1085d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1085d4:
    // 0x1085d4: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x1085d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_1085d8:
    // 0x1085d8: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1085d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1085dc:
    // 0x1085dc: 0x0  nop
    ctx->pc = 0x1085dcu;
    // NOP
label_1085e0:
    // 0x1085e0: 0x10730016  beq         $v1, $s3, . + 4 + (0x16 << 2)
label_1085e4:
    if (ctx->pc == 0x1085E4u) {
        ctx->pc = 0x1085E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1085E0u;
        // 0x1085e4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1085E8u;
        goto label_1085e8;
    }
    ctx->pc = 0x1085E0u;
    {
        const bool branch_taken_0x1085e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x1085E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1085E0u;
        // 0x1085e4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1085e0) {
            ctx->pc = 0x10863Cu;
            goto label_10863c;
        }
    }
    ctx->pc = 0x1085E8u;
label_1085e8:
    // 0x1085e8: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x1085e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_1085ec:
    // 0x1085ec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1085f0:
    if (ctx->pc == 0x1085F0u) {
        ctx->pc = 0x1085F4u;
        goto label_1085f4;
    }
    ctx->pc = 0x1085ECu;
    {
        const bool branch_taken_0x1085ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1085ec) {
            ctx->pc = 0x108604u;
            goto label_108604;
        }
    }
    ctx->pc = 0x1085F4u;
label_1085f4:
    // 0x1085f4: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_1085f8:
    if (ctx->pc == 0x1085F8u) {
        ctx->pc = 0x1085F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1085F4u;
        // 0x1085f8: 0xc601002c  lwc1        $f1, 0x2C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1085FCu;
        goto label_1085fc;
    }
    ctx->pc = 0x1085F4u;
    {
        const bool branch_taken_0x1085f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1085f4) {
            ctx->pc = 0x1085F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1085F4u;
            // 0x1085f8: 0xc601002c  lwc1        $f1, 0x2C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x108614u;
            goto label_108614;
        }
    }
    ctx->pc = 0x1085FCu;
label_1085fc:
    // 0x1085fc: 0x1000001f  b           . + 4 + (0x1F << 2)
label_108600:
    if (ctx->pc == 0x108600u) {
        ctx->pc = 0x108604u;
        goto label_108604;
    }
    ctx->pc = 0x1085FCu;
    {
        const bool branch_taken_0x1085fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1085fc) {
            ctx->pc = 0x10867Cu;
            goto label_10867c;
        }
    }
    ctx->pc = 0x108604u;
label_108604:
    // 0x108604: 0x50720018  beql        $v1, $s2, . + 4 + (0x18 << 2)
label_108608:
    if (ctx->pc == 0x108608u) {
        ctx->pc = 0x108608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108604u;
        // 0x108608: 0xc601002c  lwc1        $f1, 0x2C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x10860Cu;
        goto label_10860c;
    }
    ctx->pc = 0x108604u;
    {
        const bool branch_taken_0x108604 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        if (branch_taken_0x108604) {
            ctx->pc = 0x108608u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108604u;
            // 0x108608: 0xc601002c  lwc1        $f1, 0x2C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x108668u;
            goto label_108668;
        }
    }
    ctx->pc = 0x10860Cu;
label_10860c:
    // 0x10860c: 0x1000001b  b           . + 4 + (0x1B << 2)
label_108610:
    if (ctx->pc == 0x108610u) {
        ctx->pc = 0x108614u;
        goto label_108614;
    }
    ctx->pc = 0x10860Cu;
    {
        const bool branch_taken_0x10860c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10860c) {
            ctx->pc = 0x10867Cu;
            goto label_10867c;
        }
    }
    ctx->pc = 0x108614u;
label_108614:
    // 0x108614: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x108614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_108618:
    // 0x108618: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x108618u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_10861c:
    // 0x10861c: 0x0  nop
    ctx->pc = 0x10861cu;
    // NOP
label_108620:
    // 0x108620: 0x45000016  bc1f        . + 4 + (0x16 << 2)
label_108624:
    if (ctx->pc == 0x108624u) {
        ctx->pc = 0x108628u;
        goto label_108628;
    }
    ctx->pc = 0x108620u;
    {
        const bool branch_taken_0x108620 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x108620) {
            ctx->pc = 0x10867Cu;
            goto label_10867c;
        }
    }
    ctx->pc = 0x108628u;
label_108628:
    // 0x108628: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x108628u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_10862c:
    // 0x10862c: 0xae130030  sw          $s3, 0x30($s0)
    ctx->pc = 0x10862cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 19));
label_108630:
    // 0x108630: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x108630u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_108634:
    // 0x108634: 0x10000011  b           . + 4 + (0x11 << 2)
label_108638:
    if (ctx->pc == 0x108638u) {
        ctx->pc = 0x108638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108634u;
        // 0x108638: 0xe600002c  swc1        $f0, 0x2C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x10863Cu;
        goto label_10863c;
    }
    ctx->pc = 0x108634u;
    {
        const bool branch_taken_0x108634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108634u;
        // 0x108638: 0xe600002c  swc1        $f0, 0x2C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x108634) {
            ctx->pc = 0x10867Cu;
            goto label_10867c;
        }
    }
    ctx->pc = 0x10863Cu;
label_10863c:
    // 0x10863c: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x10863cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_108640:
    // 0x108640: 0xc041128  jal         func_1044A0
label_108644:
    if (ctx->pc == 0x108644u) {
        ctx->pc = 0x108644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108640u;
        // 0x108644: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x108648u;
        goto label_108648;
    }
    ctx->pc = 0x108640u;
    SET_GPR_U32(ctx, 31, 0x108648u);
    ctx->pc = 0x108644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108640u;
    // 0x108644: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044A0u, 0x108640u, 0x108648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108648u;
label_108648:
    // 0x108648: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x108648u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_10864c:
    // 0x10864c: 0x0  nop
    ctx->pc = 0x10864cu;
    // NOP
label_108650:
    // 0x108650: 0x4501000a  bc1t        . + 4 + (0xA << 2)
label_108654:
    if (ctx->pc == 0x108654u) {
        ctx->pc = 0x108658u;
        goto label_108658;
    }
    ctx->pc = 0x108650u;
    {
        const bool branch_taken_0x108650 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x108650) {
            ctx->pc = 0x10867Cu;
            goto label_10867c;
        }
    }
    ctx->pc = 0x108658u;
label_108658:
    // 0x108658: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x108658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
label_10865c:
    // 0x10865c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x10865cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_108660:
    // 0x108660: 0x10000006  b           . + 4 + (0x6 << 2)
label_108664:
    if (ctx->pc == 0x108664u) {
        ctx->pc = 0x108664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108660u;
        // 0x108664: 0xae120030  sw          $s2, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108668u;
        goto label_108668;
    }
    ctx->pc = 0x108660u;
    {
        const bool branch_taken_0x108660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108660u;
        // 0x108664: 0xae120030  sw          $s2, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108660) {
            ctx->pc = 0x10867Cu;
            goto label_10867c;
        }
    }
    ctx->pc = 0x108668u;
label_108668:
    // 0x108668: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x108668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10866c:
    // 0x10866c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x10866cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_108670:
    // 0x108670: 0x0  nop
    ctx->pc = 0x108670u;
    // NOP
label_108674:
    // 0x108674: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
label_108678:
    if (ctx->pc == 0x108678u) {
        ctx->pc = 0x108678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108674u;
        // 0x108678: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10867Cu;
        goto label_10867c;
    }
    ctx->pc = 0x108674u;
    {
        const bool branch_taken_0x108674 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x108674) {
            ctx->pc = 0x108678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108674u;
            // 0x108678: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x108688u;
            goto label_108688;
        }
    }
    ctx->pc = 0x10867Cu;
label_10867c:
    // 0x10867c: 0x5620ffd8  bnel        $s1, $zero, . + 4 + (-0x28 << 2)
label_108680:
    if (ctx->pc == 0x108680u) {
        ctx->pc = 0x108680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10867Cu;
        // 0x108680: 0x8e030030  lw          $v1, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108684u;
        goto label_108684;
    }
    ctx->pc = 0x10867Cu;
    {
        const bool branch_taken_0x10867c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x10867c) {
            ctx->pc = 0x108680u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10867Cu;
            // 0x108680: 0x8e030030  lw          $v1, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1085E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1085e0;
        }
    }
    ctx->pc = 0x108684u;
label_108684:
    // 0x108684: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x108684u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_108688:
    // 0x108688: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x108688u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_10868c:
    // 0x10868c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x10868cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_108690:
    // 0x108690: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x108690u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_108694:
    // 0x108694: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x108694u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_108698:
    // 0x108698: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x108698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_10869c:
    // 0x10869c: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x10869cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1086a0:
    // 0x1086a0: 0x3e00008  jr          $ra
label_1086a4:
    if (ctx->pc == 0x1086A4u) {
        ctx->pc = 0x1086A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1086A0u;
        // 0x1086a4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1086A8u;
        goto label_fallthrough_0x1086a0;
    }
    ctx->pc = 0x1086A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1086A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1086A0u;
        // 0x1086a4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1086A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1086a0:
    ctx->pc = 0x1086A8u;
}
