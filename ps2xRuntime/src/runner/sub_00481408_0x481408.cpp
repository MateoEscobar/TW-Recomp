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

// Function: sub_00481408
// Address: 0x481408 - 0x481488
void sub_00481408_0x481408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00481408_0x481408");
#endif

    switch (ctx->pc) {
        case 0x481424u: goto label_481424;
        case 0x481430u: goto label_481430;
        case 0x481448u: goto label_481448;
        default: break;
    }

    ctx->pc = 0x481408u;

    // 0x481408: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x481408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x48140c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x48140cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x481410: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x481410u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x481414: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x481414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x481418: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x481418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48141c: 0xc12a66a  jal         func_4A99A8
    ctx->pc = 0x48141Cu;
    SET_GPR_U32(ctx, 31, 0x481424u);
    ctx->pc = 0x481420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48141Cu;
    // 0x481420: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A99A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A99A8u, 0x48141Cu, 0x481424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x481424u;
label_481424:
    // 0x481424: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x481424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x481428: 0xc12a66a  jal         func_4A99A8
    ctx->pc = 0x481428u;
    SET_GPR_U32(ctx, 31, 0x481430u);
    ctx->pc = 0x48142Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x481428u;
    // 0x48142c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A99A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A99A8u, 0x481428u, 0x481430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x481430u;
label_481430:
    // 0x481430: 0x26310028  addiu       $s1, $s1, 0x28
    ctx->pc = 0x481430u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
    // 0x481434: 0x3c040053  lui         $a0, 0x53
    ctx->pc = 0x481434u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
    // 0x481438: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x481438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48143c: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x48143cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x481440: 0xc11fe2c  jal         func_47F8B0
    ctx->pc = 0x481440u;
    SET_GPR_U32(ctx, 31, 0x481448u);
    ctx->pc = 0x481444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x481440u;
    // 0x481444: 0x2484ec08  addiu       $a0, $a0, -0x13F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47F8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47F8B0u, 0x481440u, 0x481448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x481448u;
label_481448:
    // 0x481448: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x481448u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x48144c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x48144cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x481450: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x481450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x481454: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x481454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x481458: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x481458u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48145c: 0x3e00008  jr          $ra
    ctx->pc = 0x48145Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x481460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48145Cu;
        // 0x481460: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48145Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x481464u;
    // 0x481464: 0x0  nop
    ctx->pc = 0x481464u;
    // NOP
    // 0x481468: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x481468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x48146c: 0x0  nop
    ctx->pc = 0x48146cu;
    // NOP
    // 0x481470: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x481470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x481474: 0x0  nop
    ctx->pc = 0x481474u;
    // NOP
    // 0x481478: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x481478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x48147c: 0x0  nop
    ctx->pc = 0x48147cu;
    // NOP
    // 0x481480: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x481480u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x481484: 0x0  nop
    ctx->pc = 0x481484u;
    // NOP
    ctx->pc = 0x481488u;
}
