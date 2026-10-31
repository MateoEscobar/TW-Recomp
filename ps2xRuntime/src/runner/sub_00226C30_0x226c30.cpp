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

// Function: sub_00226C30
// Address: 0x226c30 - 0x226cd0
void sub_00226C30_0x226c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226C30_0x226c30");
#endif

    switch (ctx->pc) {
        case 0x226c30u: goto label_226c30;
        case 0x226c34u: goto label_226c34;
        case 0x226c38u: goto label_226c38;
        case 0x226c3cu: goto label_226c3c;
        case 0x226c40u: goto label_226c40;
        case 0x226c44u: goto label_226c44;
        case 0x226c48u: goto label_226c48;
        case 0x226c4cu: goto label_226c4c;
        case 0x226c50u: goto label_226c50;
        case 0x226c54u: goto label_226c54;
        case 0x226c58u: goto label_226c58;
        case 0x226c5cu: goto label_226c5c;
        case 0x226c60u: goto label_226c60;
        case 0x226c64u: goto label_226c64;
        case 0x226c68u: goto label_226c68;
        case 0x226c6cu: goto label_226c6c;
        case 0x226c70u: goto label_226c70;
        case 0x226c74u: goto label_226c74;
        case 0x226c78u: goto label_226c78;
        case 0x226c7cu: goto label_226c7c;
        case 0x226c80u: goto label_226c80;
        case 0x226c84u: goto label_226c84;
        case 0x226c88u: goto label_226c88;
        case 0x226c8cu: goto label_226c8c;
        case 0x226c90u: goto label_226c90;
        case 0x226c94u: goto label_226c94;
        case 0x226c98u: goto label_226c98;
        case 0x226c9cu: goto label_226c9c;
        case 0x226ca0u: goto label_226ca0;
        case 0x226ca4u: goto label_226ca4;
        case 0x226ca8u: goto label_226ca8;
        case 0x226cacu: goto label_226cac;
        case 0x226cb0u: goto label_226cb0;
        case 0x226cb4u: goto label_226cb4;
        case 0x226cb8u: goto label_226cb8;
        case 0x226cbcu: goto label_226cbc;
        case 0x226cc0u: goto label_226cc0;
        case 0x226cc4u: goto label_226cc4;
        case 0x226cc8u: goto label_226cc8;
        case 0x226cccu: goto label_226ccc;
        default: break;
    }

    ctx->pc = 0x226c30u;

label_226c30:
    // 0x226c30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x226c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_226c34:
    // 0x226c34: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x226c34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_226c38:
    // 0x226c38: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x226c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_226c3c:
    // 0x226c3c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x226c3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_226c40:
    // 0x226c40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x226c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_226c44:
    // 0x226c44: 0xc0874fa  jal         func_21D3E8
label_226c48:
    if (ctx->pc == 0x226C48u) {
        ctx->pc = 0x226C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226C44u;
        // 0x226c48: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226C4Cu;
        goto label_226c4c;
    }
    ctx->pc = 0x226C44u;
    SET_GPR_U32(ctx, 31, 0x226C4Cu);
    ctx->pc = 0x226C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226C44u;
    // 0x226c48: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x226C44u, 0x226C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226C4Cu;
label_226c4c:
    // 0x226c4c: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x226c4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
label_226c50:
    // 0x226c50: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_226c54:
    if (ctx->pc == 0x226C54u) {
        ctx->pc = 0x226C58u;
        goto label_226c58;
    }
    ctx->pc = 0x226C50u;
    {
        const bool branch_taken_0x226c50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x226c50) {
            ctx->pc = 0x226C68u;
            goto label_226c68;
        }
    }
    ctx->pc = 0x226C58u;
label_226c58:
    // 0x226c58: 0xc089f22  jal         func_227C88
label_226c5c:
    if (ctx->pc == 0x226C5Cu) {
        ctx->pc = 0x226C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226C58u;
        // 0x226c5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226C60u;
        goto label_226c60;
    }
    ctx->pc = 0x226C58u;
    SET_GPR_U32(ctx, 31, 0x226C60u);
    ctx->pc = 0x226C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226C58u;
    // 0x226c5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227C88u, 0x226C58u, 0x226C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226C60u;
label_226c60:
    // 0x226c60: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
label_226c64:
    if (ctx->pc == 0x226C64u) {
        ctx->pc = 0x226C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226C60u;
        // 0x226c64: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226C68u;
        goto label_226c68;
    }
    ctx->pc = 0x226C60u;
    {
        const bool branch_taken_0x226c60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x226c60) {
            ctx->pc = 0x226C64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x226C60u;
            // 0x226c64: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x226CC0u;
            goto label_226cc0;
        }
    }
    ctx->pc = 0x226C68u;
label_226c68:
    // 0x226c68: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_226c6c:
    if (ctx->pc == 0x226C6Cu) {
        ctx->pc = 0x226C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226C68u;
        // 0x226c6c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226C70u;
        goto label_226c70;
    }
    ctx->pc = 0x226C68u;
    {
        const bool branch_taken_0x226c68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x226C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226C68u;
        // 0x226c6c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226c68) {
            ctx->pc = 0x226C9Cu;
            goto label_226c9c;
        }
    }
    ctx->pc = 0x226C70u;
label_226c70:
    // 0x226c70: 0xc089f5e  jal         func_227D78
label_226c74:
    if (ctx->pc == 0x226C74u) {
        ctx->pc = 0x226C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226C70u;
        // 0x226c74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226C78u;
        goto label_226c78;
    }
    ctx->pc = 0x226C70u;
    SET_GPR_U32(ctx, 31, 0x226C78u);
    ctx->pc = 0x226C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226C70u;
    // 0x226c74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D78u, 0x226C70u, 0x226C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226C78u;
label_226c78:
    // 0x226c78: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_226c7c:
    if (ctx->pc == 0x226C7Cu) {
        ctx->pc = 0x226C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226C78u;
        // 0x226c7c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226C80u;
        goto label_226c80;
    }
    ctx->pc = 0x226C78u;
    {
        const bool branch_taken_0x226c78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x226c78) {
            ctx->pc = 0x226C7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x226C78u;
            // 0x226c7c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x226CC0u;
            goto label_226cc0;
        }
    }
    ctx->pc = 0x226C80u;
label_226c80:
    // 0x226c80: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x226c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_226c84:
    // 0x226c84: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x226c84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_226c88:
    // 0x226c88: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x226c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_226c8c:
    // 0x226c8c: 0x40f809  jalr        $v0
label_226c90:
    if (ctx->pc == 0x226C90u) {
        ctx->pc = 0x226C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226C8Cu;
        // 0x226c90: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226C94u;
        goto label_226c94;
    }
    ctx->pc = 0x226C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x226C94u);
        ctx->pc = 0x226C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226C8Cu;
        // 0x226c90: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226C8Cu, 0x226C94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x226C94u;
label_226c94:
    // 0x226c94: 0x10000003  b           . + 4 + (0x3 << 2)
label_226c98:
    if (ctx->pc == 0x226C98u) {
        ctx->pc = 0x226C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226C94u;
        // 0x226c98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226C9Cu;
        goto label_226c9c;
    }
    ctx->pc = 0x226C94u;
    {
        const bool branch_taken_0x226c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226C94u;
        // 0x226c98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226c94) {
            ctx->pc = 0x226CA4u;
            goto label_226ca4;
        }
    }
    ctx->pc = 0x226C9Cu;
label_226c9c:
    // 0x226c9c: 0x8c42bd30  lw          $v0, -0x42D0($v0)
    ctx->pc = 0x226c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_226ca0:
    // 0x226ca0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x226ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_226ca4:
    // 0x226ca4: 0xc087502  jal         func_21D408
label_226ca8:
    if (ctx->pc == 0x226CA8u) {
        ctx->pc = 0x226CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226CA4u;
        // 0x226ca8: 0xae2200c8  sw          $v0, 0xC8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226CACu;
        goto label_226cac;
    }
    ctx->pc = 0x226CA4u;
    SET_GPR_U32(ctx, 31, 0x226CACu);
    ctx->pc = 0x226CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226CA4u;
    // 0x226ca8: 0xae2200c8  sw          $v0, 0xC8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x226CA4u, 0x226CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226CACu;
label_226cac:
    // 0x226cac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x226cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_226cb0:
    // 0x226cb0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x226cb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_226cb4:
    // 0x226cb4: 0xc0a33f8  jal         func_28CFE0
label_226cb8:
    if (ctx->pc == 0x226CB8u) {
        ctx->pc = 0x226CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226CB4u;
        // 0x226cb8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226CBCu;
        goto label_226cbc;
    }
    ctx->pc = 0x226CB4u;
    SET_GPR_U32(ctx, 31, 0x226CBCu);
    ctx->pc = 0x226CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226CB4u;
    // 0x226cb8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x226CB4u, 0x226CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226CBCu;
label_226cbc:
    // 0x226cbc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x226cbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_226cc0:
    // 0x226cc0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x226cc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_226cc4:
    // 0x226cc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x226cc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_226cc8:
    // 0x226cc8: 0x3e00008  jr          $ra
label_226ccc:
    if (ctx->pc == 0x226CCCu) {
        ctx->pc = 0x226CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226CC8u;
        // 0x226ccc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226CD0u;
        goto label_fallthrough_0x226cc8;
    }
    ctx->pc = 0x226CC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226CC8u;
        // 0x226ccc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226CC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x226cc8:
    ctx->pc = 0x226CD0u;
}
