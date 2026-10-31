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

// Function: sub_001C8E08
// Address: 0x1c8e08 - 0x1c8ea0
void sub_001C8E08_0x1c8e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C8E08_0x1c8e08");
#endif

    switch (ctx->pc) {
        case 0x1c8e08u: goto label_1c8e08;
        case 0x1c8e0cu: goto label_1c8e0c;
        case 0x1c8e10u: goto label_1c8e10;
        case 0x1c8e14u: goto label_1c8e14;
        case 0x1c8e18u: goto label_1c8e18;
        case 0x1c8e1cu: goto label_1c8e1c;
        case 0x1c8e20u: goto label_1c8e20;
        case 0x1c8e24u: goto label_1c8e24;
        case 0x1c8e28u: goto label_1c8e28;
        case 0x1c8e2cu: goto label_1c8e2c;
        case 0x1c8e30u: goto label_1c8e30;
        case 0x1c8e34u: goto label_1c8e34;
        case 0x1c8e38u: goto label_1c8e38;
        case 0x1c8e3cu: goto label_1c8e3c;
        case 0x1c8e40u: goto label_1c8e40;
        case 0x1c8e44u: goto label_1c8e44;
        case 0x1c8e48u: goto label_1c8e48;
        case 0x1c8e4cu: goto label_1c8e4c;
        case 0x1c8e50u: goto label_1c8e50;
        case 0x1c8e54u: goto label_1c8e54;
        case 0x1c8e58u: goto label_1c8e58;
        case 0x1c8e5cu: goto label_1c8e5c;
        case 0x1c8e60u: goto label_1c8e60;
        case 0x1c8e64u: goto label_1c8e64;
        case 0x1c8e68u: goto label_1c8e68;
        case 0x1c8e6cu: goto label_1c8e6c;
        case 0x1c8e70u: goto label_1c8e70;
        case 0x1c8e74u: goto label_1c8e74;
        case 0x1c8e78u: goto label_1c8e78;
        case 0x1c8e7cu: goto label_1c8e7c;
        case 0x1c8e80u: goto label_1c8e80;
        case 0x1c8e84u: goto label_1c8e84;
        case 0x1c8e88u: goto label_1c8e88;
        case 0x1c8e8cu: goto label_1c8e8c;
        case 0x1c8e90u: goto label_1c8e90;
        case 0x1c8e94u: goto label_1c8e94;
        case 0x1c8e98u: goto label_1c8e98;
        case 0x1c8e9cu: goto label_1c8e9c;
        default: break;
    }

    ctx->pc = 0x1c8e08u;

label_1c8e08:
    // 0x1c8e08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c8e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1c8e0c:
    // 0x1c8e0c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c8e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1c8e10:
    // 0x1c8e10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c8e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c8e14:
    // 0x1c8e14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c8e14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c8e18:
    // 0x1c8e18: 0xae060574  sw          $a2, 0x574($s0)
    ctx->pc = 0x1c8e18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1396), GPR_U32(ctx, 6));
label_1c8e1c:
    // 0x1c8e1c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c8e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c8e20:
    // 0x1c8e20: 0x844400e8  lh          $a0, 0xE8($v0)
    ctx->pc = 0x1c8e20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 232)));
label_1c8e24:
    // 0x1c8e24: 0x8c4300ec  lw          $v1, 0xEC($v0)
    ctx->pc = 0x1c8e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 236)));
label_1c8e28:
    // 0x1c8e28: 0x60f809  jalr        $v1
label_1c8e2c:
    if (ctx->pc == 0x1C8E2Cu) {
        ctx->pc = 0x1C8E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8E28u;
        // 0x1c8e2c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8E30u;
        goto label_1c8e30;
    }
    ctx->pc = 0x1C8E28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C8E30u);
        ctx->pc = 0x1C8E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8E28u;
        // 0x1c8e2c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8E28u, 0x1C8E30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C8E30u;
label_1c8e30:
    // 0x1c8e30: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1c8e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1c8e34:
    // 0x1c8e34: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c8e34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c8e38:
    // 0x1c8e38: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x1c8e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_1c8e3c:
    // 0x1c8e3c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1c8e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1c8e40:
    // 0x1c8e40: 0x24840840  addiu       $a0, $a0, 0x840
    ctx->pc = 0x1c8e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
label_1c8e44:
    // 0x1c8e44: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x1c8e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_1c8e48:
    // 0x1c8e48: 0xae050558  sw          $a1, 0x558($s0)
    ctx->pc = 0x1c8e48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1368), GPR_U32(ctx, 5));
label_1c8e4c:
    // 0x1c8e4c: 0xae02054c  sw          $v0, 0x54C($s0)
    ctx->pc = 0x1c8e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1356), GPR_U32(ctx, 2));
label_1c8e50:
    // 0x1c8e50: 0xc06c590  jal         func_1B1640
label_1c8e54:
    if (ctx->pc == 0x1C8E54u) {
        ctx->pc = 0x1C8E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8E50u;
        // 0x1c8e54: 0xae050004  sw          $a1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8E58u;
        goto label_1c8e58;
    }
    ctx->pc = 0x1C8E50u;
    SET_GPR_U32(ctx, 31, 0x1C8E58u);
    ctx->pc = 0x1C8E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8E50u;
    // 0x1c8e54: 0xae050004  sw          $a1, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1640u, 0x1C8E50u, 0x1C8E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8E58u;
label_1c8e58:
    // 0x1c8e58: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1c8e5c:
    if (ctx->pc == 0x1C8E5Cu) {
        ctx->pc = 0x1C8E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8E58u;
        // 0x1c8e5c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8E60u;
        goto label_1c8e60;
    }
    ctx->pc = 0x1C8E58u;
    {
        const bool branch_taken_0x1c8e58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8E58u;
        // 0x1c8e5c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8e58) {
            ctx->pc = 0x1C8E78u;
            goto label_1c8e78;
        }
    }
    ctx->pc = 0x1C8E60u;
label_1c8e60:
    // 0x1c8e60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8e60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c8e64:
    // 0x1c8e64: 0xc44cea4c  lwc1        $f12, -0x15B4($v0)
    ctx->pc = 0x1c8e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c8e68:
    // 0x1c8e68: 0xc06ece4  jal         func_1BB390
label_1c8e6c:
    if (ctx->pc == 0x1C8E6Cu) {
        ctx->pc = 0x1C8E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8E68u;
        // 0x1c8e6c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8E70u;
        goto label_1c8e70;
    }
    ctx->pc = 0x1C8E68u;
    SET_GPR_U32(ctx, 31, 0x1C8E70u);
    ctx->pc = 0x1C8E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8E68u;
    // 0x1c8e6c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB390u, 0x1C8E68u, 0x1C8E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8E70u;
label_1c8e70:
    // 0x1c8e70: 0x10000007  b           . + 4 + (0x7 << 2)
label_1c8e74:
    if (ctx->pc == 0x1C8E74u) {
        ctx->pc = 0x1C8E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8E70u;
        // 0x1c8e74: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8E78u;
        goto label_1c8e78;
    }
    ctx->pc = 0x1C8E70u;
    {
        const bool branch_taken_0x1c8e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8E70u;
        // 0x1c8e74: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8e70) {
            ctx->pc = 0x1C8E90u;
            goto label_1c8e90;
        }
    }
    ctx->pc = 0x1C8E78u;
label_1c8e78:
    // 0x1c8e78: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1c8e78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1c8e7c:
    // 0x1c8e7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c8e80:
    // 0x1c8e80: 0xc44cea50  lwc1        $f12, -0x15B0($v0)
    ctx->pc = 0x1c8e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c8e84:
    // 0x1c8e84: 0xc06ece4  jal         func_1BB390
label_1c8e88:
    if (ctx->pc == 0x1C8E88u) {
        ctx->pc = 0x1C8E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8E84u;
        // 0x1c8e88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8E8Cu;
        goto label_1c8e8c;
    }
    ctx->pc = 0x1C8E84u;
    SET_GPR_U32(ctx, 31, 0x1C8E8Cu);
    ctx->pc = 0x1C8E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8E84u;
    // 0x1c8e88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB390u, 0x1C8E84u, 0x1C8E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8E8Cu;
label_1c8e8c:
    // 0x1c8e8c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c8e8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c8e90:
    // 0x1c8e90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c8e90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c8e94:
    // 0x1c8e94: 0x3e00008  jr          $ra
label_1c8e98:
    if (ctx->pc == 0x1C8E98u) {
        ctx->pc = 0x1C8E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8E94u;
        // 0x1c8e98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8E9Cu;
        goto label_1c8e9c;
    }
    ctx->pc = 0x1C8E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8E94u;
        // 0x1c8e98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8E94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8E9Cu;
label_1c8e9c:
    // 0x1c8e9c: 0x0  nop
    ctx->pc = 0x1c8e9cu;
    // NOP
    ctx->pc = 0x1c8ea0u;
}
