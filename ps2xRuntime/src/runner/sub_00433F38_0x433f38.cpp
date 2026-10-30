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

// Function: sub_00433F38
// Address: 0x433f38 - 0x433f98
void sub_00433F38_0x433f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00433F38_0x433f38");
#endif

    switch (ctx->pc) {
        case 0x433f50u: goto label_433f50;
        case 0x433f70u: goto label_433f70;
        default: break;
    }

    ctx->pc = 0x433f38u;

    // 0x433f38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x433f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x433f3c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x433f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x433f40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x433f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x433f44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x433f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x433f48: 0xc10f3e4  jal         func_43CF90
    ctx->pc = 0x433F48u;
    SET_GPR_U32(ctx, 31, 0x433F50u);
    ctx->pc = 0x433F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x433F48u;
    // 0x433f4c: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43CF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43CF90u, 0x433F48u, 0x433F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x433F50u;
label_433f50:
    // 0x433f50: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x433f50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x433f54: 0x8e226d50  lw          $v0, 0x6D50($s1)
    ctx->pc = 0x433f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 27984)));
    // 0x433f58: 0x14500003  bne         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x433F58u;
    {
        const bool branch_taken_0x433f58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x433F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433F58u;
        // 0x433f5c: 0x3c020052  lui         $v0, 0x52 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)82 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433f58) {
            ctx->pc = 0x433F68u;
            goto label_433f68;
        }
    }
    ctx->pc = 0x433F60u;
    // 0x433f60: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x433F60u;
    {
        const bool branch_taken_0x433f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x433F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433F60u;
        // 0x433f64: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433f60) {
            ctx->pc = 0x433F78u;
            goto label_433f78;
        }
    }
    ctx->pc = 0x433F68u;
label_433f68:
    // 0x433f68: 0xc10f438  jal         func_43D0E0
    ctx->pc = 0x433F68u;
    SET_GPR_U32(ctx, 31, 0x433F70u);
    ctx->pc = 0x433F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x433F68u;
    // 0x433f6c: 0x8c448f28  lw          $a0, -0x70D8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938408)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D0E0u, 0x433F68u, 0x433F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x433F70u;
label_433f70:
    // 0x433f70: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x433f70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x433f74: 0xae306d50  sw          $s0, 0x6D50($s1)
    ctx->pc = 0x433f74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 27984), GPR_U32(ctx, 16));
label_433f78:
    // 0x433f78: 0x8c626d54  lw          $v0, 0x6D54($v1)
    ctx->pc = 0x433f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27988)));
    // 0x433f7c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x433f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x433f80: 0xac626d54  sw          $v0, 0x6D54($v1)
    ctx->pc = 0x433f80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 27988), GPR_U32(ctx, 2));
    // 0x433f84: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x433f84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x433f88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x433f88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x433f8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x433f8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x433f90: 0x3e00008  jr          $ra
    ctx->pc = 0x433F90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x433F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433F90u;
        // 0x433f94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x433F90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x433F98u;
}
