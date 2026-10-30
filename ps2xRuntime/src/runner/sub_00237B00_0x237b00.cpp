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

// Function: sub_00237B00
// Address: 0x237b00 - 0x237b70
void sub_00237B00_0x237b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00237B00_0x237b00");
#endif

    switch (ctx->pc) {
        case 0x237b1cu: goto label_237b1c;
        case 0x237b24u: goto label_237b24;
        default: break;
    }

    ctx->pc = 0x237b00u;

    // 0x237b00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x237b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x237b04: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x237b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x237b08: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x237b08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x237b0c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x237b0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237b10: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x237b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x237b14: 0xc0e4060  jal         func_390180
    ctx->pc = 0x237B14u;
    SET_GPR_U32(ctx, 31, 0x237B1Cu);
    ctx->pc = 0x237B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237B14u;
    // 0x237b18: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x237B14u, 0x237B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237B1Cu;
label_237b1c:
    // 0x237b1c: 0xc08a61a  jal         func_229868
    ctx->pc = 0x237B1Cu;
    SET_GPR_U32(ctx, 31, 0x237B24u);
    ctx->pc = 0x237B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237B1Cu;
    // 0x237b20: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x237B1Cu, 0x237B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237B24u;
label_237b24:
    // 0x237b24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x237b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237b28: 0x5080000e  beql        $a0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x237B28u;
    {
        const bool branch_taken_0x237b28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x237b28) {
            ctx->pc = 0x237B2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237B28u;
            // 0x237b2c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237B64u;
            goto label_237b64;
        }
    }
    ctx->pc = 0x237B30u;
    // 0x237b30: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x237B30u;
    {
        const bool branch_taken_0x237b30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x237B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237B30u;
        // 0x237b34: 0xdc8200e0  ld          $v0, 0xE0($a0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237b30) {
            ctx->pc = 0x237B48u;
            goto label_237b48;
        }
    }
    ctx->pc = 0x237B38u;
    // 0x237b38: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x237b38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x237b3c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x237b3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x237b40: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x237B40u;
    {
        const bool branch_taken_0x237b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237B40u;
        // 0x237b44: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237b40) {
            ctx->pc = 0x237B5Cu;
            goto label_237b5c;
        }
    }
    ctx->pc = 0x237B48u;
label_237b48:
    // 0x237b48: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x237b48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x237b4c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x237b4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x237b50: 0x31878  dsll        $v1, $v1, 1
    ctx->pc = 0x237b50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 1);
    // 0x237b54: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x237b54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x237b58: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x237b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_237b5c:
    // 0x237b5c: 0xfc8200e0  sd          $v0, 0xE0($a0)
    ctx->pc = 0x237b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 224), GPR_U64(ctx, 2));
    // 0x237b60: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x237b60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_237b64:
    // 0x237b64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x237b64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x237b68: 0x3e00008  jr          $ra
    ctx->pc = 0x237B68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237B68u;
        // 0x237b6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237B68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237B70u;
}
