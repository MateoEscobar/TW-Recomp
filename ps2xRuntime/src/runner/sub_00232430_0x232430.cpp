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

// Function: sub_00232430
// Address: 0x232430 - 0x232538
void sub_00232430_0x232430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00232430_0x232430");
#endif

    switch (ctx->pc) {
        case 0x232430u: goto label_232430;
        case 0x232434u: goto label_232434;
        case 0x232438u: goto label_232438;
        case 0x23243cu: goto label_23243c;
        case 0x232440u: goto label_232440;
        case 0x232444u: goto label_232444;
        case 0x232448u: goto label_232448;
        case 0x23244cu: goto label_23244c;
        case 0x232450u: goto label_232450;
        case 0x232454u: goto label_232454;
        case 0x232458u: goto label_232458;
        case 0x23245cu: goto label_23245c;
        case 0x232460u: goto label_232460;
        case 0x232464u: goto label_232464;
        case 0x232468u: goto label_232468;
        case 0x23246cu: goto label_23246c;
        case 0x232470u: goto label_232470;
        case 0x232474u: goto label_232474;
        case 0x232478u: goto label_232478;
        case 0x23247cu: goto label_23247c;
        case 0x232480u: goto label_232480;
        case 0x232484u: goto label_232484;
        case 0x232488u: goto label_232488;
        case 0x23248cu: goto label_23248c;
        case 0x232490u: goto label_232490;
        case 0x232494u: goto label_232494;
        case 0x232498u: goto label_232498;
        case 0x23249cu: goto label_23249c;
        case 0x2324a0u: goto label_2324a0;
        case 0x2324a4u: goto label_2324a4;
        case 0x2324a8u: goto label_2324a8;
        case 0x2324acu: goto label_2324ac;
        case 0x2324b0u: goto label_2324b0;
        case 0x2324b4u: goto label_2324b4;
        case 0x2324b8u: goto label_2324b8;
        case 0x2324bcu: goto label_2324bc;
        case 0x2324c0u: goto label_2324c0;
        case 0x2324c4u: goto label_2324c4;
        case 0x2324c8u: goto label_2324c8;
        case 0x2324ccu: goto label_2324cc;
        case 0x2324d0u: goto label_2324d0;
        case 0x2324d4u: goto label_2324d4;
        case 0x2324d8u: goto label_2324d8;
        case 0x2324dcu: goto label_2324dc;
        case 0x2324e0u: goto label_2324e0;
        case 0x2324e4u: goto label_2324e4;
        case 0x2324e8u: goto label_2324e8;
        case 0x2324ecu: goto label_2324ec;
        case 0x2324f0u: goto label_2324f0;
        case 0x2324f4u: goto label_2324f4;
        case 0x2324f8u: goto label_2324f8;
        case 0x2324fcu: goto label_2324fc;
        case 0x232500u: goto label_232500;
        case 0x232504u: goto label_232504;
        case 0x232508u: goto label_232508;
        case 0x23250cu: goto label_23250c;
        case 0x232510u: goto label_232510;
        case 0x232514u: goto label_232514;
        case 0x232518u: goto label_232518;
        case 0x23251cu: goto label_23251c;
        case 0x232520u: goto label_232520;
        case 0x232524u: goto label_232524;
        case 0x232528u: goto label_232528;
        case 0x23252cu: goto label_23252c;
        case 0x232530u: goto label_232530;
        case 0x232534u: goto label_232534;
        default: break;
    }

    ctx->pc = 0x232430u;

label_232430:
    // 0x232430: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x232430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_232434:
    // 0x232434: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x232434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_232438:
    // 0x232438: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x232438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_23243c:
    // 0x23243c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x23243cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_232440:
    // 0x232440: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x232440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_232444:
    // 0x232444: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x232444u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_232448:
    // 0x232448: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x232448u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_23244c:
    // 0x23244c: 0x8e2400d8  lw          $a0, 0xD8($s1)
    ctx->pc = 0x23244cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_232450:
    // 0x232450: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
label_232454:
    if (ctx->pc == 0x232454u) {
        ctx->pc = 0x232454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232450u;
        // 0x232454: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232458u;
        goto label_232458;
    }
    ctx->pc = 0x232450u;
    {
        const bool branch_taken_0x232450 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x232454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232450u;
        // 0x232454: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232450) {
            ctx->pc = 0x232464u;
            goto label_232464;
        }
    }
    ctx->pc = 0x232458u;
label_232458:
    // 0x232458: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x232458u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23245c:
    // 0x23245c: 0x1000002f  b           . + 4 + (0x2F << 2)
label_232460:
    if (ctx->pc == 0x232460u) {
        ctx->pc = 0x232460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23245Cu;
        // 0x232460: 0x7bb10010  lq          $s1, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232464u;
        goto label_232464;
    }
    ctx->pc = 0x23245Cu;
    {
        const bool branch_taken_0x23245c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23245Cu;
        // 0x232460: 0x7bb10010  lq          $s1, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23245c) {
            ctx->pc = 0x23251Cu;
            goto label_23251c;
        }
    }
    ctx->pc = 0x232464u;
label_232464:
    // 0x232464: 0xc05d462  jal         func_175188
label_232468:
    if (ctx->pc == 0x232468u) {
        ctx->pc = 0x23246Cu;
        goto label_23246c;
    }
    ctx->pc = 0x232464u;
    SET_GPR_U32(ctx, 31, 0x23246Cu);
    ctx->pc = 0x175188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175188u, 0x232464u, 0x23246Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23246Cu;
label_23246c:
    // 0x23246c: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x23246cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_232470:
    // 0x232470: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x232470u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_232474:
    // 0x232474: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x232474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_232478:
    // 0x232478: 0x844400d0  lh          $a0, 0xD0($v0)
    ctx->pc = 0x232478u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 208)));
label_23247c:
    // 0x23247c: 0x8c4300d4  lw          $v1, 0xD4($v0)
    ctx->pc = 0x23247cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
label_232480:
    // 0x232480: 0x60f809  jalr        $v1
label_232484:
    if (ctx->pc == 0x232484u) {
        ctx->pc = 0x232484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232480u;
        // 0x232484: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232488u;
        goto label_232488;
    }
    ctx->pc = 0x232480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x232488u);
        ctx->pc = 0x232484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232480u;
        // 0x232484: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232480u, 0x232488u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x232488u;
label_232488:
    // 0x232488: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x232488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_23248c:
    // 0x23248c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x23248cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_232490:
    // 0x232490: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x232490u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_232494:
    // 0x232494: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x232494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_232498:
    // 0x232498: 0x60f809  jalr        $v1
label_23249c:
    if (ctx->pc == 0x23249Cu) {
        ctx->pc = 0x23249Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232498u;
        // 0x23249c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2324A0u;
        goto label_2324a0;
    }
    ctx->pc = 0x232498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2324A0u);
        ctx->pc = 0x23249Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232498u;
        // 0x23249c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232498u, 0x2324A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2324A0u;
label_2324a0:
    // 0x2324a0: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x2324a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_2324a4:
    // 0x2324a4: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x2324a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2324a8:
    // 0x2324a8: 0x0  nop
    ctx->pc = 0x2324a8u;
    // NOP
label_2324ac:
    // 0x2324ac: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
label_2324b0:
    if (ctx->pc == 0x2324B0u) {
        ctx->pc = 0x2324B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2324ACu;
        // 0x2324b0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2324B4u;
        goto label_2324b4;
    }
    ctx->pc = 0x2324ACu;
    {
        const bool branch_taken_0x2324ac = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2324B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2324ACu;
        // 0x2324b0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2324ac) {
            ctx->pc = 0x232518u;
            goto label_232518;
        }
    }
    ctx->pc = 0x2324B4u;
label_2324b4:
    // 0x2324b4: 0x8e2400d8  lw          $a0, 0xD8($s1)
    ctx->pc = 0x2324b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_2324b8:
    // 0x2324b8: 0xc05d470  jal         func_1751C0
label_2324bc:
    if (ctx->pc == 0x2324BCu) {
        ctx->pc = 0x2324BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2324B8u;
        // 0x2324bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2324C0u;
        goto label_2324c0;
    }
    ctx->pc = 0x2324B8u;
    SET_GPR_U32(ctx, 31, 0x2324C0u);
    ctx->pc = 0x2324BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2324B8u;
    // 0x2324bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1751C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1751C0u, 0x2324B8u, 0x2324C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2324C0u;
label_2324c0:
    // 0x2324c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2324c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2324c4:
    // 0x2324c4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2324c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2324c8:
    // 0x2324c8: 0x844400d0  lh          $a0, 0xD0($v0)
    ctx->pc = 0x2324c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 208)));
label_2324cc:
    // 0x2324cc: 0x8c4300d4  lw          $v1, 0xD4($v0)
    ctx->pc = 0x2324ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
label_2324d0:
    // 0x2324d0: 0x60f809  jalr        $v1
label_2324d4:
    if (ctx->pc == 0x2324D4u) {
        ctx->pc = 0x2324D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2324D0u;
        // 0x2324d4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2324D8u;
        goto label_2324d8;
    }
    ctx->pc = 0x2324D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2324D8u);
        ctx->pc = 0x2324D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2324D0u;
        // 0x2324d4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2324D0u, 0x2324D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2324D8u;
label_2324d8:
    // 0x2324d8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2324d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2324dc:
    // 0x2324dc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2324dcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2324e0:
    // 0x2324e0: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x2324e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_2324e4:
    // 0x2324e4: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x2324e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_2324e8:
    // 0x2324e8: 0x60f809  jalr        $v1
label_2324ec:
    if (ctx->pc == 0x2324ECu) {
        ctx->pc = 0x2324ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2324E8u;
        // 0x2324ec: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2324F0u;
        goto label_2324f0;
    }
    ctx->pc = 0x2324E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2324F0u);
        ctx->pc = 0x2324ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2324E8u;
        // 0x2324ec: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2324E8u, 0x2324F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2324F0u;
label_2324f0:
    // 0x2324f0: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x2324f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_2324f4:
    // 0x2324f4: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2324f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_2324f8:
    // 0x2324f8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2324f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2324fc:
    // 0x2324fc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2324fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_232500:
    // 0x232500: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x232500u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_232504:
    // 0x232504: 0x0  nop
    ctx->pc = 0x232504u;
    // NOP
label_232508:
    // 0x232508: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_23250c:
    if (ctx->pc == 0x23250Cu) {
        ctx->pc = 0x23250Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232508u;
        // 0x23250c: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x232510u;
        goto label_232510;
    }
    ctx->pc = 0x232508u;
    {
        const bool branch_taken_0x232508 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x232508) {
            ctx->pc = 0x23250Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x232508u;
            // 0x23250c: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x232510u;
            goto label_232510;
        }
    }
    ctx->pc = 0x232510u;
label_232510:
    // 0x232510: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x232510u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_232514:
    // 0x232514: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x232514u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_232518:
    // 0x232518: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x232518u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_23251c:
    // 0x23251c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23251cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_232520:
    // 0x232520: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x232520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_232524:
    // 0x232524: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x232524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_232528:
    // 0x232528: 0x3e00008  jr          $ra
label_23252c:
    if (ctx->pc == 0x23252Cu) {
        ctx->pc = 0x23252Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232528u;
        // 0x23252c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232530u;
        goto label_232530;
    }
    ctx->pc = 0x232528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23252Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232528u;
        // 0x23252c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x232530u;
label_232530:
    // 0x232530: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x232530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_232534:
    // 0x232534: 0x0  nop
    ctx->pc = 0x232534u;
    // NOP
    ctx->pc = 0x232538u;
}
