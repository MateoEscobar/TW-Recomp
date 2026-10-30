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

// Function: sub_004AE450
// Address: 0x4ae450 - 0x4ae480
void sub_004AE450_0x4ae450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AE450_0x4ae450");
#endif

    switch (ctx->pc) {
        case 0x4ae450u: goto label_4ae450;
        case 0x4ae454u: goto label_4ae454;
        case 0x4ae458u: goto label_4ae458;
        case 0x4ae45cu: goto label_4ae45c;
        case 0x4ae460u: goto label_4ae460;
        case 0x4ae464u: goto label_4ae464;
        case 0x4ae468u: goto label_4ae468;
        case 0x4ae46cu: goto label_4ae46c;
        case 0x4ae470u: goto label_4ae470;
        case 0x4ae474u: goto label_4ae474;
        case 0x4ae478u: goto label_4ae478;
        case 0x4ae47cu: goto label_4ae47c;
        default: break;
    }

    ctx->pc = 0x4ae450u;

label_4ae450:
    // 0x4ae450: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4ae450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4ae454:
    // 0x4ae454: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ae454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4ae458:
    // 0x4ae458: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4ae458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4ae45c:
    // 0x4ae45c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ae45cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ae460:
    // 0x4ae460: 0xa0f809  jalr        $a1
label_4ae464:
    if (ctx->pc == 0x4AE464u) {
        ctx->pc = 0x4AE464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE460u;
        // 0x4ae464: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AE468u;
        goto label_4ae468;
    }
    ctx->pc = 0x4AE460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x4AE468u);
        ctx->pc = 0x4AE464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE460u;
        // 0x4ae464: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AE460u, 0x4AE468u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4AE468u;
label_4ae468:
    // 0x4ae468: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4ae468u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ae46c:
    // 0x4ae46c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4ae46cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4ae470:
    // 0x4ae470: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ae470u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4ae474:
    // 0x4ae474: 0x3e00008  jr          $ra
label_4ae478:
    if (ctx->pc == 0x4AE478u) {
        ctx->pc = 0x4AE478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE474u;
        // 0x4ae478: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AE47Cu;
        goto label_4ae47c;
    }
    ctx->pc = 0x4AE474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AE478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE474u;
        // 0x4ae478: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AE474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AE47Cu;
label_4ae47c:
    // 0x4ae47c: 0x0  nop
    ctx->pc = 0x4ae47cu;
    // NOP
    ctx->pc = 0x4ae480u;
}
