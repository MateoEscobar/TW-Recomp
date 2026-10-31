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

// Function: sub_0043AA10
// Address: 0x43aa10 - 0x43aa70
void sub_0043AA10_0x43aa10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043AA10_0x43aa10");
#endif

    switch (ctx->pc) {
        case 0x43aa3cu: goto label_43aa3c;
        default: break;
    }

    ctx->pc = 0x43aa10u;

    // 0x43aa10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x43aa10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x43aa14: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x43aa14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x43aa18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x43aa18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43aa1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x43aa1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x43aa20: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x43aa20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43aa24: 0x3c110059  lui         $s1, 0x59
    ctx->pc = 0x43aa24u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)89 << 16));
    // 0x43aa28: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x43aa28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43aa2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x43aa2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x43aa30: 0xae2071d8  sw          $zero, 0x71D8($s1)
    ctx->pc = 0x43aa30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5971D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5971D8u, _value); } while (0);
    // 0x43aa34: 0xc10f5d8  jal         func_43D760
    ctx->pc = 0x43AA34u;
    SET_GPR_U32(ctx, 31, 0x43AA3Cu);
    ctx->pc = 0x43AA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43AA34u;
    // 0x43aa38: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D760u, 0x43AA34u, 0x43AA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43AA3Cu;
label_43aa3c:
    // 0x43aa3c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x43aa3cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43aa40: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x43aa40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x43aa44: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x43AA44u;
    {
        const bool branch_taken_0x43aa44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x43aa44) {
            ctx->pc = 0x43AA48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43AA44u;
            // 0x43aa48: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x43AA5Cu;
            goto label_43aa5c;
        }
    }
    ctx->pc = 0x43AA4Cu;
    // 0x43aa4c: 0x8e2271d8  lw          $v0, 0x71D8($s1)
    ctx->pc = 0x43aa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 29144)));
    // 0x43aa50: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x43AA50u;
    {
        const bool branch_taken_0x43aa50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x43aa50) {
            ctx->pc = 0x43AA54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43AA50u;
            // 0x43aa54: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x43AA58u;
            goto label_43aa58;
        }
    }
    ctx->pc = 0x43AA58u;
label_43aa58:
    // 0x43aa58: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x43aa58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_43aa5c:
    // 0x43aa5c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x43aa5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43aa60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x43aa60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x43aa64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x43aa64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x43aa68: 0x3e00008  jr          $ra
    ctx->pc = 0x43AA68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43AA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43AA68u;
        // 0x43aa6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43AA68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43AA70u;
}
