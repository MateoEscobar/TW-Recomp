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

// Function: sub_003B5440
// Address: 0x3b5440 - 0x3b5498
void sub_003B5440_0x3b5440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B5440_0x3b5440");
#endif

    switch (ctx->pc) {
        case 0x3b5440u: goto label_3b5440;
        case 0x3b5444u: goto label_3b5444;
        case 0x3b5448u: goto label_3b5448;
        case 0x3b544cu: goto label_3b544c;
        case 0x3b5450u: goto label_3b5450;
        case 0x3b5454u: goto label_3b5454;
        case 0x3b5458u: goto label_3b5458;
        case 0x3b545cu: goto label_3b545c;
        case 0x3b5460u: goto label_3b5460;
        case 0x3b5464u: goto label_3b5464;
        case 0x3b5468u: goto label_3b5468;
        case 0x3b546cu: goto label_3b546c;
        case 0x3b5470u: goto label_3b5470;
        case 0x3b5474u: goto label_3b5474;
        case 0x3b5478u: goto label_3b5478;
        case 0x3b547cu: goto label_3b547c;
        case 0x3b5480u: goto label_3b5480;
        case 0x3b5484u: goto label_3b5484;
        case 0x3b5488u: goto label_3b5488;
        case 0x3b548cu: goto label_3b548c;
        case 0x3b5490u: goto label_3b5490;
        case 0x3b5494u: goto label_3b5494;
        default: break;
    }

    ctx->pc = 0x3b5440u;

label_3b5440:
    // 0x3b5440: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b5440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3b5444:
    // 0x3b5444: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3b5444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3b5448:
    // 0x3b5448: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b5448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3b544c:
    // 0x3b544c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b544cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b5450:
    // 0x3b5450: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3b5450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3b5454:
    // 0x3b5454: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3b5454u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3b5458:
    // 0x3b5458: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3b5458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3b545c:
    // 0x3b545c: 0x40f809  jalr        $v0
label_3b5460:
    if (ctx->pc == 0x3B5460u) {
        ctx->pc = 0x3B5460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B545Cu;
        // 0x3b5460: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5464u;
        goto label_3b5464;
    }
    ctx->pc = 0x3B545Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B5464u);
        ctx->pc = 0x3B5460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B545Cu;
        // 0x3b5460: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B545Cu, 0x3B5464u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B5464u;
label_3b5464:
    // 0x3b5464: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3b5464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b5468:
    // 0x3b5468: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x3b5468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_3b546c:
    // 0x3b546c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3b546cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3b5470:
    // 0x3b5470: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
label_3b5474:
    if (ctx->pc == 0x3B5474u) {
        ctx->pc = 0x3B5474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5470u;
        // 0x3b5474: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5478u;
        goto label_3b5478;
    }
    ctx->pc = 0x3B5470u;
    {
        const bool branch_taken_0x3b5470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3B5474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5470u;
        // 0x3b5474: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5470) {
            ctx->pc = 0x3B5488u;
            goto label_3b5488;
        }
    }
    ctx->pc = 0x3B5478u;
label_3b5478:
    // 0x3b5478: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x3b5478u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3b547c:
    // 0x3b547c: 0xc0e858c  jal         func_3A1630
label_3b5480:
    if (ctx->pc == 0x3B5480u) {
        ctx->pc = 0x3B5480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B547Cu;
        // 0x3b5480: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5484u;
        goto label_3b5484;
    }
    ctx->pc = 0x3B547Cu;
    SET_GPR_U32(ctx, 31, 0x3B5484u);
    ctx->pc = 0x3B5480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B547Cu;
    // 0x3b5480: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3B547Cu, 0x3B5484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5484u;
label_3b5484:
    // 0x3b5484: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3b5484u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b5488:
    // 0x3b5488: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3b5488u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b548c:
    // 0x3b548c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b548cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3b5490:
    // 0x3b5490: 0x3e00008  jr          $ra
label_3b5494:
    if (ctx->pc == 0x3B5494u) {
        ctx->pc = 0x3B5494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5490u;
        // 0x3b5494: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5498u;
        goto label_fallthrough_0x3b5490;
    }
    ctx->pc = 0x3B5490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B5494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5490u;
        // 0x3b5494: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B5490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3b5490:
    ctx->pc = 0x3B5498u;
}
