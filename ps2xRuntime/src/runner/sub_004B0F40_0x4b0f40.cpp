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

// Function: sub_004B0F40
// Address: 0x4b0f40 - 0x4b0f90
void sub_004B0F40_0x4b0f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B0F40_0x4b0f40");
#endif

    switch (ctx->pc) {
        case 0x4b0f40u: goto label_4b0f40;
        case 0x4b0f44u: goto label_4b0f44;
        case 0x4b0f48u: goto label_4b0f48;
        case 0x4b0f4cu: goto label_4b0f4c;
        case 0x4b0f50u: goto label_4b0f50;
        case 0x4b0f54u: goto label_4b0f54;
        case 0x4b0f58u: goto label_4b0f58;
        case 0x4b0f5cu: goto label_4b0f5c;
        case 0x4b0f60u: goto label_4b0f60;
        case 0x4b0f64u: goto label_4b0f64;
        case 0x4b0f68u: goto label_4b0f68;
        case 0x4b0f6cu: goto label_4b0f6c;
        case 0x4b0f70u: goto label_4b0f70;
        case 0x4b0f74u: goto label_4b0f74;
        case 0x4b0f78u: goto label_4b0f78;
        case 0x4b0f7cu: goto label_4b0f7c;
        case 0x4b0f80u: goto label_4b0f80;
        case 0x4b0f84u: goto label_4b0f84;
        case 0x4b0f88u: goto label_4b0f88;
        case 0x4b0f8cu: goto label_4b0f8c;
        default: break;
    }

    ctx->pc = 0x4b0f40u;

label_4b0f40:
    // 0x4b0f40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4b0f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4b0f44:
    // 0x4b0f44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b0f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4b0f48:
    // 0x4b0f48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4b0f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4b0f4c:
    // 0x4b0f4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b0f4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4b0f50:
    // 0x4b0f50: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x4b0f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4b0f54:
    // 0x4b0f54: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x4b0f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_4b0f58:
    // 0x4b0f58: 0x40f809  jalr        $v0
label_4b0f5c:
    if (ctx->pc == 0x4B0F5Cu) {
        ctx->pc = 0x4B0F60u;
        goto label_4b0f60;
    }
    ctx->pc = 0x4B0F58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4B0F60u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B0F58u, 0x4B0F60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4B0F60u;
label_4b0f60:
    // 0x4b0f60: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4b0f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4b0f64:
    // 0x4b0f64: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
label_4b0f68:
    if (ctx->pc == 0x4B0F68u) {
        ctx->pc = 0x4B0F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0F64u;
        // 0x4b0f68: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B0F6Cu;
        goto label_4b0f6c;
    }
    ctx->pc = 0x4B0F64u;
    {
        const bool branch_taken_0x4b0f64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x4b0f64) {
            ctx->pc = 0x4B0F68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B0F64u;
            // 0x4b0f68: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B0F74u;
            goto label_4b0f74;
        }
    }
    ctx->pc = 0x4B0F6Cu;
label_4b0f6c:
    // 0x4b0f6c: 0x10000004  b           . + 4 + (0x4 << 2)
label_4b0f70:
    if (ctx->pc == 0x4B0F70u) {
        ctx->pc = 0x4B0F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0F6Cu;
        // 0x4b0f70: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B0F74u;
        goto label_4b0f74;
    }
    ctx->pc = 0x4B0F6Cu;
    {
        const bool branch_taken_0x4b0f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B0F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0F6Cu;
        // 0x4b0f70: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0f6c) {
            ctx->pc = 0x4B0F80u;
            goto label_4b0f80;
        }
    }
    ctx->pc = 0x4B0F74u;
label_4b0f74:
    // 0x4b0f74: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x4b0f74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_4b0f78:
    // 0x4b0f78: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4b0f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4b0f7c:
    // 0x4b0f7c: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x4b0f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_4b0f80:
    // 0x4b0f80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4b0f80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4b0f84:
    // 0x4b0f84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b0f84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4b0f88:
    // 0x4b0f88: 0x3e00008  jr          $ra
label_4b0f8c:
    if (ctx->pc == 0x4B0F8Cu) {
        ctx->pc = 0x4B0F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0F88u;
        // 0x4b0f8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B0F90u;
        goto label_fallthrough_0x4b0f88;
    }
    ctx->pc = 0x4B0F88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B0F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0F88u;
        // 0x4b0f8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B0F88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4b0f88:
    ctx->pc = 0x4B0F90u;
}
