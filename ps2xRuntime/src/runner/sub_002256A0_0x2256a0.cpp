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

// Function: sub_002256A0
// Address: 0x2256a0 - 0x225830
void sub_002256A0_0x2256a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002256A0_0x2256a0");
#endif

    switch (ctx->pc) {
        case 0x22570cu: goto label_22570c;
        case 0x22571cu: goto label_22571c;
        case 0x225748u: goto label_225748;
        case 0x22576cu: goto label_22576c;
        case 0x225784u: goto label_225784;
        case 0x225794u: goto label_225794;
        case 0x2257f8u: goto label_2257f8;
        case 0x225810u: goto label_225810;
        default: break;
    }

    ctx->pc = 0x2256a0u;

    // 0x2256a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2256a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2256a4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2256a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2256a8: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x2256a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2256ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2256acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2256b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2256b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2256b4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2256b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2256b8: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x2256B8u;
    {
        const bool branch_taken_0x2256b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2256BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2256B8u;
        // 0x2256bc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2256b8) {
            ctx->pc = 0x2256F0u;
            goto label_2256f0;
        }
    }
    ctx->pc = 0x2256C0u;
    // 0x2256c0: 0x84a40092  lh          $a0, 0x92($a1)
    ctx->pc = 0x2256c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 146)));
    // 0x2256c4: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2256c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x2256c8: 0x86020092  lh          $v0, 0x92($s0)
    ctx->pc = 0x2256c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
    // 0x2256cc: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x2256ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
    // 0x2256d0: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2256d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2256d4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2256d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2256d8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2256d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2256dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2256dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2256e0: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2256e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2256e4: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2256e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2256e8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2256e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2256ec: 0x46000505  abs.s       $f20, $f0
    ctx->pc = 0x2256ecu;
    ctx->f[20] = FPU_ABS_S(ctx->f[0]);
label_2256f0:
    // 0x2256f0: 0xde0200e0  ld          $v0, 0xE0($s0)
    ctx->pc = 0x2256f0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x2256f4: 0x211ba  dsrl        $v0, $v0, 6
    ctx->pc = 0x2256f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 6);
    // 0x2256f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2256f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2256fc: 0x14400046  bnez        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x2256FCu;
    {
        const bool branch_taken_0x2256fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2256FCu;
        // 0x225700: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2256fc) {
            ctx->pc = 0x225818u;
            goto label_225818;
        }
    }
    ctx->pc = 0x225704u;
    // 0x225704: 0xc089f98  jal         func_227E60
    ctx->pc = 0x225704u;
    SET_GPR_U32(ctx, 31, 0x22570Cu);
    ctx->pc = 0x225708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225704u;
    // 0x225708: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x225704u, 0x22570Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22570Cu;
label_22570c:
    // 0x22570c: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x22570Cu;
    {
        const bool branch_taken_0x22570c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22570Cu;
        // 0x225710: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22570c) {
            ctx->pc = 0x225818u;
            goto label_225818;
        }
    }
    ctx->pc = 0x225714u;
    // 0x225714: 0xc089f4a  jal         func_227D28
    ctx->pc = 0x225714u;
    SET_GPR_U32(ctx, 31, 0x22571Cu);
    ctx->pc = 0x225718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225714u;
    // 0x225718: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D28u, 0x225714u, 0x22571Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22571Cu;
label_22571c:
    // 0x22571c: 0x1440003e  bnez        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x22571Cu;
    {
        const bool branch_taken_0x22571c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22571Cu;
        // 0x225720: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22571c) {
            ctx->pc = 0x225818u;
            goto label_225818;
        }
    }
    ctx->pc = 0x225724u;
    // 0x225724: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x225724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x225728: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x225728u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22572c: 0x0  nop
    ctx->pc = 0x22572cu;
    // NOP
    // 0x225730: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x225730u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x225734: 0x0  nop
    ctx->pc = 0x225734u;
    // NOP
    // 0x225738: 0x45020038  bc1fl       . + 4 + (0x38 << 2)
    ctx->pc = 0x225738u;
    {
        const bool branch_taken_0x225738 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x225738) {
            ctx->pc = 0x22573Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x225738u;
            // 0x22573c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22581Cu;
            goto label_22581c;
        }
    }
    ctx->pc = 0x225740u;
    // 0x225740: 0xc088ee6  jal         func_223B98
    ctx->pc = 0x225740u;
    SET_GPR_U32(ctx, 31, 0x225748u);
    ctx->pc = 0x225744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225740u;
    // 0x225744: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B98u, 0x225740u, 0x225748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225748u;
label_225748:
    // 0x225748: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x225748u;
    {
        const bool branch_taken_0x225748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22574Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225748u;
        // 0x22574c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225748) {
            ctx->pc = 0x2257D8u;
            goto label_2257d8;
        }
    }
    ctx->pc = 0x225750u;
    // 0x225750: 0x3405f7fb  ori         $a1, $zero, 0xF7FB
    ctx->pc = 0x225750u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63483);
    // 0x225754: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x225754u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x225758: 0x34a590ef  ori         $a1, $a1, 0x90EF
    ctx->pc = 0x225758u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)37103);
    // 0x22575c: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x22575cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
    // 0x225760: 0x34a507f0  ori         $a1, $a1, 0x7F0
    ctx->pc = 0x225760u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2032);
    // 0x225764: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x225764u;
    SET_GPR_U32(ctx, 31, 0x22576Cu);
    ctx->pc = 0x225768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225764u;
    // 0x225768: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x225764u, 0x22576Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22576Cu;
label_22576c:
    // 0x22576c: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x22576Cu;
    {
        const bool branch_taken_0x22576c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22576Cu;
        // 0x225770: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22576c) {
            ctx->pc = 0x2257D8u;
            goto label_2257d8;
        }
    }
    ctx->pc = 0x225774u;
    // 0x225774: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x225774u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
    // 0x225778: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x225778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22577c: 0xc089998  jal         func_226660
    ctx->pc = 0x22577Cu;
    SET_GPR_U32(ctx, 31, 0x225784u);
    ctx->pc = 0x225780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22577Cu;
    // 0x225780: 0x34a58000  ori         $a1, $a1, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x22577Cu, 0x225784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225784u;
label_225784:
    // 0x225784: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x225784u;
    {
        const bool branch_taken_0x225784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x225784) {
            ctx->pc = 0x22579Cu;
            goto label_22579c;
        }
    }
    ctx->pc = 0x22578Cu;
    // 0x22578c: 0xc05dc36  jal         func_1770D8
    ctx->pc = 0x22578Cu;
    SET_GPR_U32(ctx, 31, 0x225794u);
    ctx->pc = 0x225790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22578Cu;
    // 0x225790: 0x8e0400d8  lw          $a0, 0xD8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1770D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1770D8u, 0x22578Cu, 0x225794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225794u;
label_225794:
    // 0x225794: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x225794u;
    {
        const bool branch_taken_0x225794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225794u;
        // 0x225798: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x225794) {
            ctx->pc = 0x2257A0u;
            goto label_2257a0;
        }
    }
    ctx->pc = 0x22579Cu;
label_22579c:
    // 0x22579c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x22579cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2257a0:
    // 0x2257a0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2257a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2257a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2257a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2257a8: 0x0  nop
    ctx->pc = 0x2257a8u;
    // NOP
    // 0x2257ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2257acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2257b0: 0x0  nop
    ctx->pc = 0x2257b0u;
    // NOP
    // 0x2257b4: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x2257B4u;
    {
        const bool branch_taken_0x2257b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2257B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2257B4u;
        // 0x2257b8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2257b4) {
            ctx->pc = 0x225814u;
            goto label_225814;
        }
    }
    ctx->pc = 0x2257BCu;
    // 0x2257bc: 0x3405f7fb  ori         $a1, $zero, 0xF7FB
    ctx->pc = 0x2257bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63483);
    // 0x2257c0: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x2257c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x2257c4: 0x34a590ef  ori         $a1, $a1, 0x90EF
    ctx->pc = 0x2257c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)37103);
    // 0x2257c8: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x2257c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
    // 0x2257cc: 0x34a507f0  ori         $a1, $a1, 0x7F0
    ctx->pc = 0x2257ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2032);
    // 0x2257d0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2257D0u;
    {
        const bool branch_taken_0x2257d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2257D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2257D0u;
        // 0x2257d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2257d0) {
            ctx->pc = 0x2257F0u;
            goto label_2257f0;
        }
    }
    ctx->pc = 0x2257D8u;
label_2257d8:
    // 0x2257d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2257d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2257dc: 0x3405f7fb  ori         $a1, $zero, 0xF7FB
    ctx->pc = 0x2257dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63483);
    // 0x2257e0: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x2257e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x2257e4: 0x34a591ef  ori         $a1, $a1, 0x91EF
    ctx->pc = 0x2257e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)37359);
    // 0x2257e8: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x2257e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
    // 0x2257ec: 0x34a507f0  ori         $a1, $a1, 0x7F0
    ctx->pc = 0x2257ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2032);
label_2257f0:
    // 0x2257f0: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x2257F0u;
    SET_GPR_U32(ctx, 31, 0x2257F8u);
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x2257F0u, 0x2257F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2257F8u;
label_2257f8:
    // 0x2257f8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2257F8u;
    {
        const bool branch_taken_0x2257f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2257f8) {
            ctx->pc = 0x2257FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2257F8u;
            // 0x2257fc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x225818u;
            goto label_225818;
        }
    }
    ctx->pc = 0x225800u;
    // 0x225800: 0x3c058fc5  lui         $a1, 0x8FC5
    ctx->pc = 0x225800u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36805 << 16));
    // 0x225804: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x225804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225808: 0xc089998  jal         func_226660
    ctx->pc = 0x225808u;
    SET_GPR_U32(ctx, 31, 0x225810u);
    ctx->pc = 0x22580Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225808u;
    // 0x22580c: 0x34a57a60  ori         $a1, $a1, 0x7A60 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)31328);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x225808u, 0x225810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225810u;
label_225810:
    // 0x225810: 0x2c510001  sltiu       $s1, $v0, 0x1
    ctx->pc = 0x225810u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_225814:
    // 0x225814: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x225814u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_225818:
    // 0x225818: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x225818u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22581c:
    // 0x22581c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22581cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225820: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x225820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225824: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x225824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x225828: 0x3e00008  jr          $ra
    ctx->pc = 0x225828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22582Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225828u;
        // 0x22582c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225828u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225830u;
}
