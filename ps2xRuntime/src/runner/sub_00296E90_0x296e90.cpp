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

// Function: sub_00296E90
// Address: 0x296e90 - 0x296f08
void sub_00296E90_0x296e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00296E90_0x296e90");
#endif

    switch (ctx->pc) {
        case 0x296e90u: goto label_296e90;
        case 0x296e94u: goto label_296e94;
        case 0x296e98u: goto label_296e98;
        case 0x296e9cu: goto label_296e9c;
        case 0x296ea0u: goto label_296ea0;
        case 0x296ea4u: goto label_296ea4;
        case 0x296ea8u: goto label_296ea8;
        case 0x296eacu: goto label_296eac;
        case 0x296eb0u: goto label_296eb0;
        case 0x296eb4u: goto label_296eb4;
        case 0x296eb8u: goto label_296eb8;
        case 0x296ebcu: goto label_296ebc;
        case 0x296ec0u: goto label_296ec0;
        case 0x296ec4u: goto label_296ec4;
        case 0x296ec8u: goto label_296ec8;
        case 0x296eccu: goto label_296ecc;
        case 0x296ed0u: goto label_296ed0;
        case 0x296ed4u: goto label_296ed4;
        case 0x296ed8u: goto label_296ed8;
        case 0x296edcu: goto label_296edc;
        case 0x296ee0u: goto label_296ee0;
        case 0x296ee4u: goto label_296ee4;
        case 0x296ee8u: goto label_296ee8;
        case 0x296eecu: goto label_296eec;
        case 0x296ef0u: goto label_296ef0;
        case 0x296ef4u: goto label_296ef4;
        case 0x296ef8u: goto label_296ef8;
        case 0x296efcu: goto label_296efc;
        case 0x296f00u: goto label_296f00;
        case 0x296f04u: goto label_296f04;
        default: break;
    }

    ctx->pc = 0x296e90u;

label_296e90:
    // 0x296e90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x296e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_296e94:
    // 0x296e94: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x296e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_296e98:
    // 0x296e98: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x296e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_296e9c:
    // 0x296e9c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x296e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_296ea0:
    // 0x296ea0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x296ea0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_296ea4:
    // 0x296ea4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x296ea4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_296ea8:
    // 0x296ea8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x296ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_296eac:
    // 0x296eac: 0x40f809  jalr        $v0
label_296eb0:
    if (ctx->pc == 0x296EB0u) {
        ctx->pc = 0x296EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296EACu;
        // 0x296eb0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296EB4u;
        goto label_296eb4;
    }
    ctx->pc = 0x296EACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x296EB4u);
        ctx->pc = 0x296EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296EACu;
        // 0x296eb0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296EACu, 0x296EB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x296EB4u;
label_296eb4:
    // 0x296eb4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x296eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_296eb8:
    // 0x296eb8: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x296eb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_296ebc:
    // 0x296ebc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x296ebcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_296ec0:
    // 0x296ec0: 0x97a20002  lhu         $v0, 0x2($sp)
    ctx->pc = 0x296ec0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
label_296ec4:
    // 0x296ec4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x296ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_296ec8:
    // 0x296ec8: 0x22403  sra         $a0, $v0, 16
    ctx->pc = 0x296ec8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 16));
label_296ecc:
    // 0x296ecc: 0x0  nop
    ctx->pc = 0x296eccu;
    // NOP
label_296ed0:
    // 0x296ed0: 0x8602fffe  lh          $v0, -0x2($s0)
    ctx->pc = 0x296ed0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4294967294)));
label_296ed4:
    // 0x296ed4: 0x54440003  bnel        $v0, $a0, . + 4 + (0x3 << 2)
label_296ed8:
    if (ctx->pc == 0x296ED8u) {
        ctx->pc = 0x296ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296ED4u;
        // 0x296ed8: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296EDCu;
        goto label_296edc;
    }
    ctx->pc = 0x296ED4u;
    {
        const bool branch_taken_0x296ed4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x296ed4) {
            ctx->pc = 0x296ED8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x296ED4u;
            // 0x296ed8: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x296EE4u;
            goto label_296ee4;
        }
    }
    ctx->pc = 0x296EDCu;
label_296edc:
    // 0x296edc: 0x10000005  b           . + 4 + (0x5 << 2)
label_296ee0:
    if (ctx->pc == 0x296EE0u) {
        ctx->pc = 0x296EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296EDCu;
        // 0x296ee0: 0x86020000  lh          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296EE4u;
        goto label_296ee4;
    }
    ctx->pc = 0x296EDCu;
    {
        const bool branch_taken_0x296edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296EDCu;
        // 0x296ee0: 0x86020000  lh          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296edc) {
            ctx->pc = 0x296EF4u;
            goto label_296ef4;
        }
    }
    ctx->pc = 0x296EE4u;
label_296ee4:
    // 0x296ee4: 0x2c620003  sltiu       $v0, $v1, 0x3
    ctx->pc = 0x296ee4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_296ee8:
    // 0x296ee8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_296eec:
    if (ctx->pc == 0x296EECu) {
        ctx->pc = 0x296EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296EE8u;
        // 0x296eec: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296EF0u;
        goto label_296ef0;
    }
    ctx->pc = 0x296EE8u;
    {
        const bool branch_taken_0x296ee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x296EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296EE8u;
        // 0x296eec: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296ee8) {
            ctx->pc = 0x296ED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_296ed0;
        }
    }
    ctx->pc = 0x296EF0u;
label_296ef0:
    // 0x296ef0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x296ef0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_296ef4:
    // 0x296ef4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x296ef4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_296ef8:
    // 0x296ef8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x296ef8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_296efc:
    // 0x296efc: 0x3e00008  jr          $ra
label_296f00:
    if (ctx->pc == 0x296F00u) {
        ctx->pc = 0x296F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296EFCu;
        // 0x296f00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296F04u;
        goto label_296f04;
    }
    ctx->pc = 0x296EFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296EFCu;
        // 0x296f00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296EFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296F04u;
label_296f04:
    // 0x296f04: 0x0  nop
    ctx->pc = 0x296f04u;
    // NOP
    ctx->pc = 0x296f08u;
}
