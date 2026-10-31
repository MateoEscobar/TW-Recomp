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

// Function: sub_00486448
// Address: 0x486448 - 0x486488
void sub_00486448_0x486448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00486448_0x486448");
#endif

    switch (ctx->pc) {
        case 0x486448u: goto label_486448;
        case 0x48644cu: goto label_48644c;
        case 0x486450u: goto label_486450;
        case 0x486454u: goto label_486454;
        case 0x486458u: goto label_486458;
        case 0x48645cu: goto label_48645c;
        case 0x486460u: goto label_486460;
        case 0x486464u: goto label_486464;
        case 0x486468u: goto label_486468;
        case 0x48646cu: goto label_48646c;
        case 0x486470u: goto label_486470;
        case 0x486474u: goto label_486474;
        case 0x486478u: goto label_486478;
        case 0x48647cu: goto label_48647c;
        case 0x486480u: goto label_486480;
        case 0x486484u: goto label_486484;
        default: break;
    }

    ctx->pc = 0x486448u;

label_486448:
    // 0x486448: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x486448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_48644c:
    // 0x48644c: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x48644cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_486450:
    // 0x486450: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x486450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_486454:
    // 0x486454: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x486454u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_486458:
    // 0x486458: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x486458u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_48645c:
    // 0x48645c: 0x8c62ada0  lw          $v0, -0x5260($v1)
    ctx->pc = 0x48645cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946208)));
label_486460:
    // 0x486460: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x486460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_486464:
    // 0x486464: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x486464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_486468:
    // 0x486468: 0x40f809  jalr        $v0
label_48646c:
    if (ctx->pc == 0x48646Cu) {
        ctx->pc = 0x48646Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x486468u;
        // 0x48646c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x486470u;
        goto label_486470;
    }
    ctx->pc = 0x486468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x486470u);
        ctx->pc = 0x48646Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x486468u;
        // 0x48646c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x486468u, 0x486470u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x486470u;
label_486470:
    // 0x486470: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x486470u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_486474:
    // 0x486474: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x486474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_486478:
    // 0x486478: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x486478u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_48647c:
    // 0x48647c: 0x3e00008  jr          $ra
label_486480:
    if (ctx->pc == 0x486480u) {
        ctx->pc = 0x486480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48647Cu;
        // 0x486480: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x486484u;
        goto label_486484;
    }
    ctx->pc = 0x48647Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x486480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48647Cu;
        // 0x486480: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48647Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x486484u;
label_486484:
    // 0x486484: 0x0  nop
    ctx->pc = 0x486484u;
    // NOP
    ctx->pc = 0x486488u;
}
