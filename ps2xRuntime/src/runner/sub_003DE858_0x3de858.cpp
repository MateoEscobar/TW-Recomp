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

// Function: sub_003DE858
// Address: 0x3de858 - 0x3de8f0
void sub_003DE858_0x3de858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DE858_0x3de858");
#endif

    switch (ctx->pc) {
        case 0x3de858u: goto label_3de858;
        case 0x3de85cu: goto label_3de85c;
        case 0x3de860u: goto label_3de860;
        case 0x3de864u: goto label_3de864;
        case 0x3de868u: goto label_3de868;
        case 0x3de86cu: goto label_3de86c;
        case 0x3de870u: goto label_3de870;
        case 0x3de874u: goto label_3de874;
        case 0x3de878u: goto label_3de878;
        case 0x3de87cu: goto label_3de87c;
        case 0x3de880u: goto label_3de880;
        case 0x3de884u: goto label_3de884;
        case 0x3de888u: goto label_3de888;
        case 0x3de88cu: goto label_3de88c;
        case 0x3de890u: goto label_3de890;
        case 0x3de894u: goto label_3de894;
        case 0x3de898u: goto label_3de898;
        case 0x3de89cu: goto label_3de89c;
        case 0x3de8a0u: goto label_3de8a0;
        case 0x3de8a4u: goto label_3de8a4;
        case 0x3de8a8u: goto label_3de8a8;
        case 0x3de8acu: goto label_3de8ac;
        case 0x3de8b0u: goto label_3de8b0;
        case 0x3de8b4u: goto label_3de8b4;
        case 0x3de8b8u: goto label_3de8b8;
        case 0x3de8bcu: goto label_3de8bc;
        case 0x3de8c0u: goto label_3de8c0;
        case 0x3de8c4u: goto label_3de8c4;
        case 0x3de8c8u: goto label_3de8c8;
        case 0x3de8ccu: goto label_3de8cc;
        case 0x3de8d0u: goto label_3de8d0;
        case 0x3de8d4u: goto label_3de8d4;
        case 0x3de8d8u: goto label_3de8d8;
        case 0x3de8dcu: goto label_3de8dc;
        case 0x3de8e0u: goto label_3de8e0;
        case 0x3de8e4u: goto label_3de8e4;
        case 0x3de8e8u: goto label_3de8e8;
        case 0x3de8ecu: goto label_3de8ec;
        default: break;
    }

    ctx->pc = 0x3de858u;

label_3de858:
    // 0x3de858: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3de858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3de85c:
    // 0x3de85c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3de85cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3de860:
    // 0x3de860: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3de860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3de864:
    // 0x3de864: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3de864u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3de868:
    // 0x3de868: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3de868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_3de86c:
    // 0x3de86c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3de86cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3de870:
    // 0x3de870: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3de870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3de874:
    // 0x3de874: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3de874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3de878:
    // 0x3de878: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3de878u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3de87c:
    // 0x3de87c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3de87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3de880:
    // 0x3de880: 0x40f809  jalr        $v0
label_3de884:
    if (ctx->pc == 0x3DE884u) {
        ctx->pc = 0x3DE884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE880u;
        // 0x3de884: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE888u;
        goto label_3de888;
    }
    ctx->pc = 0x3DE880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DE888u);
        ctx->pc = 0x3DE884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE880u;
        // 0x3de884: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DE880u, 0x3DE888u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DE888u;
label_3de888:
    // 0x3de888: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3de888u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3de88c:
    // 0x3de88c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3de88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3de890:
    // 0x3de890: 0x12220011  beq         $s1, $v0, . + 4 + (0x11 << 2)
label_3de894:
    if (ctx->pc == 0x3DE894u) {
        ctx->pc = 0x3DE894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE890u;
        // 0x3de894: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE898u;
        goto label_3de898;
    }
    ctx->pc = 0x3DE890u;
    {
        const bool branch_taken_0x3de890 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x3DE894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE890u;
        // 0x3de894: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de890) {
            ctx->pc = 0x3DE8D8u;
            goto label_3de8d8;
        }
    }
    ctx->pc = 0x3DE898u;
label_3de898:
    // 0x3de898: 0x56220010  bnel        $s1, $v0, . + 4 + (0x10 << 2)
label_3de89c:
    if (ctx->pc == 0x3DE89Cu) {
        ctx->pc = 0x3DE89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE898u;
        // 0x3de89c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE8A0u;
        goto label_3de8a0;
    }
    ctx->pc = 0x3DE898u;
    {
        const bool branch_taken_0x3de898 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x3de898) {
            ctx->pc = 0x3DE89Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DE898u;
            // 0x3de89c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DE8DCu;
            goto label_3de8dc;
        }
    }
    ctx->pc = 0x3DE8A0u;
label_3de8a0:
    // 0x3de8a0: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x3de8a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_3de8a4:
    // 0x3de8a4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3de8a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3de8a8:
    // 0x3de8a8: 0xc600008c  lwc1        $f0, 0x8C($s0)
    ctx->pc = 0x3de8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3de8ac:
    // 0x3de8ac: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x3de8acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
label_3de8b0:
    // 0x3de8b0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3de8b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3de8b4:
    // 0x3de8b4: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x3de8b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
label_3de8b8:
    // 0x3de8b8: 0xc0e95f6  jal         func_3A57D8
label_3de8bc:
    if (ctx->pc == 0x3DE8BCu) {
        ctx->pc = 0x3DE8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE8B8u;
        // 0x3de8bc: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE8C0u;
        goto label_3de8c0;
    }
    ctx->pc = 0x3DE8B8u;
    SET_GPR_U32(ctx, 31, 0x3DE8C0u);
    ctx->pc = 0x3DE8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE8B8u;
    // 0x3de8bc: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A57D8u, 0x3DE8B8u, 0x3DE8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE8C0u;
label_3de8c0:
    // 0x3de8c0: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x3de8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_3de8c4:
    // 0x3de8c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3de8c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3de8c8:
    // 0x3de8c8: 0xc0e858c  jal         func_3A1630
label_3de8cc:
    if (ctx->pc == 0x3DE8CCu) {
        ctx->pc = 0x3DE8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE8C8u;
        // 0x3de8cc: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE8D0u;
        goto label_3de8d0;
    }
    ctx->pc = 0x3DE8C8u;
    SET_GPR_U32(ctx, 31, 0x3DE8D0u);
    ctx->pc = 0x3DE8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE8C8u;
    // 0x3de8cc: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3DE8C8u, 0x3DE8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE8D0u;
label_3de8d0:
    // 0x3de8d0: 0xc0e95f6  jal         func_3A57D8
label_3de8d4:
    if (ctx->pc == 0x3DE8D4u) {
        ctx->pc = 0x3DE8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE8D0u;
        // 0x3de8d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE8D8u;
        goto label_3de8d8;
    }
    ctx->pc = 0x3DE8D0u;
    SET_GPR_U32(ctx, 31, 0x3DE8D8u);
    ctx->pc = 0x3DE8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE8D0u;
    // 0x3de8d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A57D8u, 0x3DE8D0u, 0x3DE8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE8D8u;
label_3de8d8:
    // 0x3de8d8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3de8d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3de8dc:
    // 0x3de8dc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3de8dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3de8e0:
    // 0x3de8e0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3de8e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3de8e4:
    // 0x3de8e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3de8e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3de8e8:
    // 0x3de8e8: 0x3e00008  jr          $ra
label_3de8ec:
    if (ctx->pc == 0x3DE8ECu) {
        ctx->pc = 0x3DE8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE8E8u;
        // 0x3de8ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE8F0u;
        goto label_fallthrough_0x3de8e8;
    }
    ctx->pc = 0x3DE8E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DE8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE8E8u;
        // 0x3de8ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DE8E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3de8e8:
    ctx->pc = 0x3DE8F0u;
}
