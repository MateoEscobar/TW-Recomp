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

// Function: sub_00225520
// Address: 0x225520 - 0x2256a0
void sub_00225520_0x225520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225520_0x225520");
#endif

    switch (ctx->pc) {
        case 0x225544u: goto label_225544;
        case 0x225560u: goto label_225560;
        case 0x225570u: goto label_225570;
        case 0x2255b8u: goto label_2255b8;
        case 0x2255ccu: goto label_2255cc;
        case 0x2255e0u: goto label_2255e0;
        case 0x2255f0u: goto label_2255f0;
        case 0x22565cu: goto label_22565c;
        case 0x225674u: goto label_225674;
        default: break;
    }

    ctx->pc = 0x225520u;

    // 0x225520: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x225520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x225524: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x225524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x225528: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x225528u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22552c: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x22552cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x225530: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x225530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225534: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x225534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x225538: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x225538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22553c: 0xc08a684  jal         func_229A10
    ctx->pc = 0x22553Cu;
    SET_GPR_U32(ctx, 31, 0x225544u);
    ctx->pc = 0x225540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22553Cu;
    // 0x225540: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229A10u, 0x22553Cu, 0x225544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225544u;
label_225544:
    // 0x225544: 0xde0200e0  ld          $v0, 0xE0($s0)
    ctx->pc = 0x225544u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x225548: 0x211ba  dsrl        $v0, $v0, 6
    ctx->pc = 0x225548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 6);
    // 0x22554c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22554cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x225550: 0x1440004b  bnez        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x225550u;
    {
        const bool branch_taken_0x225550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225550u;
        // 0x225554: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x225550) {
            ctx->pc = 0x225680u;
            goto label_225680;
        }
    }
    ctx->pc = 0x225558u;
    // 0x225558: 0xc089f98  jal         func_227E60
    ctx->pc = 0x225558u;
    SET_GPR_U32(ctx, 31, 0x225560u);
    ctx->pc = 0x22555Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225558u;
    // 0x22555c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x225558u, 0x225560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225560u;
label_225560:
    // 0x225560: 0x14400048  bnez        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x225560u;
    {
        const bool branch_taken_0x225560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225560u;
        // 0x225564: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225560) {
            ctx->pc = 0x225684u;
            goto label_225684;
        }
    }
    ctx->pc = 0x225568u;
    // 0x225568: 0xc089f4a  jal         func_227D28
    ctx->pc = 0x225568u;
    SET_GPR_U32(ctx, 31, 0x225570u);
    ctx->pc = 0x22556Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225568u;
    // 0x22556c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D28u, 0x225568u, 0x225570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225570u;
label_225570:
    // 0x225570: 0x14400044  bnez        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x225570u;
    {
        const bool branch_taken_0x225570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225570u;
        // 0x225574: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225570) {
            ctx->pc = 0x225684u;
            goto label_225684;
        }
    }
    ctx->pc = 0x225578u;
    // 0x225578: 0x3c01be80  lui         $at, 0xBE80
    ctx->pc = 0x225578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48768 << 16));
    // 0x22557c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22557cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x225580: 0x0  nop
    ctx->pc = 0x225580u;
    // NOP
    // 0x225584: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x225584u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x225588: 0x0  nop
    ctx->pc = 0x225588u;
    // NOP
    // 0x22558c: 0x4502003e  bc1fl       . + 4 + (0x3E << 2)
    ctx->pc = 0x22558Cu;
    {
        const bool branch_taken_0x22558c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22558c) {
            ctx->pc = 0x225590u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22558Cu;
            // 0x225590: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x225688u;
            goto label_225688;
        }
    }
    ctx->pc = 0x225594u;
    // 0x225594: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x225594u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x225598: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x225598u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22559c: 0x0  nop
    ctx->pc = 0x22559cu;
    // NOP
    // 0x2255a0: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x2255a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2255a4: 0x0  nop
    ctx->pc = 0x2255a4u;
    // NOP
    // 0x2255a8: 0x45020037  bc1fl       . + 4 + (0x37 << 2)
    ctx->pc = 0x2255A8u;
    {
        const bool branch_taken_0x2255a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2255a8) {
            ctx->pc = 0x2255ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2255A8u;
            // 0x2255ac: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x225688u;
            goto label_225688;
        }
    }
    ctx->pc = 0x2255B0u;
    // 0x2255b0: 0xc088ee6  jal         func_223B98
    ctx->pc = 0x2255B0u;
    SET_GPR_U32(ctx, 31, 0x2255B8u);
    ctx->pc = 0x2255B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2255B0u;
    // 0x2255b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B98u, 0x2255B0u, 0x2255B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2255B8u;
label_2255b8:
    // 0x2255b8: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2255B8u;
    {
        const bool branch_taken_0x2255b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2255BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2255B8u;
        // 0x2255bc: 0x3c050004  lui         $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2255b8) {
            ctx->pc = 0x225638u;
            goto label_225638;
        }
    }
    ctx->pc = 0x2255C0u;
    // 0x2255c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2255c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2255c4: 0xc089998  jal         func_226660
    ctx->pc = 0x2255C4u;
    SET_GPR_U32(ctx, 31, 0x2255CCu);
    ctx->pc = 0x2255C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2255C4u;
    // 0x2255c8: 0x34a58000  ori         $a1, $a1, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2255C4u, 0x2255CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2255CCu;
label_2255cc:
    // 0x2255cc: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2255CCu;
    {
        const bool branch_taken_0x2255cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2255D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2255CCu;
        // 0x2255d0: 0x3c050004  lui         $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2255cc) {
            ctx->pc = 0x225638u;
            goto label_225638;
        }
    }
    ctx->pc = 0x2255D4u;
    // 0x2255d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2255d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2255d8: 0xc089998  jal         func_226660
    ctx->pc = 0x2255D8u;
    SET_GPR_U32(ctx, 31, 0x2255E0u);
    ctx->pc = 0x2255DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2255D8u;
    // 0x2255dc: 0x34a58000  ori         $a1, $a1, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2255D8u, 0x2255E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2255E0u;
label_2255e0:
    // 0x2255e0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2255E0u;
    {
        const bool branch_taken_0x2255e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2255e0) {
            ctx->pc = 0x2255F8u;
            goto label_2255f8;
        }
    }
    ctx->pc = 0x2255E8u;
    // 0x2255e8: 0xc05dc36  jal         func_1770D8
    ctx->pc = 0x2255E8u;
    SET_GPR_U32(ctx, 31, 0x2255F0u);
    ctx->pc = 0x2255ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2255E8u;
    // 0x2255ec: 0x8e0400d8  lw          $a0, 0xD8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1770D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1770D8u, 0x2255E8u, 0x2255F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2255F0u;
label_2255f0:
    // 0x2255f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2255F0u;
    {
        const bool branch_taken_0x2255f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2255F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2255F0u;
        // 0x2255f4: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2255f0) {
            ctx->pc = 0x225600u;
            goto label_225600;
        }
    }
    ctx->pc = 0x2255F8u;
label_2255f8:
    // 0x2255f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2255f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2255fc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2255fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_225600:
    // 0x225600: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x225600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x225604: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x225604u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x225608: 0x0  nop
    ctx->pc = 0x225608u;
    // NOP
    // 0x22560c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x22560cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x225610: 0x0  nop
    ctx->pc = 0x225610u;
    // NOP
    // 0x225614: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x225614u;
    {
        const bool branch_taken_0x225614 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x225618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225614u;
        // 0x225618: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225614) {
            ctx->pc = 0x225678u;
            goto label_225678;
        }
    }
    ctx->pc = 0x22561Cu;
    // 0x22561c: 0x3405f7fb  ori         $a1, $zero, 0xF7FB
    ctx->pc = 0x22561cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63483);
    // 0x225620: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x225620u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x225624: 0x34a590ef  ori         $a1, $a1, 0x90EF
    ctx->pc = 0x225624u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)37103);
    // 0x225628: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x225628u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
    // 0x22562c: 0x34a507f0  ori         $a1, $a1, 0x7F0
    ctx->pc = 0x22562cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2032);
    // 0x225630: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x225630u;
    {
        const bool branch_taken_0x225630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225630u;
        // 0x225634: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225630) {
            ctx->pc = 0x225654u;
            goto label_225654;
        }
    }
    ctx->pc = 0x225638u;
label_225638:
    // 0x225638: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x225638u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22563c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22563cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225640: 0x3405f7fb  ori         $a1, $zero, 0xF7FB
    ctx->pc = 0x225640u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63483);
    // 0x225644: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x225644u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x225648: 0x34a591ef  ori         $a1, $a1, 0x91EF
    ctx->pc = 0x225648u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)37359);
    // 0x22564c: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x22564cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
    // 0x225650: 0x34a507f0  ori         $a1, $a1, 0x7F0
    ctx->pc = 0x225650u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2032);
label_225654:
    // 0x225654: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x225654u;
    SET_GPR_U32(ctx, 31, 0x22565Cu);
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x225654u, 0x22565Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22565Cu;
label_22565c:
    // 0x22565c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x22565Cu;
    {
        const bool branch_taken_0x22565c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22565c) {
            ctx->pc = 0x225660u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22565Cu;
            // 0x225660: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x225684u;
            goto label_225684;
        }
    }
    ctx->pc = 0x225664u;
    // 0x225664: 0x3c058fc5  lui         $a1, 0x8FC5
    ctx->pc = 0x225664u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36805 << 16));
    // 0x225668: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x225668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22566c: 0xc089998  jal         func_226660
    ctx->pc = 0x22566Cu;
    SET_GPR_U32(ctx, 31, 0x225674u);
    ctx->pc = 0x225670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22566Cu;
    // 0x225670: 0x34a57a60  ori         $a1, $a1, 0x7A60 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)31328);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x22566Cu, 0x225674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225674u;
label_225674:
    // 0x225674: 0x2c510001  sltiu       $s1, $v0, 0x1
    ctx->pc = 0x225674u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_225678:
    // 0x225678: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x225678u;
    {
        const bool branch_taken_0x225678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22567Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225678u;
        // 0x22567c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225678) {
            ctx->pc = 0x225684u;
            goto label_225684;
        }
    }
    ctx->pc = 0x225680u;
label_225680:
    // 0x225680: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x225680u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_225684:
    // 0x225684: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x225684u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_225688:
    // 0x225688: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x225688u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22568c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22568cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225690: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x225690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x225694: 0x3e00008  jr          $ra
    ctx->pc = 0x225694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225694u;
        // 0x225698: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22569Cu;
    // 0x22569c: 0x0  nop
    ctx->pc = 0x22569cu;
    // NOP
    ctx->pc = 0x2256a0u;
}
