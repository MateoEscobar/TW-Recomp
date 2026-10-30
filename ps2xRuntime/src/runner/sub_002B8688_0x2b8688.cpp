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

// Function: sub_002B8688
// Address: 0x2b8688 - 0x2b8868
void sub_002B8688_0x2b8688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B8688_0x2b8688");
#endif

    switch (ctx->pc) {
        case 0x2b86c0u: goto label_2b86c0;
        case 0x2b86d0u: goto label_2b86d0;
        case 0x2b86e4u: goto label_2b86e4;
        case 0x2b86ecu: goto label_2b86ec;
        case 0x2b8714u: goto label_2b8714;
        case 0x2b8720u: goto label_2b8720;
        case 0x2b8744u: goto label_2b8744;
        case 0x2b8758u: goto label_2b8758;
        case 0x2b8774u: goto label_2b8774;
        case 0x2b87a4u: goto label_2b87a4;
        case 0x2b87c8u: goto label_2b87c8;
        case 0x2b87dcu: goto label_2b87dc;
        case 0x2b87fcu: goto label_2b87fc;
        case 0x2b8838u: goto label_2b8838;
        default: break;
    }

    ctx->pc = 0x2b8688u;

    // 0x2b8688: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2b8688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2b868c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2b868cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2b8690: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2b8690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2b8694: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b8694u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8698: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2b8698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2b869c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2b869cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2b86a0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2b86a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b86a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b86a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b86a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b86a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b86ac: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x2b86acu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2b86b0: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x2b86b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2b86b4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2b86b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b86b8: 0xc087502  jal         func_21D408
    ctx->pc = 0x2B86B8u;
    SET_GPR_U32(ctx, 31, 0x2B86C0u);
    ctx->pc = 0x2B86BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B86B8u;
    // 0x2b86bc: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2B86B8u, 0x2B86C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B86C0u;
label_2b86c0:
    // 0x2b86c0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2b86c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b86c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2b86c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b86c8: 0xc0a3792  jal         func_28DE48
    ctx->pc = 0x2B86C8u;
    SET_GPR_U32(ctx, 31, 0x2B86D0u);
    ctx->pc = 0x2B86CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B86C8u;
    // 0x2b86cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DE48u, 0x2B86C8u, 0x2B86D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B86D0u;
label_2b86d0:
    // 0x2b86d0: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B86D0u;
    {
        const bool branch_taken_0x2b86d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b86d0) {
            ctx->pc = 0x2B86D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B86D0u;
            // 0x2b86d4: 0x8e020028  lw          $v0, 0x28($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B86F4u;
            goto label_2b86f4;
        }
    }
    ctx->pc = 0x2B86D8u;
    // 0x2b86d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b86d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b86dc: 0xc0a445e  jal         func_291178
    ctx->pc = 0x2B86DCu;
    SET_GPR_U32(ctx, 31, 0x2B86E4u);
    ctx->pc = 0x2B86E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B86DCu;
    // 0x2b86e0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291178u, 0x2B86DCu, 0x2B86E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B86E4u;
label_2b86e4:
    // 0x2b86e4: 0xc089bdc  jal         func_226F70
    ctx->pc = 0x2B86E4u;
    SET_GPR_U32(ctx, 31, 0x2B86ECu);
    ctx->pc = 0x2B86E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B86E4u;
    // 0x2b86e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226F70u, 0x2B86E4u, 0x2B86ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B86ECu;
label_2b86ec:
    // 0x2b86ec: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x2B86ECu;
    {
        const bool branch_taken_0x2b86ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B86F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B86ECu;
        // 0x2b86f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b86ec) {
            ctx->pc = 0x2B8840u;
            goto label_2b8840;
        }
    }
    ctx->pc = 0x2B86F4u;
label_2b86f4:
    // 0x2b86f4: 0x2412002d  addiu       $s2, $zero, 0x2D
    ctx->pc = 0x2b86f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x2b86f8: 0x14520007  bne         $v0, $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B86F8u;
    {
        const bool branch_taken_0x2b86f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x2B86FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B86F8u;
        // 0x2b86fc: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b86f8) {
            ctx->pc = 0x2B8718u;
            goto label_2b8718;
        }
    }
    ctx->pc = 0x2B8700u;
    // 0x2b8700: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2b8700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b8704: 0x68463fcf  ldl         $a2, 0x3FCF($v0)
    ctx->pc = 0x2b8704u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16335); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2b8708: 0x6c463fc8  ldr         $a2, 0x3FC8($v0)
    ctx->pc = 0x2b8708u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16328); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2b870c: 0xc0a39c2  jal         func_28E708
    ctx->pc = 0x2B870Cu;
    SET_GPR_U32(ctx, 31, 0x2B8714u);
    ctx->pc = 0x2B8710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B870Cu;
    // 0x2b8710: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E708u, 0x2B870Cu, 0x2B8714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8714u;
label_2b8714:
    // 0x2b8714: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x2b8714u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
label_2b8718:
    // 0x2b8718: 0xc08bfa0  jal         func_22FE80
    ctx->pc = 0x2B8718u;
    SET_GPR_U32(ctx, 31, 0x2B8720u);
    ctx->pc = 0x2B871Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8718u;
    // 0x2b871c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE80u, 0x2B8718u, 0x2B8720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8720u;
label_2b8720:
    // 0x2b8720: 0x86240092  lh          $a0, 0x92($s1)
    ctx->pc = 0x2b8720u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
    // 0x2b8724: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2b8724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x2b8728: 0x86650092  lh          $a1, 0x92($s3)
    ctx->pc = 0x2b8728u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
    // 0x2b872c: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2b872cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x2b8730: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2b8730u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2b8734: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2b8734u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2b8738: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2b8738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2b873c: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x2B873Cu;
    SET_GPR_U32(ctx, 31, 0x2B8744u);
    ctx->pc = 0x2B8740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B873Cu;
    // 0x2b8740: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2B873Cu, 0x2B8744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8744u;
label_2b8744:
    // 0x2b8744: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2b8744u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2b8748: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x2b8748u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2b874c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b874cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8750: 0xc08c340  jal         func_230D00
    ctx->pc = 0x2B8750u;
    SET_GPR_U32(ctx, 31, 0x2B8758u);
    ctx->pc = 0x2B8754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8750u;
    // 0x2b8754: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x230D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230D00u, 0x2B8750u, 0x2B8758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8758u;
label_2b8758:
    // 0x2b8758: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2b8758u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2b875c: 0x4614a834  c.lt.s      $f21, $f20
    ctx->pc = 0x2b875cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b8760: 0x0  nop
    ctx->pc = 0x2b8760u;
    // NOP
    // 0x2b8764: 0x4502001a  bc1fl       . + 4 + (0x1A << 2)
    ctx->pc = 0x2B8764u;
    {
        const bool branch_taken_0x2b8764 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b8764) {
            ctx->pc = 0x2B8768u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B8764u;
            // 0x2b8768: 0x8e060028  lw          $a2, 0x28($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B87D0u;
            goto label_2b87d0;
        }
    }
    ctx->pc = 0x2B876Cu;
    // 0x2b876c: 0xc086618  jal         func_219860
    ctx->pc = 0x2B876Cu;
    SET_GPR_U32(ctx, 31, 0x2B8774u);
    ctx->pc = 0x2B8770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B876Cu;
    // 0x2b8770: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219860u, 0x2B876Cu, 0x2B8774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8774u;
label_2b8774:
    // 0x2b8774: 0x46000500  add.s       $f20, $f0, $f0
    ctx->pc = 0x2b8774u;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2b8778: 0x0  nop
    ctx->pc = 0x2b8778u;
    // NOP
    // 0x2b877c: 0x0  nop
    ctx->pc = 0x2b877cu;
    // NOP
    // 0x2b8780: 0x46150044  c1          0x150044
    ctx->pc = 0x2b8780u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x2b8784: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2b8784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2b8788: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2b8788u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2b878c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b878cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8790: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2b8790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b8794: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x2b8794u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x2b8798: 0x46000d68  max.s       $f21, $f1, $f0
    ctx->pc = 0x2b8798u;
    ctx->f[21] = std::max(ctx->f[1], ctx->f[0]);
    // 0x2b879c: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2B879Cu;
    SET_GPR_U32(ctx, 31, 0x2B87A4u);
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2B879Cu, 0x2B87A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B87A4u;
label_2b87a4:
    // 0x2b87a4: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2B87A4u;
    {
        const bool branch_taken_0x2b87a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B87A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B87A4u;
        // 0x2b87a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b87a4) {
            ctx->pc = 0x2B883Cu;
            goto label_2b883c;
        }
    }
    ctx->pc = 0x2B87ACu;
    // 0x2b87ac: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2b87acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b87b0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2b87b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b87b4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2b87b4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2b87b8: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2b87b8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x2b87bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b87bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b87c0: 0xc0bf3d4  jal         func_2FCF50
    ctx->pc = 0x2B87C0u;
    SET_GPR_U32(ctx, 31, 0x2B87C8u);
    ctx->pc = 0x2B87C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B87C0u;
    // 0x2b87c4: 0x240803e8  addiu       $t0, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCF50u, 0x2B87C0u, 0x2B87C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B87C8u;
label_2b87c8:
    // 0x2b87c8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2B87C8u;
    {
        const bool branch_taken_0x2b87c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B87CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B87C8u;
        // 0x2b87cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b87c8) {
            ctx->pc = 0x2B8840u;
            goto label_2b8840;
        }
    }
    ctx->pc = 0x2B87D0u;
label_2b87d0:
    // 0x2b87d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b87d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b87d4: 0xc0891de  jal         func_224778
    ctx->pc = 0x2B87D4u;
    SET_GPR_U32(ctx, 31, 0x2B87DCu);
    ctx->pc = 0x2B87D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B87D4u;
    // 0x2b87d8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224778u, 0x2B87D4u, 0x2B87DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B87DCu;
label_2b87dc:
    // 0x2b87dc: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B87DCu;
    {
        const bool branch_taken_0x2b87dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b87dc) {
            ctx->pc = 0x2B87E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B87DCu;
            // 0x2b87e0: 0x8e020028  lw          $v0, 0x28($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B8804u;
            goto label_2b8804;
        }
    }
    ctx->pc = 0x2B87E4u;
    // 0x2b87e4: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x2b87e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x2b87e8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2b87e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b87ec: 0x68463fff  ldl         $a2, 0x3FFF($v0)
    ctx->pc = 0x2b87ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16383); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2b87f0: 0x6c463ff8  ldr         $a2, 0x3FF8($v0)
    ctx->pc = 0x2b87f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16376); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2b87f4: 0xc0a39c2  jal         func_28E708
    ctx->pc = 0x2B87F4u;
    SET_GPR_U32(ctx, 31, 0x2B87FCu);
    ctx->pc = 0x2B87F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B87F4u;
    // 0x2b87f8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E708u, 0x2B87F4u, 0x2B87FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B87FCu;
label_2b87fc:
    // 0x2b87fc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2B87FCu;
    {
        const bool branch_taken_0x2b87fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B87FCu;
        // 0x2b8800: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b87fc) {
            ctx->pc = 0x2B883Cu;
            goto label_2b883c;
        }
    }
    ctx->pc = 0x2B8804u;
label_2b8804:
    // 0x2b8804: 0x3842002d  xori        $v0, $v0, 0x2D
    ctx->pc = 0x2b8804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)45);
    // 0x2b8808: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2B8808u;
    {
        const bool branch_taken_0x2b8808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B880Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8808u;
        // 0x2b880c: 0x2403f7ff  addiu       $v1, $zero, -0x801 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8808) {
            ctx->pc = 0x2B883Cu;
            goto label_2b883c;
        }
    }
    ctx->pc = 0x2B8810u;
    // 0x2b8810: 0xde2200e0  ld          $v0, 0xE0($s1)
    ctx->pc = 0x2b8810u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x2b8814: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2b8814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2b8818: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2b8818u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b881c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2b881cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8820: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b8820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b8824: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b8824u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8828: 0xfe2200e0  sd          $v0, 0xE0($s1)
    ctx->pc = 0x2b8828u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 224), GPR_U64(ctx, 2));
    // 0x2b882c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2b882cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b8830: 0xc0a3892  jal         func_28E248
    ctx->pc = 0x2B8830u;
    SET_GPR_U32(ctx, 31, 0x2B8838u);
    ctx->pc = 0x2B8834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8830u;
    // 0x2b8834: 0x8e060028  lw          $a2, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E248u, 0x2B8830u, 0x2B8838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8838u;
label_2b8838:
    // 0x2b8838: 0xae120028  sw          $s2, 0x28($s0)
    ctx->pc = 0x2b8838u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 18));
label_2b883c:
    // 0x2b883c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b883cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b8840:
    // 0x2b8840: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2b8840u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b8844: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2b8844u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b8848: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2b8848u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b884c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2b884cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b8850: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b8850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b8854: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x2b8854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2b8858: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x2b8858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b885c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B885Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B8860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B885Cu;
        // 0x2b8860: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B885Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B8864u;
    // 0x2b8864: 0x0  nop
    ctx->pc = 0x2b8864u;
    // NOP
    ctx->pc = 0x2b8868u;
}
