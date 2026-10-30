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

// Function: sub_004C4B10
// Address: 0x4c4b10 - 0x4c4b80
void sub_004C4B10_0x4c4b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C4B10_0x4c4b10");
#endif

    switch (ctx->pc) {
        case 0x4c4b10u: goto label_4c4b10;
        case 0x4c4b14u: goto label_4c4b14;
        case 0x4c4b18u: goto label_4c4b18;
        case 0x4c4b1cu: goto label_4c4b1c;
        case 0x4c4b20u: goto label_4c4b20;
        case 0x4c4b24u: goto label_4c4b24;
        case 0x4c4b28u: goto label_4c4b28;
        case 0x4c4b2cu: goto label_4c4b2c;
        case 0x4c4b30u: goto label_4c4b30;
        case 0x4c4b34u: goto label_4c4b34;
        case 0x4c4b38u: goto label_4c4b38;
        case 0x4c4b3cu: goto label_4c4b3c;
        case 0x4c4b40u: goto label_4c4b40;
        case 0x4c4b44u: goto label_4c4b44;
        case 0x4c4b48u: goto label_4c4b48;
        case 0x4c4b4cu: goto label_4c4b4c;
        case 0x4c4b50u: goto label_4c4b50;
        case 0x4c4b54u: goto label_4c4b54;
        case 0x4c4b58u: goto label_4c4b58;
        case 0x4c4b5cu: goto label_4c4b5c;
        case 0x4c4b60u: goto label_4c4b60;
        case 0x4c4b64u: goto label_4c4b64;
        case 0x4c4b68u: goto label_4c4b68;
        case 0x4c4b6cu: goto label_4c4b6c;
        case 0x4c4b70u: goto label_4c4b70;
        case 0x4c4b74u: goto label_4c4b74;
        case 0x4c4b78u: goto label_4c4b78;
        case 0x4c4b7cu: goto label_4c4b7c;
        default: break;
    }

    ctx->pc = 0x4c4b10u;

label_4c4b10:
    // 0x4c4b10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4c4b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4c4b14:
    // 0x4c4b14: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_4c4b18:
    if (ctx->pc == 0x4C4B18u) {
        ctx->pc = 0x4C4B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4B14u;
        // 0x4c4b18: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C4B1Cu;
        goto label_4c4b1c;
    }
    ctx->pc = 0x4C4B14u;
    {
        const bool branch_taken_0x4c4b14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C4B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4B14u;
        // 0x4c4b18: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4b14) {
            ctx->pc = 0x4C4B48u;
            goto label_4c4b48;
        }
    }
    ctx->pc = 0x4C4B1Cu;
label_4c4b1c:
    // 0x4c4b1c: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x4c4b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
label_4c4b20:
    // 0x4c4b20: 0x8c622780  lw          $v0, 0x2780($v1)
    ctx->pc = 0x4c4b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10112)));
label_4c4b24:
    // 0x4c4b24: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_4c4b28:
    if (ctx->pc == 0x4C4B28u) {
        ctx->pc = 0x4C4B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4B24u;
        // 0x4c4b28: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C4B2Cu;
        goto label_4c4b2c;
    }
    ctx->pc = 0x4C4B24u;
    {
        const bool branch_taken_0x4c4b24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C4B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4B24u;
        // 0x4c4b28: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4b24) {
            ctx->pc = 0x4C4B30u;
            goto label_4c4b30;
        }
    }
    ctx->pc = 0x4C4B2Cu;
label_4c4b2c:
    // 0x4c4b2c: 0xacc42780  sw          $a0, 0x2780($a2)
    ctx->pc = 0x4c4b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 10112), GPR_U32(ctx, 4));
label_4c4b30:
    // 0x4c4b30: 0x8cc22780  lw          $v0, 0x2780($a2)
    ctx->pc = 0x4c4b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 10112)));
label_4c4b34:
    // 0x4c4b34: 0x10440006  beq         $v0, $a0, . + 4 + (0x6 << 2)
label_4c4b38:
    if (ctx->pc == 0x4C4B38u) {
        ctx->pc = 0x4C4B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4B34u;
        // 0x4c4b38: 0x3c020053  lui         $v0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C4B3Cu;
        goto label_4c4b3c;
    }
    ctx->pc = 0x4C4B34u;
    {
        const bool branch_taken_0x4c4b34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x4C4B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4B34u;
        // 0x4c4b38: 0x3c020053  lui         $v0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4b34) {
            ctx->pc = 0x4C4B50u;
            goto label_4c4b50;
        }
    }
    ctx->pc = 0x4C4B3Cu;
label_4c4b3c:
    // 0x4c4b3c: 0x8c432788  lw          $v1, 0x2788($v0)
    ctx->pc = 0x4c4b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10120)));
label_4c4b40:
    // 0x4c4b40: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
label_4c4b44:
    if (ctx->pc == 0x4C4B44u) {
        ctx->pc = 0x4C4B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4B40u;
        // 0x4c4b44: 0xacc42780  sw          $a0, 0x2780($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 10112), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C4B48u;
        goto label_4c4b48;
    }
    ctx->pc = 0x4C4B40u;
    {
        const bool branch_taken_0x4c4b40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c4b40) {
            ctx->pc = 0x4C4B44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C4B40u;
            // 0x4c4b44: 0xacc42780  sw          $a0, 0x2780($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 10112), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C4B50u;
            goto label_4c4b50;
        }
    }
    ctx->pc = 0x4C4B48u;
label_4c4b48:
    // 0x4c4b48: 0x10000009  b           . + 4 + (0x9 << 2)
label_4c4b4c:
    if (ctx->pc == 0x4C4B4Cu) {
        ctx->pc = 0x4C4B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4B48u;
        // 0x4c4b4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C4B50u;
        goto label_4c4b50;
    }
    ctx->pc = 0x4C4B48u;
    {
        const bool branch_taken_0x4c4b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C4B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4B48u;
        // 0x4c4b4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4b48) {
            ctx->pc = 0x4C4B70u;
            goto label_4c4b70;
        }
    }
    ctx->pc = 0x4C4B50u;
label_4c4b50:
    // 0x4c4b50: 0x8cc22780  lw          $v0, 0x2780($a2)
    ctx->pc = 0x4c4b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 10112)));
label_4c4b54:
    // 0x4c4b54: 0x40f809  jalr        $v0
label_4c4b58:
    if (ctx->pc == 0x4C4B58u) {
        ctx->pc = 0x4C4B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4B54u;
        // 0x4c4b58: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C4B5Cu;
        goto label_4c4b5c;
    }
    ctx->pc = 0x4C4B54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4C4B5Cu);
        ctx->pc = 0x4C4B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4B54u;
        // 0x4c4b58: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C4B54u, 0x4C4B5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4C4B5Cu;
label_4c4b5c:
    // 0x4c4b5c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_4c4b60:
    if (ctx->pc == 0x4C4B60u) {
        ctx->pc = 0x4C4B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4B5Cu;
        // 0x4c4b60: 0x3c030053  lui         $v1, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C4B64u;
        goto label_4c4b64;
    }
    ctx->pc = 0x4C4B5Cu;
    {
        const bool branch_taken_0x4c4b5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C4B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4B5Cu;
        // 0x4c4b60: 0x3c030053  lui         $v1, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4b5c) {
            ctx->pc = 0x4C4B68u;
            goto label_4c4b68;
        }
    }
    ctx->pc = 0x4C4B64u;
label_4c4b64:
    // 0x4c4b64: 0xac622784  sw          $v0, 0x2784($v1)
    ctx->pc = 0x4c4b64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 10116), GPR_U32(ctx, 2));
label_4c4b68:
    // 0x4c4b68: 0x8c622784  lw          $v0, 0x2784($v1)
    ctx->pc = 0x4c4b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10116)));
label_4c4b6c:
    // 0x4c4b6c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4c4b6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4c4b70:
    // 0x4c4b70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4c4b70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4c4b74:
    // 0x4c4b74: 0x3e00008  jr          $ra
label_4c4b78:
    if (ctx->pc == 0x4C4B78u) {
        ctx->pc = 0x4C4B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4B74u;
        // 0x4c4b78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C4B7Cu;
        goto label_4c4b7c;
    }
    ctx->pc = 0x4C4B74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C4B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4B74u;
        // 0x4c4b78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C4B74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C4B7Cu;
label_4c4b7c:
    // 0x4c4b7c: 0x0  nop
    ctx->pc = 0x4c4b7cu;
    // NOP
    ctx->pc = 0x4c4b80u;
}
