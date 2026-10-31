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

// Function: sub_0019FAF0
// Address: 0x19faf0 - 0x19fbb0
void sub_0019FAF0_0x19faf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019FAF0_0x19faf0");
#endif

    switch (ctx->pc) {
        case 0x19faf0u: goto label_19faf0;
        case 0x19faf4u: goto label_19faf4;
        case 0x19faf8u: goto label_19faf8;
        case 0x19fafcu: goto label_19fafc;
        case 0x19fb00u: goto label_19fb00;
        case 0x19fb04u: goto label_19fb04;
        case 0x19fb08u: goto label_19fb08;
        case 0x19fb0cu: goto label_19fb0c;
        case 0x19fb10u: goto label_19fb10;
        case 0x19fb14u: goto label_19fb14;
        case 0x19fb18u: goto label_19fb18;
        case 0x19fb1cu: goto label_19fb1c;
        case 0x19fb20u: goto label_19fb20;
        case 0x19fb24u: goto label_19fb24;
        case 0x19fb28u: goto label_19fb28;
        case 0x19fb2cu: goto label_19fb2c;
        case 0x19fb30u: goto label_19fb30;
        case 0x19fb34u: goto label_19fb34;
        case 0x19fb38u: goto label_19fb38;
        case 0x19fb3cu: goto label_19fb3c;
        case 0x19fb40u: goto label_19fb40;
        case 0x19fb44u: goto label_19fb44;
        case 0x19fb48u: goto label_19fb48;
        case 0x19fb4cu: goto label_19fb4c;
        case 0x19fb50u: goto label_19fb50;
        case 0x19fb54u: goto label_19fb54;
        case 0x19fb58u: goto label_19fb58;
        case 0x19fb5cu: goto label_19fb5c;
        case 0x19fb60u: goto label_19fb60;
        case 0x19fb64u: goto label_19fb64;
        case 0x19fb68u: goto label_19fb68;
        case 0x19fb6cu: goto label_19fb6c;
        case 0x19fb70u: goto label_19fb70;
        case 0x19fb74u: goto label_19fb74;
        case 0x19fb78u: goto label_19fb78;
        case 0x19fb7cu: goto label_19fb7c;
        case 0x19fb80u: goto label_19fb80;
        case 0x19fb84u: goto label_19fb84;
        case 0x19fb88u: goto label_19fb88;
        case 0x19fb8cu: goto label_19fb8c;
        case 0x19fb90u: goto label_19fb90;
        case 0x19fb94u: goto label_19fb94;
        case 0x19fb98u: goto label_19fb98;
        case 0x19fb9cu: goto label_19fb9c;
        case 0x19fba0u: goto label_19fba0;
        case 0x19fba4u: goto label_19fba4;
        case 0x19fba8u: goto label_19fba8;
        case 0x19fbacu: goto label_19fbac;
        default: break;
    }

    ctx->pc = 0x19faf0u;

label_19faf0:
    // 0x19faf0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x19faf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_19faf4:
    // 0x19faf4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x19faf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_19faf8:
    // 0x19faf8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x19faf8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19fafc:
    // 0x19fafc: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x19fafcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_19fb00:
    // 0x19fb00: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x19fb00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_19fb04:
    // 0x19fb04: 0x26700070  addiu       $s0, $s3, 0x70
    ctx->pc = 0x19fb04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
label_19fb08:
    // 0x19fb08: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x19fb08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_19fb0c:
    // 0x19fb0c: 0x3c14ffff  lui         $s4, 0xFFFF
    ctx->pc = 0x19fb0cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65535 << 16));
label_19fb10:
    // 0x19fb10: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x19fb10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_19fb14:
    // 0x19fb14: 0x3694ffff  ori         $s4, $s4, 0xFFFF
    ctx->pc = 0x19fb14u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)65535);
label_19fb18:
    // 0x19fb18: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x19fb18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_19fb1c:
    // 0x19fb1c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x19fb1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19fb20:
    // 0x19fb20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19fb20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_19fb24:
    // 0x19fb24: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x19fb24u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19fb28:
    // 0x19fb28: 0x26710044  addiu       $s1, $s3, 0x44
    ctx->pc = 0x19fb28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 68));
label_19fb2c:
    // 0x19fb2c: 0x0  nop
    ctx->pc = 0x19fb2cu;
    // NOP
label_19fb30:
    // 0x19fb30: 0xae340000  sw          $s4, 0x0($s1)
    ctx->pc = 0x19fb30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 20));
label_19fb34:
    // 0x19fb34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19fb34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19fb38:
    // 0x19fb38: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x19fb38u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_19fb3c:
    // 0x19fb3c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x19fb3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_19fb40:
    // 0x19fb40: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19fb40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19fb44:
    // 0x19fb44: 0x26100250  addiu       $s0, $s0, 0x250
    ctx->pc = 0x19fb44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
label_19fb48:
    // 0x19fb48: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x19fb48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_19fb4c:
    // 0x19fb4c: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x19fb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_19fb50:
    // 0x19fb50: 0x60f809  jalr        $v1
label_19fb54:
    if (ctx->pc == 0x19FB54u) {
        ctx->pc = 0x19FB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FB50u;
        // 0x19fb54: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FB58u;
        goto label_19fb58;
    }
    ctx->pc = 0x19FB50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x19FB58u);
        ctx->pc = 0x19FB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FB50u;
        // 0x19fb54: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19FB50u, 0x19FB58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19FB58u;
label_19fb58:
    // 0x19fb58: 0x2ea20008  sltiu       $v0, $s5, 0x8
    ctx->pc = 0x19fb58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_19fb5c:
    // 0x19fb5c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_19fb60:
    if (ctx->pc == 0x19FB60u) {
        ctx->pc = 0x19FB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FB5Cu;
        // 0x19fb60: 0x26520250  addiu       $s2, $s2, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FB64u;
        goto label_19fb64;
    }
    ctx->pc = 0x19FB5Cu;
    {
        const bool branch_taken_0x19fb5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19FB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FB5Cu;
        // 0x19fb60: 0x26520250  addiu       $s2, $s2, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fb5c) {
            ctx->pc = 0x19FB30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19fb30;
        }
    }
    ctx->pc = 0x19FB64u;
label_19fb64:
    // 0x19fb64: 0xae601300  sw          $zero, 0x1300($s3)
    ctx->pc = 0x19fb64u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4864), GPR_U32(ctx, 0));
label_19fb68:
    // 0x19fb68: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x19fb68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_19fb6c:
    // 0x19fb6c: 0xae601304  sw          $zero, 0x1304($s3)
    ctx->pc = 0x19fb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4868), GPR_U32(ctx, 0));
label_19fb70:
    // 0x19fb70: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x19fb70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
label_19fb74:
    // 0x19fb74: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x19fb74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_19fb78:
    // 0x19fb78: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x19fb78u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_19fb7c:
    // 0x19fb7c: 0xae600040  sw          $zero, 0x40($s3)
    ctx->pc = 0x19fb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 0));
label_19fb80:
    // 0x19fb80: 0x7e631310  sq          $v1, 0x1310($s3)
    ctx->pc = 0x19fb80u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 4880), GPR_VEC(ctx, 3));
label_19fb84:
    // 0x19fb84: 0xae601320  sw          $zero, 0x1320($s3)
    ctx->pc = 0x19fb84u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4896), GPR_U32(ctx, 0));
label_19fb88:
    // 0x19fb88: 0xae601324  sw          $zero, 0x1324($s3)
    ctx->pc = 0x19fb88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4900), GPR_U32(ctx, 0));
label_19fb8c:
    // 0x19fb8c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x19fb8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_19fb90:
    // 0x19fb90: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x19fb90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_19fb94:
    // 0x19fb94: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19fb94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_19fb98:
    // 0x19fb98: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x19fb98u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_19fb9c:
    // 0x19fb9c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x19fb9cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_19fba0:
    // 0x19fba0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19fba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19fba4:
    // 0x19fba4: 0x3e00008  jr          $ra
label_19fba8:
    if (ctx->pc == 0x19FBA8u) {
        ctx->pc = 0x19FBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FBA4u;
        // 0x19fba8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FBACu;
        goto label_19fbac;
    }
    ctx->pc = 0x19FBA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19FBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FBA4u;
        // 0x19fba8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19FBA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19FBACu;
label_19fbac:
    // 0x19fbac: 0x0  nop
    ctx->pc = 0x19fbacu;
    // NOP
    ctx->pc = 0x19fbb0u;
}
