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

// Function: sub_00329030
// Address: 0x329030 - 0x329070
void sub_00329030_0x329030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00329030_0x329030");
#endif

    switch (ctx->pc) {
        case 0x329044u: goto label_329044;
        case 0x32905cu: goto label_32905c;
        default: break;
    }

    ctx->pc = 0x329030u;

    // 0x329030: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x329030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x329034: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x329034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x329038: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x329038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32903c: 0xc0ca3ac  jal         func_328EB0
    ctx->pc = 0x32903Cu;
    SET_GPR_U32(ctx, 31, 0x329044u);
    ctx->pc = 0x329040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32903Cu;
    // 0x329040: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328EB0u, 0x32903Cu, 0x329044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329044u;
label_329044:
    // 0x329044: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x329044u;
    {
        const bool branch_taken_0x329044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x329044) {
            ctx->pc = 0x329048u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329044u;
            // 0x329048: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329060u;
            goto label_329060;
        }
    }
    ctx->pc = 0x32904Cu;
    // 0x32904c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32904cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329050: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x329050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329054: 0xc0ca350  jal         func_328D40
    ctx->pc = 0x329054u;
    SET_GPR_U32(ctx, 31, 0x32905Cu);
    ctx->pc = 0x329058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329054u;
    // 0x329058: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328D40u, 0x329054u, 0x32905Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32905Cu;
label_32905c:
    // 0x32905c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x32905cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_329060:
    // 0x329060: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x329060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x329064: 0x3e00008  jr          $ra
    ctx->pc = 0x329064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329064u;
        // 0x329068: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329064u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32906Cu;
    // 0x32906c: 0x0  nop
    ctx->pc = 0x32906cu;
    // NOP
    ctx->pc = 0x329070u;
}
