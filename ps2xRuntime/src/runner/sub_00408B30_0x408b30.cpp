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

// Function: sub_00408B30
// Address: 0x408b30 - 0x408ba0
void sub_00408B30_0x408b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00408B30_0x408b30");
#endif

    switch (ctx->pc) {
        case 0x408b48u: goto label_408b48;
        case 0x408b60u: goto label_408b60;
        case 0x408b74u: goto label_408b74;
        case 0x408b80u: goto label_408b80;
        case 0x408b8cu: goto label_408b8c;
        default: break;
    }

    ctx->pc = 0x408b30u;

    // 0x408b30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x408b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x408b34: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x408b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x408b38: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x408b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x408b3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x408b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x408b40: 0xc10314e  jal         func_40C538
    ctx->pc = 0x408B40u;
    SET_GPR_U32(ctx, 31, 0x408B48u);
    ctx->pc = 0x408B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408B40u;
    // 0x408b44: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C538u, 0x408B40u, 0x408B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408B48u;
label_408b48:
    // 0x408b48: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x408B48u;
    {
        const bool branch_taken_0x408b48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x408B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408B48u;
        // 0x408b4c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x408b48) {
            ctx->pc = 0x408B68u;
            goto label_408b68;
        }
    }
    ctx->pc = 0x408B50u;
    // 0x408b50: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x408b50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x408b54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x408b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x408b58: 0xc10241a  jal         func_409068
    ctx->pc = 0x408B58u;
    SET_GPR_U32(ctx, 31, 0x408B60u);
    ctx->pc = 0x408B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408B58u;
    // 0x408b5c: 0x24a57dc0  addiu       $a1, $a1, 0x7DC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409068u, 0x408B58u, 0x408B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408B60u;
label_408b60:
    // 0x408b60: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x408B60u;
    {
        const bool branch_taken_0x408b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x408B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408B60u;
        // 0x408b64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x408b60) {
            ctx->pc = 0x408B90u;
            goto label_408b90;
        }
    }
    ctx->pc = 0x408B68u;
label_408b68:
    // 0x408b68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x408b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x408b6c: 0xc1024b6  jal         func_4092D8
    ctx->pc = 0x408B6Cu;
    SET_GPR_U32(ctx, 31, 0x408B74u);
    ctx->pc = 0x408B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408B6Cu;
    // 0x408b70: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4092D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4092D8u, 0x408B6Cu, 0x408B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408B74u;
label_408b74:
    // 0x408b74: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x408b74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x408b78: 0xc1026aa  jal         func_409AA8
    ctx->pc = 0x408B78u;
    SET_GPR_U32(ctx, 31, 0x408B80u);
    ctx->pc = 0x408B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408B78u;
    // 0x408b7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409AA8u, 0x408B78u, 0x408B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408B80u;
label_408b80:
    // 0x408b80: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x408b80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x408b84: 0xc102542  jal         func_409508
    ctx->pc = 0x408B84u;
    SET_GPR_U32(ctx, 31, 0x408B8Cu);
    ctx->pc = 0x408B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408B84u;
    // 0x408b88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409508u, 0x408B84u, 0x408B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408B8Cu;
label_408b8c:
    // 0x408b8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x408b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_408b90:
    // 0x408b90: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x408b90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x408b94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x408b94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x408b98: 0x3e00008  jr          $ra
    ctx->pc = 0x408B98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x408B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408B98u;
        // 0x408b9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x408B98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x408BA0u;
}
