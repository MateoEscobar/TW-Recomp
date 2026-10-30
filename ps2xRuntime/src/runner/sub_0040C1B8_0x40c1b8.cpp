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

// Function: sub_0040C1B8
// Address: 0x40c1b8 - 0x40c240
void sub_0040C1B8_0x40c1b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040C1B8_0x40c1b8");
#endif

    switch (ctx->pc) {
        case 0x40c1e4u: goto label_40c1e4;
        case 0x40c1ecu: goto label_40c1ec;
        case 0x40c1f8u: goto label_40c1f8;
        case 0x40c200u: goto label_40c200;
        case 0x40c20cu: goto label_40c20c;
        case 0x40c218u: goto label_40c218;
        case 0x40c224u: goto label_40c224;
        default: break;
    }

    ctx->pc = 0x40c1b8u;

    // 0x40c1b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x40c1b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x40c1bc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x40c1bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x40c1c0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x40c1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x40c1c4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x40c1c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c1c8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x40c1c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x40c1cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x40c1ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c1d0: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x40c1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x40c1d4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x40c1d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c1d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x40c1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x40c1dc: 0xc102866  jal         func_40A198
    ctx->pc = 0x40C1DCu;
    SET_GPR_U32(ctx, 31, 0x40C1E4u);
    ctx->pc = 0x40C1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C1DCu;
    // 0x40c1e0: 0x24a58438  addiu       $a1, $a1, -0x7BC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A198u, 0x40C1DCu, 0x40C1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C1E4u;
label_40c1e4:
    // 0x40c1e4: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x40C1E4u;
    SET_GPR_U32(ctx, 31, 0x40C1ECu);
    ctx->pc = 0x40C1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C1E4u;
    // 0x40c1e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x40C1E4u, 0x40C1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C1ECu;
label_40c1ec:
    // 0x40c1ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x40c1ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c1f0: 0xc0c8e38  jal         func_3238E0
    ctx->pc = 0x40C1F0u;
    SET_GPR_U32(ctx, 31, 0x40C1F8u);
    ctx->pc = 0x40C1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C1F0u;
    // 0x40c1f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3238E0u, 0x40C1F0u, 0x40C1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C1F8u;
label_40c1f8:
    // 0x40c1f8: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x40C1F8u;
    SET_GPR_U32(ctx, 31, 0x40C200u);
    ctx->pc = 0x40C1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C1F8u;
    // 0x40c1fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x40C1F8u, 0x40C200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C200u;
label_40c200:
    // 0x40c200: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x40c200u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c204: 0xc0c8e38  jal         func_3238E0
    ctx->pc = 0x40C204u;
    SET_GPR_U32(ctx, 31, 0x40C20Cu);
    ctx->pc = 0x40C208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C204u;
    // 0x40c208: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3238E0u, 0x40C204u, 0x40C20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C20Cu;
label_40c20c:
    // 0x40c20c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40c20cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c210: 0xc0c8faa  jal         func_323EA8
    ctx->pc = 0x40C210u;
    SET_GPR_U32(ctx, 31, 0x40C218u);
    ctx->pc = 0x40C214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C210u;
    // 0x40c214: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323EA8u, 0x40C210u, 0x40C218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C218u;
label_40c218:
    // 0x40c218: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40c218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c21c: 0xc0c8ccc  jal         func_323330
    ctx->pc = 0x40C21Cu;
    SET_GPR_U32(ctx, 31, 0x40C224u);
    ctx->pc = 0x40C220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C21Cu;
    // 0x40c220: 0x2405fffe  addiu       $a1, $zero, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323330u, 0x40C21Cu, 0x40C224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C224u;
label_40c224:
    // 0x40c224: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x40c224u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x40c228: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x40c228u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x40c22c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x40c22cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40c230: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40c230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40c234: 0x3e00008  jr          $ra
    ctx->pc = 0x40C234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40C238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C234u;
        // 0x40c238: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40C234u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40C23Cu;
    // 0x40c23c: 0x0  nop
    ctx->pc = 0x40c23cu;
    // NOP
    ctx->pc = 0x40c240u;
}
