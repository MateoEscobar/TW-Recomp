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

// Function: sub_00485F28
// Address: 0x485f28 - 0x485f90
void sub_00485F28_0x485f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00485F28_0x485f28");
#endif

    switch (ctx->pc) {
        case 0x485f28u: goto label_485f28;
        case 0x485f2cu: goto label_485f2c;
        case 0x485f30u: goto label_485f30;
        case 0x485f34u: goto label_485f34;
        case 0x485f38u: goto label_485f38;
        case 0x485f3cu: goto label_485f3c;
        case 0x485f40u: goto label_485f40;
        case 0x485f44u: goto label_485f44;
        case 0x485f48u: goto label_485f48;
        case 0x485f4cu: goto label_485f4c;
        case 0x485f50u: goto label_485f50;
        case 0x485f54u: goto label_485f54;
        case 0x485f58u: goto label_485f58;
        case 0x485f5cu: goto label_485f5c;
        case 0x485f60u: goto label_485f60;
        case 0x485f64u: goto label_485f64;
        case 0x485f68u: goto label_485f68;
        case 0x485f6cu: goto label_485f6c;
        case 0x485f70u: goto label_485f70;
        case 0x485f74u: goto label_485f74;
        case 0x485f78u: goto label_485f78;
        case 0x485f7cu: goto label_485f7c;
        case 0x485f80u: goto label_485f80;
        case 0x485f84u: goto label_485f84;
        case 0x485f88u: goto label_485f88;
        case 0x485f8cu: goto label_485f8c;
        default: break;
    }

    ctx->pc = 0x485f28u;

label_485f28:
    // 0x485f28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x485f28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_485f2c:
    // 0x485f2c: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x485f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_485f30:
    // 0x485f30: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x485f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_485f34:
    // 0x485f34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x485f34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_485f38:
    // 0x485f38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x485f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_485f3c:
    // 0x485f3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x485f3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_485f40:
    // 0x485f40: 0x8c62ad7c  lw          $v0, -0x5284($v1)
    ctx->pc = 0x485f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946172)));
label_485f44:
    // 0x485f44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x485f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_485f48:
    // 0x485f48: 0x40f809  jalr        $v0
label_485f4c:
    if (ctx->pc == 0x485F4Cu) {
        ctx->pc = 0x485F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485F48u;
        // 0x485f4c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x485F50u;
        goto label_485f50;
    }
    ctx->pc = 0x485F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x485F50u);
        ctx->pc = 0x485F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485F48u;
        // 0x485f4c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x485F48u, 0x485F50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x485F50u;
label_485f50:
    // 0x485f50: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_485f54:
    if (ctx->pc == 0x485F54u) {
        ctx->pc = 0x485F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485F50u;
        // 0x485f54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x485F58u;
        goto label_485f58;
    }
    ctx->pc = 0x485F50u;
    {
        const bool branch_taken_0x485f50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x485F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485F50u;
        // 0x485f54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x485f50) {
            ctx->pc = 0x485F78u;
            goto label_485f78;
        }
    }
    ctx->pc = 0x485F58u;
label_485f58:
    // 0x485f58: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x485f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_485f5c:
    // 0x485f5c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x485f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_485f60:
    // 0x485f60: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_485f64:
    if (ctx->pc == 0x485F64u) {
        ctx->pc = 0x485F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485F60u;
        // 0x485f64: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x485F68u;
        goto label_485f68;
    }
    ctx->pc = 0x485F60u;
    {
        const bool branch_taken_0x485f60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x485f60) {
            ctx->pc = 0x485F64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x485F60u;
            // 0x485f64: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x485F78u;
            goto label_485f78;
        }
    }
    ctx->pc = 0x485F68u;
label_485f68:
    // 0x485f68: 0x92020022  lbu         $v0, 0x22($s0)
    ctx->pc = 0x485f68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 34)));
label_485f6c:
    // 0x485f6c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x485f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_485f70:
    // 0x485f70: 0xa2020022  sb          $v0, 0x22($s0)
    ctx->pc = 0x485f70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 34), (uint8_t)GPR_U32(ctx, 2));
label_485f74:
    // 0x485f74: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x485f74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_485f78:
    // 0x485f78: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x485f78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_485f7c:
    // 0x485f7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x485f7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_485f80:
    // 0x485f80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x485f80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_485f84:
    // 0x485f84: 0x3e00008  jr          $ra
label_485f88:
    if (ctx->pc == 0x485F88u) {
        ctx->pc = 0x485F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485F84u;
        // 0x485f88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x485F8Cu;
        goto label_485f8c;
    }
    ctx->pc = 0x485F84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x485F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485F84u;
        // 0x485f88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x485F84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x485F8Cu;
label_485f8c:
    // 0x485f8c: 0x0  nop
    ctx->pc = 0x485f8cu;
    // NOP
    ctx->pc = 0x485f90u;
}
