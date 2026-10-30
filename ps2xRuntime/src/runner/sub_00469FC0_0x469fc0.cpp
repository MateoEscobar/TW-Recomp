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

// Function: sub_00469FC0
// Address: 0x469fc0 - 0x46a040
void sub_00469FC0_0x469fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00469FC0_0x469fc0");
#endif

    switch (ctx->pc) {
        case 0x469fc0u: goto label_469fc0;
        case 0x469fc4u: goto label_469fc4;
        case 0x469fc8u: goto label_469fc8;
        case 0x469fccu: goto label_469fcc;
        case 0x469fd0u: goto label_469fd0;
        case 0x469fd4u: goto label_469fd4;
        case 0x469fd8u: goto label_469fd8;
        case 0x469fdcu: goto label_469fdc;
        case 0x469fe0u: goto label_469fe0;
        case 0x469fe4u: goto label_469fe4;
        case 0x469fe8u: goto label_469fe8;
        case 0x469fecu: goto label_469fec;
        case 0x469ff0u: goto label_469ff0;
        case 0x469ff4u: goto label_469ff4;
        case 0x469ff8u: goto label_469ff8;
        case 0x469ffcu: goto label_469ffc;
        case 0x46a000u: goto label_46a000;
        case 0x46a004u: goto label_46a004;
        case 0x46a008u: goto label_46a008;
        case 0x46a00cu: goto label_46a00c;
        case 0x46a010u: goto label_46a010;
        case 0x46a014u: goto label_46a014;
        case 0x46a018u: goto label_46a018;
        case 0x46a01cu: goto label_46a01c;
        case 0x46a020u: goto label_46a020;
        case 0x46a024u: goto label_46a024;
        case 0x46a028u: goto label_46a028;
        case 0x46a02cu: goto label_46a02c;
        case 0x46a030u: goto label_46a030;
        case 0x46a034u: goto label_46a034;
        case 0x46a038u: goto label_46a038;
        case 0x46a03cu: goto label_46a03c;
        default: break;
    }

    ctx->pc = 0x469fc0u;

label_469fc0:
    // 0x469fc0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x469fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_469fc4:
    // 0x469fc4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x469fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_469fc8:
    // 0x469fc8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x469fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_469fcc:
    // 0x469fcc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x469fccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_469fd0:
    // 0x469fd0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x469fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_469fd4:
    // 0x469fd4: 0x26320010  addiu       $s2, $s1, 0x10
    ctx->pc = 0x469fd4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_469fd8:
    // 0x469fd8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x469fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_469fdc:
    // 0x469fdc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x469fdcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_469fe0:
    // 0x469fe0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x469fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_469fe4:
    // 0x469fe4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x469fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_469fe8:
    // 0x469fe8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x469fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_469fec:
    // 0x469fec: 0x1052000b  beq         $v0, $s2, . + 4 + (0xB << 2)
label_469ff0:
    if (ctx->pc == 0x469FF0u) {
        ctx->pc = 0x469FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469FECu;
        // 0x469ff0: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x469FF4u;
        goto label_469ff4;
    }
    ctx->pc = 0x469FECu;
    {
        const bool branch_taken_0x469fec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x469FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469FECu;
        // 0x469ff0: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x469fec) {
            ctx->pc = 0x46A01Cu;
            goto label_46a01c;
        }
    }
    ctx->pc = 0x469FF4u;
label_469ff4:
    // 0x469ff4: 0x8f8484c0  lw          $a0, -0x7B40($gp)
    ctx->pc = 0x469ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935744)));
label_469ff8:
    // 0x469ff8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x469ff8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_469ffc:
    // 0x469ffc: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x469ffcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46a000:
    // 0x46a000: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x46a000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_46a004:
    // 0x46a004: 0x280f809  jalr        $s4
label_46a008:
    if (ctx->pc == 0x46A008u) {
        ctx->pc = 0x46A008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A004u;
        // 0x46a008: 0x442023  subu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46A00Cu;
        goto label_46a00c;
    }
    ctx->pc = 0x46A004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x46A00Cu);
        ctx->pc = 0x46A008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A004u;
        // 0x46a008: 0x442023  subu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46A004u, 0x46A00Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46A00Cu;
label_46a00c:
    // 0x46a00c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_46a010:
    if (ctx->pc == 0x46A010u) {
        ctx->pc = 0x46A010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A00Cu;
        // 0x46a010: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46A014u;
        goto label_46a014;
    }
    ctx->pc = 0x46A00Cu;
    {
        const bool branch_taken_0x46a00c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46A010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A00Cu;
        // 0x46a010: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46a00c) {
            ctx->pc = 0x46A01Cu;
            goto label_46a01c;
        }
    }
    ctx->pc = 0x46A014u;
label_46a014:
    // 0x46a014: 0x5452fff8  bnel        $v0, $s2, . + 4 + (-0x8 << 2)
label_46a018:
    if (ctx->pc == 0x46A018u) {
        ctx->pc = 0x46A018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A014u;
        // 0x46a018: 0x8f8484c0  lw          $a0, -0x7B40($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935744)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46A01Cu;
        goto label_46a01c;
    }
    ctx->pc = 0x46A014u;
    {
        const bool branch_taken_0x46a014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x46a014) {
            ctx->pc = 0x46A018u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46A014u;
            // 0x46a018: 0x8f8484c0  lw          $a0, -0x7B40($gp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935744)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x469FF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_469ff8;
        }
    }
    ctx->pc = 0x46A01Cu;
label_46a01c:
    // 0x46a01c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x46a01cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_46a020:
    // 0x46a020: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x46a020u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_46a024:
    // 0x46a024: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x46a024u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_46a028:
    // 0x46a028: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x46a028u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_46a02c:
    // 0x46a02c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x46a02cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_46a030:
    // 0x46a030: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x46a030u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_46a034:
    // 0x46a034: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46a034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_46a038:
    // 0x46a038: 0x3e00008  jr          $ra
label_46a03c:
    if (ctx->pc == 0x46A03Cu) {
        ctx->pc = 0x46A03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A038u;
        // 0x46a03c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46A040u;
        goto label_fallthrough_0x46a038;
    }
    ctx->pc = 0x46A038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46A03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A038u;
        // 0x46a03c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46A038u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x46a038:
    ctx->pc = 0x46A040u;
}
