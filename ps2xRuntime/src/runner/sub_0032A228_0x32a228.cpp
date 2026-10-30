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

// Function: sub_0032A228
// Address: 0x32a228 - 0x32a280
void sub_0032A228_0x32a228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032A228_0x32a228");
#endif

    switch (ctx->pc) {
        case 0x32a25cu: goto label_32a25c;
        case 0x32a26cu: goto label_32a26c;
        default: break;
    }

    ctx->pc = 0x32a228u;

    // 0x32a228: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x32a228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x32a22c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x32a22cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a230: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x32a230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x32a234: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x32a234u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a238: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x32a238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x32a23c: 0x45282a  slt         $a1, $v0, $a1
    ctx->pc = 0x32a23cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x32a240: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x32A240u;
    {
        const bool branch_taken_0x32a240 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A240u;
        // 0x32a244: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a240) {
            ctx->pc = 0x32A26Cu;
            goto label_32a26c;
        }
    }
    ctx->pc = 0x32A248u;
    // 0x32a248: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x32a248u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x32a24c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x32a24cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a250: 0x24a55410  addiu       $a1, $a1, 0x5410
    ctx->pc = 0x32a250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21520));
    // 0x32a254: 0xc10ca28  jal         func_4328A0
    ctx->pc = 0x32A254u;
    SET_GPR_U32(ctx, 31, 0x32A25Cu);
    ctx->pc = 0x32A258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A254u;
    // 0x32a258: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x32A254u, 0x32A25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A25Cu;
label_32a25c:
    // 0x32a25c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32a25cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a260: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x32a260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a264: 0xc0ca8bc  jal         func_32A2F0
    ctx->pc = 0x32A264u;
    SET_GPR_U32(ctx, 31, 0x32A26Cu);
    ctx->pc = 0x32A268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A264u;
    // 0x32a268: 0x8c860008  lw          $a2, 0x8($a0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A2F0u, 0x32A264u, 0x32A26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A26Cu;
label_32a26c:
    // 0x32a26c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x32a26cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x32a270: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x32a270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x32a274: 0x3e00008  jr          $ra
    ctx->pc = 0x32A274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32A278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A274u;
        // 0x32a278: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32A27Cu;
    // 0x32a27c: 0x0  nop
    ctx->pc = 0x32a27cu;
    // NOP
    ctx->pc = 0x32a280u;
}
