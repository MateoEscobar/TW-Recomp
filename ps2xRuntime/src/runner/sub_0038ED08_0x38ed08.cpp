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

// Function: sub_0038ED08
// Address: 0x38ed08 - 0x38ed68
void sub_0038ED08_0x38ed08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038ED08_0x38ed08");
#endif

    switch (ctx->pc) {
        case 0x38ed08u: goto label_38ed08;
        case 0x38ed0cu: goto label_38ed0c;
        case 0x38ed10u: goto label_38ed10;
        case 0x38ed14u: goto label_38ed14;
        case 0x38ed18u: goto label_38ed18;
        case 0x38ed1cu: goto label_38ed1c;
        case 0x38ed20u: goto label_38ed20;
        case 0x38ed24u: goto label_38ed24;
        case 0x38ed28u: goto label_38ed28;
        case 0x38ed2cu: goto label_38ed2c;
        case 0x38ed30u: goto label_38ed30;
        case 0x38ed34u: goto label_38ed34;
        case 0x38ed38u: goto label_38ed38;
        case 0x38ed3cu: goto label_38ed3c;
        case 0x38ed40u: goto label_38ed40;
        case 0x38ed44u: goto label_38ed44;
        case 0x38ed48u: goto label_38ed48;
        case 0x38ed4cu: goto label_38ed4c;
        case 0x38ed50u: goto label_38ed50;
        case 0x38ed54u: goto label_38ed54;
        case 0x38ed58u: goto label_38ed58;
        case 0x38ed5cu: goto label_38ed5c;
        case 0x38ed60u: goto label_38ed60;
        case 0x38ed64u: goto label_38ed64;
        default: break;
    }

    ctx->pc = 0x38ed08u;

label_38ed08:
    // 0x38ed08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38ed08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_38ed0c:
    // 0x38ed0c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x38ed0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_38ed10:
    // 0x38ed10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38ed10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_38ed14:
    // 0x38ed14: 0xc0e3bb0  jal         func_38EEC0
label_38ed18:
    if (ctx->pc == 0x38ED18u) {
        ctx->pc = 0x38ED18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ED14u;
        // 0x38ed18: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38ED1Cu;
        goto label_38ed1c;
    }
    ctx->pc = 0x38ED14u;
    SET_GPR_U32(ctx, 31, 0x38ED1Cu);
    ctx->pc = 0x38ED18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38ED14u;
    // 0x38ed18: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EEC0u, 0x38ED14u, 0x38ED1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38ED1Cu;
label_38ed1c:
    // 0x38ed1c: 0xc0e125a  jal         func_384968
label_38ed20:
    if (ctx->pc == 0x38ED20u) {
        ctx->pc = 0x38ED20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ED1Cu;
        // 0x38ed20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38ED24u;
        goto label_38ed24;
    }
    ctx->pc = 0x38ED1Cu;
    SET_GPR_U32(ctx, 31, 0x38ED24u);
    ctx->pc = 0x38ED20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38ED1Cu;
    // 0x38ed20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x384968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x384968u, 0x38ED1Cu, 0x38ED24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38ED24u;
label_38ed24:
    // 0x38ed24: 0xc0e8598  jal         func_3A1660
label_38ed28:
    if (ctx->pc == 0x38ED28u) {
        ctx->pc = 0x38ED28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ED24u;
        // 0x38ed28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38ED2Cu;
        goto label_38ed2c;
    }
    ctx->pc = 0x38ED24u;
    SET_GPR_U32(ctx, 31, 0x38ED2Cu);
    ctx->pc = 0x38ED28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38ED24u;
    // 0x38ed28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1660u, 0x38ED24u, 0x38ED2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38ED2Cu;
label_38ed2c:
    // 0x38ed2c: 0xc0e400e  jal         func_390038
label_38ed30:
    if (ctx->pc == 0x38ED30u) {
        ctx->pc = 0x38ED30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ED2Cu;
        // 0x38ed30: 0x8e0400e0  lw          $a0, 0xE0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38ED34u;
        goto label_38ed34;
    }
    ctx->pc = 0x38ED2Cu;
    SET_GPR_U32(ctx, 31, 0x38ED34u);
    ctx->pc = 0x38ED30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38ED2Cu;
    // 0x38ed30: 0x8e0400e0  lw          $a0, 0xE0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390038u, 0x38ED2Cu, 0x38ED34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38ED34u;
label_38ed34:
    // 0x38ed34: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x38ed34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_38ed38:
    // 0x38ed38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x38ed38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38ed3c:
    // 0x38ed3c: 0x8c622c7c  lw          $v0, 0x2C7C($v1)
    ctx->pc = 0x38ed3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11388)));
label_38ed40:
    // 0x38ed40: 0x8c46084c  lw          $a2, 0x84C($v0)
    ctx->pc = 0x38ed40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2124)));
label_38ed44:
    // 0x38ed44: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x38ed44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_38ed48:
    // 0x38ed48: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x38ed48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_38ed4c:
    // 0x38ed4c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x38ed4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_38ed50:
    // 0x38ed50: 0x40f809  jalr        $v0
label_38ed54:
    if (ctx->pc == 0x38ED54u) {
        ctx->pc = 0x38ED54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ED50u;
        // 0x38ed54: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38ED58u;
        goto label_38ed58;
    }
    ctx->pc = 0x38ED50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38ED58u);
        ctx->pc = 0x38ED54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ED50u;
        // 0x38ed54: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38ED50u, 0x38ED58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38ED58u;
label_38ed58:
    // 0x38ed58: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x38ed58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_38ed5c:
    // 0x38ed5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38ed5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_38ed60:
    // 0x38ed60: 0x3e00008  jr          $ra
label_38ed64:
    if (ctx->pc == 0x38ED64u) {
        ctx->pc = 0x38ED64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ED60u;
        // 0x38ed64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38ED68u;
        goto label_fallthrough_0x38ed60;
    }
    ctx->pc = 0x38ED60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38ED64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ED60u;
        // 0x38ed64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38ED60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x38ed60:
    ctx->pc = 0x38ED68u;
}
