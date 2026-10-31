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

// Function: sub_001C2F30
// Address: 0x1c2f30 - 0x1c2f90
void sub_001C2F30_0x1c2f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C2F30_0x1c2f30");
#endif

    switch (ctx->pc) {
        case 0x1c2f30u: goto label_1c2f30;
        case 0x1c2f34u: goto label_1c2f34;
        case 0x1c2f38u: goto label_1c2f38;
        case 0x1c2f3cu: goto label_1c2f3c;
        case 0x1c2f40u: goto label_1c2f40;
        case 0x1c2f44u: goto label_1c2f44;
        case 0x1c2f48u: goto label_1c2f48;
        case 0x1c2f4cu: goto label_1c2f4c;
        case 0x1c2f50u: goto label_1c2f50;
        case 0x1c2f54u: goto label_1c2f54;
        case 0x1c2f58u: goto label_1c2f58;
        case 0x1c2f5cu: goto label_1c2f5c;
        case 0x1c2f60u: goto label_1c2f60;
        case 0x1c2f64u: goto label_1c2f64;
        case 0x1c2f68u: goto label_1c2f68;
        case 0x1c2f6cu: goto label_1c2f6c;
        case 0x1c2f70u: goto label_1c2f70;
        case 0x1c2f74u: goto label_1c2f74;
        case 0x1c2f78u: goto label_1c2f78;
        case 0x1c2f7cu: goto label_1c2f7c;
        case 0x1c2f80u: goto label_1c2f80;
        case 0x1c2f84u: goto label_1c2f84;
        case 0x1c2f88u: goto label_1c2f88;
        case 0x1c2f8cu: goto label_1c2f8c;
        default: break;
    }

    ctx->pc = 0x1c2f30u;

label_1c2f30:
    // 0x1c2f30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c2f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1c2f34:
    // 0x1c2f34: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1c2f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1c2f38:
    // 0x1c2f38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c2f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1c2f3c:
    // 0x1c2f3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c2f3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c2f40:
    // 0x1c2f40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c2f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c2f44:
    // 0x1c2f44: 0x26113390  addiu       $s1, $s0, 0x3390
    ctx->pc = 0x1c2f44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 13200));
label_1c2f48:
    // 0x1c2f48: 0x8e020434  lw          $v0, 0x434($s0)
    ctx->pc = 0x1c2f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1076)));
label_1c2f4c:
    // 0x1c2f4c: 0x0  nop
    ctx->pc = 0x1c2f4cu;
    // NOP
label_1c2f50:
    // 0x1c2f50: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_1c2f54:
    if (ctx->pc == 0x1C2F54u) {
        ctx->pc = 0x1C2F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2F50u;
        // 0x1c2f54: 0x26100a50  addiu       $s0, $s0, 0xA50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2F58u;
        goto label_1c2f58;
    }
    ctx->pc = 0x1C2F50u;
    {
        const bool branch_taken_0x1c2f50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2f50) {
            ctx->pc = 0x1C2F54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C2F50u;
            // 0x1c2f54: 0x26100a50  addiu       $s0, $s0, 0xA50 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2640));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C2F70u;
            goto label_1c2f70;
        }
    }
    ctx->pc = 0x1C2F58u;
label_1c2f58:
    // 0x1c2f58: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c2f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c2f5c:
    // 0x1c2f5c: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1c2f5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1c2f60:
    // 0x1c2f60: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x1c2f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1c2f64:
    // 0x1c2f64: 0x60f809  jalr        $v1
label_1c2f68:
    if (ctx->pc == 0x1C2F68u) {
        ctx->pc = 0x1C2F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2F64u;
        // 0x1c2f68: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2F6Cu;
        goto label_1c2f6c;
    }
    ctx->pc = 0x1C2F64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C2F6Cu);
        ctx->pc = 0x1C2F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2F64u;
        // 0x1c2f68: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2F64u, 0x1C2F6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C2F6Cu;
label_1c2f6c:
    // 0x1c2f6c: 0x26100a50  addiu       $s0, $s0, 0xA50
    ctx->pc = 0x1c2f6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2640));
label_1c2f70:
    // 0x1c2f70: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x1c2f70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_1c2f74:
    // 0x1c2f74: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
label_1c2f78:
    if (ctx->pc == 0x1C2F78u) {
        ctx->pc = 0x1C2F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2F74u;
        // 0x1c2f78: 0x8e020434  lw          $v0, 0x434($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1076)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2F7Cu;
        goto label_1c2f7c;
    }
    ctx->pc = 0x1C2F74u;
    {
        const bool branch_taken_0x1c2f74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c2f74) {
            ctx->pc = 0x1C2F78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C2F74u;
            // 0x1c2f78: 0x8e020434  lw          $v0, 0x434($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1076)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C2F50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c2f50;
        }
    }
    ctx->pc = 0x1C2F7Cu;
label_1c2f7c:
    // 0x1c2f7c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1c2f7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c2f80:
    // 0x1c2f80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c2f80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c2f84:
    // 0x1c2f84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c2f84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c2f88:
    // 0x1c2f88: 0x3e00008  jr          $ra
label_1c2f8c:
    if (ctx->pc == 0x1C2F8Cu) {
        ctx->pc = 0x1C2F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2F88u;
        // 0x1c2f8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2F90u;
        goto label_fallthrough_0x1c2f88;
    }
    ctx->pc = 0x1C2F88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2F88u;
        // 0x1c2f8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2F88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1c2f88:
    ctx->pc = 0x1C2F90u;
}
