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

// Function: sub_001C6ED8
// Address: 0x1c6ed8 - 0x1c6f58
void sub_001C6ED8_0x1c6ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C6ED8_0x1c6ed8");
#endif

    switch (ctx->pc) {
        case 0x1c6f00u: goto label_1c6f00;
        case 0x1c6f08u: goto label_1c6f08;
        case 0x1c6f10u: goto label_1c6f10;
        case 0x1c6f24u: goto label_1c6f24;
        case 0x1c6f3cu: goto label_1c6f3c;
        default: break;
    }

    ctx->pc = 0x1c6ed8u;

    // 0x1c6ed8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c6ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c6edc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1c6edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1c6ee0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c6ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c6ee4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c6ee4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6ee8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c6ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c6eec: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1c6eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c6ef0: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x1C6EF0u;
    {
        const bool branch_taken_0x1c6ef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6ef0) {
            ctx->pc = 0x1C6EF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C6EF0u;
            // 0x1c6ef4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C6F48u;
            goto label_1c6f48;
        }
    }
    ctx->pc = 0x1C6EF8u;
    // 0x1c6ef8: 0xc0705c6  jal         func_1C1718
    ctx->pc = 0x1C6EF8u;
    SET_GPR_U32(ctx, 31, 0x1C6F00u);
    ctx->pc = 0x1C6EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6EF8u;
    // 0x1c6efc: 0x26040420  addiu       $a0, $s0, 0x420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1718u, 0x1C6EF8u, 0x1C6F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6F00u;
label_1c6f00:
    // 0x1c6f00: 0xc073ac0  jal         func_1CEB00
    ctx->pc = 0x1C6F00u;
    SET_GPR_U32(ctx, 31, 0x1C6F08u);
    ctx->pc = 0x1C6F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6F00u;
    // 0x1c6f04: 0x26040150  addiu       $a0, $s0, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEB00u, 0x1C6F00u, 0x1C6F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6F08u;
label_1c6f08:
    // 0x1c6f08: 0xc075000  jal         func_1D4000
    ctx->pc = 0x1C6F08u;
    SET_GPR_U32(ctx, 31, 0x1C6F10u);
    ctx->pc = 0x1C6F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6F08u;
    // 0x1c6f0c: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4000u, 0x1C6F08u, 0x1C6F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6F10u;
label_1c6f10:
    // 0x1c6f10: 0x8e020510  lw          $v0, 0x510($s0)
    ctx->pc = 0x1c6f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x1c6f14: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C6F14u;
    {
        const bool branch_taken_0x1c6f14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6F14u;
        // 0x1c6f18: 0x26110514  addiu       $s1, $s0, 0x514 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1300));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6f14) {
            ctx->pc = 0x1C6F3Cu;
            goto label_1c6f3c;
        }
    }
    ctx->pc = 0x1C6F1Cu;
    // 0x1c6f1c: 0xc10c3ac  jal         func_430EB0
    ctx->pc = 0x1C6F1Cu;
    SET_GPR_U32(ctx, 31, 0x1C6F24u);
    ctx->pc = 0x1C6F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6F1Cu;
    // 0x1c6f20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x1C6F1Cu, 0x1C6F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6F24u;
label_1c6f24:
    // 0x1c6f24: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C6F24u;
    {
        const bool branch_taken_0x1c6f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6F24u;
        // 0x1c6f28: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6f24) {
            ctx->pc = 0x1C6F3Cu;
            goto label_1c6f3c;
        }
    }
    ctx->pc = 0x1C6F2Cu;
    // 0x1c6f2c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c6f2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6f30: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x1c6f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    // 0x1c6f34: 0xc043e94  jal         func_10FA50
    ctx->pc = 0x1C6F34u;
    SET_GPR_U32(ctx, 31, 0x1C6F3Cu);
    ctx->pc = 0x1C6F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6F34u;
    // 0x1c6f38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FA50u, 0x1C6F34u, 0x1C6F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6F3Cu;
label_1c6f3c:
    // 0x1c6f3c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1c6f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1c6f40: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1c6f40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1c6f44: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1c6f44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c6f48:
    // 0x1c6f48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c6f48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6f4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c6f4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6f50: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6F50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6F50u;
        // 0x1c6f54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6F50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6F58u;
}
