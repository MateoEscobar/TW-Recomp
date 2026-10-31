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

// Function: sub_00398EC8
// Address: 0x398ec8 - 0x398f60
void sub_00398EC8_0x398ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00398EC8_0x398ec8");
#endif

    switch (ctx->pc) {
        case 0x398ec8u: goto label_398ec8;
        case 0x398eccu: goto label_398ecc;
        case 0x398ed0u: goto label_398ed0;
        case 0x398ed4u: goto label_398ed4;
        case 0x398ed8u: goto label_398ed8;
        case 0x398edcu: goto label_398edc;
        case 0x398ee0u: goto label_398ee0;
        case 0x398ee4u: goto label_398ee4;
        case 0x398ee8u: goto label_398ee8;
        case 0x398eecu: goto label_398eec;
        case 0x398ef0u: goto label_398ef0;
        case 0x398ef4u: goto label_398ef4;
        case 0x398ef8u: goto label_398ef8;
        case 0x398efcu: goto label_398efc;
        case 0x398f00u: goto label_398f00;
        case 0x398f04u: goto label_398f04;
        case 0x398f08u: goto label_398f08;
        case 0x398f0cu: goto label_398f0c;
        case 0x398f10u: goto label_398f10;
        case 0x398f14u: goto label_398f14;
        case 0x398f18u: goto label_398f18;
        case 0x398f1cu: goto label_398f1c;
        case 0x398f20u: goto label_398f20;
        case 0x398f24u: goto label_398f24;
        case 0x398f28u: goto label_398f28;
        case 0x398f2cu: goto label_398f2c;
        case 0x398f30u: goto label_398f30;
        case 0x398f34u: goto label_398f34;
        case 0x398f38u: goto label_398f38;
        case 0x398f3cu: goto label_398f3c;
        case 0x398f40u: goto label_398f40;
        case 0x398f44u: goto label_398f44;
        case 0x398f48u: goto label_398f48;
        case 0x398f4cu: goto label_398f4c;
        case 0x398f50u: goto label_398f50;
        case 0x398f54u: goto label_398f54;
        case 0x398f58u: goto label_398f58;
        case 0x398f5cu: goto label_398f5c;
        default: break;
    }

    ctx->pc = 0x398ec8u;

label_398ec8:
    // 0x398ec8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x398ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_398ecc:
    // 0x398ecc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x398eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_398ed0:
    // 0x398ed0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x398ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_398ed4:
    // 0x398ed4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x398ed4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_398ed8:
    // 0x398ed8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x398ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_398edc:
    // 0x398edc: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x398edcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_398ee0:
    // 0x398ee0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x398ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_398ee4:
    // 0x398ee4: 0x40f809  jalr        $v0
label_398ee8:
    if (ctx->pc == 0x398EE8u) {
        ctx->pc = 0x398EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398EE4u;
        // 0x398ee8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398EECu;
        goto label_398eec;
    }
    ctx->pc = 0x398EE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x398EECu);
        ctx->pc = 0x398EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398EE4u;
        // 0x398ee8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398EE4u, 0x398EECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x398EECu;
label_398eec:
    // 0x398eec: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x398eecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_398ef0:
    // 0x398ef0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x398ef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_398ef4:
    // 0x398ef4: 0x97a20002  lhu         $v0, 0x2($sp)
    ctx->pc = 0x398ef4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
label_398ef8:
    // 0x398ef8: 0x96030018  lhu         $v1, 0x18($s0)
    ctx->pc = 0x398ef8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
label_398efc:
    // 0x398efc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x398efcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_398f00:
    // 0x398f00: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
label_398f04:
    if (ctx->pc == 0x398F04u) {
        ctx->pc = 0x398F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398F00u;
        // 0x398f04: 0x24403  sra         $t0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398F08u;
        goto label_398f08;
    }
    ctx->pc = 0x398F00u;
    {
        const bool branch_taken_0x398f00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x398F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398F00u;
        // 0x398f04: 0x24403  sra         $t0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398f00) {
            ctx->pc = 0x398F4Cu;
            goto label_398f4c;
        }
    }
    ctx->pc = 0x398F08u;
label_398f08:
    // 0x398f08: 0x3c06fff7  lui         $a2, 0xFFF7
    ctx->pc = 0x398f08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65527 << 16));
label_398f0c:
    // 0x398f0c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x398f0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_398f10:
    // 0x398f10: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x398f10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_398f14:
    // 0x398f14: 0x0  nop
    ctx->pc = 0x398f14u;
    // NOP
label_398f18:
    // 0x398f18: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x398f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_398f1c:
    // 0x398f1c: 0x472021  addu        $a0, $v0, $a3
    ctx->pc = 0x398f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_398f20:
    // 0x398f20: 0x94830024  lhu         $v1, 0x24($a0)
    ctx->pc = 0x398f20u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 36)));
label_398f24:
    // 0x398f24: 0x54680005  bnel        $v1, $t0, . + 4 + (0x5 << 2)
label_398f28:
    if (ctx->pc == 0x398F28u) {
        ctx->pc = 0x398F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398F24u;
        // 0x398f28: 0x96020018  lhu         $v0, 0x18($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398F2Cu;
        goto label_398f2c;
    }
    ctx->pc = 0x398F24u;
    {
        const bool branch_taken_0x398f24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        if (branch_taken_0x398f24) {
            ctx->pc = 0x398F28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x398F24u;
            // 0x398f28: 0x96020018  lhu         $v0, 0x18($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x398F3Cu;
            goto label_398f3c;
        }
    }
    ctx->pc = 0x398F2Cu;
label_398f2c:
    // 0x398f2c: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x398f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_398f30:
    // 0x398f30: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x398f30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_398f34:
    // 0x398f34: 0x10000005  b           . + 4 + (0x5 << 2)
label_398f38:
    if (ctx->pc == 0x398F38u) {
        ctx->pc = 0x398F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398F34u;
        // 0x398f38: 0xac820024  sw          $v0, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398F3Cu;
        goto label_398f3c;
    }
    ctx->pc = 0x398F34u;
    {
        const bool branch_taken_0x398f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x398F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398F34u;
        // 0x398f38: 0xac820024  sw          $v0, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398f34) {
            ctx->pc = 0x398F4Cu;
            goto label_398f4c;
        }
    }
    ctx->pc = 0x398F3Cu;
label_398f3c:
    // 0x398f3c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x398f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_398f40:
    // 0x398f40: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x398f40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_398f44:
    // 0x398f44: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_398f48:
    if (ctx->pc == 0x398F48u) {
        ctx->pc = 0x398F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398F44u;
        // 0x398f48: 0x24e70028  addiu       $a3, $a3, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398F4Cu;
        goto label_398f4c;
    }
    ctx->pc = 0x398F44u;
    {
        const bool branch_taken_0x398f44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x398F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398F44u;
        // 0x398f48: 0x24e70028  addiu       $a3, $a3, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398f44) {
            ctx->pc = 0x398F18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_398f18;
        }
    }
    ctx->pc = 0x398F4Cu;
label_398f4c:
    // 0x398f4c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x398f4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_398f50:
    // 0x398f50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x398f50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_398f54:
    // 0x398f54: 0x3e00008  jr          $ra
label_398f58:
    if (ctx->pc == 0x398F58u) {
        ctx->pc = 0x398F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398F54u;
        // 0x398f58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398F5Cu;
        goto label_398f5c;
    }
    ctx->pc = 0x398F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x398F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398F54u;
        // 0x398f58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398F54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x398F5Cu;
label_398f5c:
    // 0x398f5c: 0x0  nop
    ctx->pc = 0x398f5cu;
    // NOP
    ctx->pc = 0x398f60u;
}
