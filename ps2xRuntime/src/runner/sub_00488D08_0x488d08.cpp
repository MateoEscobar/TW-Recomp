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

// Function: sub_00488D08
// Address: 0x488d08 - 0x488d90
void sub_00488D08_0x488d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00488D08_0x488d08");
#endif

    switch (ctx->pc) {
        case 0x488d08u: goto label_488d08;
        case 0x488d0cu: goto label_488d0c;
        case 0x488d10u: goto label_488d10;
        case 0x488d14u: goto label_488d14;
        case 0x488d18u: goto label_488d18;
        case 0x488d1cu: goto label_488d1c;
        case 0x488d20u: goto label_488d20;
        case 0x488d24u: goto label_488d24;
        case 0x488d28u: goto label_488d28;
        case 0x488d2cu: goto label_488d2c;
        case 0x488d30u: goto label_488d30;
        case 0x488d34u: goto label_488d34;
        case 0x488d38u: goto label_488d38;
        case 0x488d3cu: goto label_488d3c;
        case 0x488d40u: goto label_488d40;
        case 0x488d44u: goto label_488d44;
        case 0x488d48u: goto label_488d48;
        case 0x488d4cu: goto label_488d4c;
        case 0x488d50u: goto label_488d50;
        case 0x488d54u: goto label_488d54;
        case 0x488d58u: goto label_488d58;
        case 0x488d5cu: goto label_488d5c;
        case 0x488d60u: goto label_488d60;
        case 0x488d64u: goto label_488d64;
        case 0x488d68u: goto label_488d68;
        case 0x488d6cu: goto label_488d6c;
        case 0x488d70u: goto label_488d70;
        case 0x488d74u: goto label_488d74;
        case 0x488d78u: goto label_488d78;
        case 0x488d7cu: goto label_488d7c;
        case 0x488d80u: goto label_488d80;
        case 0x488d84u: goto label_488d84;
        case 0x488d88u: goto label_488d88;
        case 0x488d8cu: goto label_488d8c;
        default: break;
    }

    ctx->pc = 0x488d08u;

label_488d08:
    // 0x488d08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x488d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_488d0c:
    // 0x488d0c: 0x8f838978  lw          $v1, -0x7688($gp)
    ctx->pc = 0x488d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936952)));
label_488d10:
    // 0x488d10: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x488d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_488d14:
    // 0x488d14: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x488d14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
label_488d18:
    // 0x488d18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x488d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_488d1c:
    // 0x488d1c: 0x24a5ad18  addiu       $a1, $a1, -0x52E8
    ctx->pc = 0x488d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946072));
label_488d20:
    // 0x488d20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x488d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_488d24:
    // 0x488d24: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x488d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_488d28:
    // 0x488d28: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x488d28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_488d2c:
    // 0x488d2c: 0x8ca20118  lw          $v0, 0x118($a1)
    ctx->pc = 0x488d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 280)));
label_488d30:
    // 0x488d30: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x488d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_488d34:
    // 0x488d34: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x488d34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_488d38:
    // 0x488d38: 0x40f809  jalr        $v0
label_488d3c:
    if (ctx->pc == 0x488D3Cu) {
        ctx->pc = 0x488D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488D38u;
        // 0x488d3c: 0x34a50006  ori         $a1, $a1, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6);
        ctx->in_delay_slot = false;
        ctx->pc = 0x488D40u;
        goto label_488d40;
    }
    ctx->pc = 0x488D38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x488D40u);
        ctx->pc = 0x488D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488D38u;
        // 0x488d3c: 0x34a50006  ori         $a1, $a1, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x488D38u, 0x488D40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x488D40u;
label_488d40:
    // 0x488d40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x488d40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_488d44:
    // 0x488d44: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_488d48:
    if (ctx->pc == 0x488D48u) {
        ctx->pc = 0x488D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488D44u;
        // 0x488d48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x488D4Cu;
        goto label_488d4c;
    }
    ctx->pc = 0x488D44u;
    {
        const bool branch_taken_0x488d44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x488D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488D44u;
        // 0x488d48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x488d44) {
            ctx->pc = 0x488D78u;
            goto label_488d78;
        }
    }
    ctx->pc = 0x488D4Cu;
label_488d4c:
    // 0x488d4c: 0x24031101  addiu       $v1, $zero, 0x1101
    ctx->pc = 0x488d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4353));
label_488d50:
    // 0x488d50: 0x3c040053  lui         $a0, 0x53
    ctx->pc = 0x488d50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
label_488d54:
    // 0x488d54: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x488d54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
label_488d58:
    // 0x488d58: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x488d58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_488d5c:
    // 0x488d5c: 0x2484ec08  addiu       $a0, $a0, -0x13F8
    ctx->pc = 0x488d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962184));
label_488d60:
    // 0x488d60: 0xa2000010  sb          $zero, 0x10($s0)
    ctx->pc = 0x488d60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 0));
label_488d64:
    // 0x488d64: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x488d64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_488d68:
    // 0x488d68: 0xa2000030  sb          $zero, 0x30($s0)
    ctx->pc = 0x488d68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 48), (uint8_t)GPR_U32(ctx, 0));
label_488d6c:
    // 0x488d6c: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x488d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_488d70:
    // 0x488d70: 0xc11ff8e  jal         func_47FE38
label_488d74:
    if (ctx->pc == 0x488D74u) {
        ctx->pc = 0x488D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488D70u;
        // 0x488d74: 0xae030050  sw          $v1, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x488D78u;
        goto label_488d78;
    }
    ctx->pc = 0x488D70u;
    SET_GPR_U32(ctx, 31, 0x488D78u);
    ctx->pc = 0x488D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x488D70u;
    // 0x488d74: 0xae030050  sw          $v1, 0x50($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47FE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47FE38u, 0x488D70u, 0x488D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488D78u;
label_488d78:
    // 0x488d78: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x488d78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_488d7c:
    // 0x488d7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x488d7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_488d80:
    // 0x488d80: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x488d80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_488d84:
    // 0x488d84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x488d84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_488d88:
    // 0x488d88: 0x3e00008  jr          $ra
label_488d8c:
    if (ctx->pc == 0x488D8Cu) {
        ctx->pc = 0x488D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488D88u;
        // 0x488d8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x488D90u;
        goto label_fallthrough_0x488d88;
    }
    ctx->pc = 0x488D88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x488D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488D88u;
        // 0x488d8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x488D88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x488d88:
    ctx->pc = 0x488D90u;
}
