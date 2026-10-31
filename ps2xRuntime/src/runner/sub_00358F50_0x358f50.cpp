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

// Function: sub_00358F50
// Address: 0x358f50 - 0x358fd0
void sub_00358F50_0x358f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00358F50_0x358f50");
#endif

    switch (ctx->pc) {
        case 0x358f78u: goto label_358f78;
        case 0x358f80u: goto label_358f80;
        case 0x358f94u: goto label_358f94;
        case 0x358f9cu: goto label_358f9c;
        case 0x358fa8u: goto label_358fa8;
        case 0x358fb4u: goto label_358fb4;
        default: break;
    }

    ctx->pc = 0x358f50u;

    // 0x358f50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x358f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x358f54: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x358f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x358f58: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x358f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x358f5c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x358f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x358f60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x358f60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358f64: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x358f64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358f68: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x358f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x358f6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x358f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x358f70: 0xc102472  jal         func_4091C8
    ctx->pc = 0x358F70u;
    SET_GPR_U32(ctx, 31, 0x358F78u);
    ctx->pc = 0x358F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358F70u;
    // 0x358f74: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x358F70u, 0x358F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358F78u;
label_358f78:
    // 0x358f78: 0xc10b108  jal         func_42C420
    ctx->pc = 0x358F78u;
    SET_GPR_U32(ctx, 31, 0x358F80u);
    ctx->pc = 0x358F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358F78u;
    // 0x358f7c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x358F78u, 0x358F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358F80u;
label_358f80:
    // 0x358f80: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x358f80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358f84: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x358f84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358f88: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x358f88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x358f8c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x358F8Cu;
    SET_GPR_U32(ctx, 31, 0x358F94u);
    ctx->pc = 0x358F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358F8Cu;
    // 0x358f90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x358F8Cu, 0x358F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358F94u;
label_358f94:
    // 0x358f94: 0xc10b108  jal         func_42C420
    ctx->pc = 0x358F94u;
    SET_GPR_U32(ctx, 31, 0x358F9Cu);
    ctx->pc = 0x358F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358F94u;
    // 0x358f98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x358F94u, 0x358F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358F9Cu;
label_358f9c:
    // 0x358f9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x358f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358fa0: 0xc08e91a  jal         func_23A468
    ctx->pc = 0x358FA0u;
    SET_GPR_U32(ctx, 31, 0x358FA8u);
    ctx->pc = 0x358FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358FA0u;
    // 0x358fa4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A468u, 0x358FA0u, 0x358FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358FA8u;
label_358fa8:
    // 0x358fa8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x358fa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358fac: 0xc102562  jal         func_409588
    ctx->pc = 0x358FACu;
    SET_GPR_U32(ctx, 31, 0x358FB4u);
    ctx->pc = 0x358FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358FACu;
    // 0x358fb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409588u, 0x358FACu, 0x358FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358FB4u;
label_358fb4:
    // 0x358fb4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x358fb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x358fb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x358fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x358fbc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x358fbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x358fc0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x358fc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x358fc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x358fc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x358fc8: 0x3e00008  jr          $ra
    ctx->pc = 0x358FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x358FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358FC8u;
        // 0x358fcc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x358FC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x358FD0u;
}
