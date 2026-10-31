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

// Function: sub_0039BB38
// Address: 0x39bb38 - 0x39bba0
void sub_0039BB38_0x39bb38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039BB38_0x39bb38");
#endif

    switch (ctx->pc) {
        case 0x39bb38u: goto label_39bb38;
        case 0x39bb3cu: goto label_39bb3c;
        case 0x39bb40u: goto label_39bb40;
        case 0x39bb44u: goto label_39bb44;
        case 0x39bb48u: goto label_39bb48;
        case 0x39bb4cu: goto label_39bb4c;
        case 0x39bb50u: goto label_39bb50;
        case 0x39bb54u: goto label_39bb54;
        case 0x39bb58u: goto label_39bb58;
        case 0x39bb5cu: goto label_39bb5c;
        case 0x39bb60u: goto label_39bb60;
        case 0x39bb64u: goto label_39bb64;
        case 0x39bb68u: goto label_39bb68;
        case 0x39bb6cu: goto label_39bb6c;
        case 0x39bb70u: goto label_39bb70;
        case 0x39bb74u: goto label_39bb74;
        case 0x39bb78u: goto label_39bb78;
        case 0x39bb7cu: goto label_39bb7c;
        case 0x39bb80u: goto label_39bb80;
        case 0x39bb84u: goto label_39bb84;
        case 0x39bb88u: goto label_39bb88;
        case 0x39bb8cu: goto label_39bb8c;
        case 0x39bb90u: goto label_39bb90;
        case 0x39bb94u: goto label_39bb94;
        case 0x39bb98u: goto label_39bb98;
        case 0x39bb9cu: goto label_39bb9c;
        default: break;
    }

    ctx->pc = 0x39bb38u;

label_39bb38:
    // 0x39bb38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39bb38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_39bb3c:
    // 0x39bb3c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x39bb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_39bb40:
    // 0x39bb40: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x39bb40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_39bb44:
    // 0x39bb44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39bb44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_39bb48:
    // 0x39bb48: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39bb48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39bb4c:
    // 0x39bb4c: 0x8c622c2c  lw          $v0, 0x2C2C($v1)
    ctx->pc = 0x39bb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11308)));
label_39bb50:
    // 0x39bb50: 0x8e0400d4  lw          $a0, 0xD4($s0)
    ctx->pc = 0x39bb50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_39bb54:
    // 0x39bb54: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x39bb54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_39bb58:
    // 0x39bb58: 0xc0e400e  jal         func_390038
label_39bb5c:
    if (ctx->pc == 0x39BB5Cu) {
        ctx->pc = 0x39BB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BB58u;
        // 0x39bb5c: 0xac622c2c  sw          $v0, 0x2C2C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 11308), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39BB60u;
        goto label_39bb60;
    }
    ctx->pc = 0x39BB58u;
    SET_GPR_U32(ctx, 31, 0x39BB60u);
    ctx->pc = 0x39BB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BB58u;
    // 0x39bb5c: 0xac622c2c  sw          $v0, 0x2C2C($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 11308), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390038u, 0x39BB58u, 0x39BB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BB60u;
label_39bb60:
    // 0x39bb60: 0xc0e8598  jal         func_3A1660
label_39bb64:
    if (ctx->pc == 0x39BB64u) {
        ctx->pc = 0x39BB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BB60u;
        // 0x39bb64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39BB68u;
        goto label_39bb68;
    }
    ctx->pc = 0x39BB60u;
    SET_GPR_U32(ctx, 31, 0x39BB68u);
    ctx->pc = 0x39BB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BB60u;
    // 0x39bb64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1660u, 0x39BB60u, 0x39BB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BB68u;
label_39bb68:
    // 0x39bb68: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x39bb68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_39bb6c:
    // 0x39bb6c: 0x86050060  lh          $a1, 0x60($s0)
    ctx->pc = 0x39bb6cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
label_39bb70:
    // 0x39bb70: 0xc0e8b36  jal         func_3A2CD8
label_39bb74:
    if (ctx->pc == 0x39BB74u) {
        ctx->pc = 0x39BB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BB70u;
        // 0x39bb74: 0x8c442c7c  lw          $a0, 0x2C7C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39BB78u;
        goto label_39bb78;
    }
    ctx->pc = 0x39BB70u;
    SET_GPR_U32(ctx, 31, 0x39BB78u);
    ctx->pc = 0x39BB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BB70u;
    // 0x39bb74: 0x8c442c7c  lw          $a0, 0x2C7C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2CD8u, 0x39BB70u, 0x39BB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BB78u;
label_39bb78:
    // 0x39bb78: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x39bb78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_39bb7c:
    // 0x39bb7c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x39bb7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39bb80:
    // 0x39bb80: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x39bb80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_39bb84:
    // 0x39bb84: 0x8c66002c  lw          $a2, 0x2C($v1)
    ctx->pc = 0x39bb84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_39bb88:
    // 0x39bb88: 0xc0f809  jalr        $a2
label_39bb8c:
    if (ctx->pc == 0x39BB8Cu) {
        ctx->pc = 0x39BB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BB88u;
        // 0x39bb8c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39BB90u;
        goto label_39bb90;
    }
    ctx->pc = 0x39BB88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x39BB90u);
        ctx->pc = 0x39BB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BB88u;
        // 0x39bb8c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39BB88u, 0x39BB90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39BB90u;
label_39bb90:
    // 0x39bb90: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x39bb90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_39bb94:
    // 0x39bb94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39bb94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39bb98:
    // 0x39bb98: 0x3e00008  jr          $ra
label_39bb9c:
    if (ctx->pc == 0x39BB9Cu) {
        ctx->pc = 0x39BB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BB98u;
        // 0x39bb9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39BBA0u;
        goto label_fallthrough_0x39bb98;
    }
    ctx->pc = 0x39BB98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39BB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BB98u;
        // 0x39bb9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39BB98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x39bb98:
    ctx->pc = 0x39BBA0u;
}
