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

// Function: sub_00390920
// Address: 0x390920 - 0x390950
void sub_00390920_0x390920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00390920_0x390920");
#endif

    switch (ctx->pc) {
        case 0x390920u: goto label_390920;
        case 0x390924u: goto label_390924;
        case 0x390928u: goto label_390928;
        case 0x39092cu: goto label_39092c;
        case 0x390930u: goto label_390930;
        case 0x390934u: goto label_390934;
        case 0x390938u: goto label_390938;
        case 0x39093cu: goto label_39093c;
        case 0x390940u: goto label_390940;
        case 0x390944u: goto label_390944;
        case 0x390948u: goto label_390948;
        case 0x39094cu: goto label_39094c;
        default: break;
    }

    ctx->pc = 0x390920u;

label_390920:
    // 0x390920: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x390920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_390924:
    // 0x390924: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x390924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_390928:
    // 0x390928: 0x8c8200a0  lw          $v0, 0xA0($a0)
    ctx->pc = 0x390928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
label_39092c:
    // 0x39092c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_390930:
    if (ctx->pc == 0x390930u) {
        ctx->pc = 0x390930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39092Cu;
        // 0x390930: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390934u;
        goto label_390934;
    }
    ctx->pc = 0x39092Cu;
    {
        const bool branch_taken_0x39092c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x390930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39092Cu;
        // 0x390930: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39092c) {
            ctx->pc = 0x390944u;
            goto label_390944;
        }
    }
    ctx->pc = 0x390934u;
label_390934:
    // 0x390934: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x390934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_390938:
    // 0x390938: 0x40f809  jalr        $v0
label_39093c:
    if (ctx->pc == 0x39093Cu) {
        ctx->pc = 0x390940u;
        goto label_390940;
    }
    ctx->pc = 0x390938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x390940u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x390938u, 0x390940u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x390940u;
label_390940:
    // 0x390940: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x390940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_390944:
    // 0x390944: 0x3e00008  jr          $ra
label_390948:
    if (ctx->pc == 0x390948u) {
        ctx->pc = 0x390948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390944u;
        // 0x390948: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39094Cu;
        goto label_39094c;
    }
    ctx->pc = 0x390944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x390948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390944u;
        // 0x390948: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x390944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39094Cu;
label_39094c:
    // 0x39094c: 0x0  nop
    ctx->pc = 0x39094cu;
    // NOP
    ctx->pc = 0x390950u;
}
