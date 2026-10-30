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

// Function: sub_00397E08
// Address: 0x397e08 - 0x397e88
void sub_00397E08_0x397e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00397E08_0x397e08");
#endif

    switch (ctx->pc) {
        case 0x397e08u: goto label_397e08;
        case 0x397e0cu: goto label_397e0c;
        case 0x397e10u: goto label_397e10;
        case 0x397e14u: goto label_397e14;
        case 0x397e18u: goto label_397e18;
        case 0x397e1cu: goto label_397e1c;
        case 0x397e20u: goto label_397e20;
        case 0x397e24u: goto label_397e24;
        case 0x397e28u: goto label_397e28;
        case 0x397e2cu: goto label_397e2c;
        case 0x397e30u: goto label_397e30;
        case 0x397e34u: goto label_397e34;
        case 0x397e38u: goto label_397e38;
        case 0x397e3cu: goto label_397e3c;
        case 0x397e40u: goto label_397e40;
        case 0x397e44u: goto label_397e44;
        case 0x397e48u: goto label_397e48;
        case 0x397e4cu: goto label_397e4c;
        case 0x397e50u: goto label_397e50;
        case 0x397e54u: goto label_397e54;
        case 0x397e58u: goto label_397e58;
        case 0x397e5cu: goto label_397e5c;
        case 0x397e60u: goto label_397e60;
        case 0x397e64u: goto label_397e64;
        case 0x397e68u: goto label_397e68;
        case 0x397e6cu: goto label_397e6c;
        case 0x397e70u: goto label_397e70;
        case 0x397e74u: goto label_397e74;
        case 0x397e78u: goto label_397e78;
        case 0x397e7cu: goto label_397e7c;
        case 0x397e80u: goto label_397e80;
        case 0x397e84u: goto label_397e84;
        default: break;
    }

    ctx->pc = 0x397e08u;

label_397e08:
    // 0x397e08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x397e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_397e0c:
    // 0x397e0c: 0x24a501f4  addiu       $a1, $a1, 0x1F4
    ctx->pc = 0x397e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 500));
label_397e10:
    // 0x397e10: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x397e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_397e14:
    // 0x397e14: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x397e14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_397e18:
    // 0x397e18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x397e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_397e1c:
    // 0x397e1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x397e1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_397e20:
    // 0x397e20: 0xa605001a  sh          $a1, 0x1A($s0)
    ctx->pc = 0x397e20u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 26), (uint16_t)GPR_U32(ctx, 5));
label_397e24:
    // 0x397e24: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x397e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_397e28:
    // 0x397e28: 0x8c4a27e4  lw          $t2, 0x27E4($v0)
    ctx->pc = 0x397e28u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_397e2c:
    // 0x397e2c: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x397e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_397e30:
    // 0x397e30: 0xa6000018  sh          $zero, 0x18($s0)
    ctx->pc = 0x397e30u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 24), (uint16_t)GPR_U32(ctx, 0));
label_397e34:
    // 0x397e34: 0x3c080058  lui         $t0, 0x58
    ctx->pc = 0x397e34u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)88 << 16));
label_397e38:
    // 0x397e38: 0x9606001a  lhu         $a2, 0x1A($s0)
    ctx->pc = 0x397e38u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
label_397e3c:
    // 0x397e3c: 0x24a511c0  addiu       $a1, $a1, 0x11C0
    ctx->pc = 0x397e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4544));
label_397e40:
    // 0x397e40: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x397e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_397e44:
    // 0x397e44: 0x25081188  addiu       $t0, $t0, 0x1188
    ctx->pc = 0x397e44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4488));
label_397e48:
    // 0x397e48: 0xc40018  mult        $zero, $a2, $a0
    ctx->pc = 0x397e48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_397e4c:
    // 0x397e4c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x397e4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_397e50:
    // 0x397e50: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x397e50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_397e54:
    // 0x397e54: 0x24090096  addiu       $t1, $zero, 0x96
    ctx->pc = 0x397e54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
label_397e58:
    // 0x397e58: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x397e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_397e5c:
    // 0x397e5c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x397e5cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_397e60:
    // 0x397e60: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x397e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
label_397e64:
    // 0x397e64: 0x3012  mflo        $a2
    ctx->pc = 0x397e64u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_397e68:
    // 0x397e68: 0x40f809  jalr        $v0
label_397e6c:
    if (ctx->pc == 0x397E6Cu) {
        ctx->pc = 0x397E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397E68u;
        // 0x397e6c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397E70u;
        goto label_397e70;
    }
    ctx->pc = 0x397E68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x397E70u);
        ctx->pc = 0x397E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397E68u;
        // 0x397e6c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x397E68u, 0x397E70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x397E70u;
label_397e70:
    // 0x397e70: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x397e70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_397e74:
    // 0x397e74: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x397e74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_397e78:
    // 0x397e78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x397e78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_397e7c:
    // 0x397e7c: 0x3e00008  jr          $ra
label_397e80:
    if (ctx->pc == 0x397E80u) {
        ctx->pc = 0x397E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397E7Cu;
        // 0x397e80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397E84u;
        goto label_397e84;
    }
    ctx->pc = 0x397E7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x397E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397E7Cu;
        // 0x397e80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x397E7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x397E84u;
label_397e84:
    // 0x397e84: 0x0  nop
    ctx->pc = 0x397e84u;
    // NOP
    ctx->pc = 0x397e88u;
}
