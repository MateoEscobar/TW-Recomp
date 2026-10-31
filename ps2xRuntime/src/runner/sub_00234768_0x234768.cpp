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

// Function: sub_00234768
// Address: 0x234768 - 0x234830
void sub_00234768_0x234768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00234768_0x234768");
#endif

    switch (ctx->pc) {
        case 0x234768u: goto label_234768;
        case 0x23476cu: goto label_23476c;
        case 0x234770u: goto label_234770;
        case 0x234774u: goto label_234774;
        case 0x234778u: goto label_234778;
        case 0x23477cu: goto label_23477c;
        case 0x234780u: goto label_234780;
        case 0x234784u: goto label_234784;
        case 0x234788u: goto label_234788;
        case 0x23478cu: goto label_23478c;
        case 0x234790u: goto label_234790;
        case 0x234794u: goto label_234794;
        case 0x234798u: goto label_234798;
        case 0x23479cu: goto label_23479c;
        case 0x2347a0u: goto label_2347a0;
        case 0x2347a4u: goto label_2347a4;
        case 0x2347a8u: goto label_2347a8;
        case 0x2347acu: goto label_2347ac;
        case 0x2347b0u: goto label_2347b0;
        case 0x2347b4u: goto label_2347b4;
        case 0x2347b8u: goto label_2347b8;
        case 0x2347bcu: goto label_2347bc;
        case 0x2347c0u: goto label_2347c0;
        case 0x2347c4u: goto label_2347c4;
        case 0x2347c8u: goto label_2347c8;
        case 0x2347ccu: goto label_2347cc;
        case 0x2347d0u: goto label_2347d0;
        case 0x2347d4u: goto label_2347d4;
        case 0x2347d8u: goto label_2347d8;
        case 0x2347dcu: goto label_2347dc;
        case 0x2347e0u: goto label_2347e0;
        case 0x2347e4u: goto label_2347e4;
        case 0x2347e8u: goto label_2347e8;
        case 0x2347ecu: goto label_2347ec;
        case 0x2347f0u: goto label_2347f0;
        case 0x2347f4u: goto label_2347f4;
        case 0x2347f8u: goto label_2347f8;
        case 0x2347fcu: goto label_2347fc;
        case 0x234800u: goto label_234800;
        case 0x234804u: goto label_234804;
        case 0x234808u: goto label_234808;
        case 0x23480cu: goto label_23480c;
        case 0x234810u: goto label_234810;
        case 0x234814u: goto label_234814;
        case 0x234818u: goto label_234818;
        case 0x23481cu: goto label_23481c;
        case 0x234820u: goto label_234820;
        case 0x234824u: goto label_234824;
        case 0x234828u: goto label_234828;
        case 0x23482cu: goto label_23482c;
        default: break;
    }

    ctx->pc = 0x234768u;

label_234768:
    // 0x234768: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x234768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_23476c:
    // 0x23476c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x23476cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_234770:
    // 0x234770: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x234770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_234774:
    // 0x234774: 0x8c450234  lw          $a1, 0x234($v0)
    ctx->pc = 0x234774u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 564)));
label_234778:
    // 0x234778: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x234778u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23477c:
    // 0x23477c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x23477cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_234780:
    // 0x234780: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x234780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_234784:
    // 0x234784: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x234784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_234788:
    // 0x234788: 0x10a00021  beqz        $a1, . + 4 + (0x21 << 2)
label_23478c:
    if (ctx->pc == 0x23478Cu) {
        ctx->pc = 0x23478Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234788u;
        // 0x23478c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234790u;
        goto label_234790;
    }
    ctx->pc = 0x234788u;
    {
        const bool branch_taken_0x234788 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x23478Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234788u;
        // 0x23478c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234788) {
            ctx->pc = 0x234810u;
            goto label_234810;
        }
    }
    ctx->pc = 0x234790u;
label_234790:
    // 0x234790: 0x1240001f  beqz        $s2, . + 4 + (0x1F << 2)
label_234794:
    if (ctx->pc == 0x234794u) {
        ctx->pc = 0x234794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234790u;
        // 0x234794: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234798u;
        goto label_234798;
    }
    ctx->pc = 0x234790u;
    {
        const bool branch_taken_0x234790 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x234794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234790u;
        // 0x234794: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234790) {
            ctx->pc = 0x234810u;
            goto label_234810;
        }
    }
    ctx->pc = 0x234798u;
label_234798:
    // 0x234798: 0x8e662b04  lw          $a2, 0x2B04($s3)
    ctx->pc = 0x234798u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
label_23479c:
    // 0x23479c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x23479cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2347a0:
    // 0x2347a0: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x2347a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_2347a4:
    // 0x2347a4: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x2347a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_2347a8:
    // 0x2347a8: 0x40f809  jalr        $v0
label_2347ac:
    if (ctx->pc == 0x2347ACu) {
        ctx->pc = 0x2347ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2347A8u;
        // 0x2347ac: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2347B0u;
        goto label_2347b0;
    }
    ctx->pc = 0x2347A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2347B0u);
        ctx->pc = 0x2347ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2347A8u;
        // 0x2347ac: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2347A8u, 0x2347B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2347B0u;
label_2347b0:
    // 0x2347b0: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_2347b4:
    if (ctx->pc == 0x2347B4u) {
        ctx->pc = 0x2347B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2347B0u;
        // 0x2347b4: 0x8e702b04  lw          $s0, 0x2B04($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2347B8u;
        goto label_2347b8;
    }
    ctx->pc = 0x2347B0u;
    {
        const bool branch_taken_0x2347b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2347B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2347B0u;
        // 0x2347b4: 0x8e702b04  lw          $s0, 0x2B04($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2347b0) {
            ctx->pc = 0x234810u;
            goto label_234810;
        }
    }
    ctx->pc = 0x2347B8u;
label_2347b8:
    // 0x2347b8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2347b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2347bc:
    // 0x2347bc: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x2347bcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2347c0:
    // 0x2347c0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2347c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2347c4:
    // 0x2347c4: 0x86250058  lh          $a1, 0x58($s1)
    ctx->pc = 0x2347c4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 88)));
label_2347c8:
    // 0x2347c8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2347c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2347cc:
    // 0x2347cc: 0x26310058  addiu       $s1, $s1, 0x58
    ctx->pc = 0x2347ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
label_2347d0:
    // 0x2347d0: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x2347d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_2347d4:
    // 0x2347d4: 0x40f809  jalr        $v0
label_2347d8:
    if (ctx->pc == 0x2347D8u) {
        ctx->pc = 0x2347D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2347D4u;
        // 0x2347d8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2347DCu;
        goto label_2347dc;
    }
    ctx->pc = 0x2347D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2347DCu);
        ctx->pc = 0x2347D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2347D4u;
        // 0x2347d8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2347D4u, 0x2347DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2347DCu;
label_2347dc:
    // 0x2347dc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2347dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_2347e0:
    // 0x2347e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2347e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2347e4:
    // 0x2347e4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2347e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2347e8:
    // 0x2347e8: 0x40f809  jalr        $v0
label_2347ec:
    if (ctx->pc == 0x2347ECu) {
        ctx->pc = 0x2347ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2347E8u;
        // 0x2347ec: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2347F0u;
        goto label_2347f0;
    }
    ctx->pc = 0x2347E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2347F0u);
        ctx->pc = 0x2347ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2347E8u;
        // 0x2347ec: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2347E8u, 0x2347F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2347F0u;
label_2347f0:
    // 0x2347f0: 0x8e672b04  lw          $a3, 0x2B04($s3)
    ctx->pc = 0x2347f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
label_2347f4:
    // 0x2347f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2347f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2347f8:
    // 0x2347f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2347f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2347fc:
    // 0x2347fc: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2347fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_234800:
    // 0x234800: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x234800u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_234804:
    // 0x234804: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x234804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_234808:
    // 0x234808: 0x60f809  jalr        $v1
label_23480c:
    if (ctx->pc == 0x23480Cu) {
        ctx->pc = 0x23480Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234808u;
        // 0x23480c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234810u;
        goto label_234810;
    }
    ctx->pc = 0x234808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x234810u);
        ctx->pc = 0x23480Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234808u;
        // 0x23480c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234808u, 0x234810u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x234810u;
label_234810:
    // 0x234810: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x234810u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_234814:
    // 0x234814: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x234814u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_234818:
    // 0x234818: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x234818u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_23481c:
    // 0x23481c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x23481cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_234820:
    // 0x234820: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x234820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_234824:
    // 0x234824: 0x3e00008  jr          $ra
label_234828:
    if (ctx->pc == 0x234828u) {
        ctx->pc = 0x234828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234824u;
        // 0x234828: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23482Cu;
        goto label_23482c;
    }
    ctx->pc = 0x234824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234824u;
        // 0x234828: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234824u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23482Cu;
label_23482c:
    // 0x23482c: 0x0  nop
    ctx->pc = 0x23482cu;
    // NOP
    ctx->pc = 0x234830u;
}
