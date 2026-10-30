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

// Function: sub_0019D750
// Address: 0x19d750 - 0x19d7d8
void sub_0019D750_0x19d750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019D750_0x19d750");
#endif

    switch (ctx->pc) {
        case 0x19d750u: goto label_19d750;
        case 0x19d754u: goto label_19d754;
        case 0x19d758u: goto label_19d758;
        case 0x19d75cu: goto label_19d75c;
        case 0x19d760u: goto label_19d760;
        case 0x19d764u: goto label_19d764;
        case 0x19d768u: goto label_19d768;
        case 0x19d76cu: goto label_19d76c;
        case 0x19d770u: goto label_19d770;
        case 0x19d774u: goto label_19d774;
        case 0x19d778u: goto label_19d778;
        case 0x19d77cu: goto label_19d77c;
        case 0x19d780u: goto label_19d780;
        case 0x19d784u: goto label_19d784;
        case 0x19d788u: goto label_19d788;
        case 0x19d78cu: goto label_19d78c;
        case 0x19d790u: goto label_19d790;
        case 0x19d794u: goto label_19d794;
        case 0x19d798u: goto label_19d798;
        case 0x19d79cu: goto label_19d79c;
        case 0x19d7a0u: goto label_19d7a0;
        case 0x19d7a4u: goto label_19d7a4;
        case 0x19d7a8u: goto label_19d7a8;
        case 0x19d7acu: goto label_19d7ac;
        case 0x19d7b0u: goto label_19d7b0;
        case 0x19d7b4u: goto label_19d7b4;
        case 0x19d7b8u: goto label_19d7b8;
        case 0x19d7bcu: goto label_19d7bc;
        case 0x19d7c0u: goto label_19d7c0;
        case 0x19d7c4u: goto label_19d7c4;
        case 0x19d7c8u: goto label_19d7c8;
        case 0x19d7ccu: goto label_19d7cc;
        case 0x19d7d0u: goto label_19d7d0;
        case 0x19d7d4u: goto label_19d7d4;
        default: break;
    }

    ctx->pc = 0x19d750u;

label_19d750:
    // 0x19d750: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19d750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_19d754:
    // 0x19d754: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x19d754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_19d758:
    // 0x19d758: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x19d758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_19d75c:
    // 0x19d75c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19d75cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19d760:
    // 0x19d760: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x19d760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_19d764:
    // 0x19d764: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x19d764u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_19d768:
    // 0x19d768: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19d768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_19d76c:
    // 0x19d76c: 0x8e0232f0  lw          $v0, 0x32F0($s0)
    ctx->pc = 0x19d76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 13040)));
label_19d770:
    // 0x19d770: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_19d774:
    if (ctx->pc == 0x19D774u) {
        ctx->pc = 0x19D774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D770u;
        // 0x19d774: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D778u;
        goto label_19d778;
    }
    ctx->pc = 0x19D770u;
    {
        const bool branch_taken_0x19d770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19D774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D770u;
        // 0x19d774: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d770) {
            ctx->pc = 0x19D7BCu;
            goto label_19d7bc;
        }
    }
    ctx->pc = 0x19D778u;
label_19d778:
    // 0x19d778: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x19d778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_19d77c:
    // 0x19d77c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x19d77cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_19d780:
    // 0x19d780: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x19d780u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19d784:
    // 0x19d784: 0xc06718e  jal         func_19C638
label_19d788:
    if (ctx->pc == 0x19D788u) {
        ctx->pc = 0x19D788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D784u;
        // 0x19d788: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D78Cu;
        goto label_19d78c;
    }
    ctx->pc = 0x19D784u;
    SET_GPR_U32(ctx, 31, 0x19D78Cu);
    ctx->pc = 0x19D788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D784u;
    // 0x19d788: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C638u, 0x19D784u, 0x19D78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D78Cu;
label_19d78c:
    // 0x19d78c: 0x8e02330c  lw          $v0, 0x330C($s0)
    ctx->pc = 0x19d78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 13068)));
label_19d790:
    // 0x19d790: 0x8e050074  lw          $a1, 0x74($s0)
    ctx->pc = 0x19d790u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_19d794:
    // 0x19d794: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x19d794u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_19d798:
    // 0x19d798: 0x8e060078  lw          $a2, 0x78($s0)
    ctx->pc = 0x19d798u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_19d79c:
    // 0x19d79c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x19d79cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_19d7a0:
    // 0x19d7a0: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x19d7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_19d7a4:
    // 0x19d7a4: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x19d7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_19d7a8:
    // 0x19d7a8: 0x60f809  jalr        $v1
label_19d7ac:
    if (ctx->pc == 0x19D7ACu) {
        ctx->pc = 0x19D7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D7A8u;
        // 0x19d7ac: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D7B0u;
        goto label_19d7b0;
    }
    ctx->pc = 0x19D7A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x19D7B0u);
        ctx->pc = 0x19D7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D7A8u;
        // 0x19d7ac: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D7A8u, 0x19D7B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19D7B0u;
label_19d7b0:
    // 0x19d7b0: 0x111042  srl         $v0, $s1, 1
    ctx->pc = 0x19d7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_19d7b4:
    // 0x19d7b4: 0xae123314  sw          $s2, 0x3314($s0)
    ctx->pc = 0x19d7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 13076), GPR_U32(ctx, 18));
label_19d7b8:
    // 0x19d7b8: 0xae023310  sw          $v0, 0x3310($s0)
    ctx->pc = 0x19d7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 13072), GPR_U32(ctx, 2));
label_19d7bc:
    // 0x19d7bc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x19d7bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_19d7c0:
    // 0x19d7c0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x19d7c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_19d7c4:
    // 0x19d7c4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x19d7c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_19d7c8:
    // 0x19d7c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19d7c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19d7cc:
    // 0x19d7cc: 0x3e00008  jr          $ra
label_19d7d0:
    if (ctx->pc == 0x19D7D0u) {
        ctx->pc = 0x19D7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D7CCu;
        // 0x19d7d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D7D4u;
        goto label_19d7d4;
    }
    ctx->pc = 0x19D7CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D7CCu;
        // 0x19d7d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D7CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D7D4u;
label_19d7d4:
    // 0x19d7d4: 0x0  nop
    ctx->pc = 0x19d7d4u;
    // NOP
    ctx->pc = 0x19d7d8u;
}
