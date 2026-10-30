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

// Function: sub_0010EDD0
// Address: 0x10edd0 - 0x10ee90
void sub_0010EDD0_0x10edd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010EDD0_0x10edd0");
#endif

    switch (ctx->pc) {
        case 0x10edd0u: goto label_10edd0;
        case 0x10edd4u: goto label_10edd4;
        case 0x10edd8u: goto label_10edd8;
        case 0x10eddcu: goto label_10eddc;
        case 0x10ede0u: goto label_10ede0;
        case 0x10ede4u: goto label_10ede4;
        case 0x10ede8u: goto label_10ede8;
        case 0x10edecu: goto label_10edec;
        case 0x10edf0u: goto label_10edf0;
        case 0x10edf4u: goto label_10edf4;
        case 0x10edf8u: goto label_10edf8;
        case 0x10edfcu: goto label_10edfc;
        case 0x10ee00u: goto label_10ee00;
        case 0x10ee04u: goto label_10ee04;
        case 0x10ee08u: goto label_10ee08;
        case 0x10ee0cu: goto label_10ee0c;
        case 0x10ee10u: goto label_10ee10;
        case 0x10ee14u: goto label_10ee14;
        case 0x10ee18u: goto label_10ee18;
        case 0x10ee1cu: goto label_10ee1c;
        case 0x10ee20u: goto label_10ee20;
        case 0x10ee24u: goto label_10ee24;
        case 0x10ee28u: goto label_10ee28;
        case 0x10ee2cu: goto label_10ee2c;
        case 0x10ee30u: goto label_10ee30;
        case 0x10ee34u: goto label_10ee34;
        case 0x10ee38u: goto label_10ee38;
        case 0x10ee3cu: goto label_10ee3c;
        case 0x10ee40u: goto label_10ee40;
        case 0x10ee44u: goto label_10ee44;
        case 0x10ee48u: goto label_10ee48;
        case 0x10ee4cu: goto label_10ee4c;
        case 0x10ee50u: goto label_10ee50;
        case 0x10ee54u: goto label_10ee54;
        case 0x10ee58u: goto label_10ee58;
        case 0x10ee5cu: goto label_10ee5c;
        case 0x10ee60u: goto label_10ee60;
        case 0x10ee64u: goto label_10ee64;
        case 0x10ee68u: goto label_10ee68;
        case 0x10ee6cu: goto label_10ee6c;
        case 0x10ee70u: goto label_10ee70;
        case 0x10ee74u: goto label_10ee74;
        case 0x10ee78u: goto label_10ee78;
        case 0x10ee7cu: goto label_10ee7c;
        case 0x10ee80u: goto label_10ee80;
        case 0x10ee84u: goto label_10ee84;
        case 0x10ee88u: goto label_10ee88;
        case 0x10ee8cu: goto label_10ee8c;
        default: break;
    }

    ctx->pc = 0x10edd0u;

label_10edd0:
    // 0x10edd0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x10edd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_10edd4:
    // 0x10edd4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x10edd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_10edd8:
    // 0x10edd8: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x10edd8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_10eddc:
    // 0x10eddc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x10eddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_10ede0:
    // 0x10ede0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x10ede0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_10ede4:
    // 0x10ede4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x10ede4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_10ede8:
    // 0x10ede8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x10ede8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_10edec:
    // 0x10edec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x10edecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10edf0:
    // 0x10edf0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10edf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_10edf4:
    // 0x10edf4: 0x3c13006f  lui         $s3, 0x6F
    ctx->pc = 0x10edf4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)111 << 16));
label_10edf8:
    // 0x10edf8: 0x8e0627e4  lw          $a2, 0x27E4($s0)
    ctx->pc = 0x10edf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_10edfc:
    // 0x10edfc: 0x8e65b9b8  lw          $a1, -0x4648($s3)
    ctx->pc = 0x10edfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294949304)));
label_10ee00:
    // 0x10ee00: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x10ee00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_10ee04:
    // 0x10ee04: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x10ee04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_10ee08:
    // 0x10ee08: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x10ee08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_10ee0c:
    // 0x10ee0c: 0x60f809  jalr        $v1
label_10ee10:
    if (ctx->pc == 0x10EE10u) {
        ctx->pc = 0x10EE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EE0Cu;
        // 0x10ee10: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EE14u;
        goto label_10ee14;
    }
    ctx->pc = 0x10EE0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10EE14u);
        ctx->pc = 0x10EE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EE0Cu;
        // 0x10ee10: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EE0Cu, 0x10EE14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10EE14u;
label_10ee14:
    // 0x10ee14: 0xae51000c  sw          $s1, 0xC($s2)
    ctx->pc = 0x10ee14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 17));
label_10ee18:
    // 0x10ee18: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x10ee18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
label_10ee1c:
    // 0x10ee1c: 0x8e0c27e4  lw          $t4, 0x27E4($s0)
    ctx->pc = 0x10ee1cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_10ee20:
    // 0x10ee20: 0x3c080054  lui         $t0, 0x54
    ctx->pc = 0x10ee20u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)84 << 16));
label_10ee24:
    // 0x10ee24: 0x113100  sll         $a2, $s1, 4
    ctx->pc = 0x10ee24u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_10ee28:
    // 0x10ee28: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x10ee28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_10ee2c:
    // 0x10ee2c: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x10ee2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_10ee30:
    // 0x10ee30: 0x24090044  addiu       $t1, $zero, 0x44
    ctx->pc = 0x10ee30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_10ee34:
    // 0x10ee34: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x10ee34u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10ee38:
    // 0x10ee38: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x10ee38u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10ee3c:
    // 0x10ee3c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x10ee3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_10ee40:
    // 0x10ee40: 0x24a56e70  addiu       $a1, $a1, 0x6E70
    ctx->pc = 0x10ee40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28272));
label_10ee44:
    // 0x10ee44: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x10ee44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_10ee48:
    // 0x10ee48: 0x25086e80  addiu       $t0, $t0, 0x6E80
    ctx->pc = 0x10ee48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 28288));
label_10ee4c:
    // 0x10ee4c: 0x40f809  jalr        $v0
label_10ee50:
    if (ctx->pc == 0x10EE50u) {
        ctx->pc = 0x10EE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EE4Cu;
        // 0x10ee50: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EE54u;
        goto label_10ee54;
    }
    ctx->pc = 0x10EE4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x10EE54u);
        ctx->pc = 0x10EE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EE4Cu;
        // 0x10ee50: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EE4Cu, 0x10EE54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10EE54u;
label_10ee54:
    // 0x10ee54: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x10ee54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_10ee58:
    // 0x10ee58: 0x8e0627e4  lw          $a2, 0x27E4($s0)
    ctx->pc = 0x10ee58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_10ee5c:
    // 0x10ee5c: 0x8e65b9b8  lw          $a1, -0x4648($s3)
    ctx->pc = 0x10ee5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294949304)));
label_10ee60:
    // 0x10ee60: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x10ee60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_10ee64:
    // 0x10ee64: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x10ee64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_10ee68:
    // 0x10ee68: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x10ee68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_10ee6c:
    // 0x10ee6c: 0x60f809  jalr        $v1
label_10ee70:
    if (ctx->pc == 0x10EE70u) {
        ctx->pc = 0x10EE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EE6Cu;
        // 0x10ee70: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EE74u;
        goto label_10ee74;
    }
    ctx->pc = 0x10EE6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10EE74u);
        ctx->pc = 0x10EE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EE6Cu;
        // 0x10ee70: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EE6Cu, 0x10EE74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10EE74u;
label_10ee74:
    // 0x10ee74: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x10ee74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_10ee78:
    // 0x10ee78: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x10ee78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_10ee7c:
    // 0x10ee7c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x10ee7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_10ee80:
    // 0x10ee80: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x10ee80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_10ee84:
    // 0x10ee84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10ee84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10ee88:
    // 0x10ee88: 0x3e00008  jr          $ra
label_10ee8c:
    if (ctx->pc == 0x10EE8Cu) {
        ctx->pc = 0x10EE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EE88u;
        // 0x10ee8c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EE90u;
        goto label_fallthrough_0x10ee88;
    }
    ctx->pc = 0x10EE88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10EE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EE88u;
        // 0x10ee8c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EE88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10ee88:
    ctx->pc = 0x10EE90u;
}
