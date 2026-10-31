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

// Function: sub_00409AE8
// Address: 0x409ae8 - 0x409b78
void sub_00409AE8_0x409ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00409AE8_0x409ae8");
#endif

    switch (ctx->pc) {
        case 0x409b04u: goto label_409b04;
        case 0x409b14u: goto label_409b14;
        case 0x409b1cu: goto label_409b1c;
        case 0x409b2cu: goto label_409b2c;
        case 0x409b44u: goto label_409b44;
        case 0x409b54u: goto label_409b54;
        case 0x409b60u: goto label_409b60;
        default: break;
    }

    ctx->pc = 0x409ae8u;

    // 0x409ae8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x409ae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x409aec: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x409aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x409af0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x409af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x409af4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x409af4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409af8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x409af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x409afc: 0xc1030ea  jal         func_40C3A8
    ctx->pc = 0x409AFCu;
    SET_GPR_U32(ctx, 31, 0x409B04u);
    ctx->pc = 0x409B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409AFCu;
    // 0x409b00: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C3A8u, 0x409AFCu, 0x409B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409B04u;
label_409b04:
    // 0x409b04: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x409B04u;
    {
        const bool branch_taken_0x409b04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x409B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409B04u;
        // 0x409b08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x409b04) {
            ctx->pc = 0x409B24u;
            goto label_409b24;
        }
    }
    ctx->pc = 0x409B0Cu;
    // 0x409b0c: 0xc1029f6  jal         func_40A7D8
    ctx->pc = 0x409B0Cu;
    SET_GPR_U32(ctx, 31, 0x409B14u);
    ctx->pc = 0x409B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409B0Cu;
    // 0x409b10: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A7D8u, 0x409B0Cu, 0x409B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409B14u;
label_409b14:
    // 0x409b14: 0xc0c8cc6  jal         func_323318
    ctx->pc = 0x409B14u;
    SET_GPR_U32(ctx, 31, 0x409B1Cu);
    ctx->pc = 0x409B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409B14u;
    // 0x409b18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323318u, 0x409B14u, 0x409B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409B1Cu;
label_409b1c:
    // 0x409b1c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x409B1Cu;
    {
        const bool branch_taken_0x409b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x409B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409B1Cu;
        // 0x409b20: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x409b1c) {
            ctx->pc = 0x409B68u;
            goto label_409b68;
        }
    }
    ctx->pc = 0x409B24u;
label_409b24:
    // 0x409b24: 0xc0c8d2e  jal         func_3234B8
    ctx->pc = 0x409B24u;
    SET_GPR_U32(ctx, 31, 0x409B2Cu);
    ctx->pc = 0x409B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409B24u;
    // 0x409b28: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3234B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3234B8u, 0x409B24u, 0x409B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409B2Cu;
label_409b2c:
    // 0x409b2c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x409b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x409b30: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x409B30u;
    {
        const bool branch_taken_0x409b30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x409B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409B30u;
        // 0x409b34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x409b30) {
            ctx->pc = 0x409B64u;
            goto label_409b64;
        }
    }
    ctx->pc = 0x409B38u;
    // 0x409b38: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x409b38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409b3c: 0xc0c8d16  jal         func_323458
    ctx->pc = 0x409B3Cu;
    SET_GPR_U32(ctx, 31, 0x409B44u);
    ctx->pc = 0x409B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409B3Cu;
    // 0x409b40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323458u, 0x409B3Cu, 0x409B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409B44u;
label_409b44:
    // 0x409b44: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x409b44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x409b48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x409b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409b4c: 0xc0c8e68  jal         func_3239A0
    ctx->pc = 0x409B4Cu;
    SET_GPR_U32(ctx, 31, 0x409B54u);
    ctx->pc = 0x409B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409B4Cu;
    // 0x409b50: 0x24a57fc0  addiu       $a1, $a1, 0x7FC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239A0u, 0x409B4Cu, 0x409B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409B54u;
label_409b54:
    // 0x409b54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x409b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409b58: 0xc0c8ef2  jal         func_323BC8
    ctx->pc = 0x409B58u;
    SET_GPR_U32(ctx, 31, 0x409B60u);
    ctx->pc = 0x409B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409B58u;
    // 0x409b5c: 0x2405fffe  addiu       $a1, $zero, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323BC8u, 0x409B58u, 0x409B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409B60u;
label_409b60:
    // 0x409b60: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x409b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_409b64:
    // 0x409b64: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x409b64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_409b68:
    // 0x409b68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x409b68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x409b6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x409b6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x409b70: 0x3e00008  jr          $ra
    ctx->pc = 0x409B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x409B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409B70u;
        // 0x409b74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x409B70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x409B78u;
}
