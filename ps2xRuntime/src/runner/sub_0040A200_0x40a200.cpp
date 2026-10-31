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

// Function: sub_0040A200
// Address: 0x40a200 - 0x40a270
void sub_0040A200_0x40a200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040A200_0x40a200");
#endif

    switch (ctx->pc) {
        case 0x40a220u: goto label_40a220;
        case 0x40a22cu: goto label_40a22c;
        case 0x40a238u: goto label_40a238;
        case 0x40a240u: goto label_40a240;
        case 0x40a24cu: goto label_40a24c;
        case 0x40a258u: goto label_40a258;
        default: break;
    }

    ctx->pc = 0x40a200u;

    // 0x40a200: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x40a200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x40a204: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x40a204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x40a208: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x40a208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x40a20c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x40a20cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a210: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x40a210u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a214: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x40a214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x40a218: 0xc102866  jal         func_40A198
    ctx->pc = 0x40A218u;
    SET_GPR_U32(ctx, 31, 0x40A220u);
    ctx->pc = 0x40A21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A218u;
    // 0x40a21c: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A198u, 0x40A218u, 0x40A220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A220u;
label_40a220:
    // 0x40a220: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x40a220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a224: 0xc0c8d16  jal         func_323458
    ctx->pc = 0x40A224u;
    SET_GPR_U32(ctx, 31, 0x40A22Cu);
    ctx->pc = 0x40A228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A224u;
    // 0x40a228: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323458u, 0x40A224u, 0x40A22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A22Cu;
label_40a22c:
    // 0x40a22c: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x40a22cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x40a230: 0xc0c8da2  jal         func_323688
    ctx->pc = 0x40A230u;
    SET_GPR_U32(ctx, 31, 0x40A238u);
    ctx->pc = 0x40A234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A230u;
    // 0x40a234: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323688u, 0x40A230u, 0x40A238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A238u;
label_40a238:
    // 0x40a238: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x40A238u;
    SET_GPR_U32(ctx, 31, 0x40A240u);
    ctx->pc = 0x40A23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A238u;
    // 0x40a23c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x40A238u, 0x40A240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A240u;
label_40a240:
    // 0x40a240: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x40a240u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a244: 0xc0c9064  jal         func_324190
    ctx->pc = 0x40A244u;
    SET_GPR_U32(ctx, 31, 0x40A24Cu);
    ctx->pc = 0x40A248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A244u;
    // 0x40a248: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324190u, 0x40A244u, 0x40A24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A24Cu;
label_40a24c:
    // 0x40a24c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40a24cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a250: 0xc0c8ccc  jal         func_323330
    ctx->pc = 0x40A250u;
    SET_GPR_U32(ctx, 31, 0x40A258u);
    ctx->pc = 0x40A254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A250u;
    // 0x40a254: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323330u, 0x40A250u, 0x40A258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A258u;
label_40a258:
    // 0x40a258: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x40a258u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x40a25c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x40a25cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40a260: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40a260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40a264: 0x3e00008  jr          $ra
    ctx->pc = 0x40A264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40A268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A264u;
        // 0x40a268: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40A264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40A26Cu;
    // 0x40a26c: 0x0  nop
    ctx->pc = 0x40a26cu;
    // NOP
    ctx->pc = 0x40a270u;
}
