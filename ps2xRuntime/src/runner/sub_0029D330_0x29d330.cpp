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

// Function: sub_0029D330
// Address: 0x29d330 - 0x29d378
void sub_0029D330_0x29d330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029D330_0x29d330");
#endif

    switch (ctx->pc) {
        case 0x29d330u: goto label_29d330;
        case 0x29d334u: goto label_29d334;
        case 0x29d338u: goto label_29d338;
        case 0x29d33cu: goto label_29d33c;
        case 0x29d340u: goto label_29d340;
        case 0x29d344u: goto label_29d344;
        case 0x29d348u: goto label_29d348;
        case 0x29d34cu: goto label_29d34c;
        case 0x29d350u: goto label_29d350;
        case 0x29d354u: goto label_29d354;
        case 0x29d358u: goto label_29d358;
        case 0x29d35cu: goto label_29d35c;
        case 0x29d360u: goto label_29d360;
        case 0x29d364u: goto label_29d364;
        case 0x29d368u: goto label_29d368;
        case 0x29d36cu: goto label_29d36c;
        case 0x29d370u: goto label_29d370;
        case 0x29d374u: goto label_29d374;
        default: break;
    }

    ctx->pc = 0x29d330u;

label_29d330:
    // 0x29d330: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29d330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_29d334:
    // 0x29d334: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x29d334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_29d338:
    // 0x29d338: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x29d338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_29d33c:
    // 0x29d33c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29d33cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_29d340:
    // 0x29d340: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29d340u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29d344:
    // 0x29d344: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x29d344u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_29d348:
    // 0x29d348: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x29d348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_29d34c:
    // 0x29d34c: 0x40f809  jalr        $v0
label_29d350:
    if (ctx->pc == 0x29D350u) {
        ctx->pc = 0x29D350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D34Cu;
        // 0x29d350: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D354u;
        goto label_29d354;
    }
    ctx->pc = 0x29D34Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29D354u);
        ctx->pc = 0x29D350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D34Cu;
        // 0x29d350: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D34Cu, 0x29D354u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29D354u;
label_29d354:
    // 0x29d354: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x29d354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_29d358:
    // 0x29d358: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x29d358u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29d35c:
    // 0x29d35c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x29d35cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_29d360:
    // 0x29d360: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29d360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29d364:
    // 0x29d364: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x29d364u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_29d368:
    // 0x29d368: 0x3e00008  jr          $ra
label_29d36c:
    if (ctx->pc == 0x29D36Cu) {
        ctx->pc = 0x29D36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D368u;
        // 0x29d36c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D370u;
        goto label_29d370;
    }
    ctx->pc = 0x29D368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29D36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D368u;
        // 0x29d36c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29D370u;
label_29d370:
    // 0x29d370: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x29d370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_29d374:
    // 0x29d374: 0x0  nop
    ctx->pc = 0x29d374u;
    // NOP
    ctx->pc = 0x29d378u;
}
