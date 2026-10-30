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

// Function: sub_00226F70
// Address: 0x226f70 - 0x226ff0
void sub_00226F70_0x226f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226F70_0x226f70");
#endif

    switch (ctx->pc) {
        case 0x226f88u: goto label_226f88;
        case 0x226f9cu: goto label_226f9c;
        case 0x226fb8u: goto label_226fb8;
        case 0x226fc8u: goto label_226fc8;
        case 0x226fd8u: goto label_226fd8;
        default: break;
    }

    ctx->pc = 0x226f70u;

    // 0x226f70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x226f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x226f74: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x226f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x226f78: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x226f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x226f7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x226f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x226f80: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x226F80u;
    SET_GPR_U32(ctx, 31, 0x226F88u);
    ctx->pc = 0x226F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226F80u;
    // 0x226f84: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x226F80u, 0x226F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226F88u;
label_226f88:
    // 0x226f88: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x226f88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
    // 0x226f8c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x226F8Cu;
    {
        const bool branch_taken_0x226f8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x226F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226F8Cu;
        // 0x226f90: 0x3c10006f  lui         $s0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226f8c) {
            ctx->pc = 0x226FA8u;
            goto label_226fa8;
        }
    }
    ctx->pc = 0x226F94u;
    // 0x226f94: 0xc089f22  jal         func_227C88
    ctx->pc = 0x226F94u;
    SET_GPR_U32(ctx, 31, 0x226F9Cu);
    ctx->pc = 0x226F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226F94u;
    // 0x226f98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227C88u, 0x226F94u, 0x226F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226F9Cu;
label_226f9c:
    // 0x226f9c: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x226F9Cu;
    {
        const bool branch_taken_0x226f9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x226FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226F9Cu;
        // 0x226fa0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226f9c) {
            ctx->pc = 0x226FDCu;
            goto label_226fdc;
        }
    }
    ctx->pc = 0x226FA4u;
    // 0x226fa4: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x226fa4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
label_226fa8:
    // 0x226fa8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x226fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226fac: 0x8e02bd30  lw          $v0, -0x42D0($s0)
    ctx->pc = 0x226facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950192)));
    // 0x226fb0: 0xc087502  jal         func_21D408
    ctx->pc = 0x226FB0u;
    SET_GPR_U32(ctx, 31, 0x226FB8u);
    ctx->pc = 0x226FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226FB0u;
    // 0x226fb4: 0xae2200c8  sw          $v0, 0xC8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x226FB0u, 0x226FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226FB8u;
label_226fb8:
    // 0x226fb8: 0x8e03bd30  lw          $v1, -0x42D0($s0)
    ctx->pc = 0x226fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950192)));
    // 0x226fbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x226fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226fc0: 0xc087502  jal         func_21D408
    ctx->pc = 0x226FC0u;
    SET_GPR_U32(ctx, 31, 0x226FC8u);
    ctx->pc = 0x226FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226FC0u;
    // 0x226fc4: 0xac430128  sw          $v1, 0x128($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 296), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x226FC0u, 0x226FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226FC8u;
label_226fc8:
    // 0x226fc8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x226fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226fcc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x226fccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226fd0: 0xc0a33f8  jal         func_28CFE0
    ctx->pc = 0x226FD0u;
    SET_GPR_U32(ctx, 31, 0x226FD8u);
    ctx->pc = 0x226FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226FD0u;
    // 0x226fd4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x226FD0u, 0x226FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226FD8u;
label_226fd8:
    // 0x226fd8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x226fd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_226fdc:
    // 0x226fdc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x226fdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x226fe0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x226fe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226fe4: 0x3e00008  jr          $ra
    ctx->pc = 0x226FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226FE4u;
        // 0x226fe8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226FE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226FECu;
    // 0x226fec: 0x0  nop
    ctx->pc = 0x226fecu;
    // NOP
    ctx->pc = 0x226ff0u;
}
