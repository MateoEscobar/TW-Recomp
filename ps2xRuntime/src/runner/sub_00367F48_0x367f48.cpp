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

// Function: sub_00367F48
// Address: 0x367f48 - 0x367fe8
void sub_00367F48_0x367f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00367F48_0x367f48");
#endif

    switch (ctx->pc) {
        case 0x367f74u: goto label_367f74;
        case 0x367f7cu: goto label_367f7c;
        case 0x367f90u: goto label_367f90;
        case 0x367f98u: goto label_367f98;
        case 0x367facu: goto label_367fac;
        case 0x367fb4u: goto label_367fb4;
        case 0x367fc4u: goto label_367fc4;
        default: break;
    }

    ctx->pc = 0x367f48u;

    // 0x367f48: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x367f48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x367f4c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x367f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x367f50: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x367f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x367f54: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x367f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x367f58: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x367f58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367f5c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x367f5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367f60: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x367f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x367f64: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x367f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x367f68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x367f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x367f6c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x367F6Cu;
    SET_GPR_U32(ctx, 31, 0x367F74u);
    ctx->pc = 0x367F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367F6Cu;
    // 0x367f70: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x367F6Cu, 0x367F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367F74u;
label_367f74:
    // 0x367f74: 0xc10b108  jal         func_42C420
    ctx->pc = 0x367F74u;
    SET_GPR_U32(ctx, 31, 0x367F7Cu);
    ctx->pc = 0x367F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367F74u;
    // 0x367f78: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x367F74u, 0x367F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367F7Cu;
label_367f7c:
    // 0x367f7c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x367f7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367f80: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x367f80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367f84: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x367f84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x367f88: 0xc102472  jal         func_4091C8
    ctx->pc = 0x367F88u;
    SET_GPR_U32(ctx, 31, 0x367F90u);
    ctx->pc = 0x367F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367F88u;
    // 0x367f8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x367F88u, 0x367F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367F90u;
label_367f90:
    // 0x367f90: 0xc10b108  jal         func_42C420
    ctx->pc = 0x367F90u;
    SET_GPR_U32(ctx, 31, 0x367F98u);
    ctx->pc = 0x367F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367F90u;
    // 0x367f94: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x367F90u, 0x367F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367F98u;
label_367f98:
    // 0x367f98: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x367f98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367f9c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x367f9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367fa0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x367fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367fa4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x367FA4u;
    SET_GPR_U32(ctx, 31, 0x367FACu);
    ctx->pc = 0x367FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367FA4u;
    // 0x367fa8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x367FA4u, 0x367FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367FACu;
label_367fac:
    // 0x367fac: 0xc10b108  jal         func_42C420
    ctx->pc = 0x367FACu;
    SET_GPR_U32(ctx, 31, 0x367FB4u);
    ctx->pc = 0x367FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367FACu;
    // 0x367fb0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x367FACu, 0x367FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367FB4u;
label_367fb4:
    // 0x367fb4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x367fb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367fb8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x367fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367fbc: 0xc0d50a0  jal         func_354280
    ctx->pc = 0x367FBCu;
    SET_GPR_U32(ctx, 31, 0x367FC4u);
    ctx->pc = 0x367FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367FBCu;
    // 0x367fc0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x354280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354280u, 0x367FBCu, 0x367FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367FC4u;
label_367fc4:
    // 0x367fc4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x367fc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x367fc8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x367fc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367fcc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x367fccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x367fd0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x367fd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x367fd4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x367fd4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x367fd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x367fd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x367fdc: 0x3e00008  jr          $ra
    ctx->pc = 0x367FDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x367FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367FDCu;
        // 0x367fe0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x367FDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x367FE4u;
    // 0x367fe4: 0x0  nop
    ctx->pc = 0x367fe4u;
    // NOP
    ctx->pc = 0x367fe8u;
}
