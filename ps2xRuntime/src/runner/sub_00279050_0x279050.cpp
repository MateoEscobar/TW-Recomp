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

// Function: sub_00279050
// Address: 0x279050 - 0x279078
void sub_00279050_0x279050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00279050_0x279050");
#endif

    switch (ctx->pc) {
        case 0x27906cu: goto label_27906c;
        default: break;
    }

    ctx->pc = 0x279050u;

    // 0x279050: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x279050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x279054: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x279054u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x279058: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x279058u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27905c: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x27905cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
    // 0x279060: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x279060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x279064: 0xc0a72ee  jal         func_29CBB8
    ctx->pc = 0x279064u;
    SET_GPR_U32(ctx, 31, 0x27906Cu);
    ctx->pc = 0x279068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279064u;
    // 0x279068: 0x24a58ef8  addiu       $a1, $a1, -0x7108 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CBB8u, 0x279064u, 0x27906Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27906Cu;
label_27906c:
    // 0x27906c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27906cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279070: 0x3e00008  jr          $ra
    ctx->pc = 0x279070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279070u;
        // 0x279074: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x279078u;
}
