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

// Function: sub_00187C38
// Address: 0x187c38 - 0x187d28
void sub_00187C38_0x187c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187C38_0x187c38");
#endif

    switch (ctx->pc) {
        case 0x187c38u: goto label_187c38;
        case 0x187c3cu: goto label_187c3c;
        case 0x187c40u: goto label_187c40;
        case 0x187c44u: goto label_187c44;
        case 0x187c48u: goto label_187c48;
        case 0x187c4cu: goto label_187c4c;
        case 0x187c50u: goto label_187c50;
        case 0x187c54u: goto label_187c54;
        case 0x187c58u: goto label_187c58;
        case 0x187c5cu: goto label_187c5c;
        case 0x187c60u: goto label_187c60;
        case 0x187c64u: goto label_187c64;
        case 0x187c68u: goto label_187c68;
        case 0x187c6cu: goto label_187c6c;
        case 0x187c70u: goto label_187c70;
        case 0x187c74u: goto label_187c74;
        case 0x187c78u: goto label_187c78;
        case 0x187c7cu: goto label_187c7c;
        case 0x187c80u: goto label_187c80;
        case 0x187c84u: goto label_187c84;
        case 0x187c88u: goto label_187c88;
        case 0x187c8cu: goto label_187c8c;
        case 0x187c90u: goto label_187c90;
        case 0x187c94u: goto label_187c94;
        case 0x187c98u: goto label_187c98;
        case 0x187c9cu: goto label_187c9c;
        case 0x187ca0u: goto label_187ca0;
        case 0x187ca4u: goto label_187ca4;
        case 0x187ca8u: goto label_187ca8;
        case 0x187cacu: goto label_187cac;
        case 0x187cb0u: goto label_187cb0;
        case 0x187cb4u: goto label_187cb4;
        case 0x187cb8u: goto label_187cb8;
        case 0x187cbcu: goto label_187cbc;
        case 0x187cc0u: goto label_187cc0;
        case 0x187cc4u: goto label_187cc4;
        case 0x187cc8u: goto label_187cc8;
        case 0x187cccu: goto label_187ccc;
        case 0x187cd0u: goto label_187cd0;
        case 0x187cd4u: goto label_187cd4;
        case 0x187cd8u: goto label_187cd8;
        case 0x187cdcu: goto label_187cdc;
        case 0x187ce0u: goto label_187ce0;
        case 0x187ce4u: goto label_187ce4;
        case 0x187ce8u: goto label_187ce8;
        case 0x187cecu: goto label_187cec;
        case 0x187cf0u: goto label_187cf0;
        case 0x187cf4u: goto label_187cf4;
        case 0x187cf8u: goto label_187cf8;
        case 0x187cfcu: goto label_187cfc;
        case 0x187d00u: goto label_187d00;
        case 0x187d04u: goto label_187d04;
        case 0x187d08u: goto label_187d08;
        case 0x187d0cu: goto label_187d0c;
        case 0x187d10u: goto label_187d10;
        case 0x187d14u: goto label_187d14;
        case 0x187d18u: goto label_187d18;
        case 0x187d1cu: goto label_187d1c;
        case 0x187d20u: goto label_187d20;
        case 0x187d24u: goto label_187d24;
        default: break;
    }

    ctx->pc = 0x187c38u;

label_187c38:
    // 0x187c38: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x187c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_187c3c:
    // 0x187c3c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x187c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_187c40:
    // 0x187c40: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x187c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_187c44:
    // 0x187c44: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x187c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_187c48:
    // 0x187c48: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x187c48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_187c4c:
    // 0x187c4c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x187c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_187c50:
    // 0x187c50: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x187c50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_187c54:
    // 0x187c54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x187c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_187c58:
    // 0x187c58: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x187c58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_187c5c:
    // 0x187c5c: 0x8c47b8b8  lw          $a3, -0x4748($v0)
    ctx->pc = 0x187c5cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_187c60:
    // 0x187c60: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x187c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_187c64:
    // 0x187c64: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x187c64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_187c68:
    // 0x187c68: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x187c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_187c6c:
    // 0x187c6c: 0x40f809  jalr        $v0
label_187c70:
    if (ctx->pc == 0x187C70u) {
        ctx->pc = 0x187C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187C6Cu;
        // 0x187c70: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187C74u;
        goto label_187c74;
    }
    ctx->pc = 0x187C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x187C74u);
        ctx->pc = 0x187C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187C6Cu;
        // 0x187c70: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187C6Cu, 0x187C74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x187C74u;
label_187c74:
    // 0x187c74: 0x52000004  beql        $s0, $zero, . + 4 + (0x4 << 2)
label_187c78:
    if (ctx->pc == 0x187C78u) {
        ctx->pc = 0x187C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187C74u;
        // 0x187c78: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187C7Cu;
        goto label_187c7c;
    }
    ctx->pc = 0x187C74u;
    {
        const bool branch_taken_0x187c74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x187c74) {
            ctx->pc = 0x187C78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x187C74u;
            // 0x187c78: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x187C88u;
            goto label_187c88;
        }
    }
    ctx->pc = 0x187C7Cu;
label_187c7c:
    // 0x187c7c: 0xc062274  jal         func_1889D0
label_187c80:
    if (ctx->pc == 0x187C80u) {
        ctx->pc = 0x187C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187C7Cu;
        // 0x187c80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187C84u;
        goto label_187c84;
    }
    ctx->pc = 0x187C7Cu;
    SET_GPR_U32(ctx, 31, 0x187C84u);
    ctx->pc = 0x187C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187C7Cu;
    // 0x187c80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1889D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1889D0u, 0x187C7Cu, 0x187C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187C84u;
label_187c84:
    // 0x187c84: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x187c84u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_187c88:
    // 0x187c88: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x187c88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_187c8c:
    // 0x187c8c: 0x8e22b788  lw          $v0, -0x4878($s1)
    ctx->pc = 0x187c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294948744)));
label_187c90:
    // 0x187c90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x187c90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_187c94:
    // 0x187c94: 0x8c470090  lw          $a3, 0x90($v0)
    ctx->pc = 0x187c94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
label_187c98:
    // 0x187c98: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x187c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_187c9c:
    // 0x187c9c: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x187c9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_187ca0:
    // 0x187ca0: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x187ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_187ca4:
    // 0x187ca4: 0x40f809  jalr        $v0
label_187ca8:
    if (ctx->pc == 0x187CA8u) {
        ctx->pc = 0x187CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187CA4u;
        // 0x187ca8: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187CACu;
        goto label_187cac;
    }
    ctx->pc = 0x187CA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x187CACu);
        ctx->pc = 0x187CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187CA4u;
        // 0x187ca8: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187CA4u, 0x187CACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x187CACu;
label_187cac:
    // 0x187cac: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x187cacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_187cb0:
    // 0x187cb0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x187cb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_187cb4:
    // 0x187cb4: 0x8c625340  lw          $v0, 0x5340($v1)
    ctx->pc = 0x187cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 21312)));
label_187cb8:
    // 0x187cb8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x187cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_187cbc:
    // 0x187cbc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x187cbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_187cc0:
    // 0x187cc0: 0x8c470040  lw          $a3, 0x40($v0)
    ctx->pc = 0x187cc0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_187cc4:
    // 0x187cc4: 0xc055130  jal         func_1544C0
label_187cc8:
    if (ctx->pc == 0x187CC8u) {
        ctx->pc = 0x187CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187CC4u;
        // 0x187cc8: 0x8c46003c  lw          $a2, 0x3C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187CCCu;
        goto label_187ccc;
    }
    ctx->pc = 0x187CC4u;
    SET_GPR_U32(ctx, 31, 0x187CCCu);
    ctx->pc = 0x187CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187CC4u;
    // 0x187cc8: 0x8c46003c  lw          $a2, 0x3C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1544C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1544C0u, 0x187CC4u, 0x187CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187CCCu;
label_187ccc:
    // 0x187ccc: 0xc0510e6  jal         func_144398
label_187cd0:
    if (ctx->pc == 0x187CD0u) {
        ctx->pc = 0x187CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187CCCu;
        // 0x187cd0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187CD4u;
        goto label_187cd4;
    }
    ctx->pc = 0x187CCCu;
    SET_GPR_U32(ctx, 31, 0x187CD4u);
    ctx->pc = 0x187CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187CCCu;
    // 0x187cd0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144398u, 0x187CCCu, 0x187CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187CD4u;
label_187cd4:
    // 0x187cd4: 0xc0551c6  jal         func_154718
label_187cd8:
    if (ctx->pc == 0x187CD8u) {
        ctx->pc = 0x187CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187CD4u;
        // 0x187cd8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187CDCu;
        goto label_187cdc;
    }
    ctx->pc = 0x187CD4u;
    SET_GPR_U32(ctx, 31, 0x187CDCu);
    ctx->pc = 0x187CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187CD4u;
    // 0x187cd8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154718u, 0x187CD4u, 0x187CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187CDCu;
label_187cdc:
    // 0x187cdc: 0x8e23b788  lw          $v1, -0x4878($s1)
    ctx->pc = 0x187cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294948744)));
label_187ce0:
    // 0x187ce0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x187ce0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_187ce4:
    // 0x187ce4: 0x8c660090  lw          $a2, 0x90($v1)
    ctx->pc = 0x187ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
label_187ce8:
    // 0x187ce8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x187ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_187cec:
    // 0x187cec: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x187cecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_187cf0:
    // 0x187cf0: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x187cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_187cf4:
    // 0x187cf4: 0x60f809  jalr        $v1
label_187cf8:
    if (ctx->pc == 0x187CF8u) {
        ctx->pc = 0x187CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187CF4u;
        // 0x187cf8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187CFCu;
        goto label_187cfc;
    }
    ctx->pc = 0x187CF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x187CFCu);
        ctx->pc = 0x187CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187CF4u;
        // 0x187cf8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187CF4u, 0x187CFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x187CFCu;
label_187cfc:
    // 0x187cfc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x187cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_187d00:
    // 0x187d00: 0xc055168  jal         func_1545A0
label_187d04:
    if (ctx->pc == 0x187D04u) {
        ctx->pc = 0x187D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187D00u;
        // 0x187d04: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187D08u;
        goto label_187d08;
    }
    ctx->pc = 0x187D00u;
    SET_GPR_U32(ctx, 31, 0x187D08u);
    ctx->pc = 0x187D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187D00u;
    // 0x187d04: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1545A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1545A0u, 0x187D00u, 0x187D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187D08u;
label_187d08:
    // 0x187d08: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x187d08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_187d0c:
    // 0x187d0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x187d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_187d10:
    // 0x187d10: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x187d10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_187d14:
    // 0x187d14: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x187d14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_187d18:
    // 0x187d18: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x187d18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_187d1c:
    // 0x187d1c: 0x3e00008  jr          $ra
label_187d20:
    if (ctx->pc == 0x187D20u) {
        ctx->pc = 0x187D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187D1Cu;
        // 0x187d20: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187D24u;
        goto label_187d24;
    }
    ctx->pc = 0x187D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187D1Cu;
        // 0x187d20: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187D1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187D24u;
label_187d24:
    // 0x187d24: 0x0  nop
    ctx->pc = 0x187d24u;
    // NOP
    ctx->pc = 0x187d28u;
}
