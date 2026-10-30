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

// Function: sub_0028AB50
// Address: 0x28ab50 - 0x28abc0
void sub_0028AB50_0x28ab50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028AB50_0x28ab50");
#endif

    switch (ctx->pc) {
        case 0x28ab50u: goto label_28ab50;
        case 0x28ab54u: goto label_28ab54;
        case 0x28ab58u: goto label_28ab58;
        case 0x28ab5cu: goto label_28ab5c;
        case 0x28ab60u: goto label_28ab60;
        case 0x28ab64u: goto label_28ab64;
        case 0x28ab68u: goto label_28ab68;
        case 0x28ab6cu: goto label_28ab6c;
        case 0x28ab70u: goto label_28ab70;
        case 0x28ab74u: goto label_28ab74;
        case 0x28ab78u: goto label_28ab78;
        case 0x28ab7cu: goto label_28ab7c;
        case 0x28ab80u: goto label_28ab80;
        case 0x28ab84u: goto label_28ab84;
        case 0x28ab88u: goto label_28ab88;
        case 0x28ab8cu: goto label_28ab8c;
        case 0x28ab90u: goto label_28ab90;
        case 0x28ab94u: goto label_28ab94;
        case 0x28ab98u: goto label_28ab98;
        case 0x28ab9cu: goto label_28ab9c;
        case 0x28aba0u: goto label_28aba0;
        case 0x28aba4u: goto label_28aba4;
        case 0x28aba8u: goto label_28aba8;
        case 0x28abacu: goto label_28abac;
        case 0x28abb0u: goto label_28abb0;
        case 0x28abb4u: goto label_28abb4;
        case 0x28abb8u: goto label_28abb8;
        case 0x28abbcu: goto label_28abbc;
        default: break;
    }

    ctx->pc = 0x28ab50u;

label_28ab50:
    // 0x28ab50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28ab50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_28ab54:
    // 0x28ab54: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x28ab54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_28ab58:
    // 0x28ab58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28ab58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_28ab5c:
    // 0x28ab5c: 0x8082002c  lb          $v0, 0x2C($a0)
    ctx->pc = 0x28ab5cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 44)));
label_28ab60:
    // 0x28ab60: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_28ab64:
    if (ctx->pc == 0x28AB64u) {
        ctx->pc = 0x28AB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AB60u;
        // 0x28ab64: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AB68u;
        goto label_28ab68;
    }
    ctx->pc = 0x28AB60u;
    {
        const bool branch_taken_0x28ab60 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x28AB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AB60u;
        // 0x28ab64: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ab60) {
            ctx->pc = 0x28AB74u;
            goto label_28ab74;
        }
    }
    ctx->pc = 0x28AB68u;
label_28ab68:
    // 0x28ab68: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x28ab68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_28ab6c:
    // 0x28ab6c: 0x10000002  b           . + 4 + (0x2 << 2)
label_28ab70:
    if (ctx->pc == 0x28AB70u) {
        ctx->pc = 0x28AB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AB6Cu;
        // 0x28ab70: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AB74u;
        goto label_28ab74;
    }
    ctx->pc = 0x28AB6Cu;
    {
        const bool branch_taken_0x28ab6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AB6Cu;
        // 0x28ab70: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ab6c) {
            ctx->pc = 0x28AB78u;
            goto label_28ab78;
        }
    }
    ctx->pc = 0x28AB74u;
label_28ab74:
    // 0x28ab74: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x28ab74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28ab78:
    // 0x28ab78: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_28ab7c:
    if (ctx->pc == 0x28AB7Cu) {
        ctx->pc = 0x28AB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AB78u;
        // 0x28ab7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AB80u;
        goto label_28ab80;
    }
    ctx->pc = 0x28AB78u;
    {
        const bool branch_taken_0x28ab78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AB78u;
        // 0x28ab7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ab78) {
            ctx->pc = 0x28ABB0u;
            goto label_28abb0;
        }
    }
    ctx->pc = 0x28AB80u;
label_28ab80:
    // 0x28ab80: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x28ab80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_28ab84:
    // 0x28ab84: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x28ab84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_28ab88:
    // 0x28ab88: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x28ab88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_28ab8c:
    // 0x28ab8c: 0x40f809  jalr        $v0
label_28ab90:
    if (ctx->pc == 0x28AB90u) {
        ctx->pc = 0x28AB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AB8Cu;
        // 0x28ab90: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AB94u;
        goto label_28ab94;
    }
    ctx->pc = 0x28AB8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28AB94u);
        ctx->pc = 0x28AB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AB8Cu;
        // 0x28ab90: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28AB8Cu, 0x28AB94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28AB94u;
label_28ab94:
    // 0x28ab94: 0x24030086  addiu       $v1, $zero, 0x86
    ctx->pc = 0x28ab94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
label_28ab98:
    // 0x28ab98: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_28ab9c:
    if (ctx->pc == 0x28AB9Cu) {
        ctx->pc = 0x28AB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AB98u;
        // 0x28ab9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ABA0u;
        goto label_28aba0;
    }
    ctx->pc = 0x28AB98u;
    {
        const bool branch_taken_0x28ab98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x28AB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AB98u;
        // 0x28ab9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ab98) {
            ctx->pc = 0x28ABB0u;
            goto label_28abb0;
        }
    }
    ctx->pc = 0x28ABA0u;
label_28aba0:
    // 0x28aba0: 0xc0bb128  jal         func_2EC4A0
label_28aba4:
    if (ctx->pc == 0x28ABA4u) {
        ctx->pc = 0x28ABA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ABA0u;
        // 0x28aba4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ABA8u;
        goto label_28aba8;
    }
    ctx->pc = 0x28ABA0u;
    SET_GPR_U32(ctx, 31, 0x28ABA8u);
    ctx->pc = 0x28ABA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28ABA0u;
    // 0x28aba4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC4A0u, 0x28ABA0u, 0x28ABA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28ABA8u;
label_28aba8:
    // 0x28aba8: 0x10000002  b           . + 4 + (0x2 << 2)
label_28abac:
    if (ctx->pc == 0x28ABACu) {
        ctx->pc = 0x28ABACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ABA8u;
        // 0x28abac: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ABB0u;
        goto label_28abb0;
    }
    ctx->pc = 0x28ABA8u;
    {
        const bool branch_taken_0x28aba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28ABACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ABA8u;
        // 0x28abac: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aba8) {
            ctx->pc = 0x28ABB4u;
            goto label_28abb4;
        }
    }
    ctx->pc = 0x28ABB0u;
label_28abb0:
    // 0x28abb0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x28abb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_28abb4:
    // 0x28abb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28abb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28abb8:
    // 0x28abb8: 0x3e00008  jr          $ra
label_28abbc:
    if (ctx->pc == 0x28ABBCu) {
        ctx->pc = 0x28ABBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ABB8u;
        // 0x28abbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ABC0u;
        goto label_fallthrough_0x28abb8;
    }
    ctx->pc = 0x28ABB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28ABBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ABB8u;
        // 0x28abbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28ABB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x28abb8:
    ctx->pc = 0x28ABC0u;
}
