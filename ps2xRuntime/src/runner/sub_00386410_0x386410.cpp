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

// Function: sub_00386410
// Address: 0x386410 - 0x386450
void sub_00386410_0x386410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00386410_0x386410");
#endif

    switch (ctx->pc) {
        case 0x386410u: goto label_386410;
        case 0x386414u: goto label_386414;
        case 0x386418u: goto label_386418;
        case 0x38641cu: goto label_38641c;
        case 0x386420u: goto label_386420;
        case 0x386424u: goto label_386424;
        case 0x386428u: goto label_386428;
        case 0x38642cu: goto label_38642c;
        case 0x386430u: goto label_386430;
        case 0x386434u: goto label_386434;
        case 0x386438u: goto label_386438;
        case 0x38643cu: goto label_38643c;
        case 0x386440u: goto label_386440;
        case 0x386444u: goto label_386444;
        case 0x386448u: goto label_386448;
        case 0x38644cu: goto label_38644c;
        default: break;
    }

    ctx->pc = 0x386410u;

label_386410:
    // 0x386410: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x386410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_386414:
    // 0x386414: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x386414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_386418:
    // 0x386418: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x386418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_38641c:
    // 0x38641c: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x38641cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_386420:
    // 0x386420: 0x8c492b04  lw          $t1, 0x2B04($v0)
    ctx->pc = 0x386420u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11012)));
label_386424:
    // 0x386424: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x386424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_386428:
    // 0x386428: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x386428u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_38642c:
    // 0x38642c: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x38642cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_386430:
    // 0x386430: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x386430u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_386434:
    // 0x386434: 0x84640098  lh          $a0, 0x98($v1)
    ctx->pc = 0x386434u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 152)));
label_386438:
    // 0x386438: 0x8c62009c  lw          $v0, 0x9C($v1)
    ctx->pc = 0x386438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
label_38643c:
    // 0x38643c: 0x40f809  jalr        $v0
label_386440:
    if (ctx->pc == 0x386440u) {
        ctx->pc = 0x386440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38643Cu;
        // 0x386440: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386444u;
        goto label_386444;
    }
    ctx->pc = 0x38643Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x386444u);
        ctx->pc = 0x386440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38643Cu;
        // 0x386440: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38643Cu, 0x386444u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x386444u;
label_386444:
    // 0x386444: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x386444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_386448:
    // 0x386448: 0x3e00008  jr          $ra
label_38644c:
    if (ctx->pc == 0x38644Cu) {
        ctx->pc = 0x38644Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386448u;
        // 0x38644c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386450u;
        goto label_fallthrough_0x386448;
    }
    ctx->pc = 0x386448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38644Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386448u;
        // 0x38644c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x386448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x386448:
    ctx->pc = 0x386450u;
}
