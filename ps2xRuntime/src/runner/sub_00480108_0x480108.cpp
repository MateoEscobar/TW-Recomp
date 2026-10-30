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

// Function: sub_00480108
// Address: 0x480108 - 0x480148
void sub_00480108_0x480108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00480108_0x480108");
#endif

    switch (ctx->pc) {
        case 0x480108u: goto label_480108;
        case 0x48010cu: goto label_48010c;
        case 0x480110u: goto label_480110;
        case 0x480114u: goto label_480114;
        case 0x480118u: goto label_480118;
        case 0x48011cu: goto label_48011c;
        case 0x480120u: goto label_480120;
        case 0x480124u: goto label_480124;
        case 0x480128u: goto label_480128;
        case 0x48012cu: goto label_48012c;
        case 0x480130u: goto label_480130;
        case 0x480134u: goto label_480134;
        case 0x480138u: goto label_480138;
        case 0x48013cu: goto label_48013c;
        case 0x480140u: goto label_480140;
        case 0x480144u: goto label_480144;
        default: break;
    }

    ctx->pc = 0x480108u;

label_480108:
    // 0x480108: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x480108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_48010c:
    // 0x48010c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x48010cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_480110:
    // 0x480110: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x480110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_480114:
    // 0x480114: 0x8f838950  lw          $v1, -0x76B0($gp)
    ctx->pc = 0x480114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936912)));
label_480118:
    // 0x480118: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x480118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_48011c:
    // 0x48011c: 0x2442ad18  addiu       $v0, $v0, -0x52E8
    ctx->pc = 0x48011cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
label_480120:
    // 0x480120: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x480120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_480124:
    // 0x480124: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x480124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_480128:
    // 0x480128: 0x40f809  jalr        $v0
label_48012c:
    if (ctx->pc == 0x48012Cu) {
        ctx->pc = 0x48012Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480128u;
        // 0x48012c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x480130u;
        goto label_480130;
    }
    ctx->pc = 0x480128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x480130u);
        ctx->pc = 0x48012Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480128u;
        // 0x48012c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x480128u, 0x480130u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x480130u;
label_480130:
    // 0x480130: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x480130u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_480134:
    // 0x480134: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x480134u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_480138:
    // 0x480138: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x480138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_48013c:
    // 0x48013c: 0x3e00008  jr          $ra
label_480140:
    if (ctx->pc == 0x480140u) {
        ctx->pc = 0x480140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48013Cu;
        // 0x480140: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x480144u;
        goto label_480144;
    }
    ctx->pc = 0x48013Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x480140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48013Cu;
        // 0x480140: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48013Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x480144u;
label_480144:
    // 0x480144: 0x0  nop
    ctx->pc = 0x480144u;
    // NOP
    ctx->pc = 0x480148u;
}
