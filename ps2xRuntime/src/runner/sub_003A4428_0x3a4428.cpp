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

// Function: sub_003A4428
// Address: 0x3a4428 - 0x3a4478
void sub_003A4428_0x3a4428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A4428_0x3a4428");
#endif

    switch (ctx->pc) {
        case 0x3a4428u: goto label_3a4428;
        case 0x3a442cu: goto label_3a442c;
        case 0x3a4430u: goto label_3a4430;
        case 0x3a4434u: goto label_3a4434;
        case 0x3a4438u: goto label_3a4438;
        case 0x3a443cu: goto label_3a443c;
        case 0x3a4440u: goto label_3a4440;
        case 0x3a4444u: goto label_3a4444;
        case 0x3a4448u: goto label_3a4448;
        case 0x3a444cu: goto label_3a444c;
        case 0x3a4450u: goto label_3a4450;
        case 0x3a4454u: goto label_3a4454;
        case 0x3a4458u: goto label_3a4458;
        case 0x3a445cu: goto label_3a445c;
        case 0x3a4460u: goto label_3a4460;
        case 0x3a4464u: goto label_3a4464;
        case 0x3a4468u: goto label_3a4468;
        case 0x3a446cu: goto label_3a446c;
        case 0x3a4470u: goto label_3a4470;
        case 0x3a4474u: goto label_3a4474;
        default: break;
    }

    ctx->pc = 0x3a4428u;

label_3a4428:
    // 0x3a4428: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3a4428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3a442c:
    // 0x3a442c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3a442cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_3a4430:
    // 0x3a4430: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3a4430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3a4434:
    // 0x3a4434: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a4434u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a4438:
    // 0x3a4438: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3a4438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3a443c:
    // 0x3a443c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3a443cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3a4440:
    // 0x3a4440: 0x844300a0  lh          $v1, 0xA0($v0)
    ctx->pc = 0x3a4440u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
label_3a4444:
    // 0x3a4444: 0x8c4600a4  lw          $a2, 0xA4($v0)
    ctx->pc = 0x3a4444u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_3a4448:
    // 0x3a4448: 0xc0f809  jalr        $a2
label_3a444c:
    if (ctx->pc == 0x3A444Cu) {
        ctx->pc = 0x3A444Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4448u;
        // 0x3a444c: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4450u;
        goto label_3a4450;
    }
    ctx->pc = 0x3A4448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x3A4450u);
        ctx->pc = 0x3A444Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4448u;
        // 0x3a444c: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A4448u, 0x3A4450u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A4450u;
label_3a4450:
    // 0x3a4450: 0x7ba40030  lq          $a0, 0x30($sp)
    ctx->pc = 0x3a4450u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3a4454:
    // 0x3a4454: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3a4454u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a4458:
    // 0x3a4458: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x3a4458u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3a445c:
    // 0x3a445c: 0x7e040000  sq          $a0, 0x0($s0)
    ctx->pc = 0x3a445cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 4));
label_3a4460:
    // 0x3a4460: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3a4460u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3a4464:
    // 0x3a4464: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3a4464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3a4468:
    // 0x3a4468: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3a4468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_3a446c:
    // 0x3a446c: 0x7fa40010  sq          $a0, 0x10($sp)
    ctx->pc = 0x3a446cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 4));
label_3a4470:
    // 0x3a4470: 0x3e00008  jr          $ra
label_3a4474:
    if (ctx->pc == 0x3A4474u) {
        ctx->pc = 0x3A4474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4470u;
        // 0x3a4474: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4478u;
        goto label_fallthrough_0x3a4470;
    }
    ctx->pc = 0x3A4470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A4474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4470u;
        // 0x3a4474: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A4470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3a4470:
    ctx->pc = 0x3A4478u;
}
