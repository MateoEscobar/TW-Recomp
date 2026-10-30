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

// Function: sub_00416B18
// Address: 0x416b18 - 0x416b68
void sub_00416B18_0x416b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00416B18_0x416b18");
#endif

    switch (ctx->pc) {
        case 0x416b18u: goto label_416b18;
        case 0x416b1cu: goto label_416b1c;
        case 0x416b20u: goto label_416b20;
        case 0x416b24u: goto label_416b24;
        case 0x416b28u: goto label_416b28;
        case 0x416b2cu: goto label_416b2c;
        case 0x416b30u: goto label_416b30;
        case 0x416b34u: goto label_416b34;
        case 0x416b38u: goto label_416b38;
        case 0x416b3cu: goto label_416b3c;
        case 0x416b40u: goto label_416b40;
        case 0x416b44u: goto label_416b44;
        case 0x416b48u: goto label_416b48;
        case 0x416b4cu: goto label_416b4c;
        case 0x416b50u: goto label_416b50;
        case 0x416b54u: goto label_416b54;
        case 0x416b58u: goto label_416b58;
        case 0x416b5cu: goto label_416b5c;
        case 0x416b60u: goto label_416b60;
        case 0x416b64u: goto label_416b64;
        default: break;
    }

    ctx->pc = 0x416b18u;

label_416b18:
    // 0x416b18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x416b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_416b1c:
    // 0x416b1c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x416b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_416b20:
    // 0x416b20: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x416b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_416b24:
    // 0x416b24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x416b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_416b28:
    // 0x416b28: 0x948300d0  lhu         $v1, 0xD0($a0)
    ctx->pc = 0x416b28u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 208)));
label_416b2c:
    // 0x416b2c: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_416b30:
    if (ctx->pc == 0x416B30u) {
        ctx->pc = 0x416B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416B2Cu;
        // 0x416b30: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x416B34u;
        goto label_416b34;
    }
    ctx->pc = 0x416B2Cu;
    {
        const bool branch_taken_0x416b2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x416B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416B2Cu;
        // 0x416b30: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416b2c) {
            ctx->pc = 0x416B58u;
            goto label_416b58;
        }
    }
    ctx->pc = 0x416B34u;
label_416b34:
    // 0x416b34: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x416b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_416b38:
    // 0x416b38: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x416b38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_416b3c:
    // 0x416b3c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x416b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_416b40:
    // 0x416b40: 0x40f809  jalr        $v0
label_416b44:
    if (ctx->pc == 0x416B44u) {
        ctx->pc = 0x416B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416B40u;
        // 0x416b44: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x416B48u;
        goto label_416b48;
    }
    ctx->pc = 0x416B40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x416B48u);
        ctx->pc = 0x416B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416B40u;
        // 0x416b44: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x416B40u, 0x416B48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x416B48u;
label_416b48:
    // 0x416b48: 0xc08cfbc  jal         func_233EF0
label_416b4c:
    if (ctx->pc == 0x416B4Cu) {
        ctx->pc = 0x416B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416B48u;
        // 0x416b4c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x416B50u;
        goto label_416b50;
    }
    ctx->pc = 0x416B48u;
    SET_GPR_U32(ctx, 31, 0x416B50u);
    ctx->pc = 0x416B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x416B48u;
    // 0x416b4c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233EF0u, 0x416B48u, 0x416B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x416B50u;
label_416b50:
    // 0x416b50: 0xc089c70  jal         func_2271C0
label_416b54:
    if (ctx->pc == 0x416B54u) {
        ctx->pc = 0x416B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416B50u;
        // 0x416b54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x416B58u;
        goto label_416b58;
    }
    ctx->pc = 0x416B50u;
    SET_GPR_U32(ctx, 31, 0x416B58u);
    ctx->pc = 0x416B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x416B50u;
    // 0x416b54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2271C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2271C0u, 0x416B50u, 0x416B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x416B58u;
label_416b58:
    // 0x416b58: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x416b58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_416b5c:
    // 0x416b5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x416b5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_416b60:
    // 0x416b60: 0x3e00008  jr          $ra
label_416b64:
    if (ctx->pc == 0x416B64u) {
        ctx->pc = 0x416B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416B60u;
        // 0x416b64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x416B68u;
        goto label_fallthrough_0x416b60;
    }
    ctx->pc = 0x416B60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x416B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416B60u;
        // 0x416b64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x416B60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x416b60:
    ctx->pc = 0x416B68u;
}
