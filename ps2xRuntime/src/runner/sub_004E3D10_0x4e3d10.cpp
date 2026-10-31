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

// Function: sub_004E3D10
// Address: 0x4e3d10 - 0x4e3d90
void sub_004E3D10_0x4e3d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E3D10_0x4e3d10");
#endif

    switch (ctx->pc) {
        case 0x4e3d10u: goto label_4e3d10;
        case 0x4e3d14u: goto label_4e3d14;
        case 0x4e3d18u: goto label_4e3d18;
        case 0x4e3d1cu: goto label_4e3d1c;
        case 0x4e3d20u: goto label_4e3d20;
        case 0x4e3d24u: goto label_4e3d24;
        case 0x4e3d28u: goto label_4e3d28;
        case 0x4e3d2cu: goto label_4e3d2c;
        case 0x4e3d30u: goto label_4e3d30;
        case 0x4e3d34u: goto label_4e3d34;
        case 0x4e3d38u: goto label_4e3d38;
        case 0x4e3d3cu: goto label_4e3d3c;
        case 0x4e3d40u: goto label_4e3d40;
        case 0x4e3d44u: goto label_4e3d44;
        case 0x4e3d48u: goto label_4e3d48;
        case 0x4e3d4cu: goto label_4e3d4c;
        case 0x4e3d50u: goto label_4e3d50;
        case 0x4e3d54u: goto label_4e3d54;
        case 0x4e3d58u: goto label_4e3d58;
        case 0x4e3d5cu: goto label_4e3d5c;
        case 0x4e3d60u: goto label_4e3d60;
        case 0x4e3d64u: goto label_4e3d64;
        case 0x4e3d68u: goto label_4e3d68;
        case 0x4e3d6cu: goto label_4e3d6c;
        case 0x4e3d70u: goto label_4e3d70;
        case 0x4e3d74u: goto label_4e3d74;
        case 0x4e3d78u: goto label_4e3d78;
        case 0x4e3d7cu: goto label_4e3d7c;
        case 0x4e3d80u: goto label_4e3d80;
        case 0x4e3d84u: goto label_4e3d84;
        case 0x4e3d88u: goto label_4e3d88;
        case 0x4e3d8cu: goto label_4e3d8c;
        default: break;
    }

    ctx->pc = 0x4e3d10u;

label_4e3d10:
    // 0x4e3d10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4e3d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4e3d14:
    // 0x4e3d14: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4e3d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4e3d18:
    // 0x4e3d18: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4e3d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4e3d1c:
    // 0x4e3d1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e3d1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e3d20:
    // 0x4e3d20: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4e3d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4e3d24:
    // 0x4e3d24: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4e3d24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4e3d28:
    // 0x4e3d28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e3d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4e3d2c:
    // 0x4e3d2c: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_4e3d30:
    if (ctx->pc == 0x4E3D30u) {
        ctx->pc = 0x4E3D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3D2Cu;
        // 0x4e3d30: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3D34u;
        goto label_4e3d34;
    }
    ctx->pc = 0x4E3D2Cu;
    {
        const bool branch_taken_0x4e3d2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E3D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3D2Cu;
        // 0x4e3d30: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e3d2c) {
            ctx->pc = 0x4E3D74u;
            goto label_4e3d74;
        }
    }
    ctx->pc = 0x4E3D34u;
label_4e3d34:
    // 0x4e3d34: 0x8e02330c  lw          $v0, 0x330C($s0)
    ctx->pc = 0x4e3d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 13068)));
label_4e3d38:
    // 0x4e3d38: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4e3d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4e3d3c:
    // 0x4e3d3c: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x4e3d3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_4e3d40:
    // 0x4e3d40: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x4e3d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4e3d44:
    // 0x4e3d44: 0x60f809  jalr        $v1
label_4e3d48:
    if (ctx->pc == 0x4E3D48u) {
        ctx->pc = 0x4E3D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3D44u;
        // 0x4e3d48: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3D4Cu;
        goto label_4e3d4c;
    }
    ctx->pc = 0x4E3D44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E3D4Cu);
        ctx->pc = 0x4E3D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3D44u;
        // 0x4e3d48: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E3D44u, 0x4E3D4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E3D4Cu;
label_4e3d4c:
    // 0x4e3d4c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4e3d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4e3d50:
    // 0x4e3d50: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4e3d50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e3d54:
    // 0x4e3d54: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4e3d54u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4e3d58:
    // 0x4e3d58: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4e3d58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e3d5c:
    // 0x4e3d5c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4e3d5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4e3d60:
    // 0x4e3d60: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e3d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4e3d64:
    // 0x4e3d64: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4e3d64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4e3d68:
    // 0x4e3d68: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4e3d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4e3d6c:
    // 0x4e3d6c: 0x60f809  jalr        $v1
label_4e3d70:
    if (ctx->pc == 0x4E3D70u) {
        ctx->pc = 0x4E3D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3D6Cu;
        // 0x4e3d70: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3D74u;
        goto label_4e3d74;
    }
    ctx->pc = 0x4E3D6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E3D74u);
        ctx->pc = 0x4E3D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3D6Cu;
        // 0x4e3d70: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E3D6Cu, 0x4E3D74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E3D74u;
label_4e3d74:
    // 0x4e3d74: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4e3d74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e3d78:
    // 0x4e3d78: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4e3d78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e3d7c:
    // 0x4e3d7c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4e3d7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e3d80:
    // 0x4e3d80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e3d80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e3d84:
    // 0x4e3d84: 0x3e00008  jr          $ra
label_4e3d88:
    if (ctx->pc == 0x4E3D88u) {
        ctx->pc = 0x4E3D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3D84u;
        // 0x4e3d88: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3D8Cu;
        goto label_4e3d8c;
    }
    ctx->pc = 0x4E3D84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E3D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3D84u;
        // 0x4e3d88: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E3D84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E3D8Cu;
label_4e3d8c:
    // 0x4e3d8c: 0x0  nop
    ctx->pc = 0x4e3d8cu;
    // NOP
    ctx->pc = 0x4e3d90u;
}
