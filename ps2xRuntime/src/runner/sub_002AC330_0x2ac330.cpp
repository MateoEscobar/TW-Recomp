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

// Function: sub_002AC330
// Address: 0x2ac330 - 0x2ac378
void sub_002AC330_0x2ac330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AC330_0x2ac330");
#endif

    switch (ctx->pc) {
        case 0x2ac330u: goto label_2ac330;
        case 0x2ac334u: goto label_2ac334;
        case 0x2ac338u: goto label_2ac338;
        case 0x2ac33cu: goto label_2ac33c;
        case 0x2ac340u: goto label_2ac340;
        case 0x2ac344u: goto label_2ac344;
        case 0x2ac348u: goto label_2ac348;
        case 0x2ac34cu: goto label_2ac34c;
        case 0x2ac350u: goto label_2ac350;
        case 0x2ac354u: goto label_2ac354;
        case 0x2ac358u: goto label_2ac358;
        case 0x2ac35cu: goto label_2ac35c;
        case 0x2ac360u: goto label_2ac360;
        case 0x2ac364u: goto label_2ac364;
        case 0x2ac368u: goto label_2ac368;
        case 0x2ac36cu: goto label_2ac36c;
        case 0x2ac370u: goto label_2ac370;
        case 0x2ac374u: goto label_2ac374;
        default: break;
    }

    ctx->pc = 0x2ac330u;

label_2ac330:
    // 0x2ac330: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ac330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2ac334:
    // 0x2ac334: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ac334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2ac338:
    // 0x2ac338: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ac338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2ac33c:
    // 0x2ac33c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ac33cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ac340:
    // 0x2ac340: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2ac340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2ac344:
    // 0x2ac344: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x2ac344u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_2ac348:
    // 0x2ac348: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x2ac348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2ac34c:
    // 0x2ac34c: 0x60f809  jalr        $v1
label_2ac350:
    if (ctx->pc == 0x2AC350u) {
        ctx->pc = 0x2AC350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC34Cu;
        // 0x2ac350: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC354u;
        goto label_2ac354;
    }
    ctx->pc = 0x2AC34Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2AC354u);
        ctx->pc = 0x2AC350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC34Cu;
        // 0x2ac350: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC34Cu, 0x2AC354u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AC354u;
label_2ac354:
    // 0x2ac354: 0x92040032  lbu         $a0, 0x32($s0)
    ctx->pc = 0x2ac354u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 50)));
label_2ac358:
    // 0x2ac358: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2ac358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ac35c:
    // 0x2ac35c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ac35cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ac360:
    // 0x2ac360: 0xac44021c  sw          $a0, 0x21C($v0)
    ctx->pc = 0x2ac360u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 540), GPR_U32(ctx, 4));
label_2ac364:
    // 0x2ac364: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2ac364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ac368:
    // 0x2ac368: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ac368u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ac36c:
    // 0x2ac36c: 0xa060028d  sb          $zero, 0x28D($v1)
    ctx->pc = 0x2ac36cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 653), (uint8_t)GPR_U32(ctx, 0));
label_2ac370:
    // 0x2ac370: 0x3e00008  jr          $ra
label_2ac374:
    if (ctx->pc == 0x2AC374u) {
        ctx->pc = 0x2AC374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC370u;
        // 0x2ac374: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC378u;
        goto label_fallthrough_0x2ac370;
    }
    ctx->pc = 0x2AC370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AC374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC370u;
        // 0x2ac374: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2ac370:
    ctx->pc = 0x2AC378u;
}
