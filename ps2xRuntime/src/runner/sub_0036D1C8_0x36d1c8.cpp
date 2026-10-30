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

// Function: sub_0036D1C8
// Address: 0x36d1c8 - 0x36d258
void sub_0036D1C8_0x36d1c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036D1C8_0x36d1c8");
#endif

    switch (ctx->pc) {
        case 0x36d1f0u: goto label_36d1f0;
        case 0x36d1f8u: goto label_36d1f8;
        case 0x36d20cu: goto label_36d20c;
        case 0x36d214u: goto label_36d214;
        case 0x36d228u: goto label_36d228;
        case 0x36d238u: goto label_36d238;
        default: break;
    }

    ctx->pc = 0x36d1c8u;

    // 0x36d1c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x36d1c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x36d1cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36d1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36d1d0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x36d1d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x36d1d4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x36d1d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x36d1d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36d1d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d1dc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x36d1dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d1e0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x36d1e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x36d1e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36d1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36d1e8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36D1E8u;
    SET_GPR_U32(ctx, 31, 0x36D1F0u);
    ctx->pc = 0x36D1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D1E8u;
    // 0x36d1ec: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36D1E8u, 0x36D1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D1F0u;
label_36d1f0:
    // 0x36d1f0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36D1F0u;
    SET_GPR_U32(ctx, 31, 0x36D1F8u);
    ctx->pc = 0x36D1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D1F0u;
    // 0x36d1f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36D1F0u, 0x36D1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D1F8u;
label_36d1f8:
    // 0x36d1f8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36d1f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d1fc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x36d1fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d200: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36d200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36d204: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36D204u;
    SET_GPR_U32(ctx, 31, 0x36D20Cu);
    ctx->pc = 0x36D208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D204u;
    // 0x36d208: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36D204u, 0x36D20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D20Cu;
label_36d20c:
    // 0x36d20c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x36D20Cu;
    SET_GPR_U32(ctx, 31, 0x36D214u);
    ctx->pc = 0x36D210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D20Cu;
    // 0x36d210: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x36D20Cu, 0x36D214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D214u;
label_36d214:
    // 0x36d214: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x36d214u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d218: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36d218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d21c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x36d21cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36d220: 0xc102488  jal         func_409220
    ctx->pc = 0x36D220u;
    SET_GPR_U32(ctx, 31, 0x36D228u);
    ctx->pc = 0x36D224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D220u;
    // 0x36d224: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x36D220u, 0x36D228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D228u;
label_36d228:
    // 0x36d228: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x36d228u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d22c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36d22cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d230: 0xc0e18a6  jal         func_386298
    ctx->pc = 0x36D230u;
    SET_GPR_U32(ctx, 31, 0x36D238u);
    ctx->pc = 0x36D234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D230u;
    // 0x36d234: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x386298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x386298u, 0x36D230u, 0x36D238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D238u;
label_36d238:
    // 0x36d238: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x36d238u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36d23c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36d23cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d240: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x36d240u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36d244: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x36d244u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36d248: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36d248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36d24c: 0x3e00008  jr          $ra
    ctx->pc = 0x36D24Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36D250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D24Cu;
        // 0x36d250: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36D24Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36D254u;
    // 0x36d254: 0x0  nop
    ctx->pc = 0x36d254u;
    // NOP
    ctx->pc = 0x36d258u;
}
