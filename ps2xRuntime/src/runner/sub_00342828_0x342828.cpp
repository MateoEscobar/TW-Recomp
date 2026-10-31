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

// Function: sub_00342828
// Address: 0x342828 - 0x3428d0
void sub_00342828_0x342828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342828_0x342828");
#endif

    switch (ctx->pc) {
        case 0x342828u: goto label_342828;
        case 0x34282cu: goto label_34282c;
        case 0x342830u: goto label_342830;
        case 0x342834u: goto label_342834;
        case 0x342838u: goto label_342838;
        case 0x34283cu: goto label_34283c;
        case 0x342840u: goto label_342840;
        case 0x342844u: goto label_342844;
        case 0x342848u: goto label_342848;
        case 0x34284cu: goto label_34284c;
        case 0x342850u: goto label_342850;
        case 0x342854u: goto label_342854;
        case 0x342858u: goto label_342858;
        case 0x34285cu: goto label_34285c;
        case 0x342860u: goto label_342860;
        case 0x342864u: goto label_342864;
        case 0x342868u: goto label_342868;
        case 0x34286cu: goto label_34286c;
        case 0x342870u: goto label_342870;
        case 0x342874u: goto label_342874;
        case 0x342878u: goto label_342878;
        case 0x34287cu: goto label_34287c;
        case 0x342880u: goto label_342880;
        case 0x342884u: goto label_342884;
        case 0x342888u: goto label_342888;
        case 0x34288cu: goto label_34288c;
        case 0x342890u: goto label_342890;
        case 0x342894u: goto label_342894;
        case 0x342898u: goto label_342898;
        case 0x34289cu: goto label_34289c;
        case 0x3428a0u: goto label_3428a0;
        case 0x3428a4u: goto label_3428a4;
        case 0x3428a8u: goto label_3428a8;
        case 0x3428acu: goto label_3428ac;
        case 0x3428b0u: goto label_3428b0;
        case 0x3428b4u: goto label_3428b4;
        case 0x3428b8u: goto label_3428b8;
        case 0x3428bcu: goto label_3428bc;
        case 0x3428c0u: goto label_3428c0;
        case 0x3428c4u: goto label_3428c4;
        case 0x3428c8u: goto label_3428c8;
        case 0x3428ccu: goto label_3428cc;
        default: break;
    }

    ctx->pc = 0x342828u;

label_342828:
    // 0x342828: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x342828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_34282c:
    // 0x34282c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x34282cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_342830:
    // 0x342830: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x342830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_342834:
    // 0x342834: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x342834u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_342838:
    // 0x342838: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x342838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_34283c:
    // 0x34283c: 0xc0d0790  jal         func_341E40
label_342840:
    if (ctx->pc == 0x342840u) {
        ctx->pc = 0x342840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34283Cu;
        // 0x342840: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342844u;
        goto label_342844;
    }
    ctx->pc = 0x34283Cu;
    SET_GPR_U32(ctx, 31, 0x342844u);
    ctx->pc = 0x342840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34283Cu;
    // 0x342840: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341E40u, 0x34283Cu, 0x342844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342844u;
label_342844:
    // 0x342844: 0x7a220030  lq          $v0, 0x30($s1)
    ctx->pc = 0x342844u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 48)));
label_342848:
    // 0x342848: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x342848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
label_34284c:
    // 0x34284c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x34284cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_342850:
    // 0x342850: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x342850u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_342854:
    // 0x342854: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x342854u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_342858:
    // 0x342858: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x342858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_34285c:
    // 0x34285c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x34285cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_342860:
    // 0x342860: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x342860u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_342864:
    // 0x342864: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x342864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_342868:
    // 0x342868: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x342868u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_34286c:
    // 0x34286c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x34286cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_342870:
    // 0x342870: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x342870u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_342874:
    // 0x342874: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x342874u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_342878:
    // 0x342878: 0xc0d05c2  jal         func_341708
label_34287c:
    if (ctx->pc == 0x34287Cu) {
        ctx->pc = 0x34287Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342878u;
        // 0x34287c: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x342880u;
        goto label_342880;
    }
    ctx->pc = 0x342878u;
    SET_GPR_U32(ctx, 31, 0x342880u);
    ctx->pc = 0x34287Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342878u;
    // 0x34287c: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x341708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341708u, 0x342878u, 0x342880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342880u;
label_342880:
    // 0x342880: 0x8e100080  lw          $s0, 0x80($s0)
    ctx->pc = 0x342880u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_342884:
    // 0x342884: 0x5200000e  beql        $s0, $zero, . + 4 + (0xE << 2)
label_342888:
    if (ctx->pc == 0x342888u) {
        ctx->pc = 0x342888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342884u;
        // 0x342888: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34288Cu;
        goto label_34288c;
    }
    ctx->pc = 0x342884u;
    {
        const bool branch_taken_0x342884 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x342884) {
            ctx->pc = 0x342888u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x342884u;
            // 0x342888: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3428C0u;
            goto label_3428c0;
        }
    }
    ctx->pc = 0x34288Cu;
label_34288c:
    // 0x34288c: 0x96020032  lhu         $v0, 0x32($s0)
    ctx->pc = 0x34288cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 50)));
label_342890:
    // 0x342890: 0x30420005  andi        $v0, $v0, 0x5
    ctx->pc = 0x342890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)5);
label_342894:
    // 0x342894: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_342898:
    if (ctx->pc == 0x342898u) {
        ctx->pc = 0x342898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342894u;
        // 0x342898: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34289Cu;
        goto label_34289c;
    }
    ctx->pc = 0x342894u;
    {
        const bool branch_taken_0x342894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x342898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342894u;
        // 0x342898: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342894) {
            ctx->pc = 0x3428B0u;
            goto label_3428b0;
        }
    }
    ctx->pc = 0x34289Cu;
label_34289c:
    // 0x34289c: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x34289cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_3428a0:
    // 0x3428a0: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x3428a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_3428a4:
    // 0x3428a4: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x3428a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_3428a8:
    // 0x3428a8: 0x60f809  jalr        $v1
label_3428ac:
    if (ctx->pc == 0x3428ACu) {
        ctx->pc = 0x3428ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3428A8u;
        // 0x3428ac: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3428B0u;
        goto label_3428b0;
    }
    ctx->pc = 0x3428A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3428B0u);
        ctx->pc = 0x3428ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3428A8u;
        // 0x3428ac: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3428A8u, 0x3428B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3428B0u;
label_3428b0:
    // 0x3428b0: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x3428b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3428b4:
    // 0x3428b4: 0x5600fff6  bnel        $s0, $zero, . + 4 + (-0xA << 2)
label_3428b8:
    if (ctx->pc == 0x3428B8u) {
        ctx->pc = 0x3428B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3428B4u;
        // 0x3428b8: 0x96020032  lhu         $v0, 0x32($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 50)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3428BCu;
        goto label_3428bc;
    }
    ctx->pc = 0x3428B4u;
    {
        const bool branch_taken_0x3428b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3428b4) {
            ctx->pc = 0x3428B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3428B4u;
            // 0x3428b8: 0x96020032  lhu         $v0, 0x32($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 50)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x342890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_342890;
        }
    }
    ctx->pc = 0x3428BCu;
label_3428bc:
    // 0x3428bc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3428bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3428c0:
    // 0x3428c0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3428c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3428c4:
    // 0x3428c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3428c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3428c8:
    // 0x3428c8: 0x3e00008  jr          $ra
label_3428cc:
    if (ctx->pc == 0x3428CCu) {
        ctx->pc = 0x3428CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3428C8u;
        // 0x3428cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3428D0u;
        goto label_fallthrough_0x3428c8;
    }
    ctx->pc = 0x3428C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3428CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3428C8u;
        // 0x3428cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3428C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3428c8:
    ctx->pc = 0x3428D0u;
}
