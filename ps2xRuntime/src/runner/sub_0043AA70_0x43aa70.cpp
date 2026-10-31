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

// Function: sub_0043AA70
// Address: 0x43aa70 - 0x43aad0
void sub_0043AA70_0x43aa70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043AA70_0x43aa70");
#endif

    switch (ctx->pc) {
        case 0x43aa9cu: goto label_43aa9c;
        default: break;
    }

    ctx->pc = 0x43aa70u;

    // 0x43aa70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x43aa70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x43aa74: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x43aa74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x43aa78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x43aa78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43aa7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x43aa7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x43aa80: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x43aa80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43aa84: 0x3c110059  lui         $s1, 0x59
    ctx->pc = 0x43aa84u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)89 << 16));
    // 0x43aa88: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x43aa88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43aa8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x43aa8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x43aa90: 0xae2071d8  sw          $zero, 0x71D8($s1)
    ctx->pc = 0x43aa90u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5971D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5971D8u, _value); } while (0);
    // 0x43aa94: 0xc10f5ba  jal         func_43D6E8
    ctx->pc = 0x43AA94u;
    SET_GPR_U32(ctx, 31, 0x43AA9Cu);
    ctx->pc = 0x43AA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43AA94u;
    // 0x43aa98: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D6E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D6E8u, 0x43AA94u, 0x43AA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43AA9Cu;
label_43aa9c:
    // 0x43aa9c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x43aa9cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43aaa0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x43aaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x43aaa4: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x43AAA4u;
    {
        const bool branch_taken_0x43aaa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x43aaa4) {
            ctx->pc = 0x43AAA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43AAA4u;
            // 0x43aaa8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x43AABCu;
            goto label_43aabc;
        }
    }
    ctx->pc = 0x43AAACu;
    // 0x43aaac: 0x8e2271d8  lw          $v0, 0x71D8($s1)
    ctx->pc = 0x43aaacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 29144)));
    // 0x43aab0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x43AAB0u;
    {
        const bool branch_taken_0x43aab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x43aab0) {
            ctx->pc = 0x43AAB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43AAB0u;
            // 0x43aab4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x43AAB8u;
            goto label_43aab8;
        }
    }
    ctx->pc = 0x43AAB8u;
label_43aab8:
    // 0x43aab8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x43aab8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_43aabc:
    // 0x43aabc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x43aabcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43aac0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x43aac0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x43aac4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x43aac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x43aac8: 0x3e00008  jr          $ra
    ctx->pc = 0x43AAC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43AACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43AAC8u;
        // 0x43aacc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43AAC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43AAD0u;
}
