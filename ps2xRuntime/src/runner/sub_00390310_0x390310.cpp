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

// Function: sub_00390310
// Address: 0x390310 - 0x390370
void sub_00390310_0x390310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00390310_0x390310");
#endif

    switch (ctx->pc) {
        case 0x390310u: goto label_390310;
        case 0x390314u: goto label_390314;
        case 0x390318u: goto label_390318;
        case 0x39031cu: goto label_39031c;
        case 0x390320u: goto label_390320;
        case 0x390324u: goto label_390324;
        case 0x390328u: goto label_390328;
        case 0x39032cu: goto label_39032c;
        case 0x390330u: goto label_390330;
        case 0x390334u: goto label_390334;
        case 0x390338u: goto label_390338;
        case 0x39033cu: goto label_39033c;
        case 0x390340u: goto label_390340;
        case 0x390344u: goto label_390344;
        case 0x390348u: goto label_390348;
        case 0x39034cu: goto label_39034c;
        case 0x390350u: goto label_390350;
        case 0x390354u: goto label_390354;
        case 0x390358u: goto label_390358;
        case 0x39035cu: goto label_39035c;
        case 0x390360u: goto label_390360;
        case 0x390364u: goto label_390364;
        case 0x390368u: goto label_390368;
        case 0x39036cu: goto label_39036c;
        default: break;
    }

    ctx->pc = 0x390310u;

label_390310:
    // 0x390310: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x390310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_390314:
    // 0x390314: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x390314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_390318:
    // 0x390318: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x390318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_39031c:
    // 0x39031c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39031cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_390320:
    // 0x390320: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x390320u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_390324:
    // 0x390324: 0x8c44cce4  lw          $a0, -0x331C($v0)
    ctx->pc = 0x390324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954212)));
label_390328:
    // 0x390328: 0xc05f566  jal         func_17D598
label_39032c:
    if (ctx->pc == 0x39032Cu) {
        ctx->pc = 0x39032Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390328u;
        // 0x39032c: 0x8e05009c  lw          $a1, 0x9C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390330u;
        goto label_390330;
    }
    ctx->pc = 0x390328u;
    SET_GPR_U32(ctx, 31, 0x390330u);
    ctx->pc = 0x39032Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390328u;
    // 0x39032c: 0x8e05009c  lw          $a1, 0x9C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D598u, 0x390328u, 0x390330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390330u;
label_390330:
    // 0x390330: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x390330u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_390334:
    // 0x390334: 0xc0e8598  jal         func_3A1660
label_390338:
    if (ctx->pc == 0x390338u) {
        ctx->pc = 0x390338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390334u;
        // 0x390338: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39033Cu;
        goto label_39033c;
    }
    ctx->pc = 0x390334u;
    SET_GPR_U32(ctx, 31, 0x39033Cu);
    ctx->pc = 0x390338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390334u;
    // 0x390338: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1660u, 0x390334u, 0x39033Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39033Cu;
label_39033c:
    // 0x39033c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x39033cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_390340:
    // 0x390340: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x390340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_390344:
    // 0x390344: 0x8c622c7c  lw          $v0, 0x2C7C($v1)
    ctx->pc = 0x390344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11388)));
label_390348:
    // 0x390348: 0x8c460848  lw          $a2, 0x848($v0)
    ctx->pc = 0x390348u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2120)));
label_39034c:
    // 0x39034c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x39034cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_390350:
    // 0x390350: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x390350u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_390354:
    // 0x390354: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x390354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_390358:
    // 0x390358: 0x40f809  jalr        $v0
label_39035c:
    if (ctx->pc == 0x39035Cu) {
        ctx->pc = 0x39035Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390358u;
        // 0x39035c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390360u;
        goto label_390360;
    }
    ctx->pc = 0x390358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x390360u);
        ctx->pc = 0x39035Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390358u;
        // 0x39035c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x390358u, 0x390360u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x390360u;
label_390360:
    // 0x390360: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x390360u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_390364:
    // 0x390364: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x390364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_390368:
    // 0x390368: 0x3e00008  jr          $ra
label_39036c:
    if (ctx->pc == 0x39036Cu) {
        ctx->pc = 0x39036Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390368u;
        // 0x39036c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390370u;
        goto label_fallthrough_0x390368;
    }
    ctx->pc = 0x390368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39036Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390368u;
        // 0x39036c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x390368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x390368:
    ctx->pc = 0x390370u;
}
