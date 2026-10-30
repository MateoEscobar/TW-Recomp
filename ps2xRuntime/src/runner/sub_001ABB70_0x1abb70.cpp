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

// Function: sub_001ABB70
// Address: 0x1abb70 - 0x1abbf8
void sub_001ABB70_0x1abb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ABB70_0x1abb70");
#endif

    switch (ctx->pc) {
        case 0x1abb70u: goto label_1abb70;
        case 0x1abb74u: goto label_1abb74;
        case 0x1abb78u: goto label_1abb78;
        case 0x1abb7cu: goto label_1abb7c;
        case 0x1abb80u: goto label_1abb80;
        case 0x1abb84u: goto label_1abb84;
        case 0x1abb88u: goto label_1abb88;
        case 0x1abb8cu: goto label_1abb8c;
        case 0x1abb90u: goto label_1abb90;
        case 0x1abb94u: goto label_1abb94;
        case 0x1abb98u: goto label_1abb98;
        case 0x1abb9cu: goto label_1abb9c;
        case 0x1abba0u: goto label_1abba0;
        case 0x1abba4u: goto label_1abba4;
        case 0x1abba8u: goto label_1abba8;
        case 0x1abbacu: goto label_1abbac;
        case 0x1abbb0u: goto label_1abbb0;
        case 0x1abbb4u: goto label_1abbb4;
        case 0x1abbb8u: goto label_1abbb8;
        case 0x1abbbcu: goto label_1abbbc;
        case 0x1abbc0u: goto label_1abbc0;
        case 0x1abbc4u: goto label_1abbc4;
        case 0x1abbc8u: goto label_1abbc8;
        case 0x1abbccu: goto label_1abbcc;
        case 0x1abbd0u: goto label_1abbd0;
        case 0x1abbd4u: goto label_1abbd4;
        case 0x1abbd8u: goto label_1abbd8;
        case 0x1abbdcu: goto label_1abbdc;
        case 0x1abbe0u: goto label_1abbe0;
        case 0x1abbe4u: goto label_1abbe4;
        case 0x1abbe8u: goto label_1abbe8;
        case 0x1abbecu: goto label_1abbec;
        case 0x1abbf0u: goto label_1abbf0;
        case 0x1abbf4u: goto label_1abbf4;
        default: break;
    }

    ctx->pc = 0x1abb70u;

label_1abb70:
    // 0x1abb70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1abb70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1abb74:
    // 0x1abb74: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1abb74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_1abb78:
    // 0x1abb78: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1abb78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1abb7c:
    // 0x1abb7c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1abb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_1abb80:
    // 0x1abb80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1abb80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1abb84:
    // 0x1abb84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1abb84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1abb88:
    // 0x1abb88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1abb88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1abb8c:
    // 0x1abb8c: 0x24429b40  addiu       $v0, $v0, -0x64C0
    ctx->pc = 0x1abb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941504));
label_1abb90:
    // 0x1abb90: 0x24639b68  addiu       $v1, $v1, -0x6498
    ctx->pc = 0x1abb90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941544));
label_1abb94:
    // 0x1abb94: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1abb94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1abb98:
    // 0x1abb98: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x1abb98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_1abb9c:
    // 0x1abb9c: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x1abb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
label_1abba0:
    // 0x1abba0: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_1abba4:
    if (ctx->pc == 0x1ABBA4u) {
        ctx->pc = 0x1ABBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABBA0u;
        // 0x1abba4: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABBA8u;
        goto label_1abba8;
    }
    ctx->pc = 0x1ABBA0u;
    {
        const bool branch_taken_0x1abba0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABBA0u;
        // 0x1abba4: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abba0) {
            ctx->pc = 0x1ABBD4u;
            goto label_1abbd4;
        }
    }
    ctx->pc = 0x1ABBA8u;
label_1abba8:
    // 0x1abba8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1abba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1abbac:
    // 0x1abbac: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1abbacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1abbb0:
    // 0x1abbb0: 0x8c48b9c0  lw          $t0, -0x4640($v0)
    ctx->pc = 0x1abbb0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_1abbb4:
    // 0x1abbb4: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x1abbb4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_1abbb8:
    // 0x1abbb8: 0x24c644a0  addiu       $a2, $a2, 0x44A0
    ctx->pc = 0x1abbb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17568));
label_1abbbc:
    // 0x1abbbc: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x1abbbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_1abbc0:
    // 0x1abbc0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1abbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1abbc4:
    // 0x1abbc4: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x1abbc4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_1abbc8:
    // 0x1abbc8: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x1abbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_1abbcc:
    // 0x1abbcc: 0x60f809  jalr        $v1
label_1abbd0:
    if (ctx->pc == 0x1ABBD0u) {
        ctx->pc = 0x1ABBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABBCCu;
        // 0x1abbd0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABBD4u;
        goto label_1abbd4;
    }
    ctx->pc = 0x1ABBCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1ABBD4u);
        ctx->pc = 0x1ABBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABBCCu;
        // 0x1abbd0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ABBCCu, 0x1ABBD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ABBD4u;
label_1abbd4:
    // 0x1abbd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1abbd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1abbd8:
    // 0x1abbd8: 0xc06a39e  jal         func_1A8E78
label_1abbdc:
    if (ctx->pc == 0x1ABBDCu) {
        ctx->pc = 0x1ABBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABBD8u;
        // 0x1abbdc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABBE0u;
        goto label_1abbe0;
    }
    ctx->pc = 0x1ABBD8u;
    SET_GPR_U32(ctx, 31, 0x1ABBE0u);
    ctx->pc = 0x1ABBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABBD8u;
    // 0x1abbdc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x1ABBD8u, 0x1ABBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABBE0u;
label_1abbe0:
    // 0x1abbe0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1abbe0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1abbe4:
    // 0x1abbe4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1abbe4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1abbe8:
    // 0x1abbe8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1abbe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1abbec:
    // 0x1abbec: 0x3e00008  jr          $ra
label_1abbf0:
    if (ctx->pc == 0x1ABBF0u) {
        ctx->pc = 0x1ABBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABBECu;
        // 0x1abbf0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABBF4u;
        goto label_1abbf4;
    }
    ctx->pc = 0x1ABBECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ABBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABBECu;
        // 0x1abbf0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ABBECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ABBF4u;
label_1abbf4:
    // 0x1abbf4: 0x0  nop
    ctx->pc = 0x1abbf4u;
    // NOP
    ctx->pc = 0x1abbf8u;
}
