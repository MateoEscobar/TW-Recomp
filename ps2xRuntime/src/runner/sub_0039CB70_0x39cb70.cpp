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

// Function: sub_0039CB70
// Address: 0x39cb70 - 0x39cbf0
void sub_0039CB70_0x39cb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039CB70_0x39cb70");
#endif

    switch (ctx->pc) {
        case 0x39cb70u: goto label_39cb70;
        case 0x39cb74u: goto label_39cb74;
        case 0x39cb78u: goto label_39cb78;
        case 0x39cb7cu: goto label_39cb7c;
        case 0x39cb80u: goto label_39cb80;
        case 0x39cb84u: goto label_39cb84;
        case 0x39cb88u: goto label_39cb88;
        case 0x39cb8cu: goto label_39cb8c;
        case 0x39cb90u: goto label_39cb90;
        case 0x39cb94u: goto label_39cb94;
        case 0x39cb98u: goto label_39cb98;
        case 0x39cb9cu: goto label_39cb9c;
        case 0x39cba0u: goto label_39cba0;
        case 0x39cba4u: goto label_39cba4;
        case 0x39cba8u: goto label_39cba8;
        case 0x39cbacu: goto label_39cbac;
        case 0x39cbb0u: goto label_39cbb0;
        case 0x39cbb4u: goto label_39cbb4;
        case 0x39cbb8u: goto label_39cbb8;
        case 0x39cbbcu: goto label_39cbbc;
        case 0x39cbc0u: goto label_39cbc0;
        case 0x39cbc4u: goto label_39cbc4;
        case 0x39cbc8u: goto label_39cbc8;
        case 0x39cbccu: goto label_39cbcc;
        case 0x39cbd0u: goto label_39cbd0;
        case 0x39cbd4u: goto label_39cbd4;
        case 0x39cbd8u: goto label_39cbd8;
        case 0x39cbdcu: goto label_39cbdc;
        case 0x39cbe0u: goto label_39cbe0;
        case 0x39cbe4u: goto label_39cbe4;
        case 0x39cbe8u: goto label_39cbe8;
        case 0x39cbecu: goto label_39cbec;
        default: break;
    }

    ctx->pc = 0x39cb70u;

label_39cb70:
    // 0x39cb70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x39cb70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_39cb74:
    // 0x39cb74: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x39cb74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_39cb78:
    // 0x39cb78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39cb78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39cb7c:
    // 0x39cb7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x39cb7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_39cb80:
    // 0x39cb80: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x39cb80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_39cb84:
    // 0x39cb84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39cb84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_39cb88:
    // 0x39cb88: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x39cb88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39cb8c:
    // 0x39cb8c: 0xc051252  jal         func_144948
label_39cb90:
    if (ctx->pc == 0x39CB90u) {
        ctx->pc = 0x39CB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CB8Cu;
        // 0x39cb90: 0x2484d800  addiu       $a0, $a0, -0x2800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957056));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39CB94u;
        goto label_39cb94;
    }
    ctx->pc = 0x39CB8Cu;
    SET_GPR_U32(ctx, 31, 0x39CB94u);
    ctx->pc = 0x39CB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CB8Cu;
    // 0x39cb90: 0x2484d800  addiu       $a0, $a0, -0x2800 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144948u, 0x39CB8Cu, 0x39CB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CB94u;
label_39cb94:
    // 0x39cb94: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x39cb94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_39cb98:
    // 0x39cb98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x39cb98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39cb9c:
    // 0x39cb9c: 0xc051244  jal         func_144910
label_39cba0:
    if (ctx->pc == 0x39CBA0u) {
        ctx->pc = 0x39CBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CB9Cu;
        // 0x39cba0: 0x24a51540  addiu       $a1, $a1, 0x1540 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5440));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39CBA4u;
        goto label_39cba4;
    }
    ctx->pc = 0x39CB9Cu;
    SET_GPR_U32(ctx, 31, 0x39CBA4u);
    ctx->pc = 0x39CBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CB9Cu;
    // 0x39cba0: 0x24a51540  addiu       $a1, $a1, 0x1540 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144910u, 0x39CB9Cu, 0x39CBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CBA4u;
label_39cba4:
    // 0x39cba4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x39cba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39cba8:
    // 0x39cba8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x39cba8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39cbac:
    // 0x39cbac: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x39cbacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_39cbb0:
    // 0x39cbb0: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x39cbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_39cbb4:
    // 0x39cbb4: 0x40f809  jalr        $v0
label_39cbb8:
    if (ctx->pc == 0x39CBB8u) {
        ctx->pc = 0x39CBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CBB4u;
        // 0x39cbb8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39CBBCu;
        goto label_39cbbc;
    }
    ctx->pc = 0x39CBB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39CBBCu);
        ctx->pc = 0x39CBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CBB4u;
        // 0x39cbb8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39CBB4u, 0x39CBBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39CBBCu;
label_39cbbc:
    // 0x39cbbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39cbbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39cbc0:
    // 0x39cbc0: 0xc051244  jal         func_144910
label_39cbc4:
    if (ctx->pc == 0x39CBC4u) {
        ctx->pc = 0x39CBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CBC0u;
        // 0x39cbc4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39CBC8u;
        goto label_39cbc8;
    }
    ctx->pc = 0x39CBC0u;
    SET_GPR_U32(ctx, 31, 0x39CBC8u);
    ctx->pc = 0x39CBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CBC0u;
    // 0x39cbc4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144910u, 0x39CBC0u, 0x39CBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CBC8u;
label_39cbc8:
    // 0x39cbc8: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x39cbc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_39cbcc:
    // 0x39cbcc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x39cbccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39cbd0:
    // 0x39cbd0: 0xc051244  jal         func_144910
label_39cbd4:
    if (ctx->pc == 0x39CBD4u) {
        ctx->pc = 0x39CBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CBD0u;
        // 0x39cbd4: 0x24a51558  addiu       $a1, $a1, 0x1558 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5464));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39CBD8u;
        goto label_39cbd8;
    }
    ctx->pc = 0x39CBD0u;
    SET_GPR_U32(ctx, 31, 0x39CBD8u);
    ctx->pc = 0x39CBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CBD0u;
    // 0x39cbd4: 0x24a51558  addiu       $a1, $a1, 0x1558 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144910u, 0x39CBD0u, 0x39CBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CBD8u;
label_39cbd8:
    // 0x39cbd8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x39cbd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_39cbdc:
    // 0x39cbdc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x39cbdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_39cbe0:
    // 0x39cbe0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39cbe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39cbe4:
    // 0x39cbe4: 0x3e00008  jr          $ra
label_39cbe8:
    if (ctx->pc == 0x39CBE8u) {
        ctx->pc = 0x39CBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CBE4u;
        // 0x39cbe8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39CBECu;
        goto label_39cbec;
    }
    ctx->pc = 0x39CBE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39CBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CBE4u;
        // 0x39cbe8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39CBE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39CBECu;
label_39cbec:
    // 0x39cbec: 0x0  nop
    ctx->pc = 0x39cbecu;
    // NOP
    ctx->pc = 0x39cbf0u;
}
