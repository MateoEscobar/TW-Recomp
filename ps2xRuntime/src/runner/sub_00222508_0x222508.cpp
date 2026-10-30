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

// Function: sub_00222508
// Address: 0x222508 - 0x2225d8
void sub_00222508_0x222508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222508_0x222508");
#endif

    switch (ctx->pc) {
        case 0x22255cu: goto label_22255c;
        case 0x22258cu: goto label_22258c;
        case 0x2225b4u: goto label_2225b4;
        default: break;
    }

    ctx->pc = 0x222508u;

    // 0x222508: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x222508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x22250c: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x22250cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x222510: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x222510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x222514: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x222514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
    // 0x222518: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x222518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x22251c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x22251cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222520: 0xe7b60050  swc1        $f22, 0x50($sp)
    ctx->pc = 0x222520u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x222524: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x222524u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222528: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x222528u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x22252c: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x22252cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x222530: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x222530u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x222534: 0x46007546  mov.s       $f21, $f14
    ctx->pc = 0x222534u;
    ctx->f[21] = FPU_MOV_S(ctx->f[14]);
    // 0x222538: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x222538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x22253c: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x22253cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x222540: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x222540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222544: 0x86220092  lh          $v0, 0x92($s1)
    ctx->pc = 0x222544u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
    // 0x222548: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x222548u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x22254c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22254cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x222550: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x222550u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x222554: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x222554u;
    SET_GPR_U32(ctx, 31, 0x22255Cu);
    ctx->pc = 0x222558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222554u;
    // 0x222558: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x222554u, 0x22255Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22255Cu;
label_22255c:
    // 0x22255c: 0x4614a502  mul.s       $f20, $f20, $f20
    ctx->pc = 0x22255cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x222560: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x222560u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x222564: 0x0  nop
    ctx->pc = 0x222564u;
    // NOP
    // 0x222568: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x222568u;
    {
        const bool branch_taken_0x222568 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x22256Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222568u;
        // 0x22256c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222568) {
            ctx->pc = 0x2225B4u;
            goto label_2225b4;
        }
    }
    ctx->pc = 0x222570u;
    // 0x222570: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x222570u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x222574: 0x0  nop
    ctx->pc = 0x222574u;
    // NOP
    // 0x222578: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x222578u;
    {
        const bool branch_taken_0x222578 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22257Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222578u;
        // 0x22257c: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x222578) {
            ctx->pc = 0x22259Cu;
            goto label_22259c;
        }
    }
    ctx->pc = 0x222580u;
    // 0x222580: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x222580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222584: 0xc0889c4  jal         func_222710
    ctx->pc = 0x222584u;
    SET_GPR_U32(ctx, 31, 0x22258Cu);
    ctx->pc = 0x222588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222584u;
    // 0x222588: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222710u, 0x222584u, 0x22258Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22258Cu;
label_22258c:
    // 0x22258c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22258Cu;
    {
        const bool branch_taken_0x22258c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x222590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22258Cu;
        // 0x222590: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22258c) {
            ctx->pc = 0x2225A0u;
            goto label_2225a0;
        }
    }
    ctx->pc = 0x222594u;
    // 0x222594: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x222594u;
    {
        const bool branch_taken_0x222594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222594u;
        // 0x222598: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222594) {
            ctx->pc = 0x2225B4u;
            goto label_2225b4;
        }
    }
    ctx->pc = 0x22259Cu;
label_22259c:
    // 0x22259c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22259cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2225a0:
    // 0x2225a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2225a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2225a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2225a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2225a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2225a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2225ac: 0xc0888dc  jal         func_222370
    ctx->pc = 0x2225ACu;
    SET_GPR_U32(ctx, 31, 0x2225B4u);
    ctx->pc = 0x2225B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2225ACu;
    // 0x2225b0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222370u, 0x2225ACu, 0x2225B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2225B4u;
label_2225b4:
    // 0x2225b4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2225b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2225b8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2225b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2225bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2225bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2225c0: 0xc7b60050  lwc1        $f22, 0x50($sp)
    ctx->pc = 0x2225c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2225c4: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x2225c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2225c8: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x2225c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2225cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2225CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2225D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2225CCu;
        // 0x2225d0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2225CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2225D4u;
    // 0x2225d4: 0x0  nop
    ctx->pc = 0x2225d4u;
    // NOP
    ctx->pc = 0x2225d8u;
}
