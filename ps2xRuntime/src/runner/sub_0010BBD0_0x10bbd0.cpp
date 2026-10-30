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

// Function: sub_0010BBD0
// Address: 0x10bbd0 - 0x10bc38
void sub_0010BBD0_0x10bbd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010BBD0_0x10bbd0");
#endif

    switch (ctx->pc) {
        case 0x10bbd0u: goto label_10bbd0;
        case 0x10bbd4u: goto label_10bbd4;
        case 0x10bbd8u: goto label_10bbd8;
        case 0x10bbdcu: goto label_10bbdc;
        case 0x10bbe0u: goto label_10bbe0;
        case 0x10bbe4u: goto label_10bbe4;
        case 0x10bbe8u: goto label_10bbe8;
        case 0x10bbecu: goto label_10bbec;
        case 0x10bbf0u: goto label_10bbf0;
        case 0x10bbf4u: goto label_10bbf4;
        case 0x10bbf8u: goto label_10bbf8;
        case 0x10bbfcu: goto label_10bbfc;
        case 0x10bc00u: goto label_10bc00;
        case 0x10bc04u: goto label_10bc04;
        case 0x10bc08u: goto label_10bc08;
        case 0x10bc0cu: goto label_10bc0c;
        case 0x10bc10u: goto label_10bc10;
        case 0x10bc14u: goto label_10bc14;
        case 0x10bc18u: goto label_10bc18;
        case 0x10bc1cu: goto label_10bc1c;
        case 0x10bc20u: goto label_10bc20;
        case 0x10bc24u: goto label_10bc24;
        case 0x10bc28u: goto label_10bc28;
        case 0x10bc2cu: goto label_10bc2c;
        case 0x10bc30u: goto label_10bc30;
        case 0x10bc34u: goto label_10bc34;
        default: break;
    }

    ctx->pc = 0x10bbd0u;

label_10bbd0:
    // 0x10bbd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10bbd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_10bbd4:
    // 0x10bbd4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x10bbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_10bbd8:
    // 0x10bbd8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x10bbd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_10bbdc:
    // 0x10bbdc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x10bbdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_10bbe0:
    // 0x10bbe0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10bbe0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10bbe4:
    // 0x10bbe4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10bbe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_10bbe8:
    // 0x10bbe8: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_10bbec:
    if (ctx->pc == 0x10BBECu) {
        ctx->pc = 0x10BBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BBE8u;
        // 0x10bbec: 0x8c51a8bc  lw          $s1, -0x5744($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944956)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BBF0u;
        goto label_10bbf0;
    }
    ctx->pc = 0x10BBE8u;
    {
        const bool branch_taken_0x10bbe8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BBE8u;
        // 0x10bbec: 0x8c51a8bc  lw          $s1, -0x5744($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944956)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bbe8) {
            ctx->pc = 0x10BC24u;
            goto label_10bc24;
        }
    }
    ctx->pc = 0x10BBF0u;
label_10bbf0:
    // 0x10bbf0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x10bbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_10bbf4:
    // 0x10bbf4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x10bbf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_10bbf8:
    // 0x10bbf8: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x10bbf8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_10bbfc:
    // 0x10bbfc: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x10bbfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_10bc00:
    // 0x10bc00: 0xc0f809  jalr        $a2
label_10bc04:
    if (ctx->pc == 0x10BC04u) {
        ctx->pc = 0x10BC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BC00u;
        // 0x10bc04: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BC08u;
        goto label_10bc08;
    }
    ctx->pc = 0x10BC00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x10BC08u);
        ctx->pc = 0x10BC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BC00u;
        // 0x10bc04: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BC00u, 0x10BC08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10BC08u;
label_10bc08:
    // 0x10bc08: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x10bc08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_10bc0c:
    // 0x10bc0c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x10bc0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_10bc10:
    // 0x10bc10: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x10bc10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_10bc14:
    // 0x10bc14: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x10bc14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_10bc18:
    // 0x10bc18: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x10bc18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
label_10bc1c:
    // 0x10bc1c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x10bc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_10bc20:
    // 0x10bc20: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x10bc20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_10bc24:
    // 0x10bc24: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x10bc24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_10bc28:
    // 0x10bc28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10bc28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_10bc2c:
    // 0x10bc2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10bc2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10bc30:
    // 0x10bc30: 0x3e00008  jr          $ra
label_10bc34:
    if (ctx->pc == 0x10BC34u) {
        ctx->pc = 0x10BC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BC30u;
        // 0x10bc34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BC38u;
        goto label_fallthrough_0x10bc30;
    }
    ctx->pc = 0x10BC30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10BC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BC30u;
        // 0x10bc34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BC30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10bc30:
    ctx->pc = 0x10BC38u;
}
