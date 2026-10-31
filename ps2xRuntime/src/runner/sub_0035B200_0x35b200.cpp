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

// Function: sub_0035B200
// Address: 0x35b200 - 0x35b260
void sub_0035B200_0x35b200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035B200_0x35b200");
#endif

    switch (ctx->pc) {
        case 0x35b220u: goto label_35b220;
        case 0x35b228u: goto label_35b228;
        case 0x35b23cu: goto label_35b23c;
        case 0x35b248u: goto label_35b248;
        default: break;
    }

    ctx->pc = 0x35b200u;

    // 0x35b200: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35b200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35b204: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35b204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35b208: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x35b208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x35b20c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35b20cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b210: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35b210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35b214: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35b214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35b218: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35B218u;
    SET_GPR_U32(ctx, 31, 0x35B220u);
    ctx->pc = 0x35B21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B218u;
    // 0x35b21c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35B218u, 0x35B220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B220u;
label_35b220:
    // 0x35b220: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35B220u;
    SET_GPR_U32(ctx, 31, 0x35B228u);
    ctx->pc = 0x35B224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B220u;
    // 0x35b224: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35B220u, 0x35B228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B228u;
label_35b228:
    // 0x35b228: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x35b228u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b22c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35b22cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b230: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35b230u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b234: 0xc1024c6  jal         func_409318
    ctx->pc = 0x35B234u;
    SET_GPR_U32(ctx, 31, 0x35B23Cu);
    ctx->pc = 0x35B238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B234u;
    // 0x35b238: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x35B234u, 0x35B23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B23Cu;
label_35b23c:
    // 0x35b23c: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x35b23cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x35b240: 0xc08d49a  jal         func_235268
    ctx->pc = 0x35B240u;
    SET_GPR_U32(ctx, 31, 0x35B248u);
    ctx->pc = 0x35B244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B240u;
    // 0x35b244: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235268u, 0x35B240u, 0x35B248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B248u;
label_35b248:
    // 0x35b248: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x35b248u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35b24c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35b24cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b250: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35b250u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35b254: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35b254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35b258: 0x3e00008  jr          $ra
    ctx->pc = 0x35B258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35B25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B258u;
        // 0x35b25c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B260u;
}
