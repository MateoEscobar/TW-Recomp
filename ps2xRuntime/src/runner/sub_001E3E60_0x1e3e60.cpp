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

// Function: sub_001E3E60
// Address: 0x1e3e60 - 0x1e3ed0
void sub_001E3E60_0x1e3e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E3E60_0x1e3e60");
#endif

    switch (ctx->pc) {
        case 0x1e3e60u: goto label_1e3e60;
        case 0x1e3e64u: goto label_1e3e64;
        case 0x1e3e68u: goto label_1e3e68;
        case 0x1e3e6cu: goto label_1e3e6c;
        case 0x1e3e70u: goto label_1e3e70;
        case 0x1e3e74u: goto label_1e3e74;
        case 0x1e3e78u: goto label_1e3e78;
        case 0x1e3e7cu: goto label_1e3e7c;
        case 0x1e3e80u: goto label_1e3e80;
        case 0x1e3e84u: goto label_1e3e84;
        case 0x1e3e88u: goto label_1e3e88;
        case 0x1e3e8cu: goto label_1e3e8c;
        case 0x1e3e90u: goto label_1e3e90;
        case 0x1e3e94u: goto label_1e3e94;
        case 0x1e3e98u: goto label_1e3e98;
        case 0x1e3e9cu: goto label_1e3e9c;
        case 0x1e3ea0u: goto label_1e3ea0;
        case 0x1e3ea4u: goto label_1e3ea4;
        case 0x1e3ea8u: goto label_1e3ea8;
        case 0x1e3eacu: goto label_1e3eac;
        case 0x1e3eb0u: goto label_1e3eb0;
        case 0x1e3eb4u: goto label_1e3eb4;
        case 0x1e3eb8u: goto label_1e3eb8;
        case 0x1e3ebcu: goto label_1e3ebc;
        case 0x1e3ec0u: goto label_1e3ec0;
        case 0x1e3ec4u: goto label_1e3ec4;
        case 0x1e3ec8u: goto label_1e3ec8;
        case 0x1e3eccu: goto label_1e3ecc;
        default: break;
    }

    ctx->pc = 0x1e3e60u;

label_1e3e60:
    // 0x1e3e60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e3e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e3e64:
    // 0x1e3e64: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e3e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1e3e68:
    // 0x1e3e68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e3e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e3e6c:
    // 0x1e3e6c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1e3e6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e3e70:
    // 0x1e3e70: 0x8c860140  lw          $a2, 0x140($a0)
    ctx->pc = 0x1e3e70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 320)));
label_1e3e74:
    // 0x1e3e74: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1e3e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1e3e78:
    // 0x1e3e78: 0x84640108  lh          $a0, 0x108($v1)
    ctx->pc = 0x1e3e78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 264)));
label_1e3e7c:
    // 0x1e3e7c: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x1e3e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_1e3e80:
    // 0x1e3e80: 0x40f809  jalr        $v0
label_1e3e84:
    if (ctx->pc == 0x1E3E84u) {
        ctx->pc = 0x1E3E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3E80u;
        // 0x1e3e84: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3E88u;
        goto label_1e3e88;
    }
    ctx->pc = 0x1E3E80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E3E88u);
        ctx->pc = 0x1E3E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3E80u;
        // 0x1e3e84: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3E80u, 0x1E3E88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E3E88u;
label_1e3e88:
    // 0x1e3e88: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1e3e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1e3e8c:
    // 0x1e3e8c: 0x5603000c  bnel        $s0, $v1, . + 4 + (0xC << 2)
label_1e3e90:
    if (ctx->pc == 0x1E3E90u) {
        ctx->pc = 0x1E3E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3E8Cu;
        // 0x1e3e90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3E94u;
        goto label_1e3e94;
    }
    ctx->pc = 0x1E3E8Cu;
    {
        const bool branch_taken_0x1e3e8c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e3e8c) {
            ctx->pc = 0x1E3E90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E3E8Cu;
            // 0x1e3e90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E3EC0u;
            goto label_1e3ec0;
        }
    }
    ctx->pc = 0x1E3E94u;
label_1e3e94:
    // 0x1e3e94: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1e3e94u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_1e3e98:
    // 0x1e3e98: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1e3e98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1e3e9c:
    // 0x1e3e9c: 0xc04444c  jal         func_111130
label_1e3ea0:
    if (ctx->pc == 0x1E3EA0u) {
        ctx->pc = 0x1E3EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3E9Cu;
        // 0x1e3ea0: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3EA4u;
        goto label_1e3ea4;
    }
    ctx->pc = 0x1E3E9Cu;
    SET_GPR_U32(ctx, 31, 0x1E3EA4u);
    ctx->pc = 0x1E3EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3E9Cu;
    // 0x1e3ea0: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111130u, 0x1E3E9Cu, 0x1E3EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3EA4u;
label_1e3ea4:
    // 0x1e3ea4: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x1e3ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_1e3ea8:
    // 0x1e3ea8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e3ea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e3eac:
    // 0x1e3eac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e3eacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e3eb0:
    // 0x1e3eb0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e3eb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e3eb4:
    // 0x1e3eb4: 0xc043f36  jal         func_10FCD8
label_1e3eb8:
    if (ctx->pc == 0x1E3EB8u) {
        ctx->pc = 0x1E3EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3EB4u;
        // 0x1e3eb8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3EBCu;
        goto label_1e3ebc;
    }
    ctx->pc = 0x1E3EB4u;
    SET_GPR_U32(ctx, 31, 0x1E3EBCu);
    ctx->pc = 0x1E3EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3EB4u;
    // 0x1e3eb8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCD8u, 0x1E3EB4u, 0x1E3EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3EBCu;
label_1e3ebc:
    // 0x1e3ebc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e3ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e3ec0:
    // 0x1e3ec0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e3ec0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e3ec4:
    // 0x1e3ec4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e3ec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e3ec8:
    // 0x1e3ec8: 0x3e00008  jr          $ra
label_1e3ecc:
    if (ctx->pc == 0x1E3ECCu) {
        ctx->pc = 0x1E3ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3EC8u;
        // 0x1e3ecc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3ED0u;
        goto label_fallthrough_0x1e3ec8;
    }
    ctx->pc = 0x1E3EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3EC8u;
        // 0x1e3ecc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3EC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e3ec8:
    ctx->pc = 0x1E3ED0u;
}
