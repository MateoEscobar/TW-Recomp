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

// Function: sub_002B8518
// Address: 0x2b8518 - 0x2b8688
void sub_002B8518_0x2b8518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B8518_0x2b8518");
#endif

    switch (ctx->pc) {
        case 0x2b8558u: goto label_2b8558;
        case 0x2b8560u: goto label_2b8560;
        case 0x2b8584u: goto label_2b8584;
        case 0x2b8594u: goto label_2b8594;
        case 0x2b85a4u: goto label_2b85a4;
        case 0x2b85ccu: goto label_2b85cc;
        case 0x2b8630u: goto label_2b8630;
        default: break;
    }

    ctx->pc = 0x2b8518u;

    // 0x2b8518: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2b8518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2b851c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2b851cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2b8520: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2b8520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2b8524: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2b8524u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8528: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2b8528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2b852c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2b852cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8530: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2b8530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2b8534: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b8534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8538: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2b8538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x2b853c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2b853cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8540: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x2b8540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x2b8544: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b8544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b8548: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x2b8548u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2b854c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2b854cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2b8550: 0xc087502  jal         func_21D408
    ctx->pc = 0x2B8550u;
    SET_GPR_U32(ctx, 31, 0x2B8558u);
    ctx->pc = 0x2B8554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8550u;
    // 0x2b8554: 0x8c540000  lw          $s4, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2B8550u, 0x2B8558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8558u;
label_2b8558:
    // 0x2b8558: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2B8558u;
    SET_GPR_U32(ctx, 31, 0x2B8560u);
    ctx->pc = 0x2B855Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8558u;
    // 0x2b855c: 0x24440124  addiu       $a0, $v0, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2B8558u, 0x2B8560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8560u;
label_2b8560:
    // 0x2b8560: 0x1454002e  bne         $v0, $s4, . + 4 + (0x2E << 2)
    ctx->pc = 0x2B8560u;
    {
        const bool branch_taken_0x2b8560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x2B8564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8560u;
        // 0x2b8564: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8560) {
            ctx->pc = 0x2B861Cu;
            goto label_2b861c;
        }
    }
    ctx->pc = 0x2B8568u;
    // 0x2b8568: 0x8e1501a8  lw          $s5, 0x1A8($s0)
    ctx->pc = 0x2b8568u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 424)));
    // 0x2b856c: 0x2aa20003  slti        $v0, $s5, 0x3
    ctx->pc = 0x2b856cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2b8570: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B8570u;
    {
        const bool branch_taken_0x2b8570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8570u;
        // 0x2b8574: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8570) {
            ctx->pc = 0x2B858Cu;
            goto label_2b858c;
        }
    }
    ctx->pc = 0x2B8578u;
    // 0x2b8578: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2b8578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2b857c: 0xc0a446a  jal         func_2911A8
    ctx->pc = 0x2B857Cu;
    SET_GPR_U32(ctx, 31, 0x2B8584u);
    ctx->pc = 0x2B8580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B857Cu;
    // 0x2b8580: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2911A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2911A8u, 0x2B857Cu, 0x2B8584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8584u;
label_2b8584:
    // 0x2b8584: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2B8584u;
    {
        const bool branch_taken_0x2b8584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8584u;
        // 0x2b8588: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8584) {
            ctx->pc = 0x2B8618u;
            goto label_2b8618;
        }
    }
    ctx->pc = 0x2B858Cu;
label_2b858c:
    // 0x2b858c: 0xc08a08a  jal         func_228228
    ctx->pc = 0x2B858Cu;
    SET_GPR_U32(ctx, 31, 0x2B8594u);
    ctx->pc = 0x2B8590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B858Cu;
    // 0x2b8590: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x2B858Cu, 0x2B8594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8594u;
label_2b8594:
    // 0x2b8594: 0x10510021  beq         $v0, $s1, . + 4 + (0x21 << 2)
    ctx->pc = 0x2B8594u;
    {
        const bool branch_taken_0x2b8594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x2B8598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8594u;
        // 0x2b8598: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8594) {
            ctx->pc = 0x2B861Cu;
            goto label_2b861c;
        }
    }
    ctx->pc = 0x2B859Cu;
    // 0x2b859c: 0xc08a096  jal         func_228258
    ctx->pc = 0x2B859Cu;
    SET_GPR_U32(ctx, 31, 0x2B85A4u);
    ctx->pc = 0x2B85A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B859Cu;
    // 0x2b85a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228258u, 0x2B859Cu, 0x2B85A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B85A4u;
label_2b85a4:
    // 0x2b85a4: 0x1051001c  beq         $v0, $s1, . + 4 + (0x1C << 2)
    ctx->pc = 0x2B85A4u;
    {
        const bool branch_taken_0x2b85a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x2B85A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B85A4u;
        // 0x2b85a8: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b85a4) {
            ctx->pc = 0x2B8618u;
            goto label_2b8618;
        }
    }
    ctx->pc = 0x2B85ACu;
    // 0x2b85ac: 0x86840092  lh          $a0, 0x92($s4)
    ctx->pc = 0x2b85acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 146)));
    // 0x2b85b0: 0x86050092  lh          $a1, 0x92($s0)
    ctx->pc = 0x2b85b0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
    // 0x2b85b4: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2b85b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x2b85b8: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2b85b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2b85bc: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2b85bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2b85c0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2b85c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2b85c4: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x2B85C4u;
    SET_GPR_U32(ctx, 31, 0x2B85CCu);
    ctx->pc = 0x2B85C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B85C4u;
    // 0x2b85c8: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2B85C4u, 0x2B85CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B85CCu;
label_2b85cc:
    // 0x2b85cc: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2b85ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2b85d0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2b85d0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2b85d4: 0x3c013edc  lui         $at, 0x3EDC
    ctx->pc = 0x2b85d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16092 << 16));
    // 0x2b85d8: 0x342128f6  ori         $at, $at, 0x28F6
    ctx->pc = 0x2b85d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10486);
    // 0x2b85dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b85dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b85e0: 0x2aa20004  slti        $v0, $s5, 0x4
    ctx->pc = 0x2b85e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2b85e4: 0xc480013c  lwc1        $f0, 0x13C($a0)
    ctx->pc = 0x2b85e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b85e8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2b85e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2b85ec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B85ECu;
    {
        const bool branch_taken_0x2b85ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B85F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B85ECu;
        // 0x2b85f0: 0x46010042  mul.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b85ec) {
            ctx->pc = 0x2B8604u;
            goto label_2b8604;
        }
    }
    ctx->pc = 0x2B85F4u;
    // 0x2b85f4: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2b85f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x2b85f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b85f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b85fc: 0x0  nop
    ctx->pc = 0x2b85fcu;
    // NOP
    // 0x2b8600: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b8600u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2b8604:
    // 0x2b8604: 0x46010802  mul.s       $f0, $f1, $f1
    ctx->pc = 0x2b8604u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2b8608: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2b8608u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b860c: 0x0  nop
    ctx->pc = 0x2b860cu;
    // NOP
    // 0x2b8610: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2B8610u;
    {
        const bool branch_taken_0x2b8610 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b8610) {
            ctx->pc = 0x2B8628u;
            goto label_2b8628;
        }
    }
    ctx->pc = 0x2B8618u;
label_2b8618:
    // 0x2b8618: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x2b8618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_2b861c:
    // 0x2b861c: 0x8c4319e8  lw          $v1, 0x19E8($v0)
    ctx->pc = 0x2b861cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6632)));
    // 0x2b8620: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2B8620u;
    {
        const bool branch_taken_0x2b8620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8620u;
        // 0x2b8624: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8620) {
            ctx->pc = 0x2B8660u;
            goto label_2b8660;
        }
    }
    ctx->pc = 0x2B8628u;
label_2b8628:
    // 0x2b8628: 0xc0a2fc0  jal         func_28BF00
    ctx->pc = 0x2B8628u;
    SET_GPR_U32(ctx, 31, 0x2B8630u);
    ctx->pc = 0x28BF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BF00u, 0x2B8628u, 0x2B8630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8630u;
label_2b8630:
    // 0x2b8630: 0x0  nop
    ctx->pc = 0x2b8630u;
    // NOP
    // 0x2b8634: 0x0  nop
    ctx->pc = 0x2b8634u;
    // NOP
    // 0x2b8638: 0x46140044  c1          0x140044
    ctx->pc = 0x2b8638u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x2b863c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2b863cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x2b8640: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2b8640u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b8644: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2b8644u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2b8648: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2b8648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2b864c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2b864cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2b8650: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b8650u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b8654: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2b8654u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2b8658: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b8658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b865c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2b865cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2b8660:
    // 0x2b8660: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2b8660u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b8664: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2b8664u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b8668: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2b8668u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b866c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2b866cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b8670: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2b8670u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b8674: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x2b8674u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b8678: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b8678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b867c: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x2b867cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b8680: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B8684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8680u;
        // 0x2b8684: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B8688u;
}
