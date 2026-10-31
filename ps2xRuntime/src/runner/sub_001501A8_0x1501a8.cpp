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

// Function: sub_001501A8
// Address: 0x1501a8 - 0x150218
void sub_001501A8_0x1501a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001501A8_0x1501a8");
#endif

    switch (ctx->pc) {
        case 0x1501ccu: goto label_1501cc;
        case 0x1501d4u: goto label_1501d4;
        case 0x1501dcu: goto label_1501dc;
        case 0x1501e4u: goto label_1501e4;
        case 0x1501ecu: goto label_1501ec;
        case 0x1501f4u: goto label_1501f4;
        case 0x1501fcu: goto label_1501fc;
        default: break;
    }

    ctx->pc = 0x1501a8u;

    // 0x1501a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1501a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1501ac: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1501acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1501b0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1501b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1501b4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1501b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1501b8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1501b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1501bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1501bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1501c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1501c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1501c4: 0xc0546f0  jal         func_151BC0
    ctx->pc = 0x1501C4u;
    SET_GPR_U32(ctx, 31, 0x1501CCu);
    ctx->pc = 0x1501C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1501C4u;
    // 0x1501c8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151BC0u, 0x1501C4u, 0x1501CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1501CCu;
label_1501cc:
    // 0x1501cc: 0xc05368e  jal         func_14DA38
    ctx->pc = 0x1501CCu;
    SET_GPR_U32(ctx, 31, 0x1501D4u);
    ctx->pc = 0x1501D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1501CCu;
    // 0x1501d0: 0x24040029  addiu       $a0, $zero, 0x29 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DA38u, 0x1501CCu, 0x1501D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1501D4u;
label_1501d4:
    // 0x1501d4: 0xc05373e  jal         func_14DCF8
    ctx->pc = 0x1501D4u;
    SET_GPR_U32(ctx, 31, 0x1501DCu);
    ctx->pc = 0x1501D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1501D4u;
    // 0x1501d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DCF8u, 0x1501D4u, 0x1501DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1501DCu;
label_1501dc:
    // 0x1501dc: 0xc05373e  jal         func_14DCF8
    ctx->pc = 0x1501DCu;
    SET_GPR_U32(ctx, 31, 0x1501E4u);
    ctx->pc = 0x1501E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1501DCu;
    // 0x1501e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DCF8u, 0x1501DCu, 0x1501E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1501E4u;
label_1501e4:
    // 0x1501e4: 0xc05373e  jal         func_14DCF8
    ctx->pc = 0x1501E4u;
    SET_GPR_U32(ctx, 31, 0x1501ECu);
    ctx->pc = 0x1501E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1501E4u;
    // 0x1501e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DCF8u, 0x1501E4u, 0x1501ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1501ECu;
label_1501ec:
    // 0x1501ec: 0xc0536aa  jal         func_14DAA8
    ctx->pc = 0x1501ECu;
    SET_GPR_U32(ctx, 31, 0x1501F4u);
    ctx->pc = 0x14DAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DAA8u, 0x1501ECu, 0x1501F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1501F4u;
label_1501f4:
    // 0x1501f4: 0xc05471c  jal         func_151C70
    ctx->pc = 0x1501F4u;
    SET_GPR_U32(ctx, 31, 0x1501FCu);
    ctx->pc = 0x151C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151C70u, 0x1501F4u, 0x1501FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1501FCu;
label_1501fc:
    // 0x1501fc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1501fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x150200: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x150200u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x150204: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x150204u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x150208: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x150208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15020c: 0x3e00008  jr          $ra
    ctx->pc = 0x15020Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15020Cu;
        // 0x150210: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15020Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150214u;
    // 0x150214: 0x0  nop
    ctx->pc = 0x150214u;
    // NOP
    ctx->pc = 0x150218u;
}
