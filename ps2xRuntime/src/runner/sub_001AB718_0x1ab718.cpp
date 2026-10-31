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

// Function: sub_001AB718
// Address: 0x1ab718 - 0x1ab758
void sub_001AB718_0x1ab718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AB718_0x1ab718");
#endif

    switch (ctx->pc) {
        case 0x1ab718u: goto label_1ab718;
        case 0x1ab71cu: goto label_1ab71c;
        case 0x1ab720u: goto label_1ab720;
        case 0x1ab724u: goto label_1ab724;
        case 0x1ab728u: goto label_1ab728;
        case 0x1ab72cu: goto label_1ab72c;
        case 0x1ab730u: goto label_1ab730;
        case 0x1ab734u: goto label_1ab734;
        case 0x1ab738u: goto label_1ab738;
        case 0x1ab73cu: goto label_1ab73c;
        case 0x1ab740u: goto label_1ab740;
        case 0x1ab744u: goto label_1ab744;
        case 0x1ab748u: goto label_1ab748;
        case 0x1ab74cu: goto label_1ab74c;
        case 0x1ab750u: goto label_1ab750;
        case 0x1ab754u: goto label_1ab754;
        default: break;
    }

    ctx->pc = 0x1ab718u;

label_1ab718:
    // 0x1ab718: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ab718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1ab71c:
    // 0x1ab71c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ab71cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ab720:
    // 0x1ab720: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x1ab720u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_1ab724:
    // 0x1ab724: 0x8c870060  lw          $a3, 0x60($a0)
    ctx->pc = 0x1ab724u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_1ab728:
    // 0x1ab728: 0x10e00008  beqz        $a3, . + 4 + (0x8 << 2)
label_1ab72c:
    if (ctx->pc == 0x1AB72Cu) {
        ctx->pc = 0x1AB72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB728u;
        // 0x1ab72c: 0x7c820020  sq          $v0, 0x20($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB730u;
        goto label_1ab730;
    }
    ctx->pc = 0x1AB728u;
    {
        const bool branch_taken_0x1ab728 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB728u;
        // 0x1ab72c: 0x7c820020  sq          $v0, 0x20($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab728) {
            ctx->pc = 0x1AB74Cu;
            goto label_1ab74c;
        }
    }
    ctx->pc = 0x1AB730u;
label_1ab730:
    // 0x1ab730: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1ab730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1ab734:
    // 0x1ab734: 0x24850020  addiu       $a1, $a0, 0x20
    ctx->pc = 0x1ab734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_1ab738:
    // 0x1ab738: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ab738u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ab73c:
    // 0x1ab73c: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1ab73cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1ab740:
    // 0x1ab740: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1ab740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1ab744:
    // 0x1ab744: 0x60f809  jalr        $v1
label_1ab748:
    if (ctx->pc == 0x1AB748u) {
        ctx->pc = 0x1AB748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB744u;
        // 0x1ab748: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB74Cu;
        goto label_1ab74c;
    }
    ctx->pc = 0x1AB744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AB74Cu);
        ctx->pc = 0x1AB748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB744u;
        // 0x1ab748: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB744u, 0x1AB74Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AB74Cu;
label_1ab74c:
    // 0x1ab74c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ab74cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ab750:
    // 0x1ab750: 0x3e00008  jr          $ra
label_1ab754:
    if (ctx->pc == 0x1AB754u) {
        ctx->pc = 0x1AB754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB750u;
        // 0x1ab754: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB758u;
        goto label_fallthrough_0x1ab750;
    }
    ctx->pc = 0x1AB750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB750u;
        // 0x1ab754: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ab750:
    ctx->pc = 0x1AB758u;
}
