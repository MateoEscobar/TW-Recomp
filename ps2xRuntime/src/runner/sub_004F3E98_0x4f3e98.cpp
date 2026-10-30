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

// Function: sub_004F3E98
// Address: 0x4f3e98 - 0x4f3f18
void sub_004F3E98_0x4f3e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F3E98_0x4f3e98");
#endif

    switch (ctx->pc) {
        case 0x4f3e98u: goto label_4f3e98;
        case 0x4f3e9cu: goto label_4f3e9c;
        case 0x4f3ea0u: goto label_4f3ea0;
        case 0x4f3ea4u: goto label_4f3ea4;
        case 0x4f3ea8u: goto label_4f3ea8;
        case 0x4f3eacu: goto label_4f3eac;
        case 0x4f3eb0u: goto label_4f3eb0;
        case 0x4f3eb4u: goto label_4f3eb4;
        case 0x4f3eb8u: goto label_4f3eb8;
        case 0x4f3ebcu: goto label_4f3ebc;
        case 0x4f3ec0u: goto label_4f3ec0;
        case 0x4f3ec4u: goto label_4f3ec4;
        case 0x4f3ec8u: goto label_4f3ec8;
        case 0x4f3eccu: goto label_4f3ecc;
        case 0x4f3ed0u: goto label_4f3ed0;
        case 0x4f3ed4u: goto label_4f3ed4;
        case 0x4f3ed8u: goto label_4f3ed8;
        case 0x4f3edcu: goto label_4f3edc;
        case 0x4f3ee0u: goto label_4f3ee0;
        case 0x4f3ee4u: goto label_4f3ee4;
        case 0x4f3ee8u: goto label_4f3ee8;
        case 0x4f3eecu: goto label_4f3eec;
        case 0x4f3ef0u: goto label_4f3ef0;
        case 0x4f3ef4u: goto label_4f3ef4;
        case 0x4f3ef8u: goto label_4f3ef8;
        case 0x4f3efcu: goto label_4f3efc;
        case 0x4f3f00u: goto label_4f3f00;
        case 0x4f3f04u: goto label_4f3f04;
        case 0x4f3f08u: goto label_4f3f08;
        case 0x4f3f0cu: goto label_4f3f0c;
        case 0x4f3f10u: goto label_4f3f10;
        case 0x4f3f14u: goto label_4f3f14;
        default: break;
    }

    ctx->pc = 0x4f3e98u;

label_4f3e98:
    // 0x4f3e98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4f3e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4f3e9c:
    // 0x4f3e9c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4f3e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4f3ea0:
    // 0x4f3ea0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f3ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4f3ea4:
    // 0x4f3ea4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f3ea4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f3ea8:
    // 0x4f3ea8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4f3ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4f3eac:
    // 0x4f3eac: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x4f3eacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_4f3eb0:
    // 0x4f3eb0: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x4f3eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_4f3eb4:
    // 0x4f3eb4: 0x40f809  jalr        $v0
label_4f3eb8:
    if (ctx->pc == 0x4F3EB8u) {
        ctx->pc = 0x4F3EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3EB4u;
        // 0x4f3eb8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F3EBCu;
        goto label_4f3ebc;
    }
    ctx->pc = 0x4F3EB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4F3EBCu);
        ctx->pc = 0x4F3EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3EB4u;
        // 0x4f3eb8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F3EB4u, 0x4F3EBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F3EBCu;
label_4f3ebc:
    // 0x4f3ebc: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
label_4f3ec0:
    if (ctx->pc == 0x4F3EC0u) {
        ctx->pc = 0x4F3EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3EBCu;
        // 0x4f3ec0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F3EC4u;
        goto label_4f3ec4;
    }
    ctx->pc = 0x4F3EBCu;
    {
        const bool branch_taken_0x4f3ebc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x4F3EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3EBCu;
        // 0x4f3ec0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f3ebc) {
            ctx->pc = 0x4F3F08u;
            goto label_4f3f08;
        }
    }
    ctx->pc = 0x4F3EC4u;
label_4f3ec4:
    // 0x4f3ec4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x4f3ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4f3ec8:
    // 0x4f3ec8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x4f3ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4f3ecc:
    // 0x4f3ecc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x4f3eccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4f3ed0:
    // 0x4f3ed0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4f3ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4f3ed4:
    // 0x4f3ed4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4f3ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4f3ed8:
    // 0x4f3ed8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4f3ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4f3edc:
    // 0x4f3edc: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_4f3ee0:
    if (ctx->pc == 0x4F3EE0u) {
        ctx->pc = 0x4F3EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3EDCu;
        // 0x4f3ee0: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F3EE4u;
        goto label_4f3ee4;
    }
    ctx->pc = 0x4F3EDCu;
    {
        const bool branch_taken_0x4f3edc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F3EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3EDCu;
        // 0x4f3ee0: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f3edc) {
            ctx->pc = 0x4F3F04u;
            goto label_4f3f04;
        }
    }
    ctx->pc = 0x4F3EE4u;
label_4f3ee4:
    // 0x4f3ee4: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4f3ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_4f3ee8:
    // 0x4f3ee8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4f3ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_4f3eec:
    // 0x4f3eec: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f3eecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4f3ef0:
    // 0x4f3ef0: 0x244253a0  addiu       $v0, $v0, 0x53A0
    ctx->pc = 0x4f3ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21408));
label_4f3ef4:
    // 0x4f3ef4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4f3ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_4f3ef8:
    // 0x4f3ef8: 0xac8300f8  sw          $v1, 0xF8($a0)
    ctx->pc = 0x4f3ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 248), GPR_U32(ctx, 3));
label_4f3efc:
    // 0x4f3efc: 0xac8300e4  sw          $v1, 0xE4($a0)
    ctx->pc = 0x4f3efcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 228), GPR_U32(ctx, 3));
label_4f3f00:
    // 0x4f3f00: 0xac8300e8  sw          $v1, 0xE8($a0)
    ctx->pc = 0x4f3f00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 232), GPR_U32(ctx, 3));
label_4f3f04:
    // 0x4f3f04: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4f3f04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f3f08:
    // 0x4f3f08: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4f3f08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f3f0c:
    // 0x4f3f0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f3f0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4f3f10:
    // 0x4f3f10: 0x3e00008  jr          $ra
label_4f3f14:
    if (ctx->pc == 0x4F3F14u) {
        ctx->pc = 0x4F3F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3F10u;
        // 0x4f3f14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F3F18u;
        goto label_fallthrough_0x4f3f10;
    }
    ctx->pc = 0x4F3F10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F3F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3F10u;
        // 0x4f3f14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F3F10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4f3f10:
    ctx->pc = 0x4F3F18u;
}
