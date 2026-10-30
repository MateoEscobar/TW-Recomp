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

// Function: sub_0044CB40
// Address: 0x44cb40 - 0x44cc68
void sub_0044CB40_0x44cb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044CB40_0x44cb40");
#endif

    switch (ctx->pc) {
        case 0x44cbc0u: goto label_44cbc0;
        case 0x44cbc8u: goto label_44cbc8;
        case 0x44cbe0u: goto label_44cbe0;
        case 0x44cbf0u: goto label_44cbf0;
        case 0x44cc04u: goto label_44cc04;
        default: break;
    }

    ctx->pc = 0x44cb40u;

    // 0x44cb40: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x44cb40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x44cb44: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x44cb44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x44cb48: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x44cb48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x44cb4c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x44cb4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44cb50: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x44cb50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x44cb54: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x44cb54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x44cb58: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x44cb58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x44cb5c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x44cb5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x44cb60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x44cb60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x44cb64: 0x8e22014c  lw          $v0, 0x14C($s1)
    ctx->pc = 0x44cb64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 332)));
    // 0x44cb68: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x44CB68u;
    {
        const bool branch_taken_0x44cb68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44cb68) {
            ctx->pc = 0x44CB6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44CB68u;
            // 0x44cb6c: 0x8e230184  lw          $v1, 0x184($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44CB8Cu;
            goto label_44cb8c;
        }
    }
    ctx->pc = 0x44CB70u;
    // 0x44cb70: 0x8e220194  lw          $v0, 0x194($s1)
    ctx->pc = 0x44cb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
    // 0x44cb74: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x44CB74u;
    {
        const bool branch_taken_0x44cb74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44CB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CB74u;
        // 0x44cb78: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44cb74) {
            ctx->pc = 0x44CB98u;
            goto label_44cb98;
        }
    }
    ctx->pc = 0x44CB7Cu;
    // 0x44cb7c: 0x8e230188  lw          $v1, 0x188($s1)
    ctx->pc = 0x44cb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 392)));
    // 0x44cb80: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x44cb80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x44cb84: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x44CB84u;
    {
        const bool branch_taken_0x44cb84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44CB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CB84u;
        // 0x44cb88: 0x43980b  movn        $s3, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44cb84) {
            ctx->pc = 0x44CBA8u;
            goto label_44cba8;
        }
    }
    ctx->pc = 0x44CB8Cu;
label_44cb8c:
    // 0x44cb8c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x44cb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x44cb90: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x44CB90u;
    {
        const bool branch_taken_0x44cb90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x44cb90) {
            ctx->pc = 0x44CB94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44CB90u;
            // 0x44cb94: 0x8e220194  lw          $v0, 0x194($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44CBA0u;
            goto label_44cba0;
        }
    }
    ctx->pc = 0x44CB98u;
label_44cb98:
    // 0x44cb98: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x44CB98u;
    {
        const bool branch_taken_0x44cb98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44CB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CB98u;
        // 0x44cb9c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44cb98) {
            ctx->pc = 0x44CBA8u;
            goto label_44cba8;
        }
    }
    ctx->pc = 0x44CBA0u;
label_44cba0:
    // 0x44cba0: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x44cba0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x44cba4: 0x62980b  movn        $s3, $v1, $v0
    ctx->pc = 0x44cba4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
label_44cba8:
    // 0x44cba8: 0x1a600019  blez        $s3, . + 4 + (0x19 << 2)
    ctx->pc = 0x44CBA8u;
    {
        const bool branch_taken_0x44cba8 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x44CBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CBA8u;
        // 0x44cbac: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44cba8) {
            ctx->pc = 0x44CC10u;
            goto label_44cc10;
        }
    }
    ctx->pc = 0x44CBB0u;
    // 0x44cbb0: 0x2635019c  addiu       $s5, $s1, 0x19C
    ctx->pc = 0x44cbb0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 412));
    // 0x44cbb4: 0x263401a8  addiu       $s4, $s1, 0x1A8
    ctx->pc = 0x44cbb4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 424));
    // 0x44cbb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x44cbb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44cbbc: 0x0  nop
    ctx->pc = 0x44cbbcu;
    // NOP
label_44cbc0:
    // 0x44cbc0: 0xc11293a  jal         func_44A4E8
    ctx->pc = 0x44CBC0u;
    SET_GPR_U32(ctx, 31, 0x44CBC8u);
    ctx->pc = 0x44CBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44CBC0u;
    // 0x44cbc4: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A4E8u, 0x44CBC0u, 0x44CBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44CBC8u;
label_44cbc8:
    // 0x44cbc8: 0x128080  sll         $s0, $s2, 2
    ctx->pc = 0x44cbc8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x44cbcc: 0x2b01821  addu        $v1, $s5, $s0
    ctx->pc = 0x44cbccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x44cbd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x44cbd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44cbd4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x44cbd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x44cbd8: 0xc11293a  jal         func_44A4E8
    ctx->pc = 0x44CBD8u;
    SET_GPR_U32(ctx, 31, 0x44CBE0u);
    ctx->pc = 0x44CBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44CBD8u;
    // 0x44cbdc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A4E8u, 0x44CBD8u, 0x44CBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44CBE0u;
label_44cbe0:
    // 0x44cbe0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x44cbe0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x44cbe4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x44cbe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44cbe8: 0xc11293a  jal         func_44A4E8
    ctx->pc = 0x44CBE8u;
    SET_GPR_U32(ctx, 31, 0x44CBF0u);
    ctx->pc = 0x44CBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44CBE8u;
    // 0x44cbec: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A4E8u, 0x44CBE8u, 0x44CBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44CBF0u;
label_44cbf0:
    // 0x44cbf0: 0x2908021  addu        $s0, $s4, $s0
    ctx->pc = 0x44cbf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x44cbf4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x44cbf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44cbf8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x44cbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x44cbfc: 0xc11293a  jal         func_44A4E8
    ctx->pc = 0x44CBFCu;
    SET_GPR_U32(ctx, 31, 0x44CC04u);
    ctx->pc = 0x44CC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44CBFCu;
    // 0x44cc00: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A4E8u, 0x44CBFCu, 0x44CC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44CC04u;
label_44cc04:
    // 0x44cc04: 0x253182a  slt         $v1, $s2, $s3
    ctx->pc = 0x44cc04u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x44cc08: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x44CC08u;
    {
        const bool branch_taken_0x44cc08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x44CC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CC08u;
        // 0x44cc0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44cc08) {
            ctx->pc = 0x44CBC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44cbc0;
        }
    }
    ctx->pc = 0x44CC10u;
label_44cc10:
    // 0x44cc10: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x44cc10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x44cc14: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x44cc14u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x44cc18: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x44cc18u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x44cc1c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x44cc1cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x44cc20: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x44cc20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x44cc24: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x44cc24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44cc28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x44cc28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44cc2c: 0x3e00008  jr          $ra
    ctx->pc = 0x44CC2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44CC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CC2Cu;
        // 0x44cc30: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44CC2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44CC34u;
    // 0x44cc34: 0x0  nop
    ctx->pc = 0x44cc34u;
    // NOP
    // 0x44cc38: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x44cc38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x44cc3c: 0x0  nop
    ctx->pc = 0x44cc3cu;
    // NOP
    // 0x44cc40: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x44cc40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x44cc44: 0x0  nop
    ctx->pc = 0x44cc44u;
    // NOP
    // 0x44cc48: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x44cc48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x44cc4c: 0x0  nop
    ctx->pc = 0x44cc4cu;
    // NOP
    // 0x44cc50: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x44cc50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x44cc54: 0x0  nop
    ctx->pc = 0x44cc54u;
    // NOP
    // 0x44cc58: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x44cc58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x44cc5c: 0x0  nop
    ctx->pc = 0x44cc5cu;
    // NOP
    // 0x44cc60: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x44cc60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x44cc64: 0x0  nop
    ctx->pc = 0x44cc64u;
    // NOP
    ctx->pc = 0x44cc68u;
}
