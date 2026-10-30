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

// Function: sub_004DC748
// Address: 0x4dc748 - 0x4dc7c0
void sub_004DC748_0x4dc748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DC748_0x4dc748");
#endif

    switch (ctx->pc) {
        case 0x4dc748u: goto label_4dc748;
        case 0x4dc74cu: goto label_4dc74c;
        case 0x4dc750u: goto label_4dc750;
        case 0x4dc754u: goto label_4dc754;
        case 0x4dc758u: goto label_4dc758;
        case 0x4dc75cu: goto label_4dc75c;
        case 0x4dc760u: goto label_4dc760;
        case 0x4dc764u: goto label_4dc764;
        case 0x4dc768u: goto label_4dc768;
        case 0x4dc76cu: goto label_4dc76c;
        case 0x4dc770u: goto label_4dc770;
        case 0x4dc774u: goto label_4dc774;
        case 0x4dc778u: goto label_4dc778;
        case 0x4dc77cu: goto label_4dc77c;
        case 0x4dc780u: goto label_4dc780;
        case 0x4dc784u: goto label_4dc784;
        case 0x4dc788u: goto label_4dc788;
        case 0x4dc78cu: goto label_4dc78c;
        case 0x4dc790u: goto label_4dc790;
        case 0x4dc794u: goto label_4dc794;
        case 0x4dc798u: goto label_4dc798;
        case 0x4dc79cu: goto label_4dc79c;
        case 0x4dc7a0u: goto label_4dc7a0;
        case 0x4dc7a4u: goto label_4dc7a4;
        case 0x4dc7a8u: goto label_4dc7a8;
        case 0x4dc7acu: goto label_4dc7ac;
        case 0x4dc7b0u: goto label_4dc7b0;
        case 0x4dc7b4u: goto label_4dc7b4;
        case 0x4dc7b8u: goto label_4dc7b8;
        case 0x4dc7bcu: goto label_4dc7bc;
        default: break;
    }

    ctx->pc = 0x4dc748u;

label_4dc748:
    // 0x4dc748: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4dc748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4dc74c:
    // 0x4dc74c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4dc74cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_4dc750:
    // 0x4dc750: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4dc750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4dc754:
    // 0x4dc754: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4dc754u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4dc758:
    // 0x4dc758: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4dc758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4dc75c:
    // 0x4dc75c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4dc75cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4dc760:
    // 0x4dc760: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4dc760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4dc764:
    // 0x4dc764: 0x84640278  lh          $a0, 0x278($v1)
    ctx->pc = 0x4dc764u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 632)));
label_4dc768:
    // 0x4dc768: 0x8c62027c  lw          $v0, 0x27C($v1)
    ctx->pc = 0x4dc768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 636)));
label_4dc76c:
    // 0x4dc76c: 0x40f809  jalr        $v0
label_4dc770:
    if (ctx->pc == 0x4DC770u) {
        ctx->pc = 0x4DC770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC76Cu;
        // 0x4dc770: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DC774u;
        goto label_4dc774;
    }
    ctx->pc = 0x4DC76Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4DC774u);
        ctx->pc = 0x4DC770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC76Cu;
        // 0x4dc770: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DC76Cu, 0x4DC774u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4DC774u;
label_4dc774:
    // 0x4dc774: 0x8e040214  lw          $a0, 0x214($s0)
    ctx->pc = 0x4dc774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_4dc778:
    // 0x4dc778: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x4dc778u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4dc77c:
    // 0x4dc77c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4dc77cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4dc780:
    // 0x4dc780: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x4dc780u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4dc784:
    // 0x4dc784: 0xc047b82  jal         func_11EE08
label_4dc788:
    if (ctx->pc == 0x4DC788u) {
        ctx->pc = 0x4DC788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC784u;
        // 0x4dc788: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DC78Cu;
        goto label_4dc78c;
    }
    ctx->pc = 0x4DC784u;
    SET_GPR_U32(ctx, 31, 0x4DC78Cu);
    ctx->pc = 0x4DC788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DC784u;
    // 0x4dc788: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE08u, 0x4DC784u, 0x4DC78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DC78Cu;
label_4dc78c:
    // 0x4dc78c: 0x8e060214  lw          $a2, 0x214($s0)
    ctx->pc = 0x4dc78cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_4dc790:
    // 0x4dc790: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4dc790u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4dc794:
    // 0x4dc794: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4dc794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4dc798:
    // 0x4dc798: 0x844401b8  lh          $a0, 0x1B8($v0)
    ctx->pc = 0x4dc798u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 440)));
label_4dc79c:
    // 0x4dc79c: 0x8c4301bc  lw          $v1, 0x1BC($v0)
    ctx->pc = 0x4dc79cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 444)));
label_4dc7a0:
    // 0x4dc7a0: 0x60f809  jalr        $v1
label_4dc7a4:
    if (ctx->pc == 0x4DC7A4u) {
        ctx->pc = 0x4DC7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC7A0u;
        // 0x4dc7a4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DC7A8u;
        goto label_4dc7a8;
    }
    ctx->pc = 0x4DC7A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4DC7A8u);
        ctx->pc = 0x4DC7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC7A0u;
        // 0x4dc7a4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DC7A0u, 0x4DC7A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4DC7A8u;
label_4dc7a8:
    // 0x4dc7a8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4dc7a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4dc7ac:
    // 0x4dc7ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4dc7acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4dc7b0:
    // 0x4dc7b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4dc7b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4dc7b4:
    // 0x4dc7b4: 0x3e00008  jr          $ra
label_4dc7b8:
    if (ctx->pc == 0x4DC7B8u) {
        ctx->pc = 0x4DC7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC7B4u;
        // 0x4dc7b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DC7BCu;
        goto label_4dc7bc;
    }
    ctx->pc = 0x4DC7B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DC7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC7B4u;
        // 0x4dc7b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DC7B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DC7BCu;
label_4dc7bc:
    // 0x4dc7bc: 0x0  nop
    ctx->pc = 0x4dc7bcu;
    // NOP
    ctx->pc = 0x4dc7c0u;
}
