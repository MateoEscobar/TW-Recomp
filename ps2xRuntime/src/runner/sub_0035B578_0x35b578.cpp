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

// Function: sub_0035B578
// Address: 0x35b578 - 0x35b5c8
void sub_0035B578_0x35b578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035B578_0x35b578");
#endif

    switch (ctx->pc) {
        case 0x35b594u: goto label_35b594;
        case 0x35b59cu: goto label_35b59c;
        case 0x35b5a4u: goto label_35b5a4;
        case 0x35b5b0u: goto label_35b5b0;
        default: break;
    }

    ctx->pc = 0x35b578u;

    // 0x35b578: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35b578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35b57c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35b57cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b580: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x35b580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x35b584: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35b584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35b588: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35b588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35b58c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35B58Cu;
    SET_GPR_U32(ctx, 31, 0x35B594u);
    ctx->pc = 0x35B590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B58Cu;
    // 0x35b590: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35B58Cu, 0x35B594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B594u;
label_35b594:
    // 0x35b594: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35B594u;
    SET_GPR_U32(ctx, 31, 0x35B59Cu);
    ctx->pc = 0x35B598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B594u;
    // 0x35b598: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35B594u, 0x35B59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B59Cu;
label_35b59c:
    // 0x35b59c: 0xc08d578  jal         func_2355E0
    ctx->pc = 0x35B59Cu;
    SET_GPR_U32(ctx, 31, 0x35B5A4u);
    ctx->pc = 0x35B5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B59Cu;
    // 0x35b5a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2355E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2355E0u, 0x35B59Cu, 0x35B5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B5A4u;
label_35b5a4:
    // 0x35b5a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x35b5a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b5a8: 0xc102562  jal         func_409588
    ctx->pc = 0x35B5A8u;
    SET_GPR_U32(ctx, 31, 0x35B5B0u);
    ctx->pc = 0x35B5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B5A8u;
    // 0x35b5ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409588u, 0x35B5A8u, 0x35B5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B5B0u;
label_35b5b0:
    // 0x35b5b0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x35b5b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35b5b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35b5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35b5b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35b5b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35b5bc: 0x3e00008  jr          $ra
    ctx->pc = 0x35B5BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35B5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B5BCu;
        // 0x35b5c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B5BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B5C4u;
    // 0x35b5c4: 0x0  nop
    ctx->pc = 0x35b5c4u;
    // NOP
    ctx->pc = 0x35b5c8u;
}
