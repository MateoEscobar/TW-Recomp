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

// Function: sub_00395F38
// Address: 0x395f38 - 0x395f88
void sub_00395F38_0x395f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00395F38_0x395f38");
#endif

    switch (ctx->pc) {
        case 0x395f38u: goto label_395f38;
        case 0x395f3cu: goto label_395f3c;
        case 0x395f40u: goto label_395f40;
        case 0x395f44u: goto label_395f44;
        case 0x395f48u: goto label_395f48;
        case 0x395f4cu: goto label_395f4c;
        case 0x395f50u: goto label_395f50;
        case 0x395f54u: goto label_395f54;
        case 0x395f58u: goto label_395f58;
        case 0x395f5cu: goto label_395f5c;
        case 0x395f60u: goto label_395f60;
        case 0x395f64u: goto label_395f64;
        case 0x395f68u: goto label_395f68;
        case 0x395f6cu: goto label_395f6c;
        case 0x395f70u: goto label_395f70;
        case 0x395f74u: goto label_395f74;
        case 0x395f78u: goto label_395f78;
        case 0x395f7cu: goto label_395f7c;
        case 0x395f80u: goto label_395f80;
        case 0x395f84u: goto label_395f84;
        default: break;
    }

    ctx->pc = 0x395f38u;

label_395f38:
    // 0x395f38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x395f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_395f3c:
    // 0x395f3c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x395f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_395f40:
    // 0x395f40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x395f40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_395f44:
    // 0x395f44: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_395f48:
    if (ctx->pc == 0x395F48u) {
        ctx->pc = 0x395F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395F44u;
        // 0x395f48: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395F4Cu;
        goto label_395f4c;
    }
    ctx->pc = 0x395F44u;
    {
        const bool branch_taken_0x395f44 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x395F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395F44u;
        // 0x395f48: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395f44) {
            ctx->pc = 0x395F54u;
            goto label_395f54;
        }
    }
    ctx->pc = 0x395F4Cu;
label_395f4c:
    // 0x395f4c: 0x10000009  b           . + 4 + (0x9 << 2)
label_395f50:
    if (ctx->pc == 0x395F50u) {
        ctx->pc = 0x395F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395F4Cu;
        // 0x395f50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395F54u;
        goto label_395f54;
    }
    ctx->pc = 0x395F4Cu;
    {
        const bool branch_taken_0x395f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x395F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395F4Cu;
        // 0x395f50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395f4c) {
            ctx->pc = 0x395F74u;
            goto label_395f74;
        }
    }
    ctx->pc = 0x395F54u;
label_395f54:
    // 0x395f54: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x395f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_395f58:
    // 0x395f58: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x395f58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_395f5c:
    // 0x395f5c: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x395f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_395f60:
    // 0x395f60: 0x40f809  jalr        $v0
label_395f64:
    if (ctx->pc == 0x395F64u) {
        ctx->pc = 0x395F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395F60u;
        // 0x395f64: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395F68u;
        goto label_395f68;
    }
    ctx->pc = 0x395F60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x395F68u);
        ctx->pc = 0x395F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395F60u;
        // 0x395f64: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x395F60u, 0x395F68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x395F68u;
label_395f68:
    // 0x395f68: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x395f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_395f6c:
    // 0x395f6c: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x395f6cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_395f70:
    // 0x395f70: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x395f70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_395f74:
    // 0x395f74: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x395f74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_395f78:
    // 0x395f78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x395f78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_395f7c:
    // 0x395f7c: 0x3e00008  jr          $ra
label_395f80:
    if (ctx->pc == 0x395F80u) {
        ctx->pc = 0x395F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395F7Cu;
        // 0x395f80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395F84u;
        goto label_395f84;
    }
    ctx->pc = 0x395F7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x395F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395F7Cu;
        // 0x395f80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x395F7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x395F84u;
label_395f84:
    // 0x395f84: 0x0  nop
    ctx->pc = 0x395f84u;
    // NOP
    ctx->pc = 0x395f88u;
}
