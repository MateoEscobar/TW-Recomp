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

// Function: sub_003A0D40
// Address: 0x3a0d40 - 0x3a0da8
void sub_003A0D40_0x3a0d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A0D40_0x3a0d40");
#endif

    switch (ctx->pc) {
        case 0x3a0d40u: goto label_3a0d40;
        case 0x3a0d44u: goto label_3a0d44;
        case 0x3a0d48u: goto label_3a0d48;
        case 0x3a0d4cu: goto label_3a0d4c;
        case 0x3a0d50u: goto label_3a0d50;
        case 0x3a0d54u: goto label_3a0d54;
        case 0x3a0d58u: goto label_3a0d58;
        case 0x3a0d5cu: goto label_3a0d5c;
        case 0x3a0d60u: goto label_3a0d60;
        case 0x3a0d64u: goto label_3a0d64;
        case 0x3a0d68u: goto label_3a0d68;
        case 0x3a0d6cu: goto label_3a0d6c;
        case 0x3a0d70u: goto label_3a0d70;
        case 0x3a0d74u: goto label_3a0d74;
        case 0x3a0d78u: goto label_3a0d78;
        case 0x3a0d7cu: goto label_3a0d7c;
        case 0x3a0d80u: goto label_3a0d80;
        case 0x3a0d84u: goto label_3a0d84;
        case 0x3a0d88u: goto label_3a0d88;
        case 0x3a0d8cu: goto label_3a0d8c;
        case 0x3a0d90u: goto label_3a0d90;
        case 0x3a0d94u: goto label_3a0d94;
        case 0x3a0d98u: goto label_3a0d98;
        case 0x3a0d9cu: goto label_3a0d9c;
        case 0x3a0da0u: goto label_3a0da0;
        case 0x3a0da4u: goto label_3a0da4;
        default: break;
    }

    ctx->pc = 0x3a0d40u;

label_3a0d40:
    // 0x3a0d40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a0d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3a0d44:
    // 0x3a0d44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a0d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a0d48:
    // 0x3a0d48: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3a0d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3a0d4c:
    // 0x3a0d4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a0d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3a0d50:
    // 0x3a0d50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a0d50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a0d54:
    // 0x3a0d54: 0xae0000f8  sw          $zero, 0xF8($s0)
    ctx->pc = 0x3a0d54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 0));
label_3a0d58:
    // 0x3a0d58: 0xc0e7d14  jal         func_39F450
label_3a0d5c:
    if (ctx->pc == 0x3A0D5Cu) {
        ctx->pc = 0x3A0D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0D58u;
        // 0x3a0d5c: 0xa20200e4  sb          $v0, 0xE4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 228), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0D60u;
        goto label_3a0d60;
    }
    ctx->pc = 0x3A0D58u;
    SET_GPR_U32(ctx, 31, 0x3A0D60u);
    ctx->pc = 0x3A0D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0D58u;
    // 0x3a0d5c: 0xa20200e4  sb          $v0, 0xE4($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 228), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39F450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39F450u, 0x3A0D58u, 0x3A0D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0D60u;
label_3a0d60:
    // 0x3a0d60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a0d60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a0d64:
    // 0x3a0d64: 0xc0e749e  jal         func_39D278
label_3a0d68:
    if (ctx->pc == 0x3A0D68u) {
        ctx->pc = 0x3A0D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0D64u;
        // 0x3a0d68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0D6Cu;
        goto label_3a0d6c;
    }
    ctx->pc = 0x3A0D64u;
    SET_GPR_U32(ctx, 31, 0x3A0D6Cu);
    ctx->pc = 0x3A0D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0D64u;
    // 0x3a0d68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39D278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39D278u, 0x3A0D64u, 0x3A0D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0D6Cu;
label_3a0d6c:
    // 0x3a0d6c: 0xc0e8598  jal         func_3A1660
label_3a0d70:
    if (ctx->pc == 0x3A0D70u) {
        ctx->pc = 0x3A0D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0D6Cu;
        // 0x3a0d70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0D74u;
        goto label_3a0d74;
    }
    ctx->pc = 0x3A0D6Cu;
    SET_GPR_U32(ctx, 31, 0x3A0D74u);
    ctx->pc = 0x3A0D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0D6Cu;
    // 0x3a0d70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1660u, 0x3A0D6Cu, 0x3A0D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0D74u;
label_3a0d74:
    // 0x3a0d74: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3a0d74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_3a0d78:
    // 0x3a0d78: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3a0d78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a0d7c:
    // 0x3a0d7c: 0x8c622c7c  lw          $v0, 0x2C7C($v1)
    ctx->pc = 0x3a0d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11388)));
label_3a0d80:
    // 0x3a0d80: 0x8c460850  lw          $a2, 0x850($v0)
    ctx->pc = 0x3a0d80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2128)));
label_3a0d84:
    // 0x3a0d84: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3a0d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3a0d88:
    // 0x3a0d88: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x3a0d88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_3a0d8c:
    // 0x3a0d8c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x3a0d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_3a0d90:
    // 0x3a0d90: 0x40f809  jalr        $v0
label_3a0d94:
    if (ctx->pc == 0x3A0D94u) {
        ctx->pc = 0x3A0D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0D90u;
        // 0x3a0d94: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0D98u;
        goto label_3a0d98;
    }
    ctx->pc = 0x3A0D90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A0D98u);
        ctx->pc = 0x3A0D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0D90u;
        // 0x3a0d94: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A0D90u, 0x3A0D98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A0D98u;
label_3a0d98:
    // 0x3a0d98: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3a0d98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a0d9c:
    // 0x3a0d9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a0d9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a0da0:
    // 0x3a0da0: 0x3e00008  jr          $ra
label_3a0da4:
    if (ctx->pc == 0x3A0DA4u) {
        ctx->pc = 0x3A0DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0DA0u;
        // 0x3a0da4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0DA8u;
        goto label_fallthrough_0x3a0da0;
    }
    ctx->pc = 0x3A0DA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A0DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0DA0u;
        // 0x3a0da4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A0DA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3a0da0:
    ctx->pc = 0x3A0DA8u;
}
