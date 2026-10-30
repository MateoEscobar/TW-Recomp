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

// Function: sub_00480148
// Address: 0x480148 - 0x480198
void sub_00480148_0x480148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00480148_0x480148");
#endif

    switch (ctx->pc) {
        case 0x480148u: goto label_480148;
        case 0x48014cu: goto label_48014c;
        case 0x480150u: goto label_480150;
        case 0x480154u: goto label_480154;
        case 0x480158u: goto label_480158;
        case 0x48015cu: goto label_48015c;
        case 0x480160u: goto label_480160;
        case 0x480164u: goto label_480164;
        case 0x480168u: goto label_480168;
        case 0x48016cu: goto label_48016c;
        case 0x480170u: goto label_480170;
        case 0x480174u: goto label_480174;
        case 0x480178u: goto label_480178;
        case 0x48017cu: goto label_48017c;
        case 0x480180u: goto label_480180;
        case 0x480184u: goto label_480184;
        case 0x480188u: goto label_480188;
        case 0x48018cu: goto label_48018c;
        case 0x480190u: goto label_480190;
        case 0x480194u: goto label_480194;
        default: break;
    }

    ctx->pc = 0x480148u;

label_480148:
    // 0x480148: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x480148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_48014c:
    // 0x48014c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x48014cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_480150:
    // 0x480150: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x480150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_480154:
    // 0x480154: 0x8f838950  lw          $v1, -0x76B0($gp)
    ctx->pc = 0x480154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936912)));
label_480158:
    // 0x480158: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x480158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_48015c:
    // 0x48015c: 0x2442ad18  addiu       $v0, $v0, -0x52E8
    ctx->pc = 0x48015cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
label_480160:
    // 0x480160: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x480160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_480164:
    // 0x480164: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x480164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_480168:
    // 0x480168: 0x40f809  jalr        $v0
label_48016c:
    if (ctx->pc == 0x48016Cu) {
        ctx->pc = 0x48016Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480168u;
        // 0x48016c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x480170u;
        goto label_480170;
    }
    ctx->pc = 0x480168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x480170u);
        ctx->pc = 0x48016Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480168u;
        // 0x48016c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x480168u, 0x480170u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x480170u;
label_480170:
    // 0x480170: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x480170u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_480174:
    // 0x480174: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x480174u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_480178:
    // 0x480178: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x480178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_48017c:
    // 0x48017c: 0x3e00008  jr          $ra
label_480180:
    if (ctx->pc == 0x480180u) {
        ctx->pc = 0x480180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48017Cu;
        // 0x480180: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x480184u;
        goto label_480184;
    }
    ctx->pc = 0x48017Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x480180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48017Cu;
        // 0x480180: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48017Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x480184u;
label_480184:
    // 0x480184: 0x0  nop
    ctx->pc = 0x480184u;
    // NOP
label_480188:
    // 0x480188: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x480188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_48018c:
    // 0x48018c: 0x0  nop
    ctx->pc = 0x48018cu;
    // NOP
label_480190:
    // 0x480190: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x480190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_480194:
    // 0x480194: 0x0  nop
    ctx->pc = 0x480194u;
    // NOP
    ctx->pc = 0x480198u;
}
