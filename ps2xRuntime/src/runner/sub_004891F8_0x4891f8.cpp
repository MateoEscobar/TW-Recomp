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

// Function: sub_004891F8
// Address: 0x4891f8 - 0x489268
void sub_004891F8_0x4891f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004891F8_0x4891f8");
#endif

    switch (ctx->pc) {
        case 0x489258u: goto label_489258;
        default: break;
    }

    ctx->pc = 0x4891f8u;

    // 0x4891f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4891f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4891fc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x4891fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x489200: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x489200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x489204: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x489204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x489208: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x489208u;
    {
        const bool branch_taken_0x489208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x489208) {
            ctx->pc = 0x489228u;
            goto label_489228;
        }
    }
    ctx->pc = 0x489210u;
    // 0x489210: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x489210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x489214: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x489214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x489218: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x489218u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x48921c: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x48921cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x489220: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x489220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x489224: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x489224u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_489228:
    // 0x489228: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x489228u;
    {
        const bool branch_taken_0x489228 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x48922Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x489228u;
        // 0x48922c: 0xacc50004  sw          $a1, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x489228) {
            ctx->pc = 0x489258u;
            goto label_489258;
        }
    }
    ctx->pc = 0x489230u;
    // 0x489230: 0x8ca40090  lw          $a0, 0x90($a1)
    ctx->pc = 0x489230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 144)));
    // 0x489234: 0x24a20090  addiu       $v0, $a1, 0x90
    ctx->pc = 0x489234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 144));
    // 0x489238: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x489238u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x48923c: 0x24c30008  addiu       $v1, $a2, 0x8
    ctx->pc = 0x48923cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x489240: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x489240u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
    // 0x489244: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x489244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x489248: 0x8ca20090  lw          $v0, 0x90($a1)
    ctx->pc = 0x489248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 144)));
    // 0x48924c: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x48924cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x489250: 0xc12105a  jal         func_484168
    ctx->pc = 0x489250u;
    SET_GPR_U32(ctx, 31, 0x489258u);
    ctx->pc = 0x489254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x489250u;
    // 0x489254: 0xaca30090  sw          $v1, 0x90($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 144), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x484168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x484168u, 0x489250u, 0x489258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x489258u;
label_489258:
    // 0x489258: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x489258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48925c: 0x3e00008  jr          $ra
    ctx->pc = 0x48925Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x489260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48925Cu;
        // 0x489260: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48925Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x489264u;
    // 0x489264: 0x0  nop
    ctx->pc = 0x489264u;
    // NOP
    ctx->pc = 0x489268u;
}
