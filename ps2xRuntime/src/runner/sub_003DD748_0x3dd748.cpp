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

// Function: sub_003DD748
// Address: 0x3dd748 - 0x3dd808
void sub_003DD748_0x3dd748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DD748_0x3dd748");
#endif

    switch (ctx->pc) {
        case 0x3dd748u: goto label_3dd748;
        case 0x3dd74cu: goto label_3dd74c;
        case 0x3dd750u: goto label_3dd750;
        case 0x3dd754u: goto label_3dd754;
        case 0x3dd758u: goto label_3dd758;
        case 0x3dd75cu: goto label_3dd75c;
        case 0x3dd760u: goto label_3dd760;
        case 0x3dd764u: goto label_3dd764;
        case 0x3dd768u: goto label_3dd768;
        case 0x3dd76cu: goto label_3dd76c;
        case 0x3dd770u: goto label_3dd770;
        case 0x3dd774u: goto label_3dd774;
        case 0x3dd778u: goto label_3dd778;
        case 0x3dd77cu: goto label_3dd77c;
        case 0x3dd780u: goto label_3dd780;
        case 0x3dd784u: goto label_3dd784;
        case 0x3dd788u: goto label_3dd788;
        case 0x3dd78cu: goto label_3dd78c;
        case 0x3dd790u: goto label_3dd790;
        case 0x3dd794u: goto label_3dd794;
        case 0x3dd798u: goto label_3dd798;
        case 0x3dd79cu: goto label_3dd79c;
        case 0x3dd7a0u: goto label_3dd7a0;
        case 0x3dd7a4u: goto label_3dd7a4;
        case 0x3dd7a8u: goto label_3dd7a8;
        case 0x3dd7acu: goto label_3dd7ac;
        case 0x3dd7b0u: goto label_3dd7b0;
        case 0x3dd7b4u: goto label_3dd7b4;
        case 0x3dd7b8u: goto label_3dd7b8;
        case 0x3dd7bcu: goto label_3dd7bc;
        case 0x3dd7c0u: goto label_3dd7c0;
        case 0x3dd7c4u: goto label_3dd7c4;
        case 0x3dd7c8u: goto label_3dd7c8;
        case 0x3dd7ccu: goto label_3dd7cc;
        case 0x3dd7d0u: goto label_3dd7d0;
        case 0x3dd7d4u: goto label_3dd7d4;
        case 0x3dd7d8u: goto label_3dd7d8;
        case 0x3dd7dcu: goto label_3dd7dc;
        case 0x3dd7e0u: goto label_3dd7e0;
        case 0x3dd7e4u: goto label_3dd7e4;
        case 0x3dd7e8u: goto label_3dd7e8;
        case 0x3dd7ecu: goto label_3dd7ec;
        case 0x3dd7f0u: goto label_3dd7f0;
        case 0x3dd7f4u: goto label_3dd7f4;
        case 0x3dd7f8u: goto label_3dd7f8;
        case 0x3dd7fcu: goto label_3dd7fc;
        case 0x3dd800u: goto label_3dd800;
        case 0x3dd804u: goto label_3dd804;
        default: break;
    }

    ctx->pc = 0x3dd748u;

label_3dd748:
    // 0x3dd748: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3dd748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3dd74c:
    // 0x3dd74c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3dd74cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_3dd750:
    // 0x3dd750: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3dd750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_3dd754:
    // 0x3dd754: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3dd754u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3dd758:
    // 0x3dd758: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3dd758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3dd75c:
    // 0x3dd75c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3dd75cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3dd760:
    // 0x3dd760: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3dd760u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3dd764:
    // 0x3dd764: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3dd764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3dd768:
    // 0x3dd768: 0x40f809  jalr        $v0
label_3dd76c:
    if (ctx->pc == 0x3DD76Cu) {
        ctx->pc = 0x3DD76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD768u;
        // 0x3dd76c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD770u;
        goto label_3dd770;
    }
    ctx->pc = 0x3DD768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DD770u);
        ctx->pc = 0x3DD76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD768u;
        // 0x3dd76c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DD768u, 0x3DD770u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DD770u;
label_3dd770:
    // 0x3dd770: 0x3c01bf40  lui         $at, 0xBF40
    ctx->pc = 0x3dd770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48960 << 16));
label_3dd774:
    // 0x3dd774: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3dd774u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3dd778:
    // 0x3dd778: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x3dd778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3dd77c:
    // 0x3dd77c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3dd77cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3dd780:
    // 0x3dd780: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3dd780u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3dd784:
    // 0x3dd784: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3dd784u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3dd788:
    // 0x3dd788: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x3dd788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_3dd78c:
    // 0x3dd78c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x3dd78cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3dd790:
    // 0x3dd790: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x3dd790u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_3dd794:
    // 0x3dd794: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x3dd794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_3dd798:
    // 0x3dd798: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x3dd798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_3dd79c:
    // 0x3dd79c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x3dd79cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3dd7a0:
    // 0x3dd7a0: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x3dd7a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_3dd7a4:
    // 0x3dd7a4: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3dd7a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3dd7a8:
    // 0x3dd7a8: 0xc136b18  jal         func_4DAC60
label_3dd7ac:
    if (ctx->pc == 0x3DD7ACu) {
        ctx->pc = 0x3DD7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD7A8u;
        // 0x3dd7ac: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD7B0u;
        goto label_3dd7b0;
    }
    ctx->pc = 0x3DD7A8u;
    SET_GPR_U32(ctx, 31, 0x3DD7B0u);
    ctx->pc = 0x3DD7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DD7A8u;
    // 0x3dd7ac: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3DD7A8u, 0x3DD7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DD7B0u;
label_3dd7b0:
    // 0x3dd7b0: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x3dd7b0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3dd7b4:
    // 0x3dd7b4: 0x7e030030  sq          $v1, 0x30($s0)
    ctx->pc = 0x3dd7b4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 3));
label_3dd7b8:
    // 0x3dd7b8: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3dd7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_3dd7bc:
    // 0x3dd7bc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3dd7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3dd7c0:
    // 0x3dd7c0: 0x28420005  slti        $v0, $v0, 0x5
    ctx->pc = 0x3dd7c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
label_3dd7c4:
    // 0x3dd7c4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_3dd7c8:
    if (ctx->pc == 0x3DD7C8u) {
        ctx->pc = 0x3DD7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD7C4u;
        // 0x3dd7c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD7CCu;
        goto label_3dd7cc;
    }
    ctx->pc = 0x3DD7C4u;
    {
        const bool branch_taken_0x3dd7c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD7C4u;
        // 0x3dd7c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd7c4) {
            ctx->pc = 0x3DD7F0u;
            goto label_3dd7f0;
        }
    }
    ctx->pc = 0x3DD7CCu;
label_3dd7cc:
    // 0x3dd7cc: 0xc0e9694  jal         func_3A5A50
label_3dd7d0:
    if (ctx->pc == 0x3DD7D0u) {
        ctx->pc = 0x3DD7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD7CCu;
        // 0x3dd7d0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD7D4u;
        goto label_3dd7d4;
    }
    ctx->pc = 0x3DD7CCu;
    SET_GPR_U32(ctx, 31, 0x3DD7D4u);
    ctx->pc = 0x3DD7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DD7CCu;
    // 0x3dd7d0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3DD7CCu, 0x3DD7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DD7D4u;
label_3dd7d4:
    // 0x3dd7d4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_3dd7d8:
    if (ctx->pc == 0x3DD7D8u) {
        ctx->pc = 0x3DD7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD7D4u;
        // 0x3dd7d8: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD7DCu;
        goto label_3dd7dc;
    }
    ctx->pc = 0x3DD7D4u;
    {
        const bool branch_taken_0x3dd7d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3dd7d4) {
            ctx->pc = 0x3DD7D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DD7D4u;
            // 0x3dd7d8: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DD7E4u;
            goto label_3dd7e4;
        }
    }
    ctx->pc = 0x3DD7DCu;
label_3dd7dc:
    // 0x3dd7dc: 0x10000004  b           . + 4 + (0x4 << 2)
label_3dd7e0:
    if (ctx->pc == 0x3DD7E0u) {
        ctx->pc = 0x3DD7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD7DCu;
        // 0x3dd7e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD7E4u;
        goto label_3dd7e4;
    }
    ctx->pc = 0x3DD7DCu;
    {
        const bool branch_taken_0x3dd7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD7DCu;
        // 0x3dd7e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd7dc) {
            ctx->pc = 0x3DD7F0u;
            goto label_3dd7f0;
        }
    }
    ctx->pc = 0x3DD7E4u;
label_3dd7e4:
    // 0x3dd7e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3dd7e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3dd7e8:
    // 0x3dd7e8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3dd7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3dd7ec:
    // 0x3dd7ec: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3dd7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_3dd7f0:
    // 0x3dd7f0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3dd7f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3dd7f4:
    // 0x3dd7f4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3dd7f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3dd7f8:
    // 0x3dd7f8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3dd7f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3dd7fc:
    // 0x3dd7fc: 0x3e00008  jr          $ra
label_3dd800:
    if (ctx->pc == 0x3DD800u) {
        ctx->pc = 0x3DD800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD7FCu;
        // 0x3dd800: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD804u;
        goto label_3dd804;
    }
    ctx->pc = 0x3DD7FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DD800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD7FCu;
        // 0x3dd800: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DD7FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DD804u;
label_3dd804:
    // 0x3dd804: 0x0  nop
    ctx->pc = 0x3dd804u;
    // NOP
    ctx->pc = 0x3dd808u;
}
