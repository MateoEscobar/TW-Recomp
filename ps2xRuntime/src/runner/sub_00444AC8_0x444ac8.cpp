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

// Function: sub_00444AC8
// Address: 0x444ac8 - 0x444b18
void sub_00444AC8_0x444ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00444AC8_0x444ac8");
#endif

    switch (ctx->pc) {
        case 0x444ad0u: goto label_444ad0;
        case 0x444ad8u: goto label_444ad8;
        case 0x444ae8u: goto label_444ae8;
        case 0x444afcu: goto label_444afc;
        case 0x444b0cu: goto label_444b0c;
        default: break;
    }

    ctx->pc = 0x444ac8u;

    // 0x444ac8: 0x24030056  addiu       $v1, $zero, 0x56
    ctx->pc = 0x444ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x444acc: 0xc  syscall     0
    ctx->pc = 0x444accu;
    ctx->pc = 0x444AD0u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_444ad0:
    // 0x444ad0: 0x3e00008  jr          $ra
    ctx->pc = 0x444AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x444AD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x444AD8u;
label_444ad8:
    // 0x444ad8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x444ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x444adc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x444adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x444ae0: 0xc10f540  jal         func_43D500
    ctx->pc = 0x444AE0u;
    SET_GPR_U32(ctx, 31, 0x444AE8u);
    ctx->pc = 0x43D500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D500u, 0x444AE0u, 0x444AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x444AE8u;
label_444ae8:
    // 0x444ae8: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x444ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x444aec: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x444AECu;
    {
        const bool branch_taken_0x444aec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x444aec) {
            ctx->pc = 0x444B04u;
            goto label_444b04;
        }
    }
    ctx->pc = 0x444AF4u;
    // 0x444af4: 0xc1112c6  jal         func_444B18
    ctx->pc = 0x444AF4u;
    SET_GPR_U32(ctx, 31, 0x444AFCu);
    ctx->pc = 0x444B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x444B18u, 0x444AF4u, 0x444AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x444AFCu;
label_444afc:
    // 0x444afc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x444AFCu;
    {
        const bool branch_taken_0x444afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x444B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444AFCu;
        // 0x444b00: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x444afc) {
            ctx->pc = 0x444B10u;
            goto label_444b10;
        }
    }
    ctx->pc = 0x444B04u;
label_444b04:
    // 0x444b04: 0xc10f544  jal         func_43D510
    ctx->pc = 0x444B04u;
    SET_GPR_U32(ctx, 31, 0x444B0Cu);
    ctx->pc = 0x43D510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D510u, 0x444B04u, 0x444B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x444B0Cu;
label_444b0c:
    // 0x444b0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x444b0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_444b10:
    // 0x444b10: 0x3e00008  jr          $ra
    ctx->pc = 0x444B10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x444B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444B10u;
        // 0x444b14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x444B10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x444B18u;
}
