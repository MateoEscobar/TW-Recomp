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

// Function: sub_00236780
// Address: 0x236780 - 0x236828
void sub_00236780_0x236780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236780_0x236780");
#endif

    switch (ctx->pc) {
        case 0x236780u: goto label_236780;
        case 0x236784u: goto label_236784;
        case 0x236788u: goto label_236788;
        case 0x23678cu: goto label_23678c;
        case 0x236790u: goto label_236790;
        case 0x236794u: goto label_236794;
        case 0x236798u: goto label_236798;
        case 0x23679cu: goto label_23679c;
        case 0x2367a0u: goto label_2367a0;
        case 0x2367a4u: goto label_2367a4;
        case 0x2367a8u: goto label_2367a8;
        case 0x2367acu: goto label_2367ac;
        case 0x2367b0u: goto label_2367b0;
        case 0x2367b4u: goto label_2367b4;
        case 0x2367b8u: goto label_2367b8;
        case 0x2367bcu: goto label_2367bc;
        case 0x2367c0u: goto label_2367c0;
        case 0x2367c4u: goto label_2367c4;
        case 0x2367c8u: goto label_2367c8;
        case 0x2367ccu: goto label_2367cc;
        case 0x2367d0u: goto label_2367d0;
        case 0x2367d4u: goto label_2367d4;
        case 0x2367d8u: goto label_2367d8;
        case 0x2367dcu: goto label_2367dc;
        case 0x2367e0u: goto label_2367e0;
        case 0x2367e4u: goto label_2367e4;
        case 0x2367e8u: goto label_2367e8;
        case 0x2367ecu: goto label_2367ec;
        case 0x2367f0u: goto label_2367f0;
        case 0x2367f4u: goto label_2367f4;
        case 0x2367f8u: goto label_2367f8;
        case 0x2367fcu: goto label_2367fc;
        case 0x236800u: goto label_236800;
        case 0x236804u: goto label_236804;
        case 0x236808u: goto label_236808;
        case 0x23680cu: goto label_23680c;
        case 0x236810u: goto label_236810;
        case 0x236814u: goto label_236814;
        case 0x236818u: goto label_236818;
        case 0x23681cu: goto label_23681c;
        case 0x236820u: goto label_236820;
        case 0x236824u: goto label_236824;
        default: break;
    }

    ctx->pc = 0x236780u;

label_236780:
    // 0x236780: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x236780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_236784:
    // 0x236784: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x236784u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_236788:
    // 0x236788: 0x8c420288  lw          $v0, 0x288($v0)
    ctx->pc = 0x236788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 648)));
label_23678c:
    // 0x23678c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x23678cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_236790:
    // 0x236790: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x236790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_236794:
    // 0x236794: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x236794u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_236798:
    // 0x236798: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_23679c:
    if (ctx->pc == 0x23679Cu) {
        ctx->pc = 0x23679Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236798u;
        // 0x23679c: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2367A0u;
        goto label_2367a0;
    }
    ctx->pc = 0x236798u;
    {
        const bool branch_taken_0x236798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23679Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236798u;
        // 0x23679c: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236798) {
            ctx->pc = 0x236818u;
            goto label_236818;
        }
    }
    ctx->pc = 0x2367A0u;
label_2367a0:
    // 0x2367a0: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x2367a0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_2367a4:
    // 0x2367a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2367a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2367a8:
    // 0x2367a8: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x2367a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_2367ac:
    // 0x2367ac: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2367acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2367b0:
    // 0x2367b0: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x2367b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_2367b4:
    // 0x2367b4: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x2367b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_2367b8:
    // 0x2367b8: 0x40f809  jalr        $v0
label_2367bc:
    if (ctx->pc == 0x2367BCu) {
        ctx->pc = 0x2367BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2367B8u;
        // 0x2367bc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2367C0u;
        goto label_2367c0;
    }
    ctx->pc = 0x2367B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2367C0u);
        ctx->pc = 0x2367BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2367B8u;
        // 0x2367bc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2367B8u, 0x2367C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2367C0u;
label_2367c0:
    // 0x2367c0: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x2367c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_2367c4:
    // 0x2367c4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2367c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2367c8:
    // 0x2367c8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2367c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2367cc:
    // 0x2367cc: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x2367ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_2367d0:
    // 0x2367d0: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x2367d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_2367d4:
    // 0x2367d4: 0x60f809  jalr        $v1
label_2367d8:
    if (ctx->pc == 0x2367D8u) {
        ctx->pc = 0x2367D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2367D4u;
        // 0x2367d8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2367DCu;
        goto label_2367dc;
    }
    ctx->pc = 0x2367D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2367DCu);
        ctx->pc = 0x2367D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2367D4u;
        // 0x2367d8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2367D4u, 0x2367DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2367DCu;
label_2367dc:
    // 0x2367dc: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x2367dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_2367e0:
    // 0x2367e0: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x2367e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_2367e4:
    // 0x2367e4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2367e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2367e8:
    // 0x2367e8: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x2367e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_2367ec:
    // 0x2367ec: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x2367ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_2367f0:
    // 0x2367f0: 0x60f809  jalr        $v1
label_2367f4:
    if (ctx->pc == 0x2367F4u) {
        ctx->pc = 0x2367F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2367F0u;
        // 0x2367f4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2367F8u;
        goto label_2367f8;
    }
    ctx->pc = 0x2367F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2367F8u);
        ctx->pc = 0x2367F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2367F0u;
        // 0x2367f4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2367F0u, 0x2367F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2367F8u;
label_2367f8:
    // 0x2367f8: 0x8e072b04  lw          $a3, 0x2B04($s0)
    ctx->pc = 0x2367f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_2367fc:
    // 0x2367fc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2367fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_236800:
    // 0x236800: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x236800u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_236804:
    // 0x236804: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x236804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_236808:
    // 0x236808: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x236808u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_23680c:
    // 0x23680c: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x23680cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_236810:
    // 0x236810: 0x60f809  jalr        $v1
label_236814:
    if (ctx->pc == 0x236814u) {
        ctx->pc = 0x236814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236810u;
        // 0x236814: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236818u;
        goto label_236818;
    }
    ctx->pc = 0x236810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x236818u);
        ctx->pc = 0x236814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236810u;
        // 0x236814: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236810u, 0x236818u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x236818u;
label_236818:
    // 0x236818: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x236818u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_23681c:
    // 0x23681c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23681cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_236820:
    // 0x236820: 0x3e00008  jr          $ra
label_236824:
    if (ctx->pc == 0x236824u) {
        ctx->pc = 0x236824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236820u;
        // 0x236824: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236828u;
        goto label_fallthrough_0x236820;
    }
    ctx->pc = 0x236820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236820u;
        // 0x236824: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x236820:
    ctx->pc = 0x236828u;
}
