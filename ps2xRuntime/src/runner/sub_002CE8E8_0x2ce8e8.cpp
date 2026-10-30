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

// Function: sub_002CE8E8
// Address: 0x2ce8e8 - 0x2ce950
void sub_002CE8E8_0x2ce8e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CE8E8_0x2ce8e8");
#endif

    switch (ctx->pc) {
        case 0x2ce90cu: goto label_2ce90c;
        case 0x2ce918u: goto label_2ce918;
        case 0x2ce930u: goto label_2ce930;
        case 0x2ce93cu: goto label_2ce93c;
        default: break;
    }

    ctx->pc = 0x2ce8e8u;

    // 0x2ce8e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ce8e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ce8ec: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2ce8ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2ce8f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ce8f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ce8f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ce8f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce8f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ce8f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ce8fc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2ce8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ce900: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2ce900u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ce904: 0xc097d14  jal         func_25F450
    ctx->pc = 0x2CE904u;
    SET_GPR_U32(ctx, 31, 0x2CE90Cu);
    ctx->pc = 0x2CE908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE904u;
    // 0x2ce908: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F450u, 0x2CE904u, 0x2CE90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE90Cu;
label_2ce90c:
    // 0x2ce90c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2ce90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ce910: 0xc05959e  jal         func_165678
    ctx->pc = 0x2CE910u;
    SET_GPR_U32(ctx, 31, 0x2CE918u);
    ctx->pc = 0x2CE914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE910u;
    // 0x2ce914: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x2CE910u, 0x2CE918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE918u;
label_2ce918:
    // 0x2ce918: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CE918u;
    {
        const bool branch_taken_0x2ce918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE918u;
        // 0x2ce91c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce918) {
            ctx->pc = 0x2CE940u;
            goto label_2ce940;
        }
    }
    ctx->pc = 0x2CE920u;
    // 0x2ce920: 0x10510007  beq         $v0, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CE920u;
    {
        const bool branch_taken_0x2ce920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x2CE924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE920u;
        // 0x2ce924: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce920) {
            ctx->pc = 0x2CE940u;
            goto label_2ce940;
        }
    }
    ctx->pc = 0x2CE928u;
    // 0x2ce928: 0xc08750a  jal         func_21D428
    ctx->pc = 0x2CE928u;
    SET_GPR_U32(ctx, 31, 0x2CE930u);
    ctx->pc = 0x2CE92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE928u;
    // 0x2ce92c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D428u, 0x2CE928u, 0x2CE930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE930u;
label_2ce930:
    // 0x2ce930: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ce930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce934: 0xc0a580a  jal         func_296028
    ctx->pc = 0x2CE934u;
    SET_GPR_U32(ctx, 31, 0x2CE93Cu);
    ctx->pc = 0x2CE938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE934u;
    // 0x2ce938: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296028u, 0x2CE934u, 0x2CE93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE93Cu;
label_2ce93c:
    // 0x2ce93c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2ce93cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2ce940:
    // 0x2ce940: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ce940u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ce944: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ce944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ce948: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE948u;
        // 0x2ce94c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CE948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CE950u;
}
