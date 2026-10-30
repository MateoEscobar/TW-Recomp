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

// Function: sub_002EE4F0
// Address: 0x2ee4f0 - 0x2ee608
void sub_002EE4F0_0x2ee4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EE4F0_0x2ee4f0");
#endif

    switch (ctx->pc) {
        case 0x2ee4f0u: goto label_2ee4f0;
        case 0x2ee4f4u: goto label_2ee4f4;
        case 0x2ee4f8u: goto label_2ee4f8;
        case 0x2ee4fcu: goto label_2ee4fc;
        case 0x2ee500u: goto label_2ee500;
        case 0x2ee504u: goto label_2ee504;
        case 0x2ee508u: goto label_2ee508;
        case 0x2ee50cu: goto label_2ee50c;
        case 0x2ee510u: goto label_2ee510;
        case 0x2ee514u: goto label_2ee514;
        case 0x2ee518u: goto label_2ee518;
        case 0x2ee51cu: goto label_2ee51c;
        case 0x2ee520u: goto label_2ee520;
        case 0x2ee524u: goto label_2ee524;
        case 0x2ee528u: goto label_2ee528;
        case 0x2ee52cu: goto label_2ee52c;
        case 0x2ee530u: goto label_2ee530;
        case 0x2ee534u: goto label_2ee534;
        case 0x2ee538u: goto label_2ee538;
        case 0x2ee53cu: goto label_2ee53c;
        case 0x2ee540u: goto label_2ee540;
        case 0x2ee544u: goto label_2ee544;
        case 0x2ee548u: goto label_2ee548;
        case 0x2ee54cu: goto label_2ee54c;
        case 0x2ee550u: goto label_2ee550;
        case 0x2ee554u: goto label_2ee554;
        case 0x2ee558u: goto label_2ee558;
        case 0x2ee55cu: goto label_2ee55c;
        case 0x2ee560u: goto label_2ee560;
        case 0x2ee564u: goto label_2ee564;
        case 0x2ee568u: goto label_2ee568;
        case 0x2ee56cu: goto label_2ee56c;
        case 0x2ee570u: goto label_2ee570;
        case 0x2ee574u: goto label_2ee574;
        case 0x2ee578u: goto label_2ee578;
        case 0x2ee57cu: goto label_2ee57c;
        case 0x2ee580u: goto label_2ee580;
        case 0x2ee584u: goto label_2ee584;
        case 0x2ee588u: goto label_2ee588;
        case 0x2ee58cu: goto label_2ee58c;
        case 0x2ee590u: goto label_2ee590;
        case 0x2ee594u: goto label_2ee594;
        case 0x2ee598u: goto label_2ee598;
        case 0x2ee59cu: goto label_2ee59c;
        case 0x2ee5a0u: goto label_2ee5a0;
        case 0x2ee5a4u: goto label_2ee5a4;
        case 0x2ee5a8u: goto label_2ee5a8;
        case 0x2ee5acu: goto label_2ee5ac;
        case 0x2ee5b0u: goto label_2ee5b0;
        case 0x2ee5b4u: goto label_2ee5b4;
        case 0x2ee5b8u: goto label_2ee5b8;
        case 0x2ee5bcu: goto label_2ee5bc;
        case 0x2ee5c0u: goto label_2ee5c0;
        case 0x2ee5c4u: goto label_2ee5c4;
        case 0x2ee5c8u: goto label_2ee5c8;
        case 0x2ee5ccu: goto label_2ee5cc;
        case 0x2ee5d0u: goto label_2ee5d0;
        case 0x2ee5d4u: goto label_2ee5d4;
        case 0x2ee5d8u: goto label_2ee5d8;
        case 0x2ee5dcu: goto label_2ee5dc;
        case 0x2ee5e0u: goto label_2ee5e0;
        case 0x2ee5e4u: goto label_2ee5e4;
        case 0x2ee5e8u: goto label_2ee5e8;
        case 0x2ee5ecu: goto label_2ee5ec;
        case 0x2ee5f0u: goto label_2ee5f0;
        case 0x2ee5f4u: goto label_2ee5f4;
        case 0x2ee5f8u: goto label_2ee5f8;
        case 0x2ee5fcu: goto label_2ee5fc;
        case 0x2ee600u: goto label_2ee600;
        case 0x2ee604u: goto label_2ee604;
        default: break;
    }

    ctx->pc = 0x2ee4f0u;

label_2ee4f0:
    // 0x2ee4f0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2ee4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_2ee4f4:
    // 0x2ee4f4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2ee4f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2ee4f8:
    // 0x2ee4f8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2ee4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_2ee4fc:
    // 0x2ee4fc: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2ee4fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_2ee500:
    // 0x2ee500: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2ee500u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ee504:
    // 0x2ee504: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2ee504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_2ee508:
    // 0x2ee508: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2ee508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2ee50c:
    // 0x2ee50c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ee50cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2ee510:
    // 0x2ee510: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x2ee510u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_2ee514:
    // 0x2ee514: 0x10e00032  beqz        $a3, . + 4 + (0x32 << 2)
label_2ee518:
    if (ctx->pc == 0x2EE518u) {
        ctx->pc = 0x2EE518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE514u;
        // 0x2ee518: 0xe7b40070  swc1        $f20, 0x70($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE51Cu;
        goto label_2ee51c;
    }
    ctx->pc = 0x2EE514u;
    {
        const bool branch_taken_0x2ee514 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE514u;
        // 0x2ee518: 0xe7b40070  swc1        $f20, 0x70($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee514) {
            ctx->pc = 0x2EE5E0u;
            goto label_2ee5e0;
        }
    }
    ctx->pc = 0x2EE51Cu;
label_2ee51c:
    // 0x2ee51c: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x2ee51cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_2ee520:
    // 0x2ee520: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2ee520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2ee524:
    // 0x2ee524: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2ee524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2ee528:
    // 0x2ee528: 0x84c500a8  lh          $a1, 0xA8($a2)
    ctx->pc = 0x2ee528u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 168)));
label_2ee52c:
    // 0x2ee52c: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x2ee52cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ee530:
    // 0x2ee530: 0x8cc300ac  lw          $v1, 0xAC($a2)
    ctx->pc = 0x2ee530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 172)));
label_2ee534:
    // 0x2ee534: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x2ee534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_2ee538:
    // 0x2ee538: 0x60f809  jalr        $v1
label_2ee53c:
    if (ctx->pc == 0x2EE53Cu) {
        ctx->pc = 0x2EE53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE538u;
        // 0x2ee53c: 0x26710090  addiu       $s1, $s3, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE540u;
        goto label_2ee540;
    }
    ctx->pc = 0x2EE538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2EE540u);
        ctx->pc = 0x2EE53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE538u;
        // 0x2ee53c: 0x26710090  addiu       $s1, $s3, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE538u, 0x2EE540u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EE540u;
label_2ee540:
    // 0x2ee540: 0x86240002  lh          $a0, 0x2($s1)
    ctx->pc = 0x2ee540u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_2ee544:
    // 0x2ee544: 0x3c100071  lui         $s0, 0x71
    ctx->pc = 0x2ee544u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
label_2ee548:
    // 0x2ee548: 0x26104b00  addiu       $s0, $s0, 0x4B00
    ctx->pc = 0x2ee548u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 19200));
label_2ee54c:
    // 0x2ee54c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2ee54cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2ee550:
    // 0x2ee550: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x2ee550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_2ee554:
    // 0x2ee554: 0xc0cd7d2  jal         func_335F48
label_2ee558:
    if (ctx->pc == 0x2EE558u) {
        ctx->pc = 0x2EE558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE554u;
        // 0x2ee558: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE55Cu;
        goto label_2ee55c;
    }
    ctx->pc = 0x2EE554u;
    SET_GPR_U32(ctx, 31, 0x2EE55Cu);
    ctx->pc = 0x2EE558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE554u;
    // 0x2ee558: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335F48u, 0x2EE554u, 0x2EE55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE55Cu;
label_2ee55c:
    // 0x2ee55c: 0x86240002  lh          $a0, 0x2($s1)
    ctx->pc = 0x2ee55cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_2ee560:
    // 0x2ee560: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2ee560u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2ee564:
    // 0x2ee564: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2ee564u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_2ee568:
    // 0x2ee568: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2ee568u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2ee56c:
    // 0x2ee56c: 0xc0cd780  jal         func_335E00
label_2ee570:
    if (ctx->pc == 0x2EE570u) {
        ctx->pc = 0x2EE570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE56Cu;
        // 0x2ee570: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE574u;
        goto label_2ee574;
    }
    ctx->pc = 0x2EE56Cu;
    SET_GPR_U32(ctx, 31, 0x2EE574u);
    ctx->pc = 0x2EE570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE56Cu;
    // 0x2ee570: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335E00u, 0x2EE56Cu, 0x2EE574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE574u;
label_2ee574:
    // 0x2ee574: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2ee574u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2ee578:
    // 0x2ee578: 0xc0cd742  jal         func_335D08
label_2ee57c:
    if (ctx->pc == 0x2EE57Cu) {
        ctx->pc = 0x2EE57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE578u;
        // 0x2ee57c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE580u;
        goto label_2ee580;
    }
    ctx->pc = 0x2EE578u;
    SET_GPR_U32(ctx, 31, 0x2EE580u);
    ctx->pc = 0x2EE57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE578u;
    // 0x2ee57c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D08u, 0x2EE578u, 0x2EE580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE580u;
label_2ee580:
    // 0x2ee580: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2ee580u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2ee584:
    // 0x2ee584: 0xc0cdd2e  jal         func_3374B8
label_2ee588:
    if (ctx->pc == 0x2EE588u) {
        ctx->pc = 0x2EE588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE584u;
        // 0x2ee588: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE58Cu;
        goto label_2ee58c;
    }
    ctx->pc = 0x2EE584u;
    SET_GPR_U32(ctx, 31, 0x2EE58Cu);
    ctx->pc = 0x2EE588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE584u;
    // 0x2ee588: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3374B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3374B8u, 0x2EE584u, 0x2EE58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE58Cu;
label_2ee58c:
    // 0x2ee58c: 0x3c013ec9  lui         $at, 0x3EC9
    ctx->pc = 0x2ee58cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16073 << 16));
label_2ee590:
    // 0x2ee590: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2ee590u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2ee594:
    // 0x2ee594: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ee594u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2ee598:
    // 0x2ee598: 0x0  nop
    ctx->pc = 0x2ee598u;
    // NOP
label_2ee59c:
    // 0x2ee59c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ee59cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ee5a0:
    // 0x2ee5a0: 0x0  nop
    ctx->pc = 0x2ee5a0u;
    // NOP
label_2ee5a4:
    // 0x2ee5a4: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_2ee5a8:
    if (ctx->pc == 0x2EE5A8u) {
        ctx->pc = 0x2EE5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE5A4u;
        // 0x2ee5a8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE5ACu;
        goto label_2ee5ac;
    }
    ctx->pc = 0x2EE5A4u;
    {
        const bool branch_taken_0x2ee5a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EE5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE5A4u;
        // 0x2ee5a8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee5a4) {
            ctx->pc = 0x2EE5E4u;
            goto label_2ee5e4;
        }
    }
    ctx->pc = 0x2EE5ACu;
label_2ee5ac:
    // 0x2ee5ac: 0xc0a367c  jal         func_28D9F0
label_2ee5b0:
    if (ctx->pc == 0x2EE5B0u) {
        ctx->pc = 0x2EE5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE5ACu;
        // 0x2ee5b0: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE5B4u;
        goto label_2ee5b4;
    }
    ctx->pc = 0x2EE5ACu;
    SET_GPR_U32(ctx, 31, 0x2EE5B4u);
    ctx->pc = 0x2EE5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE5ACu;
    // 0x2ee5b0: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2EE5ACu, 0x2EE5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE5B4u;
label_2ee5b4:
    // 0x2ee5b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ee5b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ee5b8:
    // 0x2ee5b8: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
label_2ee5bc:
    if (ctx->pc == 0x2EE5BCu) {
        ctx->pc = 0x2EE5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE5B8u;
        // 0x2ee5bc: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE5C0u;
        goto label_2ee5c0;
    }
    ctx->pc = 0x2EE5B8u;
    {
        const bool branch_taken_0x2ee5b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee5b8) {
            ctx->pc = 0x2EE5BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE5B8u;
            // 0x2ee5bc: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE5E4u;
            goto label_2ee5e4;
        }
    }
    ctx->pc = 0x2EE5C0u;
label_2ee5c0:
    // 0x2ee5c0: 0xc0884f6  jal         func_2213D8
label_2ee5c4:
    if (ctx->pc == 0x2EE5C4u) {
        ctx->pc = 0x2EE5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE5C0u;
        // 0x2ee5c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE5C8u;
        goto label_2ee5c8;
    }
    ctx->pc = 0x2EE5C0u;
    SET_GPR_U32(ctx, 31, 0x2EE5C8u);
    ctx->pc = 0x2EE5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE5C0u;
    // 0x2ee5c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2EE5C0u, 0x2EE5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE5C8u;
label_2ee5c8:
    // 0x2ee5c8: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2ee5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2ee5cc:
    // 0x2ee5cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ee5ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ee5d0:
    // 0x2ee5d0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2ee5d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2ee5d4:
    // 0x2ee5d4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2ee5d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2ee5d8:
    // 0x2ee5d8: 0xc0bf800  jal         func_2FE000
label_2ee5dc:
    if (ctx->pc == 0x2EE5DCu) {
        ctx->pc = 0x2EE5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE5D8u;
        // 0x2ee5dc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE5E0u;
        goto label_2ee5e0;
    }
    ctx->pc = 0x2EE5D8u;
    SET_GPR_U32(ctx, 31, 0x2EE5E0u);
    ctx->pc = 0x2EE5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE5D8u;
    // 0x2ee5dc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2EE5D8u, 0x2EE5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE5E0u;
label_2ee5e0:
    // 0x2ee5e0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2ee5e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2ee5e4:
    // 0x2ee5e4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2ee5e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2ee5e8:
    // 0x2ee5e8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2ee5e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2ee5ec:
    // 0x2ee5ec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2ee5ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2ee5f0:
    // 0x2ee5f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ee5f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2ee5f4:
    // 0x2ee5f4: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x2ee5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2ee5f8:
    // 0x2ee5f8: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x2ee5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2ee5fc:
    // 0x2ee5fc: 0x3e00008  jr          $ra
label_2ee600:
    if (ctx->pc == 0x2EE600u) {
        ctx->pc = 0x2EE600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE5FCu;
        // 0x2ee600: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE604u;
        goto label_2ee604;
    }
    ctx->pc = 0x2EE5FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EE600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE5FCu;
        // 0x2ee600: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE5FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EE604u;
label_2ee604:
    // 0x2ee604: 0x0  nop
    ctx->pc = 0x2ee604u;
    // NOP
    ctx->pc = 0x2ee608u;
}
