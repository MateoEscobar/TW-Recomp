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

// Function: sub_00175BE8
// Address: 0x175be8 - 0x175c58
void sub_00175BE8_0x175be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175BE8_0x175be8");
#endif

    switch (ctx->pc) {
        case 0x175be8u: goto label_175be8;
        case 0x175becu: goto label_175bec;
        case 0x175bf0u: goto label_175bf0;
        case 0x175bf4u: goto label_175bf4;
        case 0x175bf8u: goto label_175bf8;
        case 0x175bfcu: goto label_175bfc;
        case 0x175c00u: goto label_175c00;
        case 0x175c04u: goto label_175c04;
        case 0x175c08u: goto label_175c08;
        case 0x175c0cu: goto label_175c0c;
        case 0x175c10u: goto label_175c10;
        case 0x175c14u: goto label_175c14;
        case 0x175c18u: goto label_175c18;
        case 0x175c1cu: goto label_175c1c;
        case 0x175c20u: goto label_175c20;
        case 0x175c24u: goto label_175c24;
        case 0x175c28u: goto label_175c28;
        case 0x175c2cu: goto label_175c2c;
        case 0x175c30u: goto label_175c30;
        case 0x175c34u: goto label_175c34;
        case 0x175c38u: goto label_175c38;
        case 0x175c3cu: goto label_175c3c;
        case 0x175c40u: goto label_175c40;
        case 0x175c44u: goto label_175c44;
        case 0x175c48u: goto label_175c48;
        case 0x175c4cu: goto label_175c4c;
        case 0x175c50u: goto label_175c50;
        case 0x175c54u: goto label_175c54;
        default: break;
    }

    ctx->pc = 0x175be8u;

label_175be8:
    // 0x175be8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x175be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_175bec:
    // 0x175bec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x175becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_175bf0:
    // 0x175bf0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x175bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_175bf4:
    // 0x175bf4: 0xc05d484  jal         func_175210
label_175bf8:
    if (ctx->pc == 0x175BF8u) {
        ctx->pc = 0x175BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175BF4u;
        // 0x175bf8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175BFCu;
        goto label_175bfc;
    }
    ctx->pc = 0x175BF4u;
    SET_GPR_U32(ctx, 31, 0x175BFCu);
    ctx->pc = 0x175BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175BF4u;
    // 0x175bf8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x175BF4u, 0x175BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175BFCu;
label_175bfc:
    // 0x175bfc: 0xc05d484  jal         func_175210
label_175c00:
    if (ctx->pc == 0x175C00u) {
        ctx->pc = 0x175C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175BFCu;
        // 0x175c00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175C04u;
        goto label_175c04;
    }
    ctx->pc = 0x175BFCu;
    SET_GPR_U32(ctx, 31, 0x175C04u);
    ctx->pc = 0x175C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175BFCu;
    // 0x175c00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x175BFCu, 0x175C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175C04u;
label_175c04:
    // 0x175c04: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x175c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_175c08:
    // 0x175c08: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x175c08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_175c0c:
    // 0x175c0c: 0x8c6500f4  lw          $a1, 0xF4($v1)
    ctx->pc = 0x175c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_175c10:
    // 0x175c10: 0xa0f809  jalr        $a1
label_175c14:
    if (ctx->pc == 0x175C14u) {
        ctx->pc = 0x175C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175C10u;
        // 0x175c14: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175C18u;
        goto label_175c18;
    }
    ctx->pc = 0x175C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x175C18u);
        ctx->pc = 0x175C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175C10u;
        // 0x175c14: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175C10u, 0x175C18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x175C18u;
label_175c18:
    // 0x175c18: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_175c1c:
    if (ctx->pc == 0x175C1Cu) {
        ctx->pc = 0x175C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175C18u;
        // 0x175c1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175C20u;
        goto label_175c20;
    }
    ctx->pc = 0x175C18u;
    {
        const bool branch_taken_0x175c18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x175c18) {
            ctx->pc = 0x175C1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x175C18u;
            // 0x175c1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x175C48u;
            goto label_175c48;
        }
    }
    ctx->pc = 0x175C20u;
label_175c20:
    // 0x175c20: 0xc05d484  jal         func_175210
label_175c24:
    if (ctx->pc == 0x175C24u) {
        ctx->pc = 0x175C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175C20u;
        // 0x175c24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175C28u;
        goto label_175c28;
    }
    ctx->pc = 0x175C20u;
    SET_GPR_U32(ctx, 31, 0x175C28u);
    ctx->pc = 0x175C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175C20u;
    // 0x175c24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x175C20u, 0x175C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175C28u;
label_175c28:
    // 0x175c28: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x175c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_175c2c:
    // 0x175c2c: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x175c2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_175c30:
    // 0x175c30: 0x8c6500f4  lw          $a1, 0xF4($v1)
    ctx->pc = 0x175c30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_175c34:
    // 0x175c34: 0xa0f809  jalr        $a1
label_175c38:
    if (ctx->pc == 0x175C38u) {
        ctx->pc = 0x175C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175C34u;
        // 0x175c38: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175C3Cu;
        goto label_175c3c;
    }
    ctx->pc = 0x175C34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x175C3Cu);
        ctx->pc = 0x175C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175C34u;
        // 0x175c38: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175C34u, 0x175C3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x175C3Cu;
label_175c3c:
    // 0x175c3c: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x175c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_175c40:
    // 0x175c40: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x175c40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
label_175c44:
    // 0x175c44: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x175c44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_175c48:
    // 0x175c48: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x175c48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_175c4c:
    // 0x175c4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x175c4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_175c50:
    // 0x175c50: 0x3e00008  jr          $ra
label_175c54:
    if (ctx->pc == 0x175C54u) {
        ctx->pc = 0x175C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175C50u;
        // 0x175c54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175C58u;
        goto label_fallthrough_0x175c50;
    }
    ctx->pc = 0x175C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175C50u;
        // 0x175c54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175C50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x175c50:
    ctx->pc = 0x175C58u;
}
