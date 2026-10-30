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

// Function: sub_0035E300
// Address: 0x35e300 - 0x35e378
void sub_0035E300_0x35e300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035E300_0x35e300");
#endif

    switch (ctx->pc) {
        case 0x35e328u: goto label_35e328;
        case 0x35e330u: goto label_35e330;
        case 0x35e344u: goto label_35e344;
        case 0x35e34cu: goto label_35e34c;
        case 0x35e358u: goto label_35e358;
        default: break;
    }

    ctx->pc = 0x35e300u;

    // 0x35e300: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x35e300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x35e304: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35e304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35e308: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x35e308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x35e30c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x35e30cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x35e310: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35e310u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e314: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x35e314u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e318: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x35e318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x35e31c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35e31cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35e320: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35E320u;
    SET_GPR_U32(ctx, 31, 0x35E328u);
    ctx->pc = 0x35E324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E320u;
    // 0x35e324: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35E320u, 0x35E328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E328u;
label_35e328:
    // 0x35e328: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35E328u;
    SET_GPR_U32(ctx, 31, 0x35E330u);
    ctx->pc = 0x35E32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E328u;
    // 0x35e32c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35E328u, 0x35E330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E330u;
label_35e330:
    // 0x35e330: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x35e330u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e334: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x35e334u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e338: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35e338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e33c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35E33Cu;
    SET_GPR_U32(ctx, 31, 0x35E344u);
    ctx->pc = 0x35E340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E33Cu;
    // 0x35e340: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35E33Cu, 0x35E344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E344u;
label_35e344:
    // 0x35e344: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35E344u;
    SET_GPR_U32(ctx, 31, 0x35E34Cu);
    ctx->pc = 0x35E348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E344u;
    // 0x35e348: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35E344u, 0x35E34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E34Cu;
label_35e34c:
    // 0x35e34c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x35e34cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e350: 0xc0a520a  jal         func_294828
    ctx->pc = 0x35E350u;
    SET_GPR_U32(ctx, 31, 0x35E358u);
    ctx->pc = 0x35E354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E350u;
    // 0x35e354: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294828u, 0x35E350u, 0x35E358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E358u;
label_35e358:
    // 0x35e358: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x35e358u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35e35c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35e35cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e360: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x35e360u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35e364: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x35e364u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35e368: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35e368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35e36c: 0x3e00008  jr          $ra
    ctx->pc = 0x35E36Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35E370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E36Cu;
        // 0x35e370: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E36Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35E374u;
    // 0x35e374: 0x0  nop
    ctx->pc = 0x35e374u;
    // NOP
    ctx->pc = 0x35e378u;
}
