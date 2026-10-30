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

// Function: sub_0035FD18
// Address: 0x35fd18 - 0x35fd90
void sub_0035FD18_0x35fd18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035FD18_0x35fd18");
#endif

    switch (ctx->pc) {
        case 0x35fd40u: goto label_35fd40;
        case 0x35fd48u: goto label_35fd48;
        case 0x35fd5cu: goto label_35fd5c;
        case 0x35fd64u: goto label_35fd64;
        case 0x35fd70u: goto label_35fd70;
        default: break;
    }

    ctx->pc = 0x35fd18u;

    // 0x35fd18: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x35fd18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x35fd1c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35fd1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35fd20: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x35fd20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x35fd24: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x35fd24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x35fd28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35fd28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fd2c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x35fd2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fd30: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x35fd30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x35fd34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35fd34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35fd38: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35FD38u;
    SET_GPR_U32(ctx, 31, 0x35FD40u);
    ctx->pc = 0x35FD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FD38u;
    // 0x35fd3c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35FD38u, 0x35FD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FD40u;
label_35fd40:
    // 0x35fd40: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35FD40u;
    SET_GPR_U32(ctx, 31, 0x35FD48u);
    ctx->pc = 0x35FD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FD40u;
    // 0x35fd44: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35FD40u, 0x35FD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FD48u;
label_35fd48:
    // 0x35fd48: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x35fd48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fd4c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x35fd4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fd50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35fd50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fd54: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35FD54u;
    SET_GPR_U32(ctx, 31, 0x35FD5Cu);
    ctx->pc = 0x35FD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FD54u;
    // 0x35fd58: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35FD54u, 0x35FD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FD5Cu;
label_35fd5c:
    // 0x35fd5c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x35FD5Cu;
    SET_GPR_U32(ctx, 31, 0x35FD64u);
    ctx->pc = 0x35FD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FD5Cu;
    // 0x35fd60: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x35FD5Cu, 0x35FD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FD64u;
label_35fd64:
    // 0x35fd64: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x35fd64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fd68: 0xc0a4ab0  jal         func_292AC0
    ctx->pc = 0x35FD68u;
    SET_GPR_U32(ctx, 31, 0x35FD70u);
    ctx->pc = 0x35FD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FD68u;
    // 0x35fd6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292AC0u, 0x35FD68u, 0x35FD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FD70u;
label_35fd70:
    // 0x35fd70: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x35fd70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35fd74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35fd74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fd78: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x35fd78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35fd7c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x35fd7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35fd80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35fd80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35fd84: 0x3e00008  jr          $ra
    ctx->pc = 0x35FD84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35FD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FD84u;
        // 0x35fd88: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35FD84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35FD8Cu;
    // 0x35fd8c: 0x0  nop
    ctx->pc = 0x35fd8cu;
    // NOP
    ctx->pc = 0x35fd90u;
}
