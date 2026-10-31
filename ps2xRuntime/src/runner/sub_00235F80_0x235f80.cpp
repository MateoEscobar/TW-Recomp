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

// Function: sub_00235F80
// Address: 0x235f80 - 0x235fc0
void sub_00235F80_0x235f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235F80_0x235f80");
#endif

    switch (ctx->pc) {
        case 0x235f94u: goto label_235f94;
        case 0x235f9cu: goto label_235f9c;
        case 0x235facu: goto label_235fac;
        default: break;
    }

    ctx->pc = 0x235f80u;

    // 0x235f80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x235f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x235f84: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x235f84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x235f88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x235f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x235f8c: 0xc0e4060  jal         func_390180
    ctx->pc = 0x235F8Cu;
    SET_GPR_U32(ctx, 31, 0x235F94u);
    ctx->pc = 0x235F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235F8Cu;
    // 0x235f90: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x235F8Cu, 0x235F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235F94u;
label_235f94:
    // 0x235f94: 0xc08a61a  jal         func_229868
    ctx->pc = 0x235F94u;
    SET_GPR_U32(ctx, 31, 0x235F9Cu);
    ctx->pc = 0x235F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235F94u;
    // 0x235f98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x235F94u, 0x235F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235F9Cu;
label_235f9c:
    // 0x235f9c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x235F9Cu;
    {
        const bool branch_taken_0x235f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x235f9c) {
            ctx->pc = 0x235FA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235F9Cu;
            // 0x235fa0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235FB4u;
            goto label_235fb4;
        }
    }
    ctx->pc = 0x235FA4u;
    // 0x235fa4: 0xc089fee  jal         func_227FB8
    ctx->pc = 0x235FA4u;
    SET_GPR_U32(ctx, 31, 0x235FACu);
    ctx->pc = 0x235FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235FA4u;
    // 0x235fa8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227FB8u, 0x235FA4u, 0x235FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235FACu;
label_235fac:
    // 0x235fac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x235FACu;
    {
        const bool branch_taken_0x235fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235FACu;
        // 0x235fb0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235fac) {
            ctx->pc = 0x235FB8u;
            goto label_235fb8;
        }
    }
    ctx->pc = 0x235FB4u;
label_235fb4:
    // 0x235fb4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x235fb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_235fb8:
    // 0x235fb8: 0x3e00008  jr          $ra
    ctx->pc = 0x235FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235FB8u;
        // 0x235fbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235FB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235FC0u;
}
