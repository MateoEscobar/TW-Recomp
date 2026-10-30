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

// Function: sub_00310C68
// Address: 0x310c68 - 0x310d48
void sub_00310C68_0x310c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00310C68_0x310c68");
#endif

    switch (ctx->pc) {
        case 0x310c68u: goto label_310c68;
        case 0x310c6cu: goto label_310c6c;
        case 0x310c70u: goto label_310c70;
        case 0x310c74u: goto label_310c74;
        case 0x310c78u: goto label_310c78;
        case 0x310c7cu: goto label_310c7c;
        case 0x310c80u: goto label_310c80;
        case 0x310c84u: goto label_310c84;
        case 0x310c88u: goto label_310c88;
        case 0x310c8cu: goto label_310c8c;
        case 0x310c90u: goto label_310c90;
        case 0x310c94u: goto label_310c94;
        case 0x310c98u: goto label_310c98;
        case 0x310c9cu: goto label_310c9c;
        case 0x310ca0u: goto label_310ca0;
        case 0x310ca4u: goto label_310ca4;
        case 0x310ca8u: goto label_310ca8;
        case 0x310cacu: goto label_310cac;
        case 0x310cb0u: goto label_310cb0;
        case 0x310cb4u: goto label_310cb4;
        case 0x310cb8u: goto label_310cb8;
        case 0x310cbcu: goto label_310cbc;
        case 0x310cc0u: goto label_310cc0;
        case 0x310cc4u: goto label_310cc4;
        case 0x310cc8u: goto label_310cc8;
        case 0x310cccu: goto label_310ccc;
        case 0x310cd0u: goto label_310cd0;
        case 0x310cd4u: goto label_310cd4;
        case 0x310cd8u: goto label_310cd8;
        case 0x310cdcu: goto label_310cdc;
        case 0x310ce0u: goto label_310ce0;
        case 0x310ce4u: goto label_310ce4;
        case 0x310ce8u: goto label_310ce8;
        case 0x310cecu: goto label_310cec;
        case 0x310cf0u: goto label_310cf0;
        case 0x310cf4u: goto label_310cf4;
        case 0x310cf8u: goto label_310cf8;
        case 0x310cfcu: goto label_310cfc;
        case 0x310d00u: goto label_310d00;
        case 0x310d04u: goto label_310d04;
        case 0x310d08u: goto label_310d08;
        case 0x310d0cu: goto label_310d0c;
        case 0x310d10u: goto label_310d10;
        case 0x310d14u: goto label_310d14;
        case 0x310d18u: goto label_310d18;
        case 0x310d1cu: goto label_310d1c;
        case 0x310d20u: goto label_310d20;
        case 0x310d24u: goto label_310d24;
        case 0x310d28u: goto label_310d28;
        case 0x310d2cu: goto label_310d2c;
        case 0x310d30u: goto label_310d30;
        case 0x310d34u: goto label_310d34;
        case 0x310d38u: goto label_310d38;
        case 0x310d3cu: goto label_310d3c;
        case 0x310d40u: goto label_310d40;
        case 0x310d44u: goto label_310d44;
        default: break;
    }

    ctx->pc = 0x310c68u;

label_310c68:
    // 0x310c68: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x310c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_310c6c:
    // 0x310c6c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x310c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_310c70:
    // 0x310c70: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x310c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_310c74:
    // 0x310c74: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x310c74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_310c78:
    // 0x310c78: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x310c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_310c7c:
    // 0x310c7c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x310c7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_310c80:
    // 0x310c80: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x310c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_310c84:
    // 0x310c84: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x310c84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_310c88:
    // 0x310c88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x310c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_310c8c:
    // 0x310c8c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x310c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_310c90:
    // 0x310c90: 0x24540048  addiu       $s4, $v0, 0x48
    ctx->pc = 0x310c90u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_310c94:
    // 0x310c94: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x310c94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_310c98:
    // 0x310c98: 0xc137826  jal         func_4DE098
label_310c9c:
    if (ctx->pc == 0x310C9Cu) {
        ctx->pc = 0x310C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310C98u;
        // 0x310c9c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310CA0u;
        goto label_310ca0;
    }
    ctx->pc = 0x310C98u;
    SET_GPR_U32(ctx, 31, 0x310CA0u);
    ctx->pc = 0x310C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310C98u;
    // 0x310c9c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x310C98u, 0x310CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310CA0u;
label_310ca0:
    // 0x310ca0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x310ca0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_310ca4:
    // 0x310ca4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x310ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_310ca8:
    // 0x310ca8: 0xc0e409a  jal         func_390268
label_310cac:
    if (ctx->pc == 0x310CACu) {
        ctx->pc = 0x310CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310CA8u;
        // 0x310cac: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310CB0u;
        goto label_310cb0;
    }
    ctx->pc = 0x310CA8u;
    SET_GPR_U32(ctx, 31, 0x310CB0u);
    ctx->pc = 0x310CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310CA8u;
    // 0x310cac: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x310CA8u, 0x310CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310CB0u;
label_310cb0:
    // 0x310cb0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x310cb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_310cb4:
    // 0x310cb4: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
label_310cb8:
    if (ctx->pc == 0x310CB8u) {
        ctx->pc = 0x310CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310CB4u;
        // 0x310cb8: 0x2e420010  sltiu       $v0, $s2, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x310CBCu;
        goto label_310cbc;
    }
    ctx->pc = 0x310CB4u;
    {
        const bool branch_taken_0x310cb4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x310CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310CB4u;
        // 0x310cb8: 0x2e420010  sltiu       $v0, $s2, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310cb4) {
            ctx->pc = 0x310D20u;
            goto label_310d20;
        }
    }
    ctx->pc = 0x310CBCu;
label_310cbc:
    // 0x310cbc: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x310cbcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
label_310cc0:
    // 0x310cc0: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x310cc0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_310cc4:
    // 0x310cc4: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_310cc8:
    if (ctx->pc == 0x310CC8u) {
        ctx->pc = 0x310CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310CC4u;
        // 0x310cc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310CCCu;
        goto label_310ccc;
    }
    ctx->pc = 0x310CC4u;
    {
        const bool branch_taken_0x310cc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x310CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310CC4u;
        // 0x310cc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310cc4) {
            ctx->pc = 0x310D1Cu;
            goto label_310d1c;
        }
    }
    ctx->pc = 0x310CCCu;
label_310ccc:
    // 0x310ccc: 0xc089f98  jal         func_227E60
label_310cd0:
    if (ctx->pc == 0x310CD0u) {
        ctx->pc = 0x310CD4u;
        goto label_310cd4;
    }
    ctx->pc = 0x310CCCu;
    SET_GPR_U32(ctx, 31, 0x310CD4u);
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x310CCCu, 0x310CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310CD4u;
label_310cd4:
    // 0x310cd4: 0x10500012  beq         $v0, $s0, . + 4 + (0x12 << 2)
label_310cd8:
    if (ctx->pc == 0x310CD8u) {
        ctx->pc = 0x310CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310CD4u;
        // 0x310cd8: 0x2e420010  sltiu       $v0, $s2, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x310CDCu;
        goto label_310cdc;
    }
    ctx->pc = 0x310CD4u;
    {
        const bool branch_taken_0x310cd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x310CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310CD4u;
        // 0x310cd8: 0x2e420010  sltiu       $v0, $s2, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310cd4) {
            ctx->pc = 0x310D20u;
            goto label_310d20;
        }
    }
    ctx->pc = 0x310CDCu;
label_310cdc:
    // 0x310cdc: 0xc087502  jal         func_21D408
label_310ce0:
    if (ctx->pc == 0x310CE0u) {
        ctx->pc = 0x310CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310CDCu;
        // 0x310ce0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310CE4u;
        goto label_310ce4;
    }
    ctx->pc = 0x310CDCu;
    SET_GPR_U32(ctx, 31, 0x310CE4u);
    ctx->pc = 0x310CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310CDCu;
    // 0x310ce0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x310CDCu, 0x310CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310CE4u;
label_310ce4:
    // 0x310ce4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x310ce4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_310ce8:
    // 0x310ce8: 0xc0a3630  jal         func_28D8C0
label_310cec:
    if (ctx->pc == 0x310CECu) {
        ctx->pc = 0x310CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310CE8u;
        // 0x310cec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310CF0u;
        goto label_310cf0;
    }
    ctx->pc = 0x310CE8u;
    SET_GPR_U32(ctx, 31, 0x310CF0u);
    ctx->pc = 0x310CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310CE8u;
    // 0x310cec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8C0u, 0x310CE8u, 0x310CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310CF0u;
label_310cf0:
    // 0x310cf0: 0xc0a3628  jal         func_28D8A0
label_310cf4:
    if (ctx->pc == 0x310CF4u) {
        ctx->pc = 0x310CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310CF0u;
        // 0x310cf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310CF8u;
        goto label_310cf8;
    }
    ctx->pc = 0x310CF0u;
    SET_GPR_U32(ctx, 31, 0x310CF8u);
    ctx->pc = 0x310CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310CF0u;
    // 0x310cf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8A0u, 0x310CF0u, 0x310CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310CF8u;
label_310cf8:
    // 0x310cf8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x310cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_310cfc:
    // 0x310cfc: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x310cfcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_310d00:
    // 0x310d00: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x310d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_310d04:
    // 0x310d04: 0x40f809  jalr        $v0
label_310d08:
    if (ctx->pc == 0x310D08u) {
        ctx->pc = 0x310D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310D04u;
        // 0x310d08: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310D0Cu;
        goto label_310d0c;
    }
    ctx->pc = 0x310D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x310D0Cu);
        ctx->pc = 0x310D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310D04u;
        // 0x310d08: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x310D04u, 0x310D0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x310D0Cu;
label_310d0c:
    // 0x310d0c: 0x8e650020  lw          $a1, 0x20($s3)
    ctx->pc = 0x310d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_310d10:
    // 0x310d10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x310d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_310d14:
    // 0x310d14: 0xc0ae54e  jal         func_2B9538
label_310d18:
    if (ctx->pc == 0x310D18u) {
        ctx->pc = 0x310D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310D14u;
        // 0x310d18: 0xc66c0024  lwc1        $f12, 0x24($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x310D1Cu;
        goto label_310d1c;
    }
    ctx->pc = 0x310D14u;
    SET_GPR_U32(ctx, 31, 0x310D1Cu);
    ctx->pc = 0x310D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310D14u;
    // 0x310d18: 0xc66c0024  lwc1        $f12, 0x24($s3) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9538u, 0x310D14u, 0x310D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310D1Cu;
label_310d1c:
    // 0x310d1c: 0x2e420010  sltiu       $v0, $s2, 0x10
    ctx->pc = 0x310d1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_310d20:
    // 0x310d20: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
label_310d24:
    if (ctx->pc == 0x310D24u) {
        ctx->pc = 0x310D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310D20u;
        // 0x310d24: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310D28u;
        goto label_310d28;
    }
    ctx->pc = 0x310D20u;
    {
        const bool branch_taken_0x310d20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x310D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310D20u;
        // 0x310d24: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310d20) {
            ctx->pc = 0x310C98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_310c98;
        }
    }
    ctx->pc = 0x310D28u;
label_310d28:
    // 0x310d28: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x310d28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_310d2c:
    // 0x310d2c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x310d2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_310d30:
    // 0x310d30: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x310d30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_310d34:
    // 0x310d34: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x310d34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_310d38:
    // 0x310d38: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x310d38u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_310d3c:
    // 0x310d3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x310d3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_310d40:
    // 0x310d40: 0x3e00008  jr          $ra
label_310d44:
    if (ctx->pc == 0x310D44u) {
        ctx->pc = 0x310D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310D40u;
        // 0x310d44: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310D48u;
        goto label_fallthrough_0x310d40;
    }
    ctx->pc = 0x310D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x310D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310D40u;
        // 0x310d44: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x310D40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x310d40:
    ctx->pc = 0x310D48u;
}
