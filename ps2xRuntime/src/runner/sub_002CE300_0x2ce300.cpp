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

// Function: sub_002CE300
// Address: 0x2ce300 - 0x2ce350
void sub_002CE300_0x2ce300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CE300_0x2ce300");
#endif

    switch (ctx->pc) {
        case 0x2ce300u: goto label_2ce300;
        case 0x2ce304u: goto label_2ce304;
        case 0x2ce308u: goto label_2ce308;
        case 0x2ce30cu: goto label_2ce30c;
        case 0x2ce310u: goto label_2ce310;
        case 0x2ce314u: goto label_2ce314;
        case 0x2ce318u: goto label_2ce318;
        case 0x2ce31cu: goto label_2ce31c;
        case 0x2ce320u: goto label_2ce320;
        case 0x2ce324u: goto label_2ce324;
        case 0x2ce328u: goto label_2ce328;
        case 0x2ce32cu: goto label_2ce32c;
        case 0x2ce330u: goto label_2ce330;
        case 0x2ce334u: goto label_2ce334;
        case 0x2ce338u: goto label_2ce338;
        case 0x2ce33cu: goto label_2ce33c;
        case 0x2ce340u: goto label_2ce340;
        case 0x2ce344u: goto label_2ce344;
        case 0x2ce348u: goto label_2ce348;
        case 0x2ce34cu: goto label_2ce34c;
        default: break;
    }

    ctx->pc = 0x2ce300u;

label_2ce300:
    // 0x2ce300: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ce300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2ce304:
    // 0x2ce304: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ce304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2ce308:
    // 0x2ce308: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ce308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2ce30c:
    // 0x2ce30c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ce30cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ce310:
    // 0x2ce310: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2ce310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2ce314:
    // 0x2ce314: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x2ce314u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_2ce318:
    // 0x2ce318: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x2ce318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2ce31c:
    // 0x2ce31c: 0x60f809  jalr        $v1
label_2ce320:
    if (ctx->pc == 0x2CE320u) {
        ctx->pc = 0x2CE320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE31Cu;
        // 0x2ce320: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE324u;
        goto label_2ce324;
    }
    ctx->pc = 0x2CE31Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2CE324u);
        ctx->pc = 0x2CE320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE31Cu;
        // 0x2ce320: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CE31Cu, 0x2CE324u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CE324u;
label_2ce324:
    // 0x2ce324: 0xc0e4060  jal         func_390180
label_2ce328:
    if (ctx->pc == 0x2CE328u) {
        ctx->pc = 0x2CE328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE324u;
        // 0x2ce328: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE32Cu;
        goto label_2ce32c;
    }
    ctx->pc = 0x2CE324u;
    SET_GPR_U32(ctx, 31, 0x2CE32Cu);
    ctx->pc = 0x2CE328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE324u;
    // 0x2ce328: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2CE324u, 0x2CE32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE32Cu;
label_2ce32c:
    // 0x2ce32c: 0xc0e57ce  jal         func_395F38
label_2ce330:
    if (ctx->pc == 0x2CE330u) {
        ctx->pc = 0x2CE330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE32Cu;
        // 0x2ce330: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE334u;
        goto label_2ce334;
    }
    ctx->pc = 0x2CE32Cu;
    SET_GPR_U32(ctx, 31, 0x2CE334u);
    ctx->pc = 0x2CE330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE32Cu;
    // 0x2ce330: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x2CE32Cu, 0x2CE334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE334u;
label_2ce334:
    // 0x2ce334: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_2ce338:
    if (ctx->pc == 0x2CE338u) {
        ctx->pc = 0x2CE338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE334u;
        // 0x2ce338: 0xac4000ec  sw          $zero, 0xEC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 236), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE33Cu;
        goto label_2ce33c;
    }
    ctx->pc = 0x2CE334u;
    {
        const bool branch_taken_0x2ce334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ce334) {
            ctx->pc = 0x2CE338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE334u;
            // 0x2ce338: 0xac4000ec  sw          $zero, 0xEC($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 236), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CE33Cu;
            goto label_2ce33c;
        }
    }
    ctx->pc = 0x2CE33Cu;
label_2ce33c:
    // 0x2ce33c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ce33cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ce340:
    // 0x2ce340: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ce340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ce344:
    // 0x2ce344: 0x3e00008  jr          $ra
label_2ce348:
    if (ctx->pc == 0x2CE348u) {
        ctx->pc = 0x2CE348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE344u;
        // 0x2ce348: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE34Cu;
        goto label_2ce34c;
    }
    ctx->pc = 0x2CE344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE344u;
        // 0x2ce348: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CE344u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CE34Cu;
label_2ce34c:
    // 0x2ce34c: 0x0  nop
    ctx->pc = 0x2ce34cu;
    // NOP
    ctx->pc = 0x2ce350u;
}
