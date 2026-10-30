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

// Function: sub_001EC448
// Address: 0x1ec448 - 0x1ec490
void sub_001EC448_0x1ec448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EC448_0x1ec448");
#endif

    switch (ctx->pc) {
        case 0x1ec448u: goto label_1ec448;
        case 0x1ec44cu: goto label_1ec44c;
        case 0x1ec450u: goto label_1ec450;
        case 0x1ec454u: goto label_1ec454;
        case 0x1ec458u: goto label_1ec458;
        case 0x1ec45cu: goto label_1ec45c;
        case 0x1ec460u: goto label_1ec460;
        case 0x1ec464u: goto label_1ec464;
        case 0x1ec468u: goto label_1ec468;
        case 0x1ec46cu: goto label_1ec46c;
        case 0x1ec470u: goto label_1ec470;
        case 0x1ec474u: goto label_1ec474;
        case 0x1ec478u: goto label_1ec478;
        case 0x1ec47cu: goto label_1ec47c;
        case 0x1ec480u: goto label_1ec480;
        case 0x1ec484u: goto label_1ec484;
        case 0x1ec488u: goto label_1ec488;
        case 0x1ec48cu: goto label_1ec48c;
        default: break;
    }

    ctx->pc = 0x1ec448u;

label_1ec448:
    // 0x1ec448: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ec448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1ec44c:
    // 0x1ec44c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ec44cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ec450:
    // 0x1ec450: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ec450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1ec454:
    // 0x1ec454: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ec454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ec458:
    // 0x1ec458: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ec458u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ec45c:
    // 0x1ec45c: 0x8e060070  lw          $a2, 0x70($s0)
    ctx->pc = 0x1ec45cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_1ec460:
    // 0x1ec460: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1ec460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1ec464:
    // 0x1ec464: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x1ec464u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_1ec468:
    // 0x1ec468: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1ec468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_1ec46c:
    // 0x1ec46c: 0x40f809  jalr        $v0
label_1ec470:
    if (ctx->pc == 0x1EC470u) {
        ctx->pc = 0x1EC470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC46Cu;
        // 0x1ec470: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC474u;
        goto label_1ec474;
    }
    ctx->pc = 0x1EC46Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EC474u);
        ctx->pc = 0x1EC470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC46Cu;
        // 0x1ec470: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC46Cu, 0x1EC474u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EC474u;
label_1ec474:
    // 0x1ec474: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ec474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ec478:
    // 0x1ec478: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ec478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ec47c:
    // 0x1ec47c: 0xae030178  sw          $v1, 0x178($s0)
    ctx->pc = 0x1ec47cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 376), GPR_U32(ctx, 3));
label_1ec480:
    // 0x1ec480: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ec480u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ec484:
    // 0x1ec484: 0x3e00008  jr          $ra
label_1ec488:
    if (ctx->pc == 0x1EC488u) {
        ctx->pc = 0x1EC488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC484u;
        // 0x1ec488: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC48Cu;
        goto label_1ec48c;
    }
    ctx->pc = 0x1EC484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC484u;
        // 0x1ec488: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC484u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC48Cu;
label_1ec48c:
    // 0x1ec48c: 0x0  nop
    ctx->pc = 0x1ec48cu;
    // NOP
    ctx->pc = 0x1ec490u;
}
