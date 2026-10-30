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

// Function: sub_0018A430
// Address: 0x18a430 - 0x18a5f0
void sub_0018A430_0x18a430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018A430_0x18a430");
#endif

    switch (ctx->pc) {
        case 0x18a430u: goto label_18a430;
        case 0x18a434u: goto label_18a434;
        case 0x18a438u: goto label_18a438;
        case 0x18a43cu: goto label_18a43c;
        case 0x18a440u: goto label_18a440;
        case 0x18a444u: goto label_18a444;
        case 0x18a448u: goto label_18a448;
        case 0x18a44cu: goto label_18a44c;
        case 0x18a450u: goto label_18a450;
        case 0x18a454u: goto label_18a454;
        case 0x18a458u: goto label_18a458;
        case 0x18a45cu: goto label_18a45c;
        case 0x18a460u: goto label_18a460;
        case 0x18a464u: goto label_18a464;
        case 0x18a468u: goto label_18a468;
        case 0x18a46cu: goto label_18a46c;
        case 0x18a470u: goto label_18a470;
        case 0x18a474u: goto label_18a474;
        case 0x18a478u: goto label_18a478;
        case 0x18a47cu: goto label_18a47c;
        case 0x18a480u: goto label_18a480;
        case 0x18a484u: goto label_18a484;
        case 0x18a488u: goto label_18a488;
        case 0x18a48cu: goto label_18a48c;
        case 0x18a490u: goto label_18a490;
        case 0x18a494u: goto label_18a494;
        case 0x18a498u: goto label_18a498;
        case 0x18a49cu: goto label_18a49c;
        case 0x18a4a0u: goto label_18a4a0;
        case 0x18a4a4u: goto label_18a4a4;
        case 0x18a4a8u: goto label_18a4a8;
        case 0x18a4acu: goto label_18a4ac;
        case 0x18a4b0u: goto label_18a4b0;
        case 0x18a4b4u: goto label_18a4b4;
        case 0x18a4b8u: goto label_18a4b8;
        case 0x18a4bcu: goto label_18a4bc;
        case 0x18a4c0u: goto label_18a4c0;
        case 0x18a4c4u: goto label_18a4c4;
        case 0x18a4c8u: goto label_18a4c8;
        case 0x18a4ccu: goto label_18a4cc;
        case 0x18a4d0u: goto label_18a4d0;
        case 0x18a4d4u: goto label_18a4d4;
        case 0x18a4d8u: goto label_18a4d8;
        case 0x18a4dcu: goto label_18a4dc;
        case 0x18a4e0u: goto label_18a4e0;
        case 0x18a4e4u: goto label_18a4e4;
        case 0x18a4e8u: goto label_18a4e8;
        case 0x18a4ecu: goto label_18a4ec;
        case 0x18a4f0u: goto label_18a4f0;
        case 0x18a4f4u: goto label_18a4f4;
        case 0x18a4f8u: goto label_18a4f8;
        case 0x18a4fcu: goto label_18a4fc;
        case 0x18a500u: goto label_18a500;
        case 0x18a504u: goto label_18a504;
        case 0x18a508u: goto label_18a508;
        case 0x18a50cu: goto label_18a50c;
        case 0x18a510u: goto label_18a510;
        case 0x18a514u: goto label_18a514;
        case 0x18a518u: goto label_18a518;
        case 0x18a51cu: goto label_18a51c;
        case 0x18a520u: goto label_18a520;
        case 0x18a524u: goto label_18a524;
        case 0x18a528u: goto label_18a528;
        case 0x18a52cu: goto label_18a52c;
        case 0x18a530u: goto label_18a530;
        case 0x18a534u: goto label_18a534;
        case 0x18a538u: goto label_18a538;
        case 0x18a53cu: goto label_18a53c;
        case 0x18a540u: goto label_18a540;
        case 0x18a544u: goto label_18a544;
        case 0x18a548u: goto label_18a548;
        case 0x18a54cu: goto label_18a54c;
        case 0x18a550u: goto label_18a550;
        case 0x18a554u: goto label_18a554;
        case 0x18a558u: goto label_18a558;
        case 0x18a55cu: goto label_18a55c;
        case 0x18a560u: goto label_18a560;
        case 0x18a564u: goto label_18a564;
        case 0x18a568u: goto label_18a568;
        case 0x18a56cu: goto label_18a56c;
        case 0x18a570u: goto label_18a570;
        case 0x18a574u: goto label_18a574;
        case 0x18a578u: goto label_18a578;
        case 0x18a57cu: goto label_18a57c;
        case 0x18a580u: goto label_18a580;
        case 0x18a584u: goto label_18a584;
        case 0x18a588u: goto label_18a588;
        case 0x18a58cu: goto label_18a58c;
        case 0x18a590u: goto label_18a590;
        case 0x18a594u: goto label_18a594;
        case 0x18a598u: goto label_18a598;
        case 0x18a59cu: goto label_18a59c;
        case 0x18a5a0u: goto label_18a5a0;
        case 0x18a5a4u: goto label_18a5a4;
        case 0x18a5a8u: goto label_18a5a8;
        case 0x18a5acu: goto label_18a5ac;
        case 0x18a5b0u: goto label_18a5b0;
        case 0x18a5b4u: goto label_18a5b4;
        case 0x18a5b8u: goto label_18a5b8;
        case 0x18a5bcu: goto label_18a5bc;
        case 0x18a5c0u: goto label_18a5c0;
        case 0x18a5c4u: goto label_18a5c4;
        case 0x18a5c8u: goto label_18a5c8;
        case 0x18a5ccu: goto label_18a5cc;
        case 0x18a5d0u: goto label_18a5d0;
        case 0x18a5d4u: goto label_18a5d4;
        case 0x18a5d8u: goto label_18a5d8;
        case 0x18a5dcu: goto label_18a5dc;
        case 0x18a5e0u: goto label_18a5e0;
        case 0x18a5e4u: goto label_18a5e4;
        case 0x18a5e8u: goto label_18a5e8;
        case 0x18a5ecu: goto label_18a5ec;
        default: break;
    }

    ctx->pc = 0x18a430u;

label_18a430:
    // 0x18a430: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x18a430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_18a434:
    // 0x18a434: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x18a434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_18a438:
    // 0x18a438: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x18a438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_18a43c:
    // 0x18a43c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x18a43cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18a440:
    // 0x18a440: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x18a440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_18a444:
    // 0x18a444: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18a444u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18a448:
    // 0x18a448: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x18a448u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_18a44c:
    // 0x18a44c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x18a44cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18a450:
    // 0x18a450: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x18a450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_18a454:
    // 0x18a454: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x18a454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_18a458:
    // 0x18a458: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18a458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_18a45c:
    // 0x18a45c: 0x8e0300d8  lw          $v1, 0xD8($s0)
    ctx->pc = 0x18a45cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_18a460:
    // 0x18a460: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_18a464:
    if (ctx->pc == 0x18A464u) {
        ctx->pc = 0x18A464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A460u;
        // 0x18a464: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A468u;
        goto label_18a468;
    }
    ctx->pc = 0x18A460u;
    {
        const bool branch_taken_0x18a460 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A460u;
        // 0x18a464: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a460) {
            ctx->pc = 0x18A470u;
            goto label_18a470;
        }
    }
    ctx->pc = 0x18A468u;
label_18a468:
    // 0x18a468: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x18a468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_18a46c:
    // 0x18a46c: 0x2a02b  sltu        $s4, $zero, $v0
    ctx->pc = 0x18a46cu;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_18a470:
    // 0x18a470: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_18a474:
    if (ctx->pc == 0x18A474u) {
        ctx->pc = 0x18A474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A470u;
        // 0x18a474: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A478u;
        goto label_18a478;
    }
    ctx->pc = 0x18A470u;
    {
        const bool branch_taken_0x18a470 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A470u;
        // 0x18a474: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a470) {
            ctx->pc = 0x18A484u;
            goto label_18a484;
        }
    }
    ctx->pc = 0x18A478u;
label_18a478:
    // 0x18a478: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x18a478u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_18a47c:
    // 0x18a47c: 0x10000016  b           . + 4 + (0x16 << 2)
label_18a480:
    if (ctx->pc == 0x18A480u) {
        ctx->pc = 0x18A484u;
        goto label_18a484;
    }
    ctx->pc = 0x18A47Cu;
    {
        const bool branch_taken_0x18a47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a47c) {
            ctx->pc = 0x18A4D8u;
            goto label_18a4d8;
        }
    }
    ctx->pc = 0x18A484u;
label_18a484:
    // 0x18a484: 0xc047e6c  jal         func_11F9B0
label_18a488:
    if (ctx->pc == 0x18A488u) {
        ctx->pc = 0x18A488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A484u;
        // 0x18a488: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A48Cu;
        goto label_18a48c;
    }
    ctx->pc = 0x18A484u;
    SET_GPR_U32(ctx, 31, 0x18A48Cu);
    ctx->pc = 0x18A488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A484u;
    // 0x18a488: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x18A484u, 0x18A48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A48Cu;
label_18a48c:
    // 0x18a48c: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
label_18a490:
    if (ctx->pc == 0x18A490u) {
        ctx->pc = 0x18A490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A48Cu;
        // 0x18a490: 0x4614a502  mul.s       $f20, $f20, $f20 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A494u;
        goto label_18a494;
    }
    ctx->pc = 0x18A48Cu;
    {
        const bool branch_taken_0x18a48c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a48c) {
            ctx->pc = 0x18A490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A48Cu;
            // 0x18a490: 0x4614a502  mul.s       $f20, $f20, $f20 (Delay Slot)
            ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A4D8u;
            goto label_18a4d8;
        }
    }
    ctx->pc = 0x18A494u;
label_18a494:
    // 0x18a494: 0x8e0200d8  lw          $v0, 0xD8($s0)
    ctx->pc = 0x18a494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_18a498:
    // 0x18a498: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18a498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18a49c:
    // 0x18a49c: 0xc047e6c  jal         func_11F9B0
label_18a4a0:
    if (ctx->pc == 0x18A4A0u) {
        ctx->pc = 0x18A4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A49Cu;
        // 0x18a4a0: 0x24530004  addiu       $s3, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A4A4u;
        goto label_18a4a4;
    }
    ctx->pc = 0x18A49Cu;
    SET_GPR_U32(ctx, 31, 0x18A4A4u);
    ctx->pc = 0x18A4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A49Cu;
    // 0x18a4a0: 0x24530004  addiu       $s3, $v0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x18A49Cu, 0x18A4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A4A4u;
label_18a4a4:
    // 0x18a4a4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18a4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18a4a8:
    // 0x18a4a8: 0x84640210  lh          $a0, 0x210($v1)
    ctx->pc = 0x18a4a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 528)));
label_18a4ac:
    // 0x18a4ac: 0x8c650214  lw          $a1, 0x214($v1)
    ctx->pc = 0x18a4acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 532)));
label_18a4b0:
    // 0x18a4b0: 0xa0f809  jalr        $a1
label_18a4b4:
    if (ctx->pc == 0x18A4B4u) {
        ctx->pc = 0x18A4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A4B0u;
        // 0x18a4b4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A4B8u;
        goto label_18a4b8;
    }
    ctx->pc = 0x18A4B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x18A4B8u);
        ctx->pc = 0x18A4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A4B0u;
        // 0x18a4b4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A4B0u, 0x18A4B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18A4B8u;
label_18a4b8:
    // 0x18a4b8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x18a4b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18a4bc:
    // 0x18a4bc: 0x0  nop
    ctx->pc = 0x18a4bcu;
    // NOP
label_18a4c0:
    // 0x18a4c0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_18a4c4:
    if (ctx->pc == 0x18A4C4u) {
        ctx->pc = 0x18A4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A4C0u;
        // 0x18a4c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A4C8u;
        goto label_18a4c8;
    }
    ctx->pc = 0x18A4C0u;
    {
        const bool branch_taken_0x18a4c0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18A4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A4C0u;
        // 0x18a4c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a4c0) {
            ctx->pc = 0x18A4CCu;
            goto label_18a4cc;
        }
    }
    ctx->pc = 0x18A4C8u;
label_18a4c8:
    // 0x18a4c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18a4c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18a4cc:
    // 0x18a4cc: 0xc05fe7a  jal         func_17F9E8
label_18a4d0:
    if (ctx->pc == 0x18A4D0u) {
        ctx->pc = 0x18A4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A4CCu;
        // 0x18a4d0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A4D4u;
        goto label_18a4d4;
    }
    ctx->pc = 0x18A4CCu;
    SET_GPR_U32(ctx, 31, 0x18A4D4u);
    ctx->pc = 0x18A4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A4CCu;
    // 0x18a4d0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F9E8u, 0x18A4CCu, 0x18A4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A4D4u;
label_18a4d4:
    // 0x18a4d4: 0x4614a502  mul.s       $f20, $f20, $f20
    ctx->pc = 0x18a4d4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
label_18a4d8:
    // 0x18a4d8: 0x12800021  beqz        $s4, . + 4 + (0x21 << 2)
label_18a4dc:
    if (ctx->pc == 0x18A4DCu) {
        ctx->pc = 0x18A4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A4D8u;
        // 0x18a4dc: 0x260303c8  addiu       $v1, $s0, 0x3C8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 968));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A4E0u;
        goto label_18a4e0;
    }
    ctx->pc = 0x18A4D8u;
    {
        const bool branch_taken_0x18a4d8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A4D8u;
        // 0x18a4dc: 0x260303c8  addiu       $v1, $s0, 0x3C8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 968));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a4d8) {
            ctx->pc = 0x18A560u;
            goto label_18a560;
        }
    }
    ctx->pc = 0x18A4E0u;
label_18a4e0:
    // 0x18a4e0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18a4e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18a4e4:
    // 0x18a4e4: 0x0  nop
    ctx->pc = 0x18a4e4u;
    // NOP
label_18a4e8:
    // 0x18a4e8: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x18a4e8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_18a4ec:
    // 0x18a4ec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_18a4f0:
    if (ctx->pc == 0x18A4F0u) {
        ctx->pc = 0x18A4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A4ECu;
        // 0x18a4f0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A4F4u;
        goto label_18a4f4;
    }
    ctx->pc = 0x18A4ECu;
    {
        const bool branch_taken_0x18a4ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A4ECu;
        // 0x18a4f0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a4ec) {
            ctx->pc = 0x18A504u;
            goto label_18a504;
        }
    }
    ctx->pc = 0x18A4F4u;
label_18a4f4:
    // 0x18a4f4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x18a4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_18a4f8:
    // 0x18a4f8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x18a4f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_18a4fc:
    // 0x18a4fc: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x18a4fcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
label_18a500:
    // 0x18a500: 0x12902b  sltu        $s2, $zero, $s2
    ctx->pc = 0x18a500u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_18a504:
    // 0x18a504: 0x2c820007  sltiu       $v0, $a0, 0x7
    ctx->pc = 0x18a504u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_18a508:
    // 0x18a508: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_18a50c:
    if (ctx->pc == 0x18A50Cu) {
        ctx->pc = 0x18A50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A508u;
        // 0x18a50c: 0x24630028  addiu       $v1, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A510u;
        goto label_18a510;
    }
    ctx->pc = 0x18A508u;
    {
        const bool branch_taken_0x18a508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A508u;
        // 0x18a50c: 0x24630028  addiu       $v1, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a508) {
            ctx->pc = 0x18A4E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18a4e8;
        }
    }
    ctx->pc = 0x18A510u;
label_18a510:
    // 0x18a510: 0x52800014  beql        $s4, $zero, . + 4 + (0x14 << 2)
label_18a514:
    if (ctx->pc == 0x18A514u) {
        ctx->pc = 0x18A514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A510u;
        // 0x18a514: 0xc6200bcc  lwc1        $f0, 0xBCC($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3020)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A518u;
        goto label_18a518;
    }
    ctx->pc = 0x18A510u;
    {
        const bool branch_taken_0x18a510 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a510) {
            ctx->pc = 0x18A514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A510u;
            // 0x18a514: 0xc6200bcc  lwc1        $f0, 0xBCC($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3020)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A564u;
            goto label_18a564;
        }
    }
    ctx->pc = 0x18A518u;
label_18a518:
    // 0x18a518: 0xc089f4a  jal         func_227D28
label_18a51c:
    if (ctx->pc == 0x18A51Cu) {
        ctx->pc = 0x18A51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A518u;
        // 0x18a51c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A520u;
        goto label_18a520;
    }
    ctx->pc = 0x18A518u;
    SET_GPR_U32(ctx, 31, 0x18A520u);
    ctx->pc = 0x18A51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A518u;
    // 0x18a51c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D28u, 0x18A518u, 0x18A520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A520u;
label_18a520:
    // 0x18a520: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_18a524:
    if (ctx->pc == 0x18A524u) {
        ctx->pc = 0x18A528u;
        goto label_18a528;
    }
    ctx->pc = 0x18A520u;
    {
        const bool branch_taken_0x18a520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a520) {
            ctx->pc = 0x18A558u;
            goto label_18a558;
        }
    }
    ctx->pc = 0x18A528u;
label_18a528:
    // 0x18a528: 0xc6200bc8  lwc1        $f0, 0xBC8($s1)
    ctx->pc = 0x18a528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18a52c:
    // 0x18a52c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x18a52cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18a530:
    // 0x18a530: 0x0  nop
    ctx->pc = 0x18a530u;
    // NOP
label_18a534:
    // 0x18a534: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_18a538:
    if (ctx->pc == 0x18A538u) {
        ctx->pc = 0x18A53Cu;
        goto label_18a53c;
    }
    ctx->pc = 0x18A534u;
    {
        const bool branch_taken_0x18a534 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18a534) {
            ctx->pc = 0x18A558u;
            goto label_18a558;
        }
    }
    ctx->pc = 0x18A53Cu;
label_18a53c:
    // 0x18a53c: 0xe6340bc8  swc1        $f20, 0xBC8($s1)
    ctx->pc = 0x18a53cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3016), bits); }
label_18a540:
    // 0x18a540: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x18a540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18a544:
    // 0x18a544: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x18a544u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_18a548:
    // 0x18a548: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x18a548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_18a54c:
    // 0x18a54c: 0x40f809  jalr        $v0
label_18a550:
    if (ctx->pc == 0x18A550u) {
        ctx->pc = 0x18A550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A54Cu;
        // 0x18a550: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A554u;
        goto label_18a554;
    }
    ctx->pc = 0x18A54Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18A554u);
        ctx->pc = 0x18A550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A54Cu;
        // 0x18a550: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A54Cu, 0x18A554u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18A554u;
label_18a554:
    // 0x18a554: 0xae220bc0  sw          $v0, 0xBC0($s1)
    ctx->pc = 0x18a554u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3008), GPR_U32(ctx, 2));
label_18a558:
    // 0x18a558: 0x1680000d  bnez        $s4, . + 4 + (0xD << 2)
label_18a55c:
    if (ctx->pc == 0x18A55Cu) {
        ctx->pc = 0x18A560u;
        goto label_18a560;
    }
    ctx->pc = 0x18A558u;
    {
        const bool branch_taken_0x18a558 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a558) {
            ctx->pc = 0x18A590u;
            goto label_18a590;
        }
    }
    ctx->pc = 0x18A560u;
label_18a560:
    // 0x18a560: 0xc6200bcc  lwc1        $f0, 0xBCC($s1)
    ctx->pc = 0x18a560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3020)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18a564:
    // 0x18a564: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x18a564u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18a568:
    // 0x18a568: 0x0  nop
    ctx->pc = 0x18a568u;
    // NOP
label_18a56c:
    // 0x18a56c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_18a570:
    if (ctx->pc == 0x18A570u) {
        ctx->pc = 0x18A574u;
        goto label_18a574;
    }
    ctx->pc = 0x18A56Cu;
    {
        const bool branch_taken_0x18a56c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18a56c) {
            ctx->pc = 0x18A590u;
            goto label_18a590;
        }
    }
    ctx->pc = 0x18A574u;
label_18a574:
    // 0x18a574: 0xe6340bcc  swc1        $f20, 0xBCC($s1)
    ctx->pc = 0x18a574u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3020), bits); }
label_18a578:
    // 0x18a578: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x18a578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18a57c:
    // 0x18a57c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x18a57cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_18a580:
    // 0x18a580: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x18a580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_18a584:
    // 0x18a584: 0x40f809  jalr        $v0
label_18a588:
    if (ctx->pc == 0x18A588u) {
        ctx->pc = 0x18A588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A584u;
        // 0x18a588: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A58Cu;
        goto label_18a58c;
    }
    ctx->pc = 0x18A584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18A58Cu);
        ctx->pc = 0x18A588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A584u;
        // 0x18a588: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A584u, 0x18A58Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18A58Cu;
label_18a58c:
    // 0x18a58c: 0xae220bc4  sw          $v0, 0xBC4($s1)
    ctx->pc = 0x18a58cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3012), GPR_U32(ctx, 2));
label_18a590:
    // 0x18a590: 0x5240000e  beql        $s2, $zero, . + 4 + (0xE << 2)
label_18a594:
    if (ctx->pc == 0x18A594u) {
        ctx->pc = 0x18A594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A590u;
        // 0x18a594: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A598u;
        goto label_18a598;
    }
    ctx->pc = 0x18A590u;
    {
        const bool branch_taken_0x18a590 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a590) {
            ctx->pc = 0x18A594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A590u;
            // 0x18a594: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A5CCu;
            goto label_18a5cc;
        }
    }
    ctx->pc = 0x18A598u;
label_18a598:
    // 0x18a598: 0xc6200c14  lwc1        $f0, 0xC14($s1)
    ctx->pc = 0x18a598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18a59c:
    // 0x18a59c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x18a59cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18a5a0:
    // 0x18a5a0: 0x0  nop
    ctx->pc = 0x18a5a0u;
    // NOP
label_18a5a4:
    // 0x18a5a4: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
label_18a5a8:
    if (ctx->pc == 0x18A5A8u) {
        ctx->pc = 0x18A5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A5A4u;
        // 0x18a5a8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A5ACu;
        goto label_18a5ac;
    }
    ctx->pc = 0x18A5A4u;
    {
        const bool branch_taken_0x18a5a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18a5a4) {
            ctx->pc = 0x18A5A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A5A4u;
            // 0x18a5a8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A5CCu;
            goto label_18a5cc;
        }
    }
    ctx->pc = 0x18A5ACu;
label_18a5ac:
    // 0x18a5ac: 0xe6340c14  swc1        $f20, 0xC14($s1)
    ctx->pc = 0x18a5acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3092), bits); }
label_18a5b0:
    // 0x18a5b0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x18a5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18a5b4:
    // 0x18a5b4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x18a5b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_18a5b8:
    // 0x18a5b8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x18a5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_18a5bc:
    // 0x18a5bc: 0x40f809  jalr        $v0
label_18a5c0:
    if (ctx->pc == 0x18A5C0u) {
        ctx->pc = 0x18A5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A5BCu;
        // 0x18a5c0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A5C4u;
        goto label_18a5c4;
    }
    ctx->pc = 0x18A5BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18A5C4u);
        ctx->pc = 0x18A5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A5BCu;
        // 0x18a5c0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A5BCu, 0x18A5C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18A5C4u;
label_18a5c4:
    // 0x18a5c4: 0xae220c10  sw          $v0, 0xC10($s1)
    ctx->pc = 0x18a5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3088), GPR_U32(ctx, 2));
label_18a5c8:
    // 0x18a5c8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x18a5c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_18a5cc:
    // 0x18a5cc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x18a5ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_18a5d0:
    // 0x18a5d0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x18a5d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_18a5d4:
    // 0x18a5d4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x18a5d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18a5d8:
    // 0x18a5d8: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x18a5d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18a5dc:
    // 0x18a5dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18a5dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18a5e0:
    // 0x18a5e0: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x18a5e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_18a5e4:
    // 0x18a5e4: 0x3e00008  jr          $ra
label_18a5e8:
    if (ctx->pc == 0x18A5E8u) {
        ctx->pc = 0x18A5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A5E4u;
        // 0x18a5e8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A5ECu;
        goto label_18a5ec;
    }
    ctx->pc = 0x18A5E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A5E4u;
        // 0x18a5e8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A5E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18A5ECu;
label_18a5ec:
    // 0x18a5ec: 0x0  nop
    ctx->pc = 0x18a5ecu;
    // NOP
    ctx->pc = 0x18a5f0u;
}
