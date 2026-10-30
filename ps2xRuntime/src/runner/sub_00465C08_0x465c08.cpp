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

// Function: sub_00465C08
// Address: 0x465c08 - 0x465c78
void sub_00465C08_0x465c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00465C08_0x465c08");
#endif

    switch (ctx->pc) {
        case 0x465c08u: goto label_465c08;
        case 0x465c0cu: goto label_465c0c;
        case 0x465c10u: goto label_465c10;
        case 0x465c14u: goto label_465c14;
        case 0x465c18u: goto label_465c18;
        case 0x465c1cu: goto label_465c1c;
        case 0x465c20u: goto label_465c20;
        case 0x465c24u: goto label_465c24;
        case 0x465c28u: goto label_465c28;
        case 0x465c2cu: goto label_465c2c;
        case 0x465c30u: goto label_465c30;
        case 0x465c34u: goto label_465c34;
        case 0x465c38u: goto label_465c38;
        case 0x465c3cu: goto label_465c3c;
        case 0x465c40u: goto label_465c40;
        case 0x465c44u: goto label_465c44;
        case 0x465c48u: goto label_465c48;
        case 0x465c4cu: goto label_465c4c;
        case 0x465c50u: goto label_465c50;
        case 0x465c54u: goto label_465c54;
        case 0x465c58u: goto label_465c58;
        case 0x465c5cu: goto label_465c5c;
        case 0x465c60u: goto label_465c60;
        case 0x465c64u: goto label_465c64;
        case 0x465c68u: goto label_465c68;
        case 0x465c6cu: goto label_465c6c;
        case 0x465c70u: goto label_465c70;
        case 0x465c74u: goto label_465c74;
        default: break;
    }

    ctx->pc = 0x465c08u;

label_465c08:
    // 0x465c08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x465c08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_465c0c:
    // 0x465c0c: 0x8f828490  lw          $v0, -0x7B70($gp)
    ctx->pc = 0x465c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
label_465c10:
    // 0x465c10: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x465c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_465c14:
    // 0x465c14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x465c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_465c18:
    // 0x465c18: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x465c18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_465c1c:
    // 0x465c1c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x465c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_465c20:
    // 0x465c20: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x465c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_465c24:
    // 0x465c24: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x465c24u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_465c28:
    // 0x465c28: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_465c2c:
    if (ctx->pc == 0x465C2Cu) {
        ctx->pc = 0x465C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x465C28u;
        // 0x465c2c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x465C30u;
        goto label_465c30;
    }
    ctx->pc = 0x465C28u;
    {
        const bool branch_taken_0x465c28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x465C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x465C28u;
        // 0x465c2c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x465c28) {
            ctx->pc = 0x465C60u;
            goto label_465c60;
        }
    }
    ctx->pc = 0x465C30u;
label_465c30:
    // 0x465c30: 0xc118fa4  jal         func_463E90
label_465c34:
    if (ctx->pc == 0x465C34u) {
        ctx->pc = 0x465C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x465C30u;
        // 0x465c34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x465C38u;
        goto label_465c38;
    }
    ctx->pc = 0x465C30u;
    SET_GPR_U32(ctx, 31, 0x465C38u);
    ctx->pc = 0x465C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x465C30u;
    // 0x465c34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x463E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x463E90u, 0x465C30u, 0x465C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x465C38u;
label_465c38:
    // 0x465c38: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x465c38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_465c3c:
    // 0x465c3c: 0x3c060053  lui         $a2, 0x53
    ctx->pc = 0x465c3cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)83 << 16));
label_465c40:
    // 0x465c40: 0x8c62ae34  lw          $v0, -0x51CC($v1)
    ctx->pc = 0x465c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946356)));
label_465c44:
    // 0x465c44: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x465c44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_465c48:
    // 0x465c48: 0x40f809  jalr        $v0
label_465c4c:
    if (ctx->pc == 0x465C4Cu) {
        ctx->pc = 0x465C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x465C48u;
        // 0x465c4c: 0x8cc4e618  lw          $a0, -0x19E8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294960664)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x465C50u;
        goto label_465c50;
    }
    ctx->pc = 0x465C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x465C50u);
        ctx->pc = 0x465C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x465C48u;
        // 0x465c4c: 0x8cc4e618  lw          $a0, -0x19E8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294960664)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x465C48u, 0x465C50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x465C50u;
label_465c50:
    // 0x465c50: 0x8f838490  lw          $v1, -0x7B70($gp)
    ctx->pc = 0x465c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
label_465c54:
    // 0x465c54: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x465c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_465c58:
    // 0x465c58: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x465c58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_465c5c:
    // 0x465c5c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x465c5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_465c60:
    // 0x465c60: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x465c60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_465c64:
    // 0x465c64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x465c64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_465c68:
    // 0x465c68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x465c68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_465c6c:
    // 0x465c6c: 0x3e00008  jr          $ra
label_465c70:
    if (ctx->pc == 0x465C70u) {
        ctx->pc = 0x465C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x465C6Cu;
        // 0x465c70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x465C74u;
        goto label_465c74;
    }
    ctx->pc = 0x465C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x465C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x465C6Cu;
        // 0x465c70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x465C6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x465C74u;
label_465c74:
    // 0x465c74: 0x0  nop
    ctx->pc = 0x465c74u;
    // NOP
    ctx->pc = 0x465c78u;
}
