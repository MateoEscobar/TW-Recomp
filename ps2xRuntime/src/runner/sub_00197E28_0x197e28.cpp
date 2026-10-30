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

// Function: sub_00197E28
// Address: 0x197e28 - 0x197ec0
void sub_00197E28_0x197e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00197E28_0x197e28");
#endif

    switch (ctx->pc) {
        case 0x197e28u: goto label_197e28;
        case 0x197e2cu: goto label_197e2c;
        case 0x197e30u: goto label_197e30;
        case 0x197e34u: goto label_197e34;
        case 0x197e38u: goto label_197e38;
        case 0x197e3cu: goto label_197e3c;
        case 0x197e40u: goto label_197e40;
        case 0x197e44u: goto label_197e44;
        case 0x197e48u: goto label_197e48;
        case 0x197e4cu: goto label_197e4c;
        case 0x197e50u: goto label_197e50;
        case 0x197e54u: goto label_197e54;
        case 0x197e58u: goto label_197e58;
        case 0x197e5cu: goto label_197e5c;
        case 0x197e60u: goto label_197e60;
        case 0x197e64u: goto label_197e64;
        case 0x197e68u: goto label_197e68;
        case 0x197e6cu: goto label_197e6c;
        case 0x197e70u: goto label_197e70;
        case 0x197e74u: goto label_197e74;
        case 0x197e78u: goto label_197e78;
        case 0x197e7cu: goto label_197e7c;
        case 0x197e80u: goto label_197e80;
        case 0x197e84u: goto label_197e84;
        case 0x197e88u: goto label_197e88;
        case 0x197e8cu: goto label_197e8c;
        case 0x197e90u: goto label_197e90;
        case 0x197e94u: goto label_197e94;
        case 0x197e98u: goto label_197e98;
        case 0x197e9cu: goto label_197e9c;
        case 0x197ea0u: goto label_197ea0;
        case 0x197ea4u: goto label_197ea4;
        case 0x197ea8u: goto label_197ea8;
        case 0x197eacu: goto label_197eac;
        case 0x197eb0u: goto label_197eb0;
        case 0x197eb4u: goto label_197eb4;
        case 0x197eb8u: goto label_197eb8;
        case 0x197ebcu: goto label_197ebc;
        default: break;
    }

    ctx->pc = 0x197e28u;

label_197e28:
    // 0x197e28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x197e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_197e2c:
    // 0x197e2c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x197e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_197e30:
    // 0x197e30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x197e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_197e34:
    // 0x197e34: 0x3c100071  lui         $s0, 0x71
    ctx->pc = 0x197e34u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
label_197e38:
    // 0x197e38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x197e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_197e3c:
    // 0x197e3c: 0x2610ad28  addiu       $s0, $s0, -0x52D8
    ctx->pc = 0x197e3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946088));
label_197e40:
    // 0x197e40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x197e40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_197e44:
    // 0x197e44: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x197e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_197e48:
    // 0x197e48: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x197e48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_197e4c:
    // 0x197e4c: 0x40f809  jalr        $v0
label_197e50:
    if (ctx->pc == 0x197E50u) {
        ctx->pc = 0x197E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197E4Cu;
        // 0x197e50: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197E54u;
        goto label_197e54;
    }
    ctx->pc = 0x197E4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x197E54u);
        ctx->pc = 0x197E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197E4Cu;
        // 0x197e50: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197E4Cu, 0x197E54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x197E54u;
label_197e54:
    // 0x197e54: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x197e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_197e58:
    // 0x197e58: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x197e58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_197e5c:
    // 0x197e5c: 0x40f809  jalr        $v0
label_197e60:
    if (ctx->pc == 0x197E60u) {
        ctx->pc = 0x197E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197E5Cu;
        // 0x197e60: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197E64u;
        goto label_197e64;
    }
    ctx->pc = 0x197E5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x197E64u);
        ctx->pc = 0x197E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197E5Cu;
        // 0x197e60: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197E5Cu, 0x197E64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x197E64u;
label_197e64:
    // 0x197e64: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x197e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_197e68:
    // 0x197e68: 0x26250008  addiu       $a1, $s1, 0x8
    ctx->pc = 0x197e68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_197e6c:
    // 0x197e6c: 0x40f809  jalr        $v0
label_197e70:
    if (ctx->pc == 0x197E70u) {
        ctx->pc = 0x197E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197E6Cu;
        // 0x197e70: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197E74u;
        goto label_197e74;
    }
    ctx->pc = 0x197E6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x197E74u);
        ctx->pc = 0x197E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197E6Cu;
        // 0x197e70: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197E6Cu, 0x197E74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x197E74u;
label_197e74:
    // 0x197e74: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x197e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_197e78:
    // 0x197e78: 0x2625000c  addiu       $a1, $s1, 0xC
    ctx->pc = 0x197e78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_197e7c:
    // 0x197e7c: 0x40f809  jalr        $v0
label_197e80:
    if (ctx->pc == 0x197E80u) {
        ctx->pc = 0x197E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197E7Cu;
        // 0x197e80: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197E84u;
        goto label_197e84;
    }
    ctx->pc = 0x197E7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x197E84u);
        ctx->pc = 0x197E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197E7Cu;
        // 0x197e80: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197E7Cu, 0x197E84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x197E84u;
label_197e84:
    // 0x197e84: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x197e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_197e88:
    // 0x197e88: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x197e88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_197e8c:
    // 0x197e8c: 0x40f809  jalr        $v0
label_197e90:
    if (ctx->pc == 0x197E90u) {
        ctx->pc = 0x197E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197E8Cu;
        // 0x197e90: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197E94u;
        goto label_197e94;
    }
    ctx->pc = 0x197E8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x197E94u);
        ctx->pc = 0x197E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197E8Cu;
        // 0x197e90: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197E8Cu, 0x197E94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x197E94u;
label_197e94:
    // 0x197e94: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x197e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_197e98:
    // 0x197e98: 0x26250014  addiu       $a1, $s1, 0x14
    ctx->pc = 0x197e98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
label_197e9c:
    // 0x197e9c: 0x40f809  jalr        $v0
label_197ea0:
    if (ctx->pc == 0x197EA0u) {
        ctx->pc = 0x197EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197E9Cu;
        // 0x197ea0: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197EA4u;
        goto label_197ea4;
    }
    ctx->pc = 0x197E9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x197EA4u);
        ctx->pc = 0x197EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197E9Cu;
        // 0x197ea0: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197E9Cu, 0x197EA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x197EA4u;
label_197ea4:
    // 0x197ea4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x197ea4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_197ea8:
    // 0x197ea8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x197ea8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_197eac:
    // 0x197eac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x197eacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_197eb0:
    // 0x197eb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x197eb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_197eb4:
    // 0x197eb4: 0x3e00008  jr          $ra
label_197eb8:
    if (ctx->pc == 0x197EB8u) {
        ctx->pc = 0x197EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197EB4u;
        // 0x197eb8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197EBCu;
        goto label_197ebc;
    }
    ctx->pc = 0x197EB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197EB4u;
        // 0x197eb8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197EB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x197EBCu;
label_197ebc:
    // 0x197ebc: 0x0  nop
    ctx->pc = 0x197ebcu;
    // NOP
    ctx->pc = 0x197ec0u;
}
