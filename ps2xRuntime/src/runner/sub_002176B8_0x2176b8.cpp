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

// Function: sub_002176B8
// Address: 0x2176b8 - 0x217730
void sub_002176B8_0x2176b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002176B8_0x2176b8");
#endif

    switch (ctx->pc) {
        case 0x2176b8u: goto label_2176b8;
        case 0x2176bcu: goto label_2176bc;
        case 0x2176c0u: goto label_2176c0;
        case 0x2176c4u: goto label_2176c4;
        case 0x2176c8u: goto label_2176c8;
        case 0x2176ccu: goto label_2176cc;
        case 0x2176d0u: goto label_2176d0;
        case 0x2176d4u: goto label_2176d4;
        case 0x2176d8u: goto label_2176d8;
        case 0x2176dcu: goto label_2176dc;
        case 0x2176e0u: goto label_2176e0;
        case 0x2176e4u: goto label_2176e4;
        case 0x2176e8u: goto label_2176e8;
        case 0x2176ecu: goto label_2176ec;
        case 0x2176f0u: goto label_2176f0;
        case 0x2176f4u: goto label_2176f4;
        case 0x2176f8u: goto label_2176f8;
        case 0x2176fcu: goto label_2176fc;
        case 0x217700u: goto label_217700;
        case 0x217704u: goto label_217704;
        case 0x217708u: goto label_217708;
        case 0x21770cu: goto label_21770c;
        case 0x217710u: goto label_217710;
        case 0x217714u: goto label_217714;
        case 0x217718u: goto label_217718;
        case 0x21771cu: goto label_21771c;
        case 0x217720u: goto label_217720;
        case 0x217724u: goto label_217724;
        case 0x217728u: goto label_217728;
        case 0x21772cu: goto label_21772c;
        default: break;
    }

    ctx->pc = 0x2176b8u;

label_2176b8:
    // 0x2176b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2176b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2176bc:
    // 0x2176bc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2176bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2176c0:
    // 0x2176c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2176c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2176c4:
    // 0x2176c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2176c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2176c8:
    // 0x2176c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2176c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2176cc:
    // 0x2176cc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2176ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2176d0:
    // 0x2176d0: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_2176d4:
    if (ctx->pc == 0x2176D4u) {
        ctx->pc = 0x2176D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2176D0u;
        // 0x2176d4: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2176D8u;
        goto label_2176d8;
    }
    ctx->pc = 0x2176D0u;
    {
        const bool branch_taken_0x2176d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2176D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2176D0u;
        // 0x2176d4: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2176d0) {
            ctx->pc = 0x21771Cu;
            goto label_21771c;
        }
    }
    ctx->pc = 0x2176D8u;
label_2176d8:
    // 0x2176d8: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
label_2176dc:
    if (ctx->pc == 0x2176DCu) {
        ctx->pc = 0x2176DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2176D8u;
        // 0x2176dc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2176E0u;
        goto label_2176e0;
    }
    ctx->pc = 0x2176D8u;
    {
        const bool branch_taken_0x2176d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2176d8) {
            ctx->pc = 0x2176DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2176D8u;
            // 0x2176dc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x217720u;
            goto label_217720;
        }
    }
    ctx->pc = 0x2176E0u;
label_2176e0:
    // 0x2176e0: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x2176e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_2176e4:
    // 0x2176e4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2176e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2176e8:
    // 0x2176e8: 0xc06a3aa  jal         func_1A8EA8
label_2176ec:
    if (ctx->pc == 0x2176ECu) {
        ctx->pc = 0x2176ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2176E8u;
        // 0x2176ec: 0x8c4500c4  lw          $a1, 0xC4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2176F0u;
        goto label_2176f0;
    }
    ctx->pc = 0x2176E8u;
    SET_GPR_U32(ctx, 31, 0x2176F0u);
    ctx->pc = 0x2176ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2176E8u;
    // 0x2176ec: 0x8c4500c4  lw          $a1, 0xC4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8EA8u, 0x2176E8u, 0x2176F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2176F0u;
label_2176f0:
    // 0x2176f0: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_2176f4:
    if (ctx->pc == 0x2176F4u) {
        ctx->pc = 0x2176F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2176F0u;
        // 0x2176f4: 0xae110010  sw          $s1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2176F8u;
        goto label_2176f8;
    }
    ctx->pc = 0x2176F0u;
    {
        const bool branch_taken_0x2176f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2176f0) {
            ctx->pc = 0x2176F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2176F0u;
            // 0x2176f4: 0xae110010  sw          $s1, 0x10($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x217718u;
            goto label_217718;
        }
    }
    ctx->pc = 0x2176F8u;
label_2176f8:
    // 0x2176f8: 0x8e05006c  lw          $a1, 0x6C($s0)
    ctx->pc = 0x2176f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
label_2176fc:
    // 0x2176fc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2176fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_217700:
    // 0x217700: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x217700u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_217704:
    // 0x217704: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x217704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_217708:
    // 0x217708: 0x40f809  jalr        $v0
label_21770c:
    if (ctx->pc == 0x21770Cu) {
        ctx->pc = 0x21770Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217708u;
        // 0x21770c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217710u;
        goto label_217710;
    }
    ctx->pc = 0x217708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x217710u);
        ctx->pc = 0x21770Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217708u;
        // 0x21770c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217708u, 0x217710u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x217710u;
label_217710:
    // 0x217710: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x217710u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_217714:
    // 0x217714: 0xae110010  sw          $s1, 0x10($s0)
    ctx->pc = 0x217714u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
label_217718:
    // 0x217718: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x217718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_21771c:
    // 0x21771c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x21771cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_217720:
    // 0x217720: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x217720u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_217724:
    // 0x217724: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x217724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_217728:
    // 0x217728: 0x3e00008  jr          $ra
label_21772c:
    if (ctx->pc == 0x21772Cu) {
        ctx->pc = 0x21772Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217728u;
        // 0x21772c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217730u;
        goto label_fallthrough_0x217728;
    }
    ctx->pc = 0x217728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21772Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217728u;
        // 0x21772c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x217728:
    ctx->pc = 0x217730u;
}
