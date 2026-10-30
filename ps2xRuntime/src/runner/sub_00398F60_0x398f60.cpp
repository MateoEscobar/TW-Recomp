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

// Function: sub_00398F60
// Address: 0x398f60 - 0x398fe0
void sub_00398F60_0x398f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00398F60_0x398f60");
#endif

    switch (ctx->pc) {
        case 0x398f60u: goto label_398f60;
        case 0x398f64u: goto label_398f64;
        case 0x398f68u: goto label_398f68;
        case 0x398f6cu: goto label_398f6c;
        case 0x398f70u: goto label_398f70;
        case 0x398f74u: goto label_398f74;
        case 0x398f78u: goto label_398f78;
        case 0x398f7cu: goto label_398f7c;
        case 0x398f80u: goto label_398f80;
        case 0x398f84u: goto label_398f84;
        case 0x398f88u: goto label_398f88;
        case 0x398f8cu: goto label_398f8c;
        case 0x398f90u: goto label_398f90;
        case 0x398f94u: goto label_398f94;
        case 0x398f98u: goto label_398f98;
        case 0x398f9cu: goto label_398f9c;
        case 0x398fa0u: goto label_398fa0;
        case 0x398fa4u: goto label_398fa4;
        case 0x398fa8u: goto label_398fa8;
        case 0x398facu: goto label_398fac;
        case 0x398fb0u: goto label_398fb0;
        case 0x398fb4u: goto label_398fb4;
        case 0x398fb8u: goto label_398fb8;
        case 0x398fbcu: goto label_398fbc;
        case 0x398fc0u: goto label_398fc0;
        case 0x398fc4u: goto label_398fc4;
        case 0x398fc8u: goto label_398fc8;
        case 0x398fccu: goto label_398fcc;
        case 0x398fd0u: goto label_398fd0;
        case 0x398fd4u: goto label_398fd4;
        case 0x398fd8u: goto label_398fd8;
        case 0x398fdcu: goto label_398fdc;
        default: break;
    }

    ctx->pc = 0x398f60u;

label_398f60:
    // 0x398f60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x398f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_398f64:
    // 0x398f64: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x398f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_398f68:
    // 0x398f68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x398f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_398f6c:
    // 0x398f6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x398f6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_398f70:
    // 0x398f70: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x398f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_398f74:
    // 0x398f74: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x398f74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_398f78:
    // 0x398f78: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x398f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_398f7c:
    // 0x398f7c: 0x40f809  jalr        $v0
label_398f80:
    if (ctx->pc == 0x398F80u) {
        ctx->pc = 0x398F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398F7Cu;
        // 0x398f80: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398F84u;
        goto label_398f84;
    }
    ctx->pc = 0x398F7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x398F84u);
        ctx->pc = 0x398F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398F7Cu;
        // 0x398f80: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398F7Cu, 0x398F84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x398F84u;
label_398f84:
    // 0x398f84: 0x96050018  lhu         $a1, 0x18($s0)
    ctx->pc = 0x398f84u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
label_398f88:
    // 0x398f88: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x398f88u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_398f8c:
    // 0x398f8c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x398f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_398f90:
    // 0x398f90: 0x97a20002  lhu         $v0, 0x2($sp)
    ctx->pc = 0x398f90u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
label_398f94:
    // 0x398f94: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x398f94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_398f98:
    // 0x398f98: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
label_398f9c:
    if (ctx->pc == 0x398F9Cu) {
        ctx->pc = 0x398F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398F98u;
        // 0x398f9c: 0x23403  sra         $a2, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398FA0u;
        goto label_398fa0;
    }
    ctx->pc = 0x398F98u;
    {
        const bool branch_taken_0x398f98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x398F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398F98u;
        // 0x398f9c: 0x23403  sra         $a2, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398f98) {
            ctx->pc = 0x398FCCu;
            goto label_398fcc;
        }
    }
    ctx->pc = 0x398FA0u;
label_398fa0:
    // 0x398fa0: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x398fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_398fa4:
    // 0x398fa4: 0x0  nop
    ctx->pc = 0x398fa4u;
    // NOP
label_398fa8:
    // 0x398fa8: 0x94820024  lhu         $v0, 0x24($a0)
    ctx->pc = 0x398fa8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 36)));
label_398fac:
    // 0x398fac: 0x54460004  bnel        $v0, $a2, . + 4 + (0x4 << 2)
label_398fb0:
    if (ctx->pc == 0x398FB0u) {
        ctx->pc = 0x398FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398FACu;
        // 0x398fb0: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398FB4u;
        goto label_398fb4;
    }
    ctx->pc = 0x398FACu;
    {
        const bool branch_taken_0x398fac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x398fac) {
            ctx->pc = 0x398FB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x398FACu;
            // 0x398fb0: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x398FC0u;
            goto label_398fc0;
        }
    }
    ctx->pc = 0x398FB4u;
label_398fb4:
    // 0x398fb4: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x398fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_398fb8:
    // 0x398fb8: 0x10000005  b           . + 4 + (0x5 << 2)
label_398fbc:
    if (ctx->pc == 0x398FBCu) {
        ctx->pc = 0x398FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398FB8u;
        // 0x398fbc: 0x21582  srl         $v0, $v0, 22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398FC0u;
        goto label_398fc0;
    }
    ctx->pc = 0x398FB8u;
    {
        const bool branch_taken_0x398fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x398FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398FB8u;
        // 0x398fbc: 0x21582  srl         $v0, $v0, 22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398fb8) {
            ctx->pc = 0x398FD0u;
            goto label_398fd0;
        }
    }
    ctx->pc = 0x398FC0u;
label_398fc0:
    // 0x398fc0: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x398fc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_398fc4:
    // 0x398fc4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_398fc8:
    if (ctx->pc == 0x398FC8u) {
        ctx->pc = 0x398FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398FC4u;
        // 0x398fc8: 0x24840028  addiu       $a0, $a0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398FCCu;
        goto label_398fcc;
    }
    ctx->pc = 0x398FC4u;
    {
        const bool branch_taken_0x398fc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x398FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398FC4u;
        // 0x398fc8: 0x24840028  addiu       $a0, $a0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398fc4) {
            ctx->pc = 0x398FA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_398fa8;
        }
    }
    ctx->pc = 0x398FCCu;
label_398fcc:
    // 0x398fcc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x398fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_398fd0:
    // 0x398fd0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x398fd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_398fd4:
    // 0x398fd4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x398fd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_398fd8:
    // 0x398fd8: 0x3e00008  jr          $ra
label_398fdc:
    if (ctx->pc == 0x398FDCu) {
        ctx->pc = 0x398FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398FD8u;
        // 0x398fdc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398FE0u;
        goto label_fallthrough_0x398fd8;
    }
    ctx->pc = 0x398FD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x398FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398FD8u;
        // 0x398fdc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398FD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x398fd8:
    ctx->pc = 0x398FE0u;
}
