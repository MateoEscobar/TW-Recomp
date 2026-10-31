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

// Function: sub_00204BA0
// Address: 0x204ba0 - 0x204c20
void sub_00204BA0_0x204ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00204BA0_0x204ba0");
#endif

    switch (ctx->pc) {
        case 0x204ba0u: goto label_204ba0;
        case 0x204ba4u: goto label_204ba4;
        case 0x204ba8u: goto label_204ba8;
        case 0x204bacu: goto label_204bac;
        case 0x204bb0u: goto label_204bb0;
        case 0x204bb4u: goto label_204bb4;
        case 0x204bb8u: goto label_204bb8;
        case 0x204bbcu: goto label_204bbc;
        case 0x204bc0u: goto label_204bc0;
        case 0x204bc4u: goto label_204bc4;
        case 0x204bc8u: goto label_204bc8;
        case 0x204bccu: goto label_204bcc;
        case 0x204bd0u: goto label_204bd0;
        case 0x204bd4u: goto label_204bd4;
        case 0x204bd8u: goto label_204bd8;
        case 0x204bdcu: goto label_204bdc;
        case 0x204be0u: goto label_204be0;
        case 0x204be4u: goto label_204be4;
        case 0x204be8u: goto label_204be8;
        case 0x204becu: goto label_204bec;
        case 0x204bf0u: goto label_204bf0;
        case 0x204bf4u: goto label_204bf4;
        case 0x204bf8u: goto label_204bf8;
        case 0x204bfcu: goto label_204bfc;
        case 0x204c00u: goto label_204c00;
        case 0x204c04u: goto label_204c04;
        case 0x204c08u: goto label_204c08;
        case 0x204c0cu: goto label_204c0c;
        case 0x204c10u: goto label_204c10;
        case 0x204c14u: goto label_204c14;
        case 0x204c18u: goto label_204c18;
        case 0x204c1cu: goto label_204c1c;
        default: break;
    }

    ctx->pc = 0x204ba0u;

label_204ba0:
    // 0x204ba0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x204ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_204ba4:
    // 0x204ba4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x204ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_204ba8:
    // 0x204ba8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x204ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_204bac:
    // 0x204bac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x204bacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_204bb0:
    // 0x204bb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x204bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_204bb4:
    // 0x204bb4: 0x26110010  addiu       $s1, $s0, 0x10
    ctx->pc = 0x204bb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_204bb8:
    // 0x204bb8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x204bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_204bbc:
    // 0x204bbc: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x204bbcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_204bc0:
    // 0x204bc0: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x204bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_204bc4:
    // 0x204bc4: 0x40f809  jalr        $v0
label_204bc8:
    if (ctx->pc == 0x204BC8u) {
        ctx->pc = 0x204BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204BC4u;
        // 0x204bc8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204BCCu;
        goto label_204bcc;
    }
    ctx->pc = 0x204BC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x204BCCu);
        ctx->pc = 0x204BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204BC4u;
        // 0x204bc8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204BC4u, 0x204BCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x204BCCu;
label_204bcc:
    // 0x204bcc: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_204bd0:
    if (ctx->pc == 0x204BD0u) {
        ctx->pc = 0x204BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204BCCu;
        // 0x204bd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204BD4u;
        goto label_204bd4;
    }
    ctx->pc = 0x204BCCu;
    {
        const bool branch_taken_0x204bcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x204bcc) {
            ctx->pc = 0x204BD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x204BCCu;
            // 0x204bd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x204C0Cu;
            goto label_204c0c;
        }
    }
    ctx->pc = 0x204BD4u;
label_204bd4:
    // 0x204bd4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x204bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_204bd8:
    // 0x204bd8: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x204bd8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_204bdc:
    // 0x204bdc: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x204bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_204be0:
    // 0x204be0: 0x60f809  jalr        $v1
label_204be4:
    if (ctx->pc == 0x204BE4u) {
        ctx->pc = 0x204BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204BE0u;
        // 0x204be4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204BE8u;
        goto label_204be8;
    }
    ctx->pc = 0x204BE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x204BE8u);
        ctx->pc = 0x204BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204BE0u;
        // 0x204be4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204BE0u, 0x204BE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x204BE8u;
label_204be8:
    // 0x204be8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x204be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_204bec:
    // 0x204bec: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x204becu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_204bf0:
    // 0x204bf0: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x204bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_204bf4:
    // 0x204bf4: 0x60f809  jalr        $v1
label_204bf8:
    if (ctx->pc == 0x204BF8u) {
        ctx->pc = 0x204BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204BF4u;
        // 0x204bf8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204BFCu;
        goto label_204bfc;
    }
    ctx->pc = 0x204BF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x204BFCu);
        ctx->pc = 0x204BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204BF4u;
        // 0x204bf8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204BF4u, 0x204BFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x204BFCu;
label_204bfc:
    // 0x204bfc: 0xc0720f2  jal         func_1C83C8
label_204c00:
    if (ctx->pc == 0x204C00u) {
        ctx->pc = 0x204C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204BFCu;
        // 0x204c00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204C04u;
        goto label_204c04;
    }
    ctx->pc = 0x204BFCu;
    SET_GPR_U32(ctx, 31, 0x204C04u);
    ctx->pc = 0x204C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204BFCu;
    // 0x204c00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C83C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C83C8u, 0x204BFCu, 0x204C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204C04u;
label_204c04:
    // 0x204c04: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x204c04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_204c08:
    // 0x204c08: 0x8c62f5b0  lw          $v0, -0xA50($v1)
    ctx->pc = 0x204c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294964656)));
label_204c0c:
    // 0x204c0c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x204c0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_204c10:
    // 0x204c10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x204c10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_204c14:
    // 0x204c14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x204c14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_204c18:
    // 0x204c18: 0x3e00008  jr          $ra
label_204c1c:
    if (ctx->pc == 0x204C1Cu) {
        ctx->pc = 0x204C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204C18u;
        // 0x204c1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204C20u;
        goto label_fallthrough_0x204c18;
    }
    ctx->pc = 0x204C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204C18u;
        // 0x204c1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204C18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x204c18:
    ctx->pc = 0x204C20u;
}
