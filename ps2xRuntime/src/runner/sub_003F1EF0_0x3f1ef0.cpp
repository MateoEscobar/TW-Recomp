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

// Function: sub_003F1EF0
// Address: 0x3f1ef0 - 0x3f1f90
void sub_003F1EF0_0x3f1ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F1EF0_0x3f1ef0");
#endif

    switch (ctx->pc) {
        case 0x3f1ef0u: goto label_3f1ef0;
        case 0x3f1ef4u: goto label_3f1ef4;
        case 0x3f1ef8u: goto label_3f1ef8;
        case 0x3f1efcu: goto label_3f1efc;
        case 0x3f1f00u: goto label_3f1f00;
        case 0x3f1f04u: goto label_3f1f04;
        case 0x3f1f08u: goto label_3f1f08;
        case 0x3f1f0cu: goto label_3f1f0c;
        case 0x3f1f10u: goto label_3f1f10;
        case 0x3f1f14u: goto label_3f1f14;
        case 0x3f1f18u: goto label_3f1f18;
        case 0x3f1f1cu: goto label_3f1f1c;
        case 0x3f1f20u: goto label_3f1f20;
        case 0x3f1f24u: goto label_3f1f24;
        case 0x3f1f28u: goto label_3f1f28;
        case 0x3f1f2cu: goto label_3f1f2c;
        case 0x3f1f30u: goto label_3f1f30;
        case 0x3f1f34u: goto label_3f1f34;
        case 0x3f1f38u: goto label_3f1f38;
        case 0x3f1f3cu: goto label_3f1f3c;
        case 0x3f1f40u: goto label_3f1f40;
        case 0x3f1f44u: goto label_3f1f44;
        case 0x3f1f48u: goto label_3f1f48;
        case 0x3f1f4cu: goto label_3f1f4c;
        case 0x3f1f50u: goto label_3f1f50;
        case 0x3f1f54u: goto label_3f1f54;
        case 0x3f1f58u: goto label_3f1f58;
        case 0x3f1f5cu: goto label_3f1f5c;
        case 0x3f1f60u: goto label_3f1f60;
        case 0x3f1f64u: goto label_3f1f64;
        case 0x3f1f68u: goto label_3f1f68;
        case 0x3f1f6cu: goto label_3f1f6c;
        case 0x3f1f70u: goto label_3f1f70;
        case 0x3f1f74u: goto label_3f1f74;
        case 0x3f1f78u: goto label_3f1f78;
        case 0x3f1f7cu: goto label_3f1f7c;
        case 0x3f1f80u: goto label_3f1f80;
        case 0x3f1f84u: goto label_3f1f84;
        case 0x3f1f88u: goto label_3f1f88;
        case 0x3f1f8cu: goto label_3f1f8c;
        default: break;
    }

    ctx->pc = 0x3f1ef0u;

label_3f1ef0:
    // 0x3f1ef0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3f1ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3f1ef4:
    // 0x3f1ef4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3f1ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_3f1ef8:
    // 0x3f1ef8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3f1ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3f1efc:
    // 0x3f1efc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3f1efcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3f1f00:
    // 0x3f1f00: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3f1f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3f1f04:
    // 0x3f1f04: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3f1f04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f1f08:
    // 0x3f1f08: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3f1f08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3f1f0c:
    // 0x3f1f0c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3f1f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3f1f10:
    // 0x3f1f10: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3f1f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3f1f14:
    // 0x3f1f14: 0xc0ea12a  jal         func_3A84A8
label_3f1f18:
    if (ctx->pc == 0x3F1F18u) {
        ctx->pc = 0x3F1F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1F14u;
        // 0x3f1f18: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1F1Cu;
        goto label_3f1f1c;
    }
    ctx->pc = 0x3F1F14u;
    SET_GPR_U32(ctx, 31, 0x3F1F1Cu);
    ctx->pc = 0x3F1F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1F14u;
    // 0x3f1f18: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3F1F14u, 0x3F1F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1F1Cu;
label_3f1f1c:
    // 0x3f1f1c: 0xc0ea14c  jal         func_3A8530
label_3f1f20:
    if (ctx->pc == 0x3F1F20u) {
        ctx->pc = 0x3F1F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1F1Cu;
        // 0x3f1f20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1F24u;
        goto label_3f1f24;
    }
    ctx->pc = 0x3F1F1Cu;
    SET_GPR_U32(ctx, 31, 0x3F1F24u);
    ctx->pc = 0x3F1F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1F1Cu;
    // 0x3f1f20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3F1F1Cu, 0x3F1F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1F24u;
label_3f1f24:
    // 0x3f1f24: 0xc08a61a  jal         func_229868
label_3f1f28:
    if (ctx->pc == 0x3F1F28u) {
        ctx->pc = 0x3F1F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1F24u;
        // 0x3f1f28: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1F2Cu;
        goto label_3f1f2c;
    }
    ctx->pc = 0x3F1F24u;
    SET_GPR_U32(ctx, 31, 0x3F1F2Cu);
    ctx->pc = 0x3F1F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1F24u;
    // 0x3f1f28: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x3F1F24u, 0x3F1F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1F2Cu;
label_3f1f2c:
    // 0x3f1f2c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3f1f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3f1f30:
    // 0x3f1f30: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x3f1f30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_3f1f34:
    // 0x3f1f34: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x3f1f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_3f1f38:
    // 0x3f1f38: 0x40f809  jalr        $v0
label_3f1f3c:
    if (ctx->pc == 0x3F1F3Cu) {
        ctx->pc = 0x3F1F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1F38u;
        // 0x3f1f3c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1F40u;
        goto label_3f1f40;
    }
    ctx->pc = 0x3F1F38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F1F40u);
        ctx->pc = 0x3F1F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1F38u;
        // 0x3f1f3c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F1F38u, 0x3F1F40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F1F40u;
label_3f1f40:
    // 0x3f1f40: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x3f1f40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_3f1f44:
    // 0x3f1f44: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_3f1f48:
    if (ctx->pc == 0x3F1F48u) {
        ctx->pc = 0x3F1F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1F44u;
        // 0x3f1f48: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1F4Cu;
        goto label_3f1f4c;
    }
    ctx->pc = 0x3F1F44u;
    {
        const bool branch_taken_0x3f1f44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F1F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1F44u;
        // 0x3f1f48: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1f44) {
            ctx->pc = 0x3F1F78u;
            goto label_3f1f78;
        }
    }
    ctx->pc = 0x3F1F4Cu;
label_3f1f4c:
    // 0x3f1f4c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3f1f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3f1f50:
    // 0x3f1f50: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3f1f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_3f1f54:
    // 0x3f1f54: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x3f1f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_3f1f58:
    // 0x3f1f58: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f1f58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f1f5c:
    // 0x3f1f5c: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x3f1f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
label_3f1f60:
    // 0x3f1f60: 0xc0e8cda  jal         func_3A3368
label_3f1f64:
    if (ctx->pc == 0x3F1F64u) {
        ctx->pc = 0x3F1F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1F60u;
        // 0x3f1f64: 0xae430014  sw          $v1, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1F68u;
        goto label_3f1f68;
    }
    ctx->pc = 0x3F1F60u;
    SET_GPR_U32(ctx, 31, 0x3F1F68u);
    ctx->pc = 0x3F1F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1F60u;
    // 0x3f1f64: 0xae430014  sw          $v1, 0x14($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3368u, 0x3F1F60u, 0x3F1F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1F68u;
label_3f1f68:
    // 0x3f1f68: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3f1f68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_3f1f6c:
    // 0x3f1f6c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f1f6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f1f70:
    // 0x3f1f70: 0xc0e8cbc  jal         func_3A32F0
label_3f1f74:
    if (ctx->pc == 0x3F1F74u) {
        ctx->pc = 0x3F1F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1F70u;
        // 0x3f1f74: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1F78u;
        goto label_3f1f78;
    }
    ctx->pc = 0x3F1F70u;
    SET_GPR_U32(ctx, 31, 0x3F1F78u);
    ctx->pc = 0x3F1F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1F70u;
    // 0x3f1f74: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A32F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A32F0u, 0x3F1F70u, 0x3F1F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1F78u;
label_3f1f78:
    // 0x3f1f78: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3f1f78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3f1f7c:
    // 0x3f1f7c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3f1f7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3f1f80:
    // 0x3f1f80: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3f1f80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f1f84:
    // 0x3f1f84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3f1f84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3f1f88:
    // 0x3f1f88: 0x3e00008  jr          $ra
label_3f1f8c:
    if (ctx->pc == 0x3F1F8Cu) {
        ctx->pc = 0x3F1F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1F88u;
        // 0x3f1f8c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1F90u;
        goto label_fallthrough_0x3f1f88;
    }
    ctx->pc = 0x3F1F88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F1F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1F88u;
        // 0x3f1f8c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F1F88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3f1f88:
    ctx->pc = 0x3F1F90u;
}
