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

// Function: sub_00214C28
// Address: 0x214c28 - 0x214cb0
void sub_00214C28_0x214c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214C28_0x214c28");
#endif

    switch (ctx->pc) {
        case 0x214c28u: goto label_214c28;
        case 0x214c2cu: goto label_214c2c;
        case 0x214c30u: goto label_214c30;
        case 0x214c34u: goto label_214c34;
        case 0x214c38u: goto label_214c38;
        case 0x214c3cu: goto label_214c3c;
        case 0x214c40u: goto label_214c40;
        case 0x214c44u: goto label_214c44;
        case 0x214c48u: goto label_214c48;
        case 0x214c4cu: goto label_214c4c;
        case 0x214c50u: goto label_214c50;
        case 0x214c54u: goto label_214c54;
        case 0x214c58u: goto label_214c58;
        case 0x214c5cu: goto label_214c5c;
        case 0x214c60u: goto label_214c60;
        case 0x214c64u: goto label_214c64;
        case 0x214c68u: goto label_214c68;
        case 0x214c6cu: goto label_214c6c;
        case 0x214c70u: goto label_214c70;
        case 0x214c74u: goto label_214c74;
        case 0x214c78u: goto label_214c78;
        case 0x214c7cu: goto label_214c7c;
        case 0x214c80u: goto label_214c80;
        case 0x214c84u: goto label_214c84;
        case 0x214c88u: goto label_214c88;
        case 0x214c8cu: goto label_214c8c;
        case 0x214c90u: goto label_214c90;
        case 0x214c94u: goto label_214c94;
        case 0x214c98u: goto label_214c98;
        case 0x214c9cu: goto label_214c9c;
        case 0x214ca0u: goto label_214ca0;
        case 0x214ca4u: goto label_214ca4;
        case 0x214ca8u: goto label_214ca8;
        case 0x214cacu: goto label_214cac;
        default: break;
    }

    ctx->pc = 0x214c28u;

label_214c28:
    // 0x214c28: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x214c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_214c2c:
    // 0x214c2c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x214c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_214c30:
    // 0x214c30: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x214c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_214c34:
    // 0x214c34: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x214c34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_214c38:
    // 0x214c38: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x214c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_214c3c:
    // 0x214c3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x214c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_214c40:
    // 0x214c40: 0x8e424130  lw          $v0, 0x4130($s2)
    ctx->pc = 0x214c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16688)));
label_214c44:
    // 0x214c44: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_214c48:
    if (ctx->pc == 0x214C48u) {
        ctx->pc = 0x214C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214C44u;
        // 0x214c48: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214C4Cu;
        goto label_214c4c;
    }
    ctx->pc = 0x214C44u;
    {
        const bool branch_taken_0x214c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x214C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214C44u;
        // 0x214c48: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214c44) {
            ctx->pc = 0x214C98u;
            goto label_214c98;
        }
    }
    ctx->pc = 0x214C4Cu;
label_214c4c:
    // 0x214c4c: 0x8e42413c  lw          $v0, 0x413C($s2)
    ctx->pc = 0x214c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16700)));
label_214c50:
    // 0x214c50: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
label_214c54:
    if (ctx->pc == 0x214C54u) {
        ctx->pc = 0x214C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214C50u;
        // 0x214c54: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214C58u;
        goto label_214c58;
    }
    ctx->pc = 0x214C50u;
    {
        const bool branch_taken_0x214c50 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x214C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214C50u;
        // 0x214c54: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214c50) {
            ctx->pc = 0x214C98u;
            goto label_214c98;
        }
    }
    ctx->pc = 0x214C58u;
label_214c58:
    // 0x214c58: 0x26504150  addiu       $s0, $s2, 0x4150
    ctx->pc = 0x214c58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16720));
label_214c5c:
    // 0x214c5c: 0x0  nop
    ctx->pc = 0x214c5cu;
    // NOP
label_214c60:
    // 0x214c60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x214c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_214c64:
    // 0x214c64: 0xc06898e  jal         func_1A2638
label_214c68:
    if (ctx->pc == 0x214C68u) {
        ctx->pc = 0x214C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214C64u;
        // 0x214c68: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214C6Cu;
        goto label_214c6c;
    }
    ctx->pc = 0x214C64u;
    SET_GPR_U32(ctx, 31, 0x214C6Cu);
    ctx->pc = 0x214C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214C64u;
    // 0x214c68: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2638u, 0x214C64u, 0x214C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214C6Cu;
label_214c6c:
    // 0x214c6c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x214c6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_214c70:
    // 0x214c70: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x214c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_214c74:
    // 0x214c74: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x214c74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_214c78:
    // 0x214c78: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x214c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_214c7c:
    // 0x214c7c: 0x60f809  jalr        $v1
label_214c80:
    if (ctx->pc == 0x214C80u) {
        ctx->pc = 0x214C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214C7Cu;
        // 0x214c80: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214C84u;
        goto label_214c84;
    }
    ctx->pc = 0x214C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x214C84u);
        ctx->pc = 0x214C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214C7Cu;
        // 0x214c80: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214C7Cu, 0x214C84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x214C84u;
label_214c84:
    // 0x214c84: 0x8e42413c  lw          $v0, 0x413C($s2)
    ctx->pc = 0x214c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16700)));
label_214c88:
    // 0x214c88: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x214c88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_214c8c:
    // 0x214c8c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_214c90:
    if (ctx->pc == 0x214C90u) {
        ctx->pc = 0x214C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214C8Cu;
        // 0x214c90: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214C94u;
        goto label_214c94;
    }
    ctx->pc = 0x214C8Cu;
    {
        const bool branch_taken_0x214c8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x214C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214C8Cu;
        // 0x214c90: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214c8c) {
            ctx->pc = 0x214C60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_214c60;
        }
    }
    ctx->pc = 0x214C94u;
label_214c94:
    // 0x214c94: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x214c94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_214c98:
    // 0x214c98: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x214c98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_214c9c:
    // 0x214c9c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x214c9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_214ca0:
    // 0x214ca0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x214ca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_214ca4:
    // 0x214ca4: 0x3e00008  jr          $ra
label_214ca8:
    if (ctx->pc == 0x214CA8u) {
        ctx->pc = 0x214CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214CA4u;
        // 0x214ca8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214CACu;
        goto label_214cac;
    }
    ctx->pc = 0x214CA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214CA4u;
        // 0x214ca8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214CA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214CACu;
label_214cac:
    // 0x214cac: 0x0  nop
    ctx->pc = 0x214cacu;
    // NOP
    ctx->pc = 0x214cb0u;
}
