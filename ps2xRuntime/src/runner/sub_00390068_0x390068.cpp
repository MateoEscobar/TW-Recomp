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

// Function: sub_00390068
// Address: 0x390068 - 0x3900b0
void sub_00390068_0x390068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00390068_0x390068");
#endif

    switch (ctx->pc) {
        case 0x39007cu: goto label_39007c;
        case 0x390084u: goto label_390084;
        case 0x3900a4u: goto label_3900a4;
        default: break;
    }

    ctx->pc = 0x390068u;

    // 0x390068: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x390068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39006c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x39006cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x390070: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x390070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x390074: 0xc0e4060  jal         func_390180
    ctx->pc = 0x390074u;
    SET_GPR_U32(ctx, 31, 0x39007Cu);
    ctx->pc = 0x390078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390074u;
    // 0x390078: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x390074u, 0x39007Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39007Cu;
label_39007c:
    // 0x39007c: 0xc0e57ce  jal         func_395F38
    ctx->pc = 0x39007Cu;
    SET_GPR_U32(ctx, 31, 0x390084u);
    ctx->pc = 0x390080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39007Cu;
    // 0x390080: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x39007Cu, 0x390084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390084u;
label_390084:
    // 0x390084: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x390084u;
    {
        const bool branch_taken_0x390084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x390088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390084u;
        // 0x390088: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390084) {
            ctx->pc = 0x390094u;
            goto label_390094;
        }
    }
    ctx->pc = 0x39008Cu;
    // 0x39008c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x39008Cu;
    {
        const bool branch_taken_0x39008c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39008Cu;
        // 0x390090: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39008c) {
            ctx->pc = 0x3900A4u;
            goto label_3900a4;
        }
    }
    ctx->pc = 0x390094u;
label_390094:
    // 0x390094: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x390094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390098: 0x8c622c7c  lw          $v0, 0x2C7C($v1)
    ctx->pc = 0x390098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11388)));
    // 0x39009c: 0xc0e66fc  jal         func_399BF0
    ctx->pc = 0x39009Cu;
    SET_GPR_U32(ctx, 31, 0x3900A4u);
    ctx->pc = 0x3900A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39009Cu;
    // 0x3900a0: 0x8c440840  lw          $a0, 0x840($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399BF0u, 0x39009Cu, 0x3900A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3900A4u;
label_3900a4:
    // 0x3900a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3900a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3900a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3900A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3900ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3900A8u;
        // 0x3900ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3900A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3900B0u;
}
