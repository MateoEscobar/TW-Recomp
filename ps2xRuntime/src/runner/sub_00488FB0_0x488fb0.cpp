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

// Function: sub_00488FB0
// Address: 0x488fb0 - 0x489028
void sub_00488FB0_0x488fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00488FB0_0x488fb0");
#endif

    switch (ctx->pc) {
        case 0x488fb0u: goto label_488fb0;
        case 0x488fb4u: goto label_488fb4;
        case 0x488fb8u: goto label_488fb8;
        case 0x488fbcu: goto label_488fbc;
        case 0x488fc0u: goto label_488fc0;
        case 0x488fc4u: goto label_488fc4;
        case 0x488fc8u: goto label_488fc8;
        case 0x488fccu: goto label_488fcc;
        case 0x488fd0u: goto label_488fd0;
        case 0x488fd4u: goto label_488fd4;
        case 0x488fd8u: goto label_488fd8;
        case 0x488fdcu: goto label_488fdc;
        case 0x488fe0u: goto label_488fe0;
        case 0x488fe4u: goto label_488fe4;
        case 0x488fe8u: goto label_488fe8;
        case 0x488fecu: goto label_488fec;
        case 0x488ff0u: goto label_488ff0;
        case 0x488ff4u: goto label_488ff4;
        case 0x488ff8u: goto label_488ff8;
        case 0x488ffcu: goto label_488ffc;
        case 0x489000u: goto label_489000;
        case 0x489004u: goto label_489004;
        case 0x489008u: goto label_489008;
        case 0x48900cu: goto label_48900c;
        case 0x489010u: goto label_489010;
        case 0x489014u: goto label_489014;
        case 0x489018u: goto label_489018;
        case 0x48901cu: goto label_48901c;
        case 0x489020u: goto label_489020;
        case 0x489024u: goto label_489024;
        default: break;
    }

    ctx->pc = 0x488fb0u;

label_488fb0:
    // 0x488fb0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x488fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_488fb4:
    // 0x488fb4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x488fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_488fb8:
    // 0x488fb8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x488fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_488fbc:
    // 0x488fbc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x488fbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_488fc0:
    // 0x488fc0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x488fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_488fc4:
    // 0x488fc4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x488fc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_488fc8:
    // 0x488fc8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x488fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_488fcc:
    // 0x488fcc: 0x26330008  addiu       $s3, $s1, 0x8
    ctx->pc = 0x488fccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_488fd0:
    // 0x488fd0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x488fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_488fd4:
    // 0x488fd4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x488fd4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_488fd8:
    // 0x488fd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x488fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_488fdc:
    // 0x488fdc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x488fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_488fe0:
    // 0x488fe0: 0x10530006  beq         $v0, $s3, . + 4 + (0x6 << 2)
label_488fe4:
    if (ctx->pc == 0x488FE4u) {
        ctx->pc = 0x488FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488FE0u;
        // 0x488fe4: 0x2444fff8  addiu       $a0, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x488FE8u;
        goto label_488fe8;
    }
    ctx->pc = 0x488FE0u;
    {
        const bool branch_taken_0x488fe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x488FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488FE0u;
        // 0x488fe4: 0x2444fff8  addiu       $a0, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x488fe0) {
            ctx->pc = 0x488FFCu;
            goto label_488ffc;
        }
    }
    ctx->pc = 0x488FE8u;
label_488fe8:
    // 0x488fe8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x488fe8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_488fec:
    // 0x488fec: 0x280f809  jalr        $s4
label_488ff0:
    if (ctx->pc == 0x488FF0u) {
        ctx->pc = 0x488FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488FECu;
        // 0x488ff0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x488FF4u;
        goto label_488ff4;
    }
    ctx->pc = 0x488FECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x488FF4u);
        ctx->pc = 0x488FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488FECu;
        // 0x488ff0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x488FECu, 0x488FF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x488FF4u;
label_488ff4:
    // 0x488ff4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_488ff8:
    if (ctx->pc == 0x488FF8u) {
        ctx->pc = 0x488FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488FF4u;
        // 0x488ff8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x488FFCu;
        goto label_488ffc;
    }
    ctx->pc = 0x488FF4u;
    {
        const bool branch_taken_0x488ff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x488FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488FF4u;
        // 0x488ff8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x488ff4) {
            ctx->pc = 0x488FE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_488fe0;
        }
    }
    ctx->pc = 0x488FFCu;
label_488ffc:
    // 0x488ffc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x488ffcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_489000:
    // 0x489000: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x489000u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_489004:
    // 0x489004: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x489004u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_489008:
    // 0x489008: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x489008u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_48900c:
    // 0x48900c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x48900cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_489010:
    // 0x489010: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x489010u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_489014:
    // 0x489014: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x489014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_489018:
    // 0x489018: 0x3e00008  jr          $ra
label_48901c:
    if (ctx->pc == 0x48901Cu) {
        ctx->pc = 0x48901Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x489018u;
        // 0x48901c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x489020u;
        goto label_489020;
    }
    ctx->pc = 0x489018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48901Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x489018u;
        // 0x48901c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x489018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x489020u;
label_489020:
    // 0x489020: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x489020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_489024:
    // 0x489024: 0x0  nop
    ctx->pc = 0x489024u;
    // NOP
    ctx->pc = 0x489028u;
}
