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

// Function: sub_00377BD0
// Address: 0x377bd0 - 0x377c70
void sub_00377BD0_0x377bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00377BD0_0x377bd0");
#endif

    switch (ctx->pc) {
        case 0x377bfcu: goto label_377bfc;
        case 0x377c04u: goto label_377c04;
        case 0x377c18u: goto label_377c18;
        case 0x377c20u: goto label_377c20;
        case 0x377c34u: goto label_377c34;
        case 0x377c3cu: goto label_377c3c;
        case 0x377c4cu: goto label_377c4c;
        default: break;
    }

    ctx->pc = 0x377bd0u;

    // 0x377bd0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x377bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x377bd4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x377bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x377bd8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x377bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x377bdc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x377bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x377be0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x377be0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377be4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x377be4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377be8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x377be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x377bec: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x377becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x377bf0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x377bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x377bf4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x377BF4u;
    SET_GPR_U32(ctx, 31, 0x377BFCu);
    ctx->pc = 0x377BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377BF4u;
    // 0x377bf8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x377BF4u, 0x377BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377BFCu;
label_377bfc:
    // 0x377bfc: 0xc10b108  jal         func_42C420
    ctx->pc = 0x377BFCu;
    SET_GPR_U32(ctx, 31, 0x377C04u);
    ctx->pc = 0x377C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377BFCu;
    // 0x377c00: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x377BFCu, 0x377C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377C04u;
label_377c04:
    // 0x377c04: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x377c04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377c08: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x377c08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377c0c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x377c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x377c10: 0xc102472  jal         func_4091C8
    ctx->pc = 0x377C10u;
    SET_GPR_U32(ctx, 31, 0x377C18u);
    ctx->pc = 0x377C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377C10u;
    // 0x377c14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x377C10u, 0x377C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377C18u;
label_377c18:
    // 0x377c18: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x377C18u;
    SET_GPR_U32(ctx, 31, 0x377C20u);
    ctx->pc = 0x377C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377C18u;
    // 0x377c1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x377C18u, 0x377C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377C20u;
label_377c20:
    // 0x377c20: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x377c20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377c24: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x377c24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377c28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x377c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377c2c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x377C2Cu;
    SET_GPR_U32(ctx, 31, 0x377C34u);
    ctx->pc = 0x377C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377C2Cu;
    // 0x377c30: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x377C2Cu, 0x377C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377C34u;
label_377c34:
    // 0x377c34: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x377C34u;
    SET_GPR_U32(ctx, 31, 0x377C3Cu);
    ctx->pc = 0x377C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377C34u;
    // 0x377c38: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x377C34u, 0x377C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377C3Cu;
label_377c3c:
    // 0x377c3c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x377c3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377c40: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x377c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377c44: 0xc0e59f8  jal         func_3967E0
    ctx->pc = 0x377C44u;
    SET_GPR_U32(ctx, 31, 0x377C4Cu);
    ctx->pc = 0x377C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377C44u;
    // 0x377c48: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3967E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3967E0u, 0x377C44u, 0x377C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377C4Cu;
label_377c4c:
    // 0x377c4c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x377c4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x377c50: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x377c50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377c54: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x377c54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x377c58: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x377c58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x377c5c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x377c5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x377c60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x377c60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x377c64: 0x3e00008  jr          $ra
    ctx->pc = 0x377C64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x377C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377C64u;
        // 0x377c68: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x377C64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x377C6Cu;
    // 0x377c6c: 0x0  nop
    ctx->pc = 0x377c6cu;
    // NOP
    ctx->pc = 0x377c70u;
}
