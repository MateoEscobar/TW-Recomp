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

// Function: sub_00106498
// Address: 0x106498 - 0x1065f0
void sub_00106498_0x106498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106498_0x106498");
#endif

    switch (ctx->pc) {
        case 0x106498u: goto label_106498;
        case 0x10649cu: goto label_10649c;
        case 0x1064a0u: goto label_1064a0;
        case 0x1064a4u: goto label_1064a4;
        case 0x1064a8u: goto label_1064a8;
        case 0x1064acu: goto label_1064ac;
        case 0x1064b0u: goto label_1064b0;
        case 0x1064b4u: goto label_1064b4;
        case 0x1064b8u: goto label_1064b8;
        case 0x1064bcu: goto label_1064bc;
        case 0x1064c0u: goto label_1064c0;
        case 0x1064c4u: goto label_1064c4;
        case 0x1064c8u: goto label_1064c8;
        case 0x1064ccu: goto label_1064cc;
        case 0x1064d0u: goto label_1064d0;
        case 0x1064d4u: goto label_1064d4;
        case 0x1064d8u: goto label_1064d8;
        case 0x1064dcu: goto label_1064dc;
        case 0x1064e0u: goto label_1064e0;
        case 0x1064e4u: goto label_1064e4;
        case 0x1064e8u: goto label_1064e8;
        case 0x1064ecu: goto label_1064ec;
        case 0x1064f0u: goto label_1064f0;
        case 0x1064f4u: goto label_1064f4;
        case 0x1064f8u: goto label_1064f8;
        case 0x1064fcu: goto label_1064fc;
        case 0x106500u: goto label_106500;
        case 0x106504u: goto label_106504;
        case 0x106508u: goto label_106508;
        case 0x10650cu: goto label_10650c;
        case 0x106510u: goto label_106510;
        case 0x106514u: goto label_106514;
        case 0x106518u: goto label_106518;
        case 0x10651cu: goto label_10651c;
        case 0x106520u: goto label_106520;
        case 0x106524u: goto label_106524;
        case 0x106528u: goto label_106528;
        case 0x10652cu: goto label_10652c;
        case 0x106530u: goto label_106530;
        case 0x106534u: goto label_106534;
        case 0x106538u: goto label_106538;
        case 0x10653cu: goto label_10653c;
        case 0x106540u: goto label_106540;
        case 0x106544u: goto label_106544;
        case 0x106548u: goto label_106548;
        case 0x10654cu: goto label_10654c;
        case 0x106550u: goto label_106550;
        case 0x106554u: goto label_106554;
        case 0x106558u: goto label_106558;
        case 0x10655cu: goto label_10655c;
        case 0x106560u: goto label_106560;
        case 0x106564u: goto label_106564;
        case 0x106568u: goto label_106568;
        case 0x10656cu: goto label_10656c;
        case 0x106570u: goto label_106570;
        case 0x106574u: goto label_106574;
        case 0x106578u: goto label_106578;
        case 0x10657cu: goto label_10657c;
        case 0x106580u: goto label_106580;
        case 0x106584u: goto label_106584;
        case 0x106588u: goto label_106588;
        case 0x10658cu: goto label_10658c;
        case 0x106590u: goto label_106590;
        case 0x106594u: goto label_106594;
        case 0x106598u: goto label_106598;
        case 0x10659cu: goto label_10659c;
        case 0x1065a0u: goto label_1065a0;
        case 0x1065a4u: goto label_1065a4;
        case 0x1065a8u: goto label_1065a8;
        case 0x1065acu: goto label_1065ac;
        case 0x1065b0u: goto label_1065b0;
        case 0x1065b4u: goto label_1065b4;
        case 0x1065b8u: goto label_1065b8;
        case 0x1065bcu: goto label_1065bc;
        case 0x1065c0u: goto label_1065c0;
        case 0x1065c4u: goto label_1065c4;
        case 0x1065c8u: goto label_1065c8;
        case 0x1065ccu: goto label_1065cc;
        case 0x1065d0u: goto label_1065d0;
        case 0x1065d4u: goto label_1065d4;
        case 0x1065d8u: goto label_1065d8;
        case 0x1065dcu: goto label_1065dc;
        case 0x1065e0u: goto label_1065e0;
        case 0x1065e4u: goto label_1065e4;
        case 0x1065e8u: goto label_1065e8;
        case 0x1065ecu: goto label_1065ec;
        default: break;
    }

    ctx->pc = 0x106498u;

label_106498:
    // 0x106498: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x106498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_10649c:
    // 0x10649c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x10649cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1064a0:
    // 0x1064a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1064a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1064a4:
    // 0x1064a4: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1064a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_1064a8:
    // 0x1064a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1064a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1064ac:
    // 0x1064ac: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1064acu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_1064b0:
    // 0x1064b0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1064b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_1064b4:
    // 0x1064b4: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x1064b4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_1064b8:
    // 0x1064b8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1064b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1064bc:
    // 0x1064bc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1064bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1064c0:
    // 0x1064c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1064c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1064c4:
    // 0x1064c4: 0xc0420dc  jal         func_108370
label_1064c8:
    if (ctx->pc == 0x1064C8u) {
        ctx->pc = 0x1064C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1064C4u;
        // 0x1064c8: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1064CCu;
        goto label_1064cc;
    }
    ctx->pc = 0x1064C4u;
    SET_GPR_U32(ctx, 31, 0x1064CCu);
    ctx->pc = 0x1064C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1064C4u;
    // 0x1064c8: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108370u, 0x1064C4u, 0x1064CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1064CCu;
label_1064cc:
    // 0x1064cc: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x1064ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1064d0:
    // 0x1064d0: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x1064d0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_1064d4:
    // 0x1064d4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1064d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1064d8:
    // 0x1064d8: 0xc600002c  lwc1        $f0, 0x2C($s0)
    ctx->pc = 0x1064d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1064dc:
    // 0x1064dc: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x1064dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_1064e0:
    // 0x1064e0: 0xc05d462  jal         func_175188
label_1064e4:
    if (ctx->pc == 0x1064E4u) {
        ctx->pc = 0x1064E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1064E0u;
        // 0x1064e4: 0xe600002c  swc1        $f0, 0x2C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1064E8u;
        goto label_1064e8;
    }
    ctx->pc = 0x1064E0u;
    SET_GPR_U32(ctx, 31, 0x1064E8u);
    ctx->pc = 0x1064E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1064E0u;
    // 0x1064e4: 0xe600002c  swc1        $f0, 0x2C($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x175188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175188u, 0x1064E0u, 0x1064E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1064E8u;
label_1064e8:
    // 0x1064e8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1064e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1064ec:
    // 0x1064ec: 0x84640098  lh          $a0, 0x98($v1)
    ctx->pc = 0x1064ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 152)));
label_1064f0:
    // 0x1064f0: 0x8c65009c  lw          $a1, 0x9C($v1)
    ctx->pc = 0x1064f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
label_1064f4:
    // 0x1064f4: 0xa0f809  jalr        $a1
label_1064f8:
    if (ctx->pc == 0x1064F8u) {
        ctx->pc = 0x1064F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1064F4u;
        // 0x1064f8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1064FCu;
        goto label_1064fc;
    }
    ctx->pc = 0x1064F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1064FCu);
        ctx->pc = 0x1064F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1064F4u;
        // 0x1064f8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1064F4u, 0x1064FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1064FCu;
label_1064fc:
    // 0x1064fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1064fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_106500:
    // 0x106500: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x106500u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_106504:
    // 0x106504: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x106504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_106508:
    // 0x106508: 0x10730016  beq         $v1, $s3, . + 4 + (0x16 << 2)
label_10650c:
    if (ctx->pc == 0x10650Cu) {
        ctx->pc = 0x10650Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106508u;
        // 0x10650c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106510u;
        goto label_106510;
    }
    ctx->pc = 0x106508u;
    {
        const bool branch_taken_0x106508 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x10650Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106508u;
        // 0x10650c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106508) {
            ctx->pc = 0x106564u;
            goto label_106564;
        }
    }
    ctx->pc = 0x106510u;
label_106510:
    // 0x106510: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x106510u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_106514:
    // 0x106514: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_106518:
    if (ctx->pc == 0x106518u) {
        ctx->pc = 0x10651Cu;
        goto label_10651c;
    }
    ctx->pc = 0x106514u;
    {
        const bool branch_taken_0x106514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x106514) {
            ctx->pc = 0x10652Cu;
            goto label_10652c;
        }
    }
    ctx->pc = 0x10651Cu;
label_10651c:
    // 0x10651c: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_106520:
    if (ctx->pc == 0x106520u) {
        ctx->pc = 0x106520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10651Cu;
        // 0x106520: 0xc601002c  lwc1        $f1, 0x2C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x106524u;
        goto label_106524;
    }
    ctx->pc = 0x10651Cu;
    {
        const bool branch_taken_0x10651c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10651c) {
            ctx->pc = 0x106520u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10651Cu;
            // 0x106520: 0xc601002c  lwc1        $f1, 0x2C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x10653Cu;
            goto label_10653c;
        }
    }
    ctx->pc = 0x106524u;
label_106524:
    // 0x106524: 0x10000023  b           . + 4 + (0x23 << 2)
label_106528:
    if (ctx->pc == 0x106528u) {
        ctx->pc = 0x10652Cu;
        goto label_10652c;
    }
    ctx->pc = 0x106524u;
    {
        const bool branch_taken_0x106524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x106524) {
            ctx->pc = 0x1065B4u;
            goto label_1065b4;
        }
    }
    ctx->pc = 0x10652Cu;
label_10652c:
    // 0x10652c: 0x50720018  beql        $v1, $s2, . + 4 + (0x18 << 2)
label_106530:
    if (ctx->pc == 0x106530u) {
        ctx->pc = 0x106530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10652Cu;
        // 0x106530: 0xc601002c  lwc1        $f1, 0x2C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x106534u;
        goto label_106534;
    }
    ctx->pc = 0x10652Cu;
    {
        const bool branch_taken_0x10652c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        if (branch_taken_0x10652c) {
            ctx->pc = 0x106530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10652Cu;
            // 0x106530: 0xc601002c  lwc1        $f1, 0x2C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x106590u;
            goto label_106590;
        }
    }
    ctx->pc = 0x106534u;
label_106534:
    // 0x106534: 0x1000001f  b           . + 4 + (0x1F << 2)
label_106538:
    if (ctx->pc == 0x106538u) {
        ctx->pc = 0x10653Cu;
        goto label_10653c;
    }
    ctx->pc = 0x106534u;
    {
        const bool branch_taken_0x106534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x106534) {
            ctx->pc = 0x1065B4u;
            goto label_1065b4;
        }
    }
    ctx->pc = 0x10653Cu;
label_10653c:
    // 0x10653c: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x10653cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_106540:
    // 0x106540: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x106540u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_106544:
    // 0x106544: 0x0  nop
    ctx->pc = 0x106544u;
    // NOP
label_106548:
    // 0x106548: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
label_10654c:
    if (ctx->pc == 0x10654Cu) {
        ctx->pc = 0x106550u;
        goto label_106550;
    }
    ctx->pc = 0x106548u;
    {
        const bool branch_taken_0x106548 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x106548) {
            ctx->pc = 0x1065B4u;
            goto label_1065b4;
        }
    }
    ctx->pc = 0x106550u;
label_106550:
    // 0x106550: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x106550u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_106554:
    // 0x106554: 0xae130030  sw          $s3, 0x30($s0)
    ctx->pc = 0x106554u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 19));
label_106558:
    // 0x106558: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x106558u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10655c:
    // 0x10655c: 0x10000015  b           . + 4 + (0x15 << 2)
label_106560:
    if (ctx->pc == 0x106560u) {
        ctx->pc = 0x106560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10655Cu;
        // 0x106560: 0xe600002c  swc1        $f0, 0x2C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x106564u;
        goto label_106564;
    }
    ctx->pc = 0x10655Cu;
    {
        const bool branch_taken_0x10655c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10655Cu;
        // 0x106560: 0xe600002c  swc1        $f0, 0x2C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10655c) {
            ctx->pc = 0x1065B4u;
            goto label_1065b4;
        }
    }
    ctx->pc = 0x106564u;
label_106564:
    // 0x106564: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x106564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_106568:
    // 0x106568: 0xc041128  jal         func_1044A0
label_10656c:
    if (ctx->pc == 0x10656Cu) {
        ctx->pc = 0x10656Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106568u;
        // 0x10656c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x106570u;
        goto label_106570;
    }
    ctx->pc = 0x106568u;
    SET_GPR_U32(ctx, 31, 0x106570u);
    ctx->pc = 0x10656Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106568u;
    // 0x10656c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044A0u, 0x106568u, 0x106570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106570u;
label_106570:
    // 0x106570: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x106570u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_106574:
    // 0x106574: 0x0  nop
    ctx->pc = 0x106574u;
    // NOP
label_106578:
    // 0x106578: 0x4501000e  bc1t        . + 4 + (0xE << 2)
label_10657c:
    if (ctx->pc == 0x10657Cu) {
        ctx->pc = 0x106580u;
        goto label_106580;
    }
    ctx->pc = 0x106578u;
    {
        const bool branch_taken_0x106578 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x106578) {
            ctx->pc = 0x1065B4u;
            goto label_1065b4;
        }
    }
    ctx->pc = 0x106580u;
label_106580:
    // 0x106580: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x106580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
label_106584:
    // 0x106584: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x106584u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_106588:
    // 0x106588: 0x1000000a  b           . + 4 + (0xA << 2)
label_10658c:
    if (ctx->pc == 0x10658Cu) {
        ctx->pc = 0x10658Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106588u;
        // 0x10658c: 0xae120030  sw          $s2, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106590u;
        goto label_106590;
    }
    ctx->pc = 0x106588u;
    {
        const bool branch_taken_0x106588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10658Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106588u;
        // 0x10658c: 0xae120030  sw          $s2, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106588) {
            ctx->pc = 0x1065B4u;
            goto label_1065b4;
        }
    }
    ctx->pc = 0x106590u;
label_106590:
    // 0x106590: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x106590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_106594:
    // 0x106594: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x106594u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_106598:
    // 0x106598: 0x0  nop
    ctx->pc = 0x106598u;
    // NOP
label_10659c:
    // 0x10659c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_1065a0:
    if (ctx->pc == 0x1065A0u) {
        ctx->pc = 0x1065A4u;
        goto label_1065a4;
    }
    ctx->pc = 0x10659Cu;
    {
        const bool branch_taken_0x10659c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x10659c) {
            ctx->pc = 0x1065B4u;
            goto label_1065b4;
        }
    }
    ctx->pc = 0x1065A4u;
label_1065a4:
    // 0x1065a4: 0xc041590  jal         func_105640
label_1065a8:
    if (ctx->pc == 0x1065A8u) {
        ctx->pc = 0x1065A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1065A4u;
        // 0x1065a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1065ACu;
        goto label_1065ac;
    }
    ctx->pc = 0x1065A4u;
    SET_GPR_U32(ctx, 31, 0x1065ACu);
    ctx->pc = 0x1065A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1065A4u;
    // 0x1065a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105640u, 0x1065A4u, 0x1065ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1065ACu;
label_1065ac:
    // 0x1065ac: 0x10000007  b           . + 4 + (0x7 << 2)
label_1065b0:
    if (ctx->pc == 0x1065B0u) {
        ctx->pc = 0x1065B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1065ACu;
        // 0x1065b0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1065B4u;
        goto label_1065b4;
    }
    ctx->pc = 0x1065ACu;
    {
        const bool branch_taken_0x1065ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1065B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1065ACu;
        // 0x1065b0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1065ac) {
            ctx->pc = 0x1065CCu;
            goto label_1065cc;
        }
    }
    ctx->pc = 0x1065B4u;
label_1065b4:
    // 0x1065b4: 0x5620ffd4  bnel        $s1, $zero, . + 4 + (-0x2C << 2)
label_1065b8:
    if (ctx->pc == 0x1065B8u) {
        ctx->pc = 0x1065B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1065B4u;
        // 0x1065b8: 0x8e030030  lw          $v1, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1065BCu;
        goto label_1065bc;
    }
    ctx->pc = 0x1065B4u;
    {
        const bool branch_taken_0x1065b4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1065b4) {
            ctx->pc = 0x1065B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1065B4u;
            // 0x1065b8: 0x8e030030  lw          $v1, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_106508;
        }
    }
    ctx->pc = 0x1065BCu;
label_1065bc:
    // 0x1065bc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1065bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1065c0:
    // 0x1065c0: 0xc05d4e0  jal         func_175380
label_1065c4:
    if (ctx->pc == 0x1065C4u) {
        ctx->pc = 0x1065C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1065C0u;
        // 0x1065c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1065C8u;
        goto label_1065c8;
    }
    ctx->pc = 0x1065C0u;
    SET_GPR_U32(ctx, 31, 0x1065C8u);
    ctx->pc = 0x1065C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1065C0u;
    // 0x1065c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175380u, 0x1065C0u, 0x1065C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1065C8u;
label_1065c8:
    // 0x1065c8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1065c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1065cc:
    // 0x1065cc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1065ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1065d0:
    // 0x1065d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1065d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1065d4:
    // 0x1065d4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1065d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1065d8:
    // 0x1065d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1065d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1065dc:
    // 0x1065dc: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x1065dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1065e0:
    // 0x1065e0: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1065e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1065e4:
    // 0x1065e4: 0x3e00008  jr          $ra
label_1065e8:
    if (ctx->pc == 0x1065E8u) {
        ctx->pc = 0x1065E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1065E4u;
        // 0x1065e8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1065ECu;
        goto label_1065ec;
    }
    ctx->pc = 0x1065E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1065E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1065E4u;
        // 0x1065e8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1065E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1065ECu;
label_1065ec:
    // 0x1065ec: 0x0  nop
    ctx->pc = 0x1065ecu;
    // NOP
    ctx->pc = 0x1065f0u;
}
